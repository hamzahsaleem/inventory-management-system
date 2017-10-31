#ifndef GENERATESALESREPORT_H
#define GENERATESALESREPORT_H
#include "adminportal.h"
class AdminPortal;
#include <QWidget>
#include "ui_generatesalesreport.h"

class GenerateSalesReport : public QWidget
{
	Q_OBJECT

public:
	GenerateSalesReport(QWidget *parent = 0);
	

	~GenerateSalesReport();
	public slots:
	void Backbutton();
	void Submit();
private:
	QSqlDatabase mydb;
	
	Ui::GenerateSalesReport ui;
	AdminPortal * adminPortal;
};

#endif // GENERATESALESREPORT_H
