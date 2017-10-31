#include "customercart.h"

CustomerCart::CustomerCart(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	mydb = QSqlDatabase::addDatabase("QSQLITE");

	mydb.setDatabaseName("database.db");
	mydb.open();

	count = 0;
	QSqlQuery query;

	QStringList categories;

	if (query.exec("select * from Category"))
	{

		while (query.next())
		{

			categories.push_back(query.value(1).toString());

		}


		ui.CustomerCartCategory->addItems(categories);
	}


	else
	{
		dialogueBox->show();
		dialogueBox->DisplayError("DB not connected properly!");
		return;
	}


}

void CustomerCart::setData(Customer* customer)
{
	this->customers = customer;
}
void CustomerCart::showItems()
{
	ui.CustomerCartItem->clear();
	QString ItemCategory = ui.CustomerCartCategory->currentText();

	QSqlQuery query;
	QStringList items;

	if (query.exec("Select * from Item where Category='" + ItemCategory + "' "))
	{
		int count = 0;
		while (query.next())
		{

			items.push_back(query.value("Name").toString());
			count++;
		}


		ui.CustomerCartItem->addItems(items);

	}

}

void CustomerCart::showPackageQuantity()
{
	ui.customerPackageQuantity->clear();
	QString Item = ui.CustomerCartItem->currentText();

	QSqlQuery query;
	QStringList itemspackagequantity;

	if (query.exec("Select * from Item where Name='" + Item + "' "))
	{
		int count = 0;
		while (query.next())
		{

			itemspackagequantity.push_back(query.value("PackageQuantity").toString());
			count++;
		}


		ui.customerPackageQuantity->addItems(itemspackagequantity);

	}
}
CustomerCart::~CustomerCart()
{

}
void CustomerCart::BillingPage()
{


	this->close();
	billingcustomer = new Billing();
	billingcustomer->setData(customers);
	billingcustomer->show();

}
bool  CustomerCart::checkint(string no)
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
void CustomerCart::addCartSubmit()
{
	QSqlQuery query;

	dialogueBox = new DialogueBox();
	string Quantity = ui.CustomerCartQuantity->toPlainText().toUtf8().constData();
	QString CustomerCartCategory = ui.CustomerCartCategory->currentText();
	string CustomerCartcategory = CustomerCartCategory.toUtf8().constData();
	QString CustomerCartItem = ui.CustomerCartItem->currentText();
	string itemname = CustomerCartItem.toUtf8().constData();
	QString CustomerCartPackageQuantity = ui.customerPackageQuantity->currentText();
	string packagequantity = CustomerCartPackageQuantity.toUtf8().constData();

	if (itemname.empty() || CustomerCartcategory.empty() || Quantity.empty())
	{
		dialogueBox->show();
		dialogueBox->DisplayError("FILL THE FIELDS");
		return;
	}
	if (checkint(Quantity) == false)
	{
		dialogueBox->show();
		dialogueBox->DisplayError("INVALID QUANTITY");
		return;
	}

	if (query.exec("select * from Item where Name='" + CustomerCartItem + "' and PackageQuantity='" + CustomerCartPackageQuantity + "'")) //if () DESIRED QUANTITY IS NOT AVAILABLE
	{
		query.next();
		int q = query.value("Quantity").toInt();

		if (q > stoi(Quantity))
		{
			QString qstr = QString::fromStdString(Quantity);

			QTableWidgetItem *name = new QTableWidgetItem(CustomerCartItem);
			QTableWidgetItem *pkgq = new QTableWidgetItem(CustomerCartPackageQuantity);
			QTableWidgetItem *price = new QTableWidgetItem(query.value("SalePrice").toString());
			QTableWidgetItem *quantity = new QTableWidgetItem(qstr);


			ui.tableWidget->insertRow(count);
			ui.tableWidget->setItem(count, 0, name);
			ui.tableWidget->setItem(count, 1, pkgq);
			ui.tableWidget->setItem(count, 2, price);
			ui.tableWidget->setItem(count, 3, quantity);
			count++;


			double discount = query.value("Discount").toDouble();
			if (customers->isMember())
			{
				customers->addItem(new SublineItem(itemname, packagequantity, stoi(Quantity), query.value("SalePrice").toDouble() - (0.05*query.value("SalePrice").toDouble()) - (discount*query.value("SalePrice").toDouble())));
			}
			else
				customers->addItem(new SublineItem(itemname, packagequantity, stoi(Quantity), query.value("SalePrice").toDouble() - (discount*query.value("SalePrice").toDouble())));



		}
		else
		{

			dialogueBox->show();
			dialogueBox->DisplayError("QUANTITY NOT AVAILABLE");
			return;
		}
	}




	//	ui.CustomerCart_2->insertPlainText(item);
	ui.CustomerCartQuantity->clear();

}