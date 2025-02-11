/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *Button9;
    QPushButton *Multiply;
    QPushButton *MemClear;
    QPushButton *Equals;
    QPushButton *Button8;
    QPushButton *Button7;
    QLineEdit *Display;
    QPushButton *MemAdd;
    QPushButton *Button2;
    QPushButton *Button0;
    QPushButton *Divide;
    QPushButton *Add;
    QPushButton *Button6;
    QPushButton *Button4;
    QPushButton *Button1;
    QPushButton *Button5;
    QPushButton *MemGet;
    QPushButton *ChangeSign;
    QPushButton *Subtract;
    QPushButton *Button3;
    QPushButton *Clear;
    QStatusBar *statusbar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(480, 298);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        Button9 = new QPushButton(centralwidget);
        Button9->setObjectName("Button9");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Button9->sizePolicy().hasHeightForWidth());
        Button9->setSizePolicy(sizePolicy);
        Button9->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #C0C0C0;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: #A9A9A9;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button9, 2, 2, 1, 1);

        Multiply = new QPushButton(centralwidget);
        Multiply->setObjectName("Multiply");
        sizePolicy.setHeightForWidth(Multiply->sizePolicy().hasHeightForWidth());
        Multiply->setSizePolicy(sizePolicy);
        Multiply->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #FF8C00;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: #A9A9A9;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));

        gridLayout->addWidget(Multiply, 3, 3, 1, 1);

        MemClear = new QPushButton(centralwidget);
        MemClear->setObjectName("MemClear");
        sizePolicy.setHeightForWidth(MemClear->sizePolicy().hasHeightForWidth());
        MemClear->setSizePolicy(sizePolicy);
        MemClear->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #FF8C00;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: #A9A9A9;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));

        gridLayout->addWidget(MemClear, 3, 4, 1, 1);

        Equals = new QPushButton(centralwidget);
        Equals->setObjectName("Equals");
        sizePolicy.setHeightForWidth(Equals->sizePolicy().hasHeightForWidth());
        Equals->setSizePolicy(sizePolicy);
        Equals->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #FF8C00;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: #A9A9A9;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));

        gridLayout->addWidget(Equals, 5, 4, 1, 1);

        Button8 = new QPushButton(centralwidget);
        Button8->setObjectName("Button8");
        sizePolicy.setHeightForWidth(Button8->sizePolicy().hasHeightForWidth());
        Button8->setSizePolicy(sizePolicy);
        Button8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #C0C0C0;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: #A9A9A9;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button8, 2, 1, 1, 1);

        Button7 = new QPushButton(centralwidget);
        Button7->setObjectName("Button7");
        sizePolicy.setHeightForWidth(Button7->sizePolicy().hasHeightForWidth());
        Button7->setSizePolicy(sizePolicy);
        Button7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #C0C0C0;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: #A9A9A9;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button7, 2, 0, 1, 1);

        Display = new QLineEdit(centralwidget);
        Display->setObjectName("Display");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Display->sizePolicy().hasHeightForWidth());
        Display->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(14);
        font.setBold(true);
        Display->setFont(font);
        Display->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background-color: gray;\n"
"border: 1px solid gray;\n"
"color: #ffffff;\n"
"}"));
        Display->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(Display, 1, 0, 1, 5);

        MemAdd = new QPushButton(centralwidget);
        MemAdd->setObjectName("MemAdd");
        sizePolicy.setHeightForWidth(MemAdd->sizePolicy().hasHeightForWidth());
        MemAdd->setSizePolicy(sizePolicy);
        MemAdd->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #FF8C00;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: #A9A9A9;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));

        gridLayout->addWidget(MemAdd, 2, 4, 1, 1);

        Button2 = new QPushButton(centralwidget);
        Button2->setObjectName("Button2");
        sizePolicy.setHeightForWidth(Button2->sizePolicy().hasHeightForWidth());
        Button2->setSizePolicy(sizePolicy);
        Button2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #C0C0C0;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: #A9A9A9;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button2, 4, 1, 1, 1);

        Button0 = new QPushButton(centralwidget);
        Button0->setObjectName("Button0");
        sizePolicy.setHeightForWidth(Button0->sizePolicy().hasHeightForWidth());
        Button0->setSizePolicy(sizePolicy);
        Button0->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #C0C0C0;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: #A9A9A9;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button0, 5, 1, 1, 1);

        Divide = new QPushButton(centralwidget);
        Divide->setObjectName("Divide");
        sizePolicy.setHeightForWidth(Divide->sizePolicy().hasHeightForWidth());
        Divide->setSizePolicy(sizePolicy);
        Divide->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #FF8C00;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: #A9A9A9;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));

        gridLayout->addWidget(Divide, 2, 3, 1, 1);

        Add = new QPushButton(centralwidget);
        Add->setObjectName("Add");
        sizePolicy.setHeightForWidth(Add->sizePolicy().hasHeightForWidth());
        Add->setSizePolicy(sizePolicy);
        Add->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #FF8C00;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: #A9A9A9;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));

        gridLayout->addWidget(Add, 4, 3, 1, 1);

        Button6 = new QPushButton(centralwidget);
        Button6->setObjectName("Button6");
        sizePolicy.setHeightForWidth(Button6->sizePolicy().hasHeightForWidth());
        Button6->setSizePolicy(sizePolicy);
        Button6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #C0C0C0;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: #A9A9A9;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button6, 3, 2, 1, 1);

        Button4 = new QPushButton(centralwidget);
        Button4->setObjectName("Button4");
        sizePolicy.setHeightForWidth(Button4->sizePolicy().hasHeightForWidth());
        Button4->setSizePolicy(sizePolicy);
        Button4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #C0C0C0;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: #A9A9A9;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button4, 3, 0, 1, 1);

        Button1 = new QPushButton(centralwidget);
        Button1->setObjectName("Button1");
        sizePolicy.setHeightForWidth(Button1->sizePolicy().hasHeightForWidth());
        Button1->setSizePolicy(sizePolicy);
        Button1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #C0C0C0;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: #A9A9A9;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button1, 4, 0, 1, 1);

        Button5 = new QPushButton(centralwidget);
        Button5->setObjectName("Button5");
        sizePolicy.setHeightForWidth(Button5->sizePolicy().hasHeightForWidth());
        Button5->setSizePolicy(sizePolicy);
        Button5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #C0C0C0;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: #A9A9A9;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button5, 3, 1, 1, 1);

        MemGet = new QPushButton(centralwidget);
        MemGet->setObjectName("MemGet");
        sizePolicy.setHeightForWidth(MemGet->sizePolicy().hasHeightForWidth());
        MemGet->setSizePolicy(sizePolicy);
        MemGet->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #FF8C00;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: #A9A9A9;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));

        gridLayout->addWidget(MemGet, 4, 4, 1, 1);

        ChangeSign = new QPushButton(centralwidget);
        ChangeSign->setObjectName("ChangeSign");
        sizePolicy.setHeightForWidth(ChangeSign->sizePolicy().hasHeightForWidth());
        ChangeSign->setSizePolicy(sizePolicy);
        ChangeSign->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #C0C0C0;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: #A9A9A9;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));

        gridLayout->addWidget(ChangeSign, 5, 2, 1, 1);

        Subtract = new QPushButton(centralwidget);
        Subtract->setObjectName("Subtract");
        sizePolicy.setHeightForWidth(Subtract->sizePolicy().hasHeightForWidth());
        Subtract->setSizePolicy(sizePolicy);
        Subtract->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #FF8C00;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: #A9A9A9;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));

        gridLayout->addWidget(Subtract, 5, 3, 1, 1);

        Button3 = new QPushButton(centralwidget);
        Button3->setObjectName("Button3");
        sizePolicy.setHeightForWidth(Button3->sizePolicy().hasHeightForWidth());
        Button3->setSizePolicy(sizePolicy);
        Button3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #C0C0C0;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: #A9A9A9;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button3, 4, 2, 1, 1);

        Clear = new QPushButton(centralwidget);
        Clear->setObjectName("Clear");
        sizePolicy.setHeightForWidth(Clear->sizePolicy().hasHeightForWidth());
        Clear->setSizePolicy(sizePolicy);
        Clear->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #C0C0C0;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: #A9A9A9;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));

        gridLayout->addWidget(Clear, 5, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 480, 25));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Button9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        Multiply->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        MemClear->setText(QCoreApplication::translate("MainWindow", "M-", nullptr));
        Equals->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        Button8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        Button7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        Display->setText(QCoreApplication::translate("MainWindow", "0.0", nullptr));
        MemAdd->setText(QCoreApplication::translate("MainWindow", "M+", nullptr));
        Button2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        Button0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        Divide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        Add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        Button6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        Button4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        Button1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        Button5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        MemGet->setText(QCoreApplication::translate("MainWindow", "M", nullptr));
        ChangeSign->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        Subtract->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        Button3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        Clear->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
