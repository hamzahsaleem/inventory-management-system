#include "modifyitem.h"
#include <string.h>
using namespace std; 
ModifyItem::ModifyItem(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	mydb = QSqlDatabase::addDatabase("QSQLITE");

	mydb.setDatabaseName("database.db");
	mydb.open();

	dialogueBox = new DialogueBox();
	if (!mydb.isOpen())
	{
		dialogueBox->show();
		dialogueBox->DisplayError("DB not connected properly!");
		return;
	}

	

	QSqlQuery query;

	QStringList categories;

	if (query.exec("select * from Category"))
	{
		
		while (query.next())
		{

			categories.push_back(query.value(1).toString());
		
		}
	

		ui.AddItemcategory->addItems(categories);
	}


	else
	{
		dialogueBox->show();
		dialogueBox->DisplayError("DB not connected properly!");
		return;
	}



}

void ModifyItem::setData(Admin* admin)
{
	this->admin = admin;
}
ModifyItem::~ModifyItem()
{

}
void ModifyItem::Backbutton()
{
	this->close();
	adminPortal = new AdminPortal();
	adminPortal->show();
}
void ModifyItem::AddItem()
{
	ui.ProgressBar->setText("");
	 
	string ItemName = ui.AddItemName->toPlainText().toUtf8().constData();
	string ItemID = ui.AddItemID->toPlainText().toUtf8().constData();
	string ItemSalePrice = ui.AddItemSalePrice->toPlainText().toUtf8().constData();
	string ItemCostPrice = ui.AddItemCostPrice->toPlainText().toUtf8().constData();
	string ItemQuantity = ui.AddItemQuantity->toPlainText().toUtf8().constData();
	string ItemPackageQuantity = ui.AddItemPackQuantity->toPlainText().toUtf8().constData();
	string ItemDiscount = ui.AddItemDiscount->toPlainText().toUtf8().constData();
	QString ItemCategory = ui.AddItemcategory->currentText();
	string itemCategory = ItemCategory.toUtf8().constData();
	if (ItemName.empty() || ItemID.empty() || ItemSalePrice.empty() || ItemCostPrice.empty() || ItemQuantity.empty() || ItemPackageQuantity.empty() 
		|| ItemDiscount.empty() || itemCategory.empty())
    {
		dialogueBox->show();
		dialogueBox->DisplayError("FILL ALL THE FIELDS");
		return; 
	}
	else
	{
		//CHECK IF THAT ITEM ALREADY EXISTS OR NOT 
		
		if (!mydb.isOpen())
		{
			dialogueBox->show();
			dialogueBox->DisplayError("DB not connected properly!");
			return;
		}

		QSqlQuery query1;



		if (query1.exec("select * from Item where Name='" + ui.AddItemName->toPlainText() + "' and PackageQuantity='" + ui.AddItemPackQuantity->toPlainText() + "'"))
		{
			int count = 0;
			while (query1.next())
			{
				count++;
			}
			if (count == 1)
			{

				dialogueBox->show();
				dialogueBox->DisplayError("ITEM ALREADY EXISTS, YOU CAN ONLY ADD ITS STOCK");
				return;


			}
			
		}

		else
		{
			dialogueBox->show();
			dialogueBox->DisplayError("Error!");
			return;
		}




		//ADD ITEM TO DB TABLE 

		QSqlQuery query;


		if (query.exec("INSERT INTO Item (Id, Name, SalePrice, CostPrice, Quantity, PackageQuantity, Discount, Category) " "VALUES ('" + ui.AddItemID->toPlainText() + "','" + ui.AddItemName->toPlainText() + "','" + ui.AddItemSalePrice->toPlainText() + "','" + ui.AddItemCostPrice->toPlainText() + "','" + ui.AddItemQuantity->toPlainText() + "','" + ui.AddItemPackQuantity->toPlainText() + "','" + ui.AddItemDiscount->toPlainText() + "','" + ItemCategory + "')"))
		{

			admin->addItem(itemCategory, new Item(ItemName, ItemID, stoi(ItemQuantity), stod(ItemSalePrice), stod(ItemCostPrice), ItemPackageQuantity));

			ui.ProgressBar->setText("Item added successfully");
			ui.AddItemName->clear();
			ui.AddItemID->clear();
			ui.AddItemSalePrice->clear();
			ui.AddItemCostPrice->clear();
			ui.AddItemQuantity->clear();
			ui.AddItemPackQuantity->clear();
			ui.AddItemDiscount->clear();
			ui.AddItemcategory->clear();
			
		}

		else
		{
			dialogueBox->show();
			dialogueBox->DisplayError("Error!");
			return;
		}




}

}
void ModifyItem::AddStock()

{
	ui.ProgressBar->setText("");
	dialogueBox = new DialogueBox();
	string StockName = ui.AddStockName->toPlainText().toUtf8().constData();
	string StockId = ui.AddStockID->toPlainText().toUtf8().constData();
	string StockQuantity = ui.AddStockQuantity->toPlainText().toUtf8().constData();
	if (StockName.empty() || StockId.empty() || StockQuantity.empty() )
	{
		dialogueBox->show();
		dialogueBox->DisplayError("FILL ALL THE FIELDS");
		return; 
	}
	else
	{

		QSqlQuery query;


		if (query.exec("select * from Item where Name= '" + ui.AddStockName->toPlainText() + "' and Id= '" + ui.AddStockID->toPlainText() + "'"))
		{
			int count = 0;

			while (query.next())
			{
				count++;
			}

			if (count == 1)
			{
				
				query.previous();


				int stock= query.value("Quantity").toInt();

				stock = stock + ui.AddStockQuantity->toPlainText().toInt();
			

				query.exec("update Item  set Quantity= '" + QString::fromStdString(to_string(stock)) + "' where Id= '" + ui.AddStockID->toPlainText() + "'");

				admin->addStockExistingItem(StockId,stock);

				ui.ProgressBar->setText("Stock added successfully");
				ui.AddStockName->clear();
				ui.AddStockID->clear();
				ui.AddStockQuantity->clear();



			}
			if (count == 0)
			{
				dialogueBox->show();
				dialogueBox->DisplayError("Item doesnot exist!");
				return;
			}


		}



		
	}

}

void ModifyItem::DeleteItem()

{
	ui.ProgressBar->setText("");
	dialogueBox = new DialogueBox();
	string ItemName = ui.DeleteItemName->toPlainText().toUtf8().constData();
	string itemId = ui.DeleteItemId->toPlainText().toUtf8().constData();
	
	if (ItemName.empty() || itemId.empty() )
	{
		dialogueBox->show();
		dialogueBox->DisplayError("FILL ALL THE FIELDS");
		return; 
	}
	else
	{
	
		QSqlQuery query;


		if (query.exec("delete from Item where Name= '" + ui.DeleteItemName->toPlainText() + "' and Id= '" + ui.DeleteItemId->toPlainText() + "'"))
		{
			
			
			admin->deleteItem(ItemName);

				ui.ProgressBar->setText("Done!");
				ui.DeleteItemName->clear();
				ui.DeleteItemId->clear();



		}
		else
		{		
			dialogueBox->show();
			dialogueBox->DisplayError("Item doesnot exist!");
			return;

		}

		
		
	}

}

void ModifyItem::ChangePrice()
{
	ui.ProgressBar->setText("");
	dialogueBox = new DialogueBox();
	string ItemName = ui.ChangePriceName->toPlainText().toUtf8().constData();
	string ItemId = ui.ChangePriceId->toPlainText().toUtf8().constData();
	string ItemNewPrice = ui.ChangePricePr->toPlainText().toUtf8().constData();
	if (ItemName.empty() || ItemId.empty() || ItemNewPrice.empty())
	{
		dialogueBox->show();
		dialogueBox->DisplayError("FILL ALL THE FIELDS");
		return; 
	}
	else
	{

		QSqlQuery query;


		if (query.exec("select * from Item where Name= '" + ui.ChangePriceName->toPlainText() + "' and Id= '" + ui.ChangePriceId->toPlainText() + "'"))
		{
			int count = 0;

			while (query.next())
			{
				count++;
			}

			if (count == 1)
			{

				query.exec("update Item  set SalePrice= '" + ui.ChangePricePr->toPlainText() + "' where Id= '" + ui.ChangePriceId->toPlainText() + "'");

				

				ui.ProgressBar->setText("Price changed successfully");
				ui.ChangePriceName->clear();
				ui.ChangePriceId->clear();
				ui.ChangePricePr->clear();



			}
			if (count == 0)
			{
				dialogueBox->show();
				dialogueBox->DisplayError("Item doesnot exist!");
				return;
			}


		}

	}

}

void ModifyItem::OfferDiscount()
{
	ui.ProgressBar->setText("");
	dialogueBox = new DialogueBox();
	string ItemName = ui.OfferDiscountName->toPlainText().toUtf8().constData();
	string ItemId = ui.OfferDiscountID->toPlainText().toUtf8().constData();
	string Discount = ui.OfferDiscountDis->toPlainText().toUtf8().constData();
	if (ItemName.empty() || ItemId.empty() || Discount.empty())
	{
		dialogueBox->show();
		dialogueBox->DisplayError("FILL ALL THE FIELDS");
		return; 
	}
	else
	{
		QSqlQuery query;


		if (query.exec("select * from Item where Name= '" + ui.OfferDiscountName->toPlainText() + "' and Id= '" + ui.OfferDiscountID->toPlainText() + "'"))
		{
			int count = 0;

			while (query.next())
			{
				count++;
			}

			if (count == 1)
			{

				query.exec("update Item  set Discount= '" + ui.OfferDiscountDis->toPlainText() + "' where Id= '" + ui.OfferDiscountID->toPlainText() + "'");

				admin->offerDiscountOnItem(ItemId, stof(Discount));

				ui.ProgressBar->setText("Discount offered successfully!");
				ui.OfferDiscountName->clear();
				ui.OfferDiscountID->clear();
				ui.OfferDiscountDis->clear();


			}
			if (count == 0)
			{
				dialogueBox->show();
				dialogueBox->DisplayError("Item doesnot exist!");
				return;
			}


		}


	}

}