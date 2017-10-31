#include "customerviewallitems.h"

CustomerViewAllItems::CustomerViewAllItems(QWidget *parent)
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





}

CustomerViewAllItems::~CustomerViewAllItems()
{

}
void CustomerViewAllItems::backpage()
{

	this->close();
	customerviewitems = new CustomerViewItems;
	customerviewitems->show();
}
void CustomerViewAllItems::viewByName(string name)
{
	this->show();
	itemName = name;

	QSqlQuery query1;
	QString qstr = QString::fromStdString(itemName);

	if (query1.exec("select * from Item where Name= '" + qstr + "'"))
	{
		int count = 0;
		while (query1.next())
		{
			if (query1.value("Quantity").toInt() > 0)
			{
				QTableWidgetItem *itemname = new QTableWidgetItem(query1.value("Name").toString());

				QTableWidgetItem *itempackagequantity = new QTableWidgetItem(query1.value("PackageQuantity").toString());

				QTableWidgetItem *itemprice = new QTableWidgetItem(query1.value("SalePrice").toString());



				ui.tableWidget->insertRow(count);
				ui.tableWidget->setItem(count, 0, itemname);
				ui.tableWidget->setItem(count, 1, itempackagequantity);
				ui.tableWidget->setItem(count, 2, itemprice);

				count++;
			}
		}


	}



}
void CustomerViewAllItems::viewByCategory(string name)
{
	categoryName = name;
	this->show();

	QSqlQuery query1;
	QString qstr = QString::fromStdString(categoryName);

	if (query1.exec("select * from Item where Category='" + qstr + "' and Quantity >0 "))
	{
		int count = 0;
		while (query1.next())
		{

			QTableWidgetItem *itemname = new QTableWidgetItem(query1.value("Name").toString());

			QTableWidgetItem *itempackagequantity = new QTableWidgetItem(query1.value("PackageQuantity").toString());

			QTableWidgetItem *itemprice = new QTableWidgetItem(query1.value("SalePrice").toString());



			ui.tableWidget->insertRow(count);
			ui.tableWidget->setItem(count, 0, itemname);
			ui.tableWidget->setItem(count, 1, itempackagequantity);
			ui.tableWidget->setItem(count, 2, itemprice);

			count++;

		}


	}




}