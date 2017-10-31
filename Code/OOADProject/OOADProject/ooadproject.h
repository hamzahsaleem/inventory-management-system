
#pragma once
#include "adminportal.h"
#include "customersignup.h"
#include "customerwelcomepage.h"
#include "dialoguebox.h"
#include <QtWidgets/QMainWindow>
#include "ui_ooadproject.h"

#include"Admin.h"
#include "Cashier.h"
#include "Category.h"
#include "Customer.h"
#include "Item.h"
#include "OtherMember.h"
#include "Person.h"
#include "StaffMember.h"
#include "SublineItem.h"
#include <vector>


#include <QtDebug>
#include <QFileInfo>
#include <QtSql\qsqldatabase.h>
#include <QtSql\qsqlquery.h>
#include <QtSql\qsql.h>


class AdminPortal;
class CustomerSignUp; 
class CustomerWelcomePage;
class DialogueBox; 

class Admin;
class Cashier;
class Customer;
class Item;
class Category;




class OOADProject : public QMainWindow
{
	Q_OBJECT

public:
	OOADProject(QWidget *parent = 0);
	~OOADProject();
	public slots: 
	void AdminlogIn();
	void CustomerLogIn();
private:

	Admin* admin;
	vector<Category*> categories;
	vector<Customer*> customers;
	vector<Item*> items;
	Cashier* cashier;
	vector<Staffmember*> staffmembers;


	Ui::OOADProjectClass ui;
	QSqlDatabase mydb;
	AdminPortal * Adminp; 
	CustomerSignUp * Customersignup; 
	CustomerWelcomePage * Customerwelcome;
	DialogueBox * Dialoguebox;
	bool checkCnic(string Cnic);
};

