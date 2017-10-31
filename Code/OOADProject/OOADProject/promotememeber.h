#ifndef PROMOTEMEMEBER_H
#define PROMOTEMEMEBER_H
#include "adminportal.h"
class AdminPortal;
#include "dialoguebox.h"
class DialogueBox;
#include <QWidget>
#include "ui_promotememeber.h"
#include<vector>


class Admin;
class Customer;


class PromoteMemeber : public QWidget
{
	Q_OBJECT

public:
	PromoteMemeber(QWidget *parent = 0);
	~PromoteMemeber();
	public slots:
	void Backbutton();
	void promotemember();
	void setData(Admin*,vector<Customer*>);

private:
	Admin* admin;
	vector<Customer*> customers;
	QSqlDatabase mydb;
	Ui::PromoteMemeber ui;
	DialogueBox * dialogueBox;
	AdminPortal * adminPortal;
	bool checkCnic(string Cnic);
};

#endif // PROMOTEMEMEBER_H
