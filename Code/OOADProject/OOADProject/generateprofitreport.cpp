#include "generateprofitreport.h"

GenerateProfitReport::GenerateProfitReport(QWidget *parent)
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

	


	if (query.exec("select * from SalesOrder"))
	{
		int count = 0;
		while (query.next())
		{

			QTableWidgetItem *itemname = new QTableWidgetItem(query.value("Item").toString());
			QTableWidgetItem *quantity = new QTableWidgetItem(query.value("Quantity").toString());


			double profit = (stoi(query.value("Quantity").toString().toUtf8().constData()) * (stoi(query.value("SalePrice").toString().toUtf8().constData()) - stoi(query.value("CostPrice").toString().toUtf8().constData())));

			QTableWidgetItem *totalprofit = new QTableWidgetItem(QString::number(profit));


			ui.profitTable->insertRow(count);

			ui.profitTable->setItem(count, 0, itemname);
			ui.profitTable->setItem(count, 1, quantity);
			ui.profitTable->setItem(count, 2, totalprofit);
			count++;


		}
	
	
	
	}







}

GenerateProfitReport::~GenerateProfitReport()
{

}
void GenerateProfitReport::Backbutton()
{
	this->close();
	adminPortal = new AdminPortal();
	adminPortal->show();
}
