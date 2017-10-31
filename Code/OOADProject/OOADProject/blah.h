#ifndef BLAH_H
#define BLAH_H

#include <QMainWindow>
#include "ui_blah.h"

class Blah : public QMainWindow
{
	Q_OBJECT

public:
	Blah(QWidget *parent = 0);
	~Blah();

private:
	Ui::Blah ui;
};

#endif // BLAH_H
