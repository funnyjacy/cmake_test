/********************************************************************************
** Form generated from reading UI file 'query.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUERY_H
#define UI_QUERY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_query
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_3;
    QTextEdit *ID;
    QSpacerItem *horizontalSpacer_8;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *QUERY;
    QPushButton *QUERY_2;
    QPushButton *NO;
    QSpacerItem *horizontalSpacer_4;
    QTableWidget *table;

    void setupUi(QMainWindow *query)
    {
        if (query->objectName().isEmpty())
            query->setObjectName(QString::fromUtf8("query"));
        query->resize(416, 354);
        centralwidget = new QWidget(query);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, -1, 4, -1);
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 401, 334));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(scrollAreaWidgetContents);
        widget->setObjectName(QString::fromUtf8("widget"));
        QFont font;
        font.setPointSize(12);
        widget->setFont(font);
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(29);
        label->setFont(font1);

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(widget);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget_3 = new QWidget(scrollAreaWidgetContents);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);

        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(100, 16777215));
        QFont font2;
        font2.setPointSize(20);
        label_3->setFont(font2);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_3);

        ID = new QTextEdit(widget_3);
        ID->setObjectName(QString::fromUtf8("ID"));
        ID->setMaximumSize(QSize(250, 60));
        QFont font3;
        font3.setPointSize(28);
        ID->setFont(font3);
        ID->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        ID->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout_3->addWidget(ID);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_8);


        gridLayout->addWidget(widget_3, 0, 0, 1, 1);

        widget_5 = new QWidget(scrollAreaWidgetContents);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout_5 = new QHBoxLayout(widget_5);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_10);

        QUERY = new QPushButton(widget_5);
        QUERY->setObjectName(QString::fromUtf8("QUERY"));
        QFont font4;
        font4.setPointSize(15);
        QUERY->setFont(font4);

        horizontalLayout_5->addWidget(QUERY);

        QUERY_2 = new QPushButton(widget_5);
        QUERY_2->setObjectName(QString::fromUtf8("QUERY_2"));
        QUERY_2->setFont(font4);

        horizontalLayout_5->addWidget(QUERY_2);

        NO = new QPushButton(widget_5);
        NO->setObjectName(QString::fromUtf8("NO"));
        NO->setFont(font4);

        horizontalLayout_5->addWidget(NO);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        gridLayout->addWidget(widget_5, 1, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        table = new QTableWidget(scrollAreaWidgetContents);
        table->setObjectName(QString::fromUtf8("table"));

        verticalLayout->addWidget(table);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);

        query->setCentralWidget(centralwidget);

        retranslateUi(query);

        QMetaObject::connectSlotsByName(query);
    } // setupUi

    void retranslateUi(QMainWindow *query)
    {
        query->setWindowTitle(QCoreApplication::translate("query", "query", nullptr));
        label->setText(QCoreApplication::translate("query", "\346\237\245\350\257\242\345\215\241", nullptr));
        label_3->setText(QCoreApplication::translate("query", "\345\215\241\345\217\267", nullptr));
        QUERY->setText(QCoreApplication::translate("query", "\347\262\276\347\241\256", nullptr));
        QUERY_2->setText(QCoreApplication::translate("query", "\346\250\241\347\263\212", nullptr));
        NO->setText(QCoreApplication::translate("query", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class query: public Ui_query {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUERY_H
