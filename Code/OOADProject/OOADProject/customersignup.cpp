#include "customersignup.h"

CustomerSignUp::CustomerSignUp(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	

}

void CustomerSignUp::setParameters(QString name,QString cnic)
{
	this->name = name;
	this->cnic = cnic;


}
void  CustomerSignUp::setData(string name, string cnic, vector<Customer*> customers, vector<Category*> categories)
{
	customername = name;
	customercnic = cnic;
	this->customers = customers;
	this->categories = categories;

}


CustomerSignUp::~CustomerSignUp()
{

}
bool  CustomerSignUp::is_valid(string email)
{
	if (email.find_first_of('@')>0 && email.find_first_of('@') == email.find_last_of('@') && email.find_first_of(".com")>1 && email.find_first_of(' ') == -1)
		return true;

	return false;
}
bool CustomerSignUp::checkint(string no)
{
	bool check = true;
	for (int i = 0; i < no.length(); i++)
	{
		if (no[i] <= '9'  && no[i] >= '0')
		{
			check = true;
		}
		else
		{
			check = false;
			break;
		}
	}
	if (check == false)
		return false;
	else
		return true;
}
void CustomerSignUp::CustomerwelcomePage()
{
	dialogueBox = new DialogueBox();
	string PhNo = ui.SubmitInfoPhoneNo->toPlainText().toUtf8().constData(); 
	
	if (PhNo.empty() )
	{
		dialogueBox->show();
		dialogueBox->DisplayError("FILL THE FIELDS");
		return;
	}
	if (checkint(PhNo) == false)
	{
		dialogueBox->show();
		dialogueBox->DisplayError("INCORRECT PHONE NO");
		return;
	}



	mydb = QSqlDatabase::addDatabase("QSQLITE");

	mydb.setDatabaseName("database.db");
	mydb.open();

	QSqlQuery query;


	if (query.exec("INSERT INTO Customer (Name, CNIC, PhoneNumber, Member) " "VALUES ('" + name + "','" + cnic + "','" + ui.SubmitInfoPhoneNo->toPlainText() + "','" + QString::number(0) + "')"))
	{


		Customerwelcome = new CustomerWelcomePage();

		for (int i = 0; i < customers.size(); i++)
		{
			if (customers.at(i)->get_cnic() == cnic.toUtf8().constData())
			{
				Customerwelcome->setData(customers.at(i));
				break;
			}



		}


		this->close();

		Customerwelcome->show();
	}

	else
	{
		dialogueBox->show();
		dialogueBox->DisplayError("DB not connected properly!");
		return;
	}


}
