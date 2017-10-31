#include "adminportal.h"

AdminPortal::AdminPortal(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);



}

void AdminPortal::setData(Admin* admin,vector<Customer*> customers)
{

	
	this->admin = admin;
	this->customers = customers;


}

AdminPortal::~AdminPortal()
{

}
void AdminPortal::ModifyitemPage()
{
	this->close();
	Modifyitem = new ModifyItem();
	Modifyitem->setData(admin);

	Modifyitem->show();
}
void AdminPortal::modifystaffPage()
{
	this->close();
	modifystaff = new ModifyStaff();
	modifystaff->setData(admin);

	modifystaff->show();
}
void AdminPortal::PromotememberPage()
{
	this->close();
	Promotemember = new PromoteMemeber();
	Promotemember->setData(admin,customers);
	Promotemember->show();
}
void AdminPortal::ModifycategoryPage()
{
	this->close();
	Modifycategory = new ModifyCategory();
	Modifycategory->setData(admin);
	Modifycategory->show();
}
void AdminPortal::gensalesreportPage()
{
	this->close();
	gensalesreport = new GenerateSalesReport();
	gensalesreport->show();
}
void AdminPortal::genProfitReportPage()
{
	this->close();
	genProfitReport = new GenerateProfitReport();
	genProfitReport->show();
}
void AdminPortal::ViewstockPage()
{
	this->close();
	Viewstock = new ViewStock();
	Viewstock->show();
}
void AdminPortal::LogoutPage()
{

	this->close();
	Logout = new OOADProject();
	Logout->show();

}