#include "viewstock.h"

ViewStock::ViewStock(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	mydb = QSqlDatabase::addDatabase("QSQLITE");

	mydb.setDatabaseName("database.db");
	mydb.open();

	DialogueBox* Dialoguebox = new DialogueBox();

	if (!mydb.isOpen())
	{
		Dialoguebox->show();
		Dialoguebox->DisplayError("DB not connected properly!");

		return;
	}

	QSqlQuery query;

	

	if (query.exec("select * from Item"))
	{
		int count = 0;
		while (query.next())
		{
			
			QTableWidgetItem *itemno = new QTableWidgetItem(QString::number(count + 1));
			
			QString item= query.value("Name").toString() + " " + query.value("PackageQuantity").toString();

			QTableWidgetItem *itemname = new QTableWidgetItem(item);

			QTableWidgetItem *itemstock = new QTableWidgetItem(query.value("Quantity").toString());

			ui.StockTable->insertRow(count);
			ui.StockTable->setItem(count, 0, itemno);
			ui.StockTable->setItem(count, 1, itemname);
			ui.StockTable->setItem(count, 2, itemstock);


			count++;

		}
		
		


	}

	else
	{
		Dialoguebox->show();
		Dialoguebox->DisplayError("DB not connected properly!");
		return;
	}



	


}

ViewStock::~ViewStock()
{

}
void ViewStock::Backbutton()
{
	this->close();
	adminPortal = new AdminPortal();
	adminPortal->show();
}
