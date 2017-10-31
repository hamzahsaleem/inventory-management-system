#ifndef MODIFYCATEGORY_H
#define MODIFYCATEGORY_H
#include "dialoguebox.h"
class DialogueBox ;
#include "adminportal.h"
class AdminPortal ;
#include <QWidget>
#include <string.h>
using namespace std;
#include "ui_modifycategory.h"


class Admin;


class ModifyCategory : public QWidget
{
	Q_OBJECT

public:
	ModifyCategory(QWidget *parent = 0);
	~ModifyCategory();
	public slots:
	void Backbutton();
	void AddCategory();
	void DeleteCategory();
	void OfferCategoryDiscount();
	void setData(Admin*);

private:
	Admin* admin;
	QSqlDatabase mydb;
	Ui::ModifyCategory ui;
	AdminPortal * adminPortal;
	DialogueBox * dialogueBox;
	bool checkint(string no);
};

#endif // MODIFYCATEGORY_H
