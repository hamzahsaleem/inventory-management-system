#ifndef CUSTOMERSIGNUP_H
#define CUSTOMERSIGNUP_H
#include "customerwelcomepage.h"
#include "dialoguebox.h"
#include <string.h>
using namespace std;
class DialogueBox;
#include <QWidget>
#include "ui_customersignup.h"
#include <QtDebug>
#include <QFileInfo>
#include <QtSql\qsqldatabase.h>
#include <QtSql\qsqlquery.h>
#include <QtSql\qsql.h>

class Customer;
class Category;
class CustomerWelcomePage;
class CustomerSignUp : public QWidget
{
	Q_OBJECT

public:
	CustomerSignUp(QWidget *parent = 0);
	~CustomerSignUp();
	void setParameters(QString, QString);
	public slots:
	void CustomerwelcomePage();
	void setData(string, string, vector<Customer*>, vector<Category*>);

private:
	string customername;
	string customercnic;
	vector<Customer*> customers;
	vector<Category*> categories;

	Ui::CustomerSignUp ui;
	QSqlDatabase mydb;
	QString name;
	QString cnic;
	CustomerWelcomePage * Customerwelcome;
	DialogueBox * dialogueBox;
	bool checkint(string no);
	bool is_valid(string email);
};

#endif // CUSTOMERSIGNUP_H
