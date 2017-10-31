#ifndef MODIFYITEM_H
#define MODIFYITEM_H
#include "adminportal.h"
#include "dialoguebox.h"
class AdminPortal;
class DialogueBox; 
#include <QWidget>
#include "ui_modifyitem.h"
#include <QtDebug>
#include <QFileInfo>
#include <QtSql\qsqldatabase.h>
#include <QtSql\qsqlquery.h>
#include <QtSql\qsql.h>


class Admin;

class ModifyItem : public QWidget
{
	Q_OBJECT

public:
	ModifyItem(QWidget *parent = 0);
	~ModifyItem();
	public slots:
	void Backbutton();
	void AddItem();
	void AddStock();
	void DeleteItem();
	void ChangePrice();
	void OfferDiscount();
	void setData(Admin*);

private:
	Admin* admin;
	Ui::ModifyItem ui;
	

	QSqlDatabase mydb;
	AdminPortal * adminPortal;
	DialogueBox * dialogueBox; 
};

#endif // MODIFYITEM_H
