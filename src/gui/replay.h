#include <KXmlGuiWindow>

class KTextEdit;

class RePlay : public KXmlGuiWindow{

	public:
		RePlay(QWidget *parent=0);

	private:
		KTextEdit *textArea;

};
