/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_8;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(611, 537);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(210, 20, 111, 16));
        label->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(450, 100, 111, 16));
        label_8->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(160, 400, 181, 51));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(440, 130, 131, 21));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 100, 111, 271));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_6);

        label_7 = new QLabel(widget);
        label_7->setObjectName("label_7");
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_7);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(130, 90, 261, 291));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(widget1);
        lineEdit->setObjectName("lineEdit");

        verticalLayout_2->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(widget1);
        lineEdit_2->setObjectName("lineEdit_2");

        verticalLayout_2->addWidget(lineEdit_2);

        lineEdit_3 = new QLineEdit(widget1);
        lineEdit_3->setObjectName("lineEdit_3");

        verticalLayout_2->addWidget(lineEdit_3);

        lineEdit_4 = new QLineEdit(widget1);
        lineEdit_4->setObjectName("lineEdit_4");

        verticalLayout_2->addWidget(lineEdit_4);

        lineEdit_5 = new QLineEdit(widget1);
        lineEdit_5->setObjectName("lineEdit_5");

        verticalLayout_2->addWidget(lineEdit_5);

        lineEdit_6 = new QLineEdit(widget1);
        lineEdit_6->setObjectName("lineEdit_6");

        verticalLayout_2->addWidget(lineEdit_6);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Profile", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Photo ID", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Upload", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Choose from file", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "First Name", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Last Name", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Mobile Number", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Email ID", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Qualification", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "LinkedIn", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
