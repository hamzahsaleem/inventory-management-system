#include "customerviewitems.h"

CustomerViewItems::CustomerViewItems(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	mydb = QSqlDatabase::addDatabase("QSQLITE");

	mydb.setDatabaseName("database.db");
	mydb.open();

	QSqlQuery query;

	QStringList categories;

	if (query.exec("select * from Category"))
	{

		while (query.next())
		{

			categories.push_back(query.value(1).toString());

		}


		ui.ViewByCategory_list->addItems(categories);
	}


	else
	{
		dialogueBox->show();
		dialogueBox->DisplayError("DB not connected properly!");
		return;
	}


}

CustomerViewItems::~CustomerViewItems()
{

}
void CustomerViewItems::BackButton()
{

	this->close();
	custmoerWelcomePage = new CustomerWelcomePage();
	custmoerWelcomePage->show();

}
bool CustomerViewItems::checkint(string no)
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
void CustomerViewItems::ViewByName()
{
	dialogueBox = new DialogueBox();
	string ItemName = ui.ViewByName_name->toPlainText().toUtf8().constData();
	if (ItemName.empty())
	{
		dialogueBox->show();
		dialogueBox->DisplayError("FILL THE NAME");
		return;
	}
	else
	{
		if (!mydb.isOpen())
		{
			dialogueBox->show();
			dialogueBox->DisplayError("DB not connected properly!");
			return;
		}

		QSqlQuery query;

		if (query.exec("select * from Item where Name='" + ui.ViewByName_name->toPlainText() + "'"))
		{
			int count = 0;
			while (query.next())
			{
				count++;
			}
			if (count == 0)
			{

				dialogueBox->show();
				dialogueBox->DisplayError("ITEM DOESNOT EXISTS!");
				return;
			}
			else
			{
				this->close();
				custmoerViewAllItems = new CustomerViewAllItems();
				custmoerViewAllItems->viewByName(ItemName);

				
			}




		}


	}


}
void CustomerViewItems::ViewByCategory()
{
	dialogueBox = new DialogueBox();
	QString Category = ui.ViewByCategory_list->currentText();
	string categoryName = Category.toUtf8().constData();

	if (categoryName.empty())
	{
		dialogueBox->show();
		dialogueBox->DisplayError("SELECT THE CATEGORY");
		return;
	}

	else
	{
		if (!mydb.isOpen())
		{
			dialogueBox->show();
			dialogueBox->DisplayError("DB not connected properly!");
			return;
		}

		QSqlQuery query;

		if (query.exec("select * from Item where Category='" + Category + "'"))
		{
			int count = 0;
			while (query.next())
			{
				count++;
			}
			if (count == 0)
			{

				dialogueBox->show();
				dialogueBox->DisplayError("ITEM DOESNOT EXISTS!");
				return;
			}
			else
			{
				this->close();
				custmoerViewAllItems = new CustomerViewAllItems();
				custmoerViewAllItems->viewByCategory(categoryName);
				
			}




		}


	}




}