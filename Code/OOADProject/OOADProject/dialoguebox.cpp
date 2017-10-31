#include "dialoguebox.h"

DialogueBox::DialogueBox(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	
}

DialogueBox::~DialogueBox()
{

}
void DialogueBox::DisplayError(string Error)
{
	QString error = QString::fromStdString(Error);
	ui.ErrorBox->setText(error);
	
}