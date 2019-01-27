#include <QCoreApplication>
#include <QString>

#include "QXmppClient.h"
#include "QXmppLogger.h"
#include "QXmppConfiguration.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

//    QXmppClient client;
//    client.logger()->setLoggingType(QXmppLogger::StdoutLogging);

//    QXmppConfiguration confgxmpp;
//    confgxmpp.setResource("Desktop");
//    confgxmpp.setHost("23.105.216.7");
//    confgxmpp.setPort(5222);
//    confgxmpp.setDomain("localhost.localdomain");
//    confgxmpp.setUser("lxn3");
//    confgxmpp.setPassword("123456");

    return a.exec();
}
