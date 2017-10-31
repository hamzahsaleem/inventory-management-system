#include "billing.h"

Billing::Billing(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	mydb = QSqlDatabase::addDatabase("QSQLITE");

	mydb.setDatabaseName("database.db");
	mydb.open();




}

Billing::~Billing()
{

}
void Billing::CheckoutPage()
{

	this->close();

	QSqlQuery query;

	vector<SublineItem*> cart = customer->getShoppingCart();
	for (int i = 0; i < cart.size(); i++)
	{
		string itemname = cart.at(i)->getName();
		string packagequantity = cart.at(i)->getpackagequantity();
		query.exec("select * from Item where Name ='" + QString::fromStdString(itemname) + "' and PackageQuantity= '" + QString::fromStdString(packagequantity) + "'");
		query.next();
		int quantity = query.value("Quantity").toInt();
		quantity = quantity - cart.at(i)->getQuantity();

		query.exec("update Item  set Quantity= '" + QString::number(quantity) + "' where Name ='" + QString::fromStdString(itemname) + "' and PackageQuantity= '" + QString::fromStdString(packagequantity) + "'");


		query.exec("select * from Item where Name ='" + QString::fromStdString(itemname) + "' and PackageQuantity= '" + QString::fromStdString(packagequantity) + "'");
		query.next();
		int soldquantity = query.value("SoldQuantity").toInt();
		soldquantity = soldquantity + cart.at(i)->getQuantity();

		query.exec("update Item  set SoldQuantity= '" + QString::number(soldquantity) + "' where Name ='" + QString::fromStdString(itemname) + "' and PackageQuantity= '" + QString::fromStdString(packagequantity) + "'");


	}



	for (int i = 0; i < cart.size(); i++)
	{
		string itemname = cart.at(i)->getName();
		string packagequantity = cart.at(i)->getpackagequantity();
		int quantity = cart.at(i)->getQuantity();
		double total = cart.at(i)->getSubtotal();
		double saleprice = cart.at(i)->getunitprice();

		query.exec("select * from Item where Name ='" + QString::fromStdString(itemname) + "' and PackageQuantity= '" + QString::fromStdString(packagequantity) + "'");
		query.next();
		double costprice = query.value("CostPrice").toDouble();

		query.exec("INSERT INTO SalesOrder (Item, Quantity, TotalSales, SalePrice, CostPrice) " "VALUES ('" + QString::fromStdString(itemname) + "','" + QString::number(quantity) + "','" + QString::number(total) + "','" + QString::number(saleprice) + "','" + QString::number(costprice) + "')");



	}


	customer->checkOut();


	customercheckout = new CustomerCheckout();
	customercheckout->setData(customer);
	customercheckout->show();

}



void Billing::setData(Customer* c)
{
	customer = c;
	vector<SublineItem*> cart = customer->getShoppingCart();
	int count = 0;
	double gtotal = 0;

	for (int i = 0; i < cart.size(); i++)
	{

		QString name = QString::fromStdString(cart.at(i)->getName());
		QString packagequantity = QString::fromStdString(cart.at(i)->getpackagequantity());
		double unitprice = cart.at(i)->getunitprice();
		double quantity = cart.at(i)->getQuantity();
		double totalPrice = cart.at(i)->getSubtotal();
		QTableWidgetItem *qname = new QTableWidgetItem(name);
		QTableWidgetItem *pkgq = new QTableWidgetItem(packagequantity);
		QTableWidgetItem *price = new QTableWidgetItem(QString::number(unitprice));
		QTableWidgetItem *qquantity = new QTableWidgetItem(QString::number(quantity));
		QTableWidgetItem *total = new QTableWidgetItem(QString::number(totalPrice));



		ui.tableWidget->insertRow(count);
		ui.tableWidget->setItem(count, 0, qname);
		ui.tableWidget->setItem(count, 1, pkgq);
		ui.tableWidget->setItem(count, 2, price);
		ui.tableWidget->setItem(count, 3, qquantity);
		ui.tableWidget->setItem(count, 4, total);


		gtotal = gtotal + totalPrice;
		count++;

	}

	ui.BillingInfoGrandTotal->setText(QString::number(gtotal));


}






