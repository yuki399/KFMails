#include<KTextEdit>

#include "replay.h"


RePlay::RePlay(QWidget *parent) : KXmlGuiWindow(parent){
	textArea = new KTextEdit();
	setCentralWidget(textArea);
	setupGUI();
}
