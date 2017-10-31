#ifndef VIEWSTOCK_H
#define VIEWSTOCK_H
#include "adminportal.h"
class AdminPortal;
#include <QWidget>
#include "ui_viewstock.h"
#include "dialoguebox.h"

#include <QtDebug>
#include <QFileInfo>
#include <QtSql\qsqldatabase.h>
#include <QtSql\qsqlquery.h>
#include <QtSql\qsql.h>


class ViewStock : public QWidget
{
	Q_OBJECT

public:
	ViewStock(QWidget *parent = 0);
	~ViewStock();
	public slots:
	void Backbutton();
private:
	Ui::ViewStock ui;
	QSqlDatabase mydb;
	AdminPortal * adminPortal;
};

#endif // VIEWSTOCK_H
