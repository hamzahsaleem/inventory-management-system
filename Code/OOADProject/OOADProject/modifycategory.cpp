#include "modifycategory.h"

ModifyCategory::ModifyCategory(QWidget *parent)
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


		ui.DeleteCategoryName->addItems(categories);
		ui.OfferDiscountName->addItems(categories);
	}


	else
	{
		dialogueBox->show();
		dialogueBox->DisplayError("DB not connected properly!");
		return;
	}


	

}

ModifyCategory::~ModifyCategory()
{

}

void ModifyCategory::setData(Admin* admin)
{


	this->admin = admin;



}

void ModifyCategory::Backbutton()
{
	this->close();
	adminPortal = new AdminPortal();
	adminPortal->show();
}
void ModifyCategory::AddCategory()
{
	ui.StatusBar->setText("");
	dialogueBox = new DialogueBox();
	string categoryName = ui.AddNewCategoryName->toPlainText().toUtf8().constData();
	if (categoryName.empty())
	{
		dialogueBox->show();
		dialogueBox->DisplayError("FILL THE NAME");
		return;
	}
	
	QSqlQuery query;

	if (query.exec("select * from Category where Name='" + ui.AddNewCategoryName->toPlainText()+"'"))
	{
		int count = 0;
		while (query.next())
		{

			count++;

		}

		if (count == 1)
		{
			dialogueBox->show();
			dialogueBox->DisplayError("Category exists already!");
			return;
		
		}
		else
		{
			QStringList cat;
			cat.push_back(ui.AddNewCategoryName->toPlainText());

			query.exec("INSERT INTO Category(Name)" "VALUES('" + ui.AddNewCategoryName->toPlainText() + "')");
			admin->addCategory(new Category(categoryName,50));
			ui.DeleteCategoryName->addItems(cat);
			ui.OfferDiscountName->addItems(cat);

		
		}

	}


	else
	{
		dialogueBox->show();
		dialogueBox->DisplayError("DB not connected properly!");
		return;
	}	
	
	
	
	
	ui.StatusBar->setText("Category added successfully");
	ui.AddNewCategoryName->clear();
	    

}
void ModifyCategory::DeleteCategory()

{
	ui.StatusBar->setText("");
	dialogueBox = new DialogueBox();
	QString CategoryName = ui.DeleteCategoryName->currentText();
	string categoryname = CategoryName.toUtf8().constData();
	if (categoryname.empty())
	{
		dialogueBox->show();
		dialogueBox->DisplayError("FILL THE NAME");
		return;
	}

	QSqlQuery query;

	query.exec("delete from Category where Name= '" + CategoryName + "'");

	admin->deleteCategory(categoryname);

	query.exec("update Item set Quantity= 0 where Category= '" + CategoryName + "'");



	QStringList categories;

	if (query.exec("select * from Category"))
	{

		while (query.next())
		{

			categories.push_back(query.value("Name").toString());

		}

		ui.DeleteCategoryName->clear();
		ui.OfferDiscountName->clear();

		ui.DeleteCategoryName->addItems(categories);
		ui.OfferDiscountName->addItems(categories);
	}


	else
	{
		dialogueBox->show();
		dialogueBox->DisplayError("DB not connected properly!");
		return;
	}



	ui.StatusBar->setText("Done!");



}
void ModifyCategory::OfferCategoryDiscount()

{
	ui.StatusBar->setText("");
	dialogueBox = new DialogueBox();
	string Discountrate = ui.OfferDiscountBox->toPlainText().toUtf8().constData();
	QString CategoryDiscount = ui.OfferDiscountName->currentText();
	string categoryDiscount = CategoryDiscount.toUtf8().constData();
	if (Discountrate.empty() || categoryDiscount.empty())
	{
		dialogueBox->show();
		dialogueBox->DisplayError("FILL THE FIELDS");
		return;
	}
	if (checkint(Discountrate)==false )
	{
		dialogueBox->show();
		dialogueBox->DisplayError("DICOUNT RATE INVALID");
		return;

	}
	else
	{
		QSqlQuery query;

		query.exec("update Item set Discount= '" + ui.OfferDiscountBox->toPlainText() + "' where Category= '" + CategoryDiscount + "'");

		admin->offerDiscountOnCategory(categoryDiscount, stof(Discountrate));

		
		
		
		ui.StatusBar->setText("Discount on Category added successfully");
		ui.OfferDiscountBox->clear();
	}




}
bool ModifyCategory::checkint(string no)
{
	bool check = true;
	for (int i = 0; i < no.length(); i++)
	{
		if (no[i] >= '0' && no[i] <= '9')
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