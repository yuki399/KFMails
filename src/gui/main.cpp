#include <cstdlib>

#include <QApplication>
#include <QCommandLineParser>
#include <KAboutData>
#include <KLocalizedString>
#include "replay.h"

int main(int argc, char *argv[]){
	QApplication app(argc, argv);
	KLocalizedString::setApplicationDomain("KFMails");
	
	KAboutData aboutData(
						 QStringLiteral("KFMails")
						,i18n("KFMails")
						,QStringLiteral("0")
						,i18n("mailer")
						,KAboutLicense::BSDL
						,i18n("(c) 2017")
						,i18n("Some text ...")
						,QStringLiteral("http:...")
						,QStringLiteral("mail addres"));

	aboutData.addAuthor(i18n("Name"), i18n("Task"),QStringLiteral("your@email.com"),
						QStringLiteral("http:///"), QStringLiteral("OSC username"));
	KAboutData::setApplicationData(aboutData);

	QCommandLineParser parser;
	parser.addHelpOption();
	parser.addVersionOption();
	aboutData.setupCommandLine(&parser);
	parser.process(app);
	aboutData.processCommandLine(&parser);

	RePlay* window = new RePlay();
	window-> show();


	return app.exec();
}
