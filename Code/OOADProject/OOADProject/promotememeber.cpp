#include "promotememeber.h"

PromoteMemeber::PromoteMemeber(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	mydb = QSqlDatabase::addDatabase("QSQLITE");

	mydb.setDatabaseName("database.db");
	mydb.open();

}

PromoteMemeber::~PromoteMemeber()
{

}

void PromoteMemeber::setData(Admin* admin,vector<Customer*> customer)
{


	this->admin = admin;
	this->customers = customer;


}

void PromoteMemeber::Backbutton()
{
	this->close();
	adminPortal = new AdminPortal();
	adminPortal->show();
}
bool PromoteMemeber::checkCnic(string Cnic)
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
void PromoteMemeber::promotemember()
{
	
	ui.StatusBar->setText("");
	dialogueBox = new DialogueBox();
	string MemberName = ui.PromoteMemberName->toPlainText().toUtf8().constData();
	string MemberCnic = ui.PromoteMemberCNIC->toPlainText().toUtf8().constData();
	if (MemberName.empty() || MemberCnic.empty())
	{
		dialogueBox->show();
		dialogueBox->DisplayError("FILL THE FIELDS");
		return;
	}
	
	if (checkCnic(MemberCnic) == false)
	{
		dialogueBox->show();
		dialogueBox->DisplayError("INVALID CNIC FORMAT");
		return;
	}
	

	QSqlQuery query;


	if (query.exec("select * from Customer where Name= '" + ui.PromoteMemberName->toPlainText() + "' and CNIC= '" + ui.PromoteMemberCNIC->toPlainText() + "'"))
	{
		int count = 0;

		while (query.next())
		{
			count++;
		}

		if (count == 1)
		{

			query.exec("update Customer  set Member= '" + QString::number(true) + "' where CNIC= '" + ui.PromoteMemberCNIC->toPlainText() + "'");

			for (int i = 0; i < customers.size(); i++)
			{
				if (customers.at(i)->get_cnic() == MemberCnic)
				{
					customers.at(i)->promoteMember();
					break;
				}
			}
			ui.StatusBar->setText("Member promoted successfully");
			ui.PromoteMemberName->clear();
			ui.PromoteMemberCNIC->clear();


		}
		if (count == 0)
		{
			dialogueBox->show();
			dialogueBox->DisplayError("Customer doesnot exist!");
			return;
		}


	}


	
}
