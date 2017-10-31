#ifndef ADMINPORTAL_H
#define ADMINPORTAL_H
#include "ooadproject.h"
#include <QWidget>
#include "ui_adminportal.h"
#include "modifyitem.h"
#include "modifystaff.h"
#include "modifycategory.h"
#include "generatesalesreport.h"
#include "generateprofitreport.h"
#include "viewstock.h"
#include "promotememeber.h"
class ModifyItem;
class ModifyStaff; 
class PromoteMemeber; 
class ModifyCategory;
class GenerateSalesReport;
class GenerateProfitReport; 
class ViewStock; 
class OOADProject; 


class Customer;
class Admin;

class AdminPortal : public QWidget
{
	Q_OBJECT

public:
	AdminPortal(QWidget *parent = 0);
	~AdminPortal();
	public slots:
	void ModifyitemPage();
	void modifystaffPage();
	void PromotememberPage();
	void ModifycategoryPage();
	void gensalesreportPage();
	void genProfitReportPage();
	void ViewstockPage();
	void LogoutPage();
	void setData(Admin*,vector<Customer*>);
private:
	vector<Customer*> customers;
	Admin* admin;

	Ui::AdminPortal ui;
	ModifyItem  *Modifyitem ;
	 ModifyStaff  *modifystaff;
	 PromoteMemeber  *Promotemember;
	 ModifyCategory *Modifycategory;
	 GenerateSalesReport  *gensalesreport;
	 GenerateProfitReport *genProfitReport ;
	 ViewStock *Viewstock;
	 OOADProject * Logout; 
};

#endif // ADMINPORTAL_H
