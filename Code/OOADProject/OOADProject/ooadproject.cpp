#include "ooadproject.h"
#include<string.h>
#include <string>
using namespace std; 
OOADProject::OOADProject(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);


	 mydb = QSqlDatabase::addDatabase("QSQLITE");

	mydb.setDatabaseName("database.db");
	mydb.open();

	QSqlQuery query;



	if (query.exec("select * from Admin"))
	{
		int count = 0;
		while (query.next())
		{
			count++;
		}

		if (count == 1)
		{

			query.previous();
			admin = new Admin(query.value("Username").toString().toUtf8().constData(), query.value("Password").toString().toUtf8().constData());
		}

	}



	string* itemCategories = new string[1000];
	int c = 0;

	if (query.exec("select * from Item"))
	{
		

		while (query.next())
		{
		
			items.push_back(new Item(query.value("Name").toString().toUtf8().constData(), query.value("Id").toString().toUtf8().constData(), query.value("Quantity").toInt(), query.value("SalePrice").toDouble(), query.value("CostPrice").toDouble(), query.value("PackageQuantity").toString().toUtf8().constData()));
		
			items.at(c)->offerItemDiscount(query.value("Discount").toFloat());

			itemCategories[c++] = query.value("Category").toString().toUtf8().constData();

		}

		
	}


	if (query.exec("select * from Category"))
	{

		while (query.next())
		{

			categories.push_back(new Category(query.value("Name").toString().toUtf8().constData(), 50));

		}


	}


	if (query.exec("select * from StaffMember where Type = Cashier"))
	{

		while (query.next())
		{
				cashier = new Cashier(query.value("CNIC").toString().toUtf8().constData(), query.value("Name").toString().toUtf8().constData(), query.value("PhoneNumber").toString().toUtf8().constData(), query.value("Id").toString().toUtf8().constData());

		}


	}


	if (query.exec("select * from StaffMember"))
	{

		while (query.next())
		{
			staffmembers.push_back( new Staffmember(query.value("CNIC").toString().toUtf8().constData(), query.value("Name").toString().toUtf8().constData(), query.value("PhoneNumber").toString().toUtf8().constData(), query.value("Id").toString().toUtf8().constData()));

		}


	}





	for (int i = 0; i < items.size(); i++)
	{
		for (int j = 0; j < categories.size(); j++)
		{
			if (itemCategories[i] == categories[j]->getName())
			{
				items[i]->setCategory(categories[j]);
			
				break;
			}
		}
	}




	for (int i = 0; i < categories.size(); i++)
	{
		admin->addCategory(categories.at(i));
	}


	for (int i = 0; i < staffmembers.size(); i++)
	{
		admin->addMember(staffmembers.at(i));
	}



	int o = categories.at(0)->getItemCount();



	if (query.exec("select * from Customer"))
	{

		while (query.next())
		{
			bool flag = false;

			if (query.value("Member").toString().toUtf8().constData() == "true")
				flag = true;

			customers.push_back(new Customer(query.value("CNIC").toString().toUtf8().constData(), query.value("Name").toString().toUtf8().constData(), query.value("PhoneNumber").toString().toUtf8().constData(), flag, query.value("MembershipNumber").toInt(), categories));

		}


	}




}

OOADProject::~OOADProject()
{

}
bool OOADProject::checkCnic(string Cnic)
{
	string CNIC = Cnic;
	bool error = false;
	bool error1 = false;
	bool error2 = false;
	if (CNIC.length() != 15)
	{
		error2 = true;
	}
	if (error2 == false && CNIC[5] != '-' && CNIC[13] != '-')
	{
		error1 = true;
	}
	if (error2 == false && error1 == false)
	{
		for (int i = 0; i < CNIC.length(); i++)
		{
			if (CNIC[i] >= '0' && CNIC[i] <= '9' && (i != 5) && (i != 13))
				error = false;
			else if ((i != 5) && (i != 13))
			{
				error = true;
				break;
			}

		}
	}

	if ((error1 == true) || (error == true) || (error2 == true))
	{
		return false;
	}
	else
		return true; 


}

void OOADProject::AdminlogIn()
{
	Dialoguebox = new DialogueBox();
	string AdminUserName = ui.AdminName->toPlainText().toUtf8().constData();
	string password = ui.AdminPassword->text().toUtf8().constData();
	if (AdminUserName.empty() || password.empty())
	{
		Dialoguebox->show();
		Dialoguebox->DisplayError("FILL THE FIELDS");
		return;
	}


	if (!mydb.isOpen())
	{
		Dialoguebox->show();
		Dialoguebox->DisplayError("DB not connected properly!");
		return;
	}

	QSqlQuery query;

	

	if (query.exec("select * from Admin where Username='" + ui.AdminName->toPlainText() + "' and Password='" + ui.AdminPassword->text() + "'"))
	{
		int count = 0;
		while (query.next())
		{
			count++;
		}
		if (count == 1)
		{

			this->close();
			Adminp = new AdminPortal();
			Adminp->setData(admin,customers);
			Adminp->show();
		}
		if (count == 0)
		{
			Dialoguebox->show();
			Dialoguebox->DisplayError("INCORRECT USERNAME OR PASSWORD!");
			return;
		}


	}

	else
	{
		Dialoguebox->show();
		Dialoguebox->DisplayError("DB not connected properly!");
		return;
	}



}



void OOADProject::CustomerLogIn()
{
	Dialoguebox = new DialogueBox();
	string CustomerName = ui.CustomerName->toPlainText().toUtf8().constData();
	string CNIC = ui.CustomerCnic->toPlainText().toUtf8().constData();
	if (CustomerName.empty() || CNIC.empty())
	{
		Dialoguebox->show();
		Dialoguebox->DisplayError("FILL THE FIELDS");
		return;
	}
	bool check = checkCnic(CNIC);

	if (check == false)
	{

		Dialoguebox->show();
		Dialoguebox->DisplayError("Invalid CNIC format");
	}
	else
	{

		if (!mydb.isOpen())
		{
			Dialoguebox->show();
			Dialoguebox->DisplayError("DB not connected properly!");
			return;
		}

		QSqlQuery query;



		if (query.exec("select * from Customer where Name='" + ui.CustomerName->toPlainText() + "' and CNIC='" + ui.CustomerCnic->toPlainText() + "'"))
		{
			int count = 0;
			while (query.next())
			{
				count++;
			}
			if (count == 1)
			{
				Customerwelcome = new CustomerWelcomePage();

				for (int i = 0; i < customers.size(); i++)
				{
					if (customers.at(i)->get_cnic() == CNIC)
					{
						Customerwelcome->setData(customers.at(i));
						break;
					}



				}


				this->close();

				Customerwelcome->show();
			}
			if (count == 0)
			{
				this->close();
				Customersignup = new CustomerSignUp();
				Customersignup->setData(CustomerName, CNIC, customers, categories);
				Customersignup->setParameters(ui.CustomerName->toPlainText(), ui.CustomerCnic->toPlainText());

				Customersignup->show();
			}


		}

		else
		{
			Dialoguebox->show();
			Dialoguebox->DisplayError("DB not connected properly!");
			return;
		}




	}

}