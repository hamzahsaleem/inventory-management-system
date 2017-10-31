#ifndef GENERATEPROFITREPORT_H
#define GENERATEPROFITREPORT_H
#include "adminportal.h"
class AdminPortal; 
#include <QWidget>
#include "ui_generateprofitreport.h"

class GenerateProfitReport : public QWidget
{
	Q_OBJECT

public:
	GenerateProfitReport(QWidget *parent = 0);
	~GenerateProfitReport();
	
	public slots: 
	void Backbutton();
private:
	Ui::GenerateProfitReport ui;
	QSqlDatabase mydb;


	AdminPortal * adminPortal; 
};

#endif // GENERATEPROFITREPORT_H
