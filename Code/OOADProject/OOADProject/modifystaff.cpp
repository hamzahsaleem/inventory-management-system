#include "modifystaff.h"

ModifyStaff::ModifyStaff(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	mydb = QSqlDatabase::addDatabase("QSQLITE");

	mydb.setDatabaseName("database.db");
	mydb.open();

}

ModifyStaff::~ModifyStaff()
{

}
void ModifyStaff::setData(Admin* admin)
{


	this->admin = admin;



}


void ModifyStaff::Backbutton()
{
	this->close();
	adminPortal = new AdminPortal();
	adminPortal->show();
}
void ModifyStaff::DeleteMemeber()

{
	ui.StatusBar->setText("");
	dialogueBox = new DialogueBox();
	string MemberName = ui.DeleteMemberName->toPlainText().toUtf8().constData();
	string MemberCnic = ui.DeleteMemberCnic->toPlainText().toUtf8().constData();

	if (MemberName.empty() || MemberCnic.empty() )
	{
		dialogueBox->show();
		dialogueBox->DisplayError("FILL ALL THE FIELDS");
	}
	if (checkCnic(MemberCnic) == false)
	{

		dialogueBox->show();
		dialogueBox->DisplayError("Invalid CNIC format");
	}
	
	else
	{
		QSqlQuery query;


		if (query.exec("delete from StaffMember where Name= '" + ui.DeleteMemberName->toPlainText() + "' and CNIC= '" + ui.DeleteMemberCnic->toPlainText() + "'"))
		{

			
			admin->deleteMember(MemberCnic);
			ui.StatusBar->setText("Done!");
			ui.DeleteMemberName->clear();
			ui.DeleteMemberCnic->clear();



		}
		else
		{
			dialogueBox->show();
			dialogueBox->DisplayError("Item doesnot exist!");
			return;

		}


		

	}

}
bool ModifyStaff::checkCnic(string Cnic)
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
bool ModifyStaff::CheckNo(string No)
{
 bool 	check = true; 
	for (int i = 0; i < No.length(); i++)
	{
		if (No[i] >= '0'&& No[i] <= '9')
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
	{
		return false;
	}
	else
		return true; 
}

void ModifyStaff::AddMember()
{
	ui.StatusBar->setText("");
	dialogueBox = new DialogueBox();
	string MemberName = ui.AddMemberName->toPlainText().toUtf8().constData();
	string MemberCnic = ui.ddMemberCnic->toPlainText().toUtf8().constData();
	string MemeberPhno = ui.AddMemberPhone->toPlainText().toUtf8().constData();
	if (MemberName.empty() || MemberCnic.empty() || MemeberPhno.empty() )
	{
		dialogueBox->show();
		dialogueBox->DisplayError("FILL ALL THE FIELDS");
		return; 
	}
	if (checkCnic(MemberCnic) == false)
	{
		
		dialogueBox->show();
		dialogueBox->DisplayError("Invalid CNIC format");
		return; 
	}
	if (CheckNo(MemeberPhno) == false)
	{

		dialogueBox->show();
		dialogueBox->DisplayError("Incorrect phone number");
		return; 
	}
	
	else
	{

		QSqlQuery query1;



		if (query1.exec("select * from StaffMember where Name='" + ui.AddMemberName->toPlainText() + "' and CNIC='" + ui.ddMemberCnic->toPlainText() + "'"))
		{
			int count = 0;
			while (query1.next())
			{
				count++;
			}
			if (count == 1)
			{

				dialogueBox->show();
				dialogueBox->DisplayError("MEMEBER ALREADY EXISTS !");
				return;


			}

		}

		else
		{
			dialogueBox->show();
			dialogueBox->DisplayError("Error!");
			return;
		}




		//ADD StaffMember TO DB TABLE 

		QSqlQuery query;
		string type = "Default";

		if (query.exec("INSERT INTO StaffMember (CNIC, Name, PhoneNumber,Type) " "VALUES ('" + ui.ddMemberCnic->toPlainText() + "','" + ui.AddMemberName->toPlainText() + "','" + ui.AddMemberPhone->toPlainText() + "','" + QString::fromStdString(type) + "')"))
		{
			query.exec("select * from StaffMember where = '" + ui.ddMemberCnic->toPlainText() + "'");
			string MemberID=query.value("Id").toString().toUtf8().constData();
			admin->addMember(new Staffmember(MemberCnic, MemberName, MemeberPhno, MemberID));
			ui.StatusBar->setText("Member added successfully");
			ui.AddMemberName->clear();
			ui.ddMemberCnic->clear();
			ui.AddMemberPhone->clear();
		}

		else
		{
			dialogueBox->show();
			dialogueBox->DisplayError("Error!");
			return;
		}




	}

}