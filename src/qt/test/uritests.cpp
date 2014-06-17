#include "uritests.h"

#include "guiutil.h"
#include "walletmodel.h"

#include <QUrl>

void URITests::uriTests()
{
    SendCoinsRecipient rv;
    QUrl uri;
    uri.setUrl(QString("murraycoin:MMr7MNeGdA1R5mviiX3qXB4MNJ47ay6XEN?req-dontexist="));
    QVERIFY(!GUIUtil::parseBitcoinURI(uri, &rv));

    uri.setUrl(QString("murraycoin:MMr7MNeGdA1R5mviiX3qXB4MNJ47ay6XEN?dontexist="));
    QVERIFY(GUIUtil::parseBitcoinURI(uri, &rv));
    QVERIFY(rv.address == QString("MMr7MNeGdA1R5mviiX3qXB4MNJ47ay6XEN"));
    QVERIFY(rv.label == QString());
    QVERIFY(rv.amount == 0);

    uri.setUrl(QString("murraycoin:MMr7MNeGdA1R5mviiX3qXB4MNJ47ay6XEN?label=Wikipedia Example Address"));
    QVERIFY(GUIUtil::parseBitcoinURI(uri, &rv));
    QVERIFY(rv.address == QString("MMr7MNeGdA1R5mviiX3qXB4MNJ47ay6XEN"));
    QVERIFY(rv.label == QString("Wikipedia Example Address"));
    QVERIFY(rv.amount == 0);

    uri.setUrl(QString("murraycoin:MMr7MNeGdA1R5mviiX3qXB4MNJ47ay6XEN?amount=0.001"));
    QVERIFY(GUIUtil::parseBitcoinURI(uri, &rv));
    QVERIFY(rv.address == QString("MMr7MNeGdA1R5mviiX3qXB4MNJ47ay6XEN"));
    QVERIFY(rv.label == QString());
    QVERIFY(rv.amount == 100000);

    uri.setUrl(QString("murraycoin:MMr7MNeGdA1R5mviiX3qXB4MNJ47ay6XEN?amount=1.001"));
    QVERIFY(GUIUtil::parseBitcoinURI(uri, &rv));
    QVERIFY(rv.address == QString("MMr7MNeGdA1R5mviiX3qXB4MNJ47ay6XEN"));
    QVERIFY(rv.label == QString());
    QVERIFY(rv.amount == 100100000);

    uri.setUrl(QString("murraycoin:MMr7MNeGdA1R5mviiX3qXB4MNJ47ay6XEN?amount=100&label=Wikipedia Example"));
    QVERIFY(GUIUtil::parseBitcoinURI(uri, &rv));
    QVERIFY(rv.address == QString("MMr7MNeGdA1R5mviiX3qXB4MNJ47ay6XEN"));
    QVERIFY(rv.amount == 100000000000LL);
    QVERIFY(rv.label == QString("Wikipedia Example"));

    uri.setUrl(QString("murraycoin:MMr7MNeGdA1R5mviiX3qXB4MNJ47ay6XEN?message=Wikipedia Example Address"));
    QVERIFY(GUIUtil::parseBitcoinURI(uri, &rv));
    QVERIFY(rv.address == QString("MMr7MNeGdA1R5mviiX3qXB4MNJ47ay6XEN"));
    QVERIFY(rv.label == QString());

    QVERIFY(GUIUtil::parseBitcoinURI("murraycoin://MMr7MNeGdA1R5mviiX3qXB4MNJ47ay6XEN?message=Wikipedia Example Address", &rv));
    QVERIFY(rv.address == QString("MMr7MNeGdA1R5mviiX3qXB4MNJ47ay6XEN"));
    QVERIFY(rv.label == QString());

    uri.setUrl(QString("murraycoin:MMr7MNeGdA1R5mviiX3qXB4MNJ47ay6XEN?req-message=Wikipedia Example Address"));
    QVERIFY(GUIUtil::parseBitcoinURI(uri, &rv));

    uri.setUrl(QString("murraycoin:MMr7MNeGdA1R5mviiX3qXB4MNJ47ay6XEN?amount=1,000&label=Wikipedia Example"));
    QVERIFY(!GUIUtil::parseBitcoinURI(uri, &rv));

    uri.setUrl(QString("murraycoin:MMr7MNeGdA1R5mviiX3qXB4MNJ47ay6XEN?amount=1,000.0&label=Wikipedia Example"));
    QVERIFY(!GUIUtil::parseBitcoinURI(uri, &rv));
}
