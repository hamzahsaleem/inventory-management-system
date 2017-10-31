#include "generatesalesreport.h"

GenerateSalesReport::GenerateSalesReport(QWidget *parent)
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

	







}

GenerateSalesReport::~GenerateSalesReport()
{

}

void GenerateSalesReport::Submit()
{
	QSqlQuery query;
	ui.tableWidget->clear();

	while (ui.tableWidget->rowCount() > 0)
	{
		ui.tableWidget->removeRow(0);
	}


	string date =ui.SalesReportFrom->date().toString().toUtf8().constData();
	string date2 = ui.SalesReportTo->date().toString().toUtf8().constData();

	string year = "";
	string month = "";
	string day = "";

	date = date.substr(date.find_first_of(" ")+1, date.length());


	 year=  date.substr(date.find_last_of(" ")+1, date.length());

	 month = date.substr(0, date.find_first_of(" "));

	 date = date.substr(date.find_first_of(" ")+1, date.length());

	 day = date.substr(0,date.find_first_of(" "));


	 if (month == "Jan")
		 month = "01";

	 else if (month == "Feb")
		 month = "02";

	 else if (month == "Mar")
		 month = "03";
	 else  if (month == "Apr")
		 month = "04";
	 else if (month == "May")
		 month = "05";
	 else if (month == "Jun")
		 month = "06";
	 else if (month == "Jul")
		 month = "07";
	 else if (month == "Aug")
		 month = "08";
	 else  if (month == "Sep")
		 month = "09";
	 else if (month == "Oct")
		 month = "10";
	 else if (month == "Nov")
		 month = "11";
	 else 
		 month = "12";


	 ///////////////////////////////////////////////////////



	 string year2 = "";
	 string month2 = "";
	 string day2 = "";

	 date2 = date2.substr(date2.find_first_of(" ") + 1, date2.length());


	 year2 = date2.substr(date2.find_last_of(" ") + 1, date2.length());

	 month2 = date2.substr(0, date2.find_first_of(" "));

	 date2 = date2.substr(date2.find_first_of(" ") + 1, date2.length());

	 day2 = date2.substr(0, date2.find_first_of(" "));


	 if (month2 == "Jan")
		 month2 = "01";

	 else if (month2 == "Feb")
		 month2 = "02";

	 else if (month2 == "Mar")
		 month2 = "03";
	 else  if (month2 == "Apr")
		 month2 = "04";
	 else if (month2 == "May")
		 month2 = "05";
	 else if (month2 == "Jun")
		 month2 = "06";
	 else if (month2 == "Jul")
		 month2 = "07";
	 else if (month2 == "Aug")
		 month2 = "08";
	 else  if (month2 == "Sep")
		 month2 = "09";
	 else if (month2 == "Oct")
		 month2 = "10";
	 else if (month2 == "Nov")
		 month2 = "11";
	 else
		 month2 = "12";












	 if (query.exec("select * from SalesOrder"))
	{
		 int count = 0;

		while (query.next())
		{
		
			string date1 = query.value("Date").toString().toUtf8().constData();
			
			string year1 = "";
			string month1 = "";
			string day1 = "";


			year1 = date1.substr(0, date1.find_first_of("-"));

			date1 = date1.substr(date1.find_first_of("-") + 1, date1.length());

			month1 = date1.substr(0, date1.find_first_of("-"));

			date1 = date1.substr(date1.find_first_of("-") + 1, date1.length());

			day1 = date1.substr(0, date1.length());

			
			if (((stoi(year1) == stoi(year)) || (stoi(year1) == stoi(year2)) || ((stoi(year1) > stoi(year)) && (stoi(year1) < stoi(year2)))) && ((stoi(month1) == stoi(month)) || (stoi(month1) == stoi(month2)) || ((stoi(month1) > stoi(month)) && (stoi(month1) < stoi(month2)))))

			{
				bool flag = false;

				if ((stoi(month1) == stoi(month)) && (stoi(day1) == stoi(day) || stoi(day1) > stoi(day)) )
				{
				

					flag = true;
					if (stoi(month1) == stoi(month2) && stoi(day1) > stoi(day2))
					{
						flag = false;
					}

				}
				else if ((stoi(month1) == stoi(month2)) && (stoi(day1) == stoi(day2) || stoi(day1) < stoi(day2)))
				{
				
					flag = true;
				}

				else if ((stoi(month1) > stoi(month)) && (stoi(month1) < stoi(month2)))
				{
					flag = true;
				
				}

				if (flag == true)
				{
					

				
					QTableWidgetItem *itemname = new QTableWidgetItem(query.value("Item").toString());

					QTableWidgetItem *quantity = new QTableWidgetItem(query.value("Quantity").toString());

					QTableWidgetItem *sales = new QTableWidgetItem(query.value("TotalSales").toString());

					QTableWidgetItem *saleprice = new QTableWidgetItem(query.value("SalePrice").toString());



					ui.tableWidget->insertRow(count);

					ui.tableWidget->setItem(count, 0, itemname);
					ui.tableWidget->setItem(count, 1, quantity);
					ui.tableWidget->setItem(count, 2, sales);
					ui.tableWidget->setItem(count, 3, saleprice);



					count++;

				}
			}

		}


	}




}


void GenerateSalesReport::Backbutton()
{
	this->close();
	adminPortal = new AdminPortal();
	adminPortal->show();
}
