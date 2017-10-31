#ifndef MODIFYSTAFF_H
#define MODIFYSTAFF_H
#include "adminportal.h"
#include "dialoguebox.h"
class DialogueBox;
class AdminPortal;
#include <QWidget>
#include "ui_modifystaff.h"

#include <QtDebug>
#include <QFileInfo>
#include <QtSql\qsqldatabase.h>
#include <QtSql\qsqlquery.h>
#include <QtSql\qsql.h>

class Admin;

class ModifyStaff : public QWidget
{
	Q_OBJECT

public:
	ModifyStaff(QWidget *parent = 0);
	~ModifyStaff();
	public slots:
	void Backbutton();
	void AddMember();
	void DeleteMemeber();
	void setData(Admin*);

private:
	Admin* admin;
	QSqlDatabase mydb;
	Ui::ModifyStaff ui;
	AdminPortal * adminPortal;
	DialogueBox * dialogueBox;
	bool checkCnic(string Cnic);
	bool CheckNo(string No);
};

#endif // MODIFYSTAFF_H
