#ifndef DIALOGUEBOX_H
#define DIALOGUEBOX_H
#include <string.h>
using namespace std; 
#include <QWidget>
#include "ui_dialoguebox.h"

class DialogueBox : public QWidget
{
	Q_OBJECT

public:
	DialogueBox(QWidget *parent = 0);
	~DialogueBox();
	void DisplayError(string Error); 
private:
	Ui::DialogueBox ui;
};

#endif // DIALOGUEBOX_H
