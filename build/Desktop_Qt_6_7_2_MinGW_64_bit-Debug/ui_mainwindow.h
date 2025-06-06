/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *valueEdit;
    QLabel *outpuLabel;
    QPushButton *swapButton;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *currentBase;
    QLabel *toBase;
    QVBoxLayout *verticalLayout_3;
    QComboBox *currentBaseBox;
    QComboBox *toBaseBox;
    QPushButton *exitButton;
    QSpacerItem *verticalSpacer;
    QPushButton *initializeButton;
    QPushButton *copyButton;
    QPushButton *convertedButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(672, 221);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("background-color:rgb(0, 191, 255);"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        valueEdit = new QLineEdit(centralwidget);
        valueEdit->setObjectName("valueEdit");
        valueEdit->setMinimumSize(QSize(0, 40));
        valueEdit->setMaximumSize(QSize(16777215, 40));
        QFont font;
        font.setFamilies({QString::fromUtf8("Bahnschrift")});
        font.setPointSize(13);
        font.setBold(true);
        valueEdit->setFont(font);
        valueEdit->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        valueEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"    color:black;\n"
"    background-color: rgb(255,255,255);\n"
"    border-radius: 5px;\n"
"    border: 3px solid red;\n"
"}\n"
"QLineEdit:hover{\n"
"    font-size: 15;\n"
"    color:black;\n"
"    background-color: rgb(245,245,245);\n"
"    border-radius: 5px;\n"
"    border: 3px solid rgba(130, 46, 80, 1);\n"
"}\n"
""));
        valueEdit->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout_4->addWidget(valueEdit);

        outpuLabel = new QLabel(centralwidget);
        outpuLabel->setObjectName("outpuLabel");
        outpuLabel->setMinimumSize(QSize(0, 40));
        outpuLabel->setMaximumSize(QSize(16777215, 40));
        outpuLabel->setFont(font);
        outpuLabel->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        outpuLabel->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    font-size: 15;\n"
"    color:black;\n"
"    background-color: rgb(255,255,255);\n"
"    border: 3px solid red;\n"
"    border-radius: 5px;\n"
"}\n"
"QLabel:hover{\n"
"   font-size: 15;\n"
"    color:black;\n"
"    background-color: rgb(245,245,245);\n"
"    border: 3px solid rgba(130, 46, 80, 1);\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
""));
        outpuLabel->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout_4->addWidget(outpuLabel);


        horizontalLayout_2->addLayout(verticalLayout_4);

        swapButton = new QPushButton(centralwidget);
        swapButton->setObjectName("swapButton");
        swapButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    float: right;\n"
"    margin-right: 3%;\n"
"    margin-top: 5px;\n"
"    border-radius: 5px;\n"
"    padding: 5px 9px;\n"
"    font-size: 1.2em;\n"
"    background-color: rgba(236, 101, 80, 1);\n"
"    border-bottom: 4px solid rgba(217, 91, 72, 1);\n"
"    color:white;\n"
"    font-family: 'Roboto Slab', serif;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"    width: 20px;\n"
"    float: right;\n"
"    margin-right: 3%;\n"
"    margin-top: 10px;\n"
"    border-radius: 5px;\n"
"    padding: 5px 9px;\n"
"    font-size: 1.2em;\n"
"    background-color: rgba(130, 46, 80, 1);\n"
"    border-bottom: 4px solid rgba(130, 46, 80, 1);\n"
"    color:white;\n"
"    font-family: 'Roboto Slab', serif;\n"
"}\n"
""));

        horizontalLayout_2->addWidget(swapButton);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        currentBase = new QLabel(centralwidget);
        currentBase->setObjectName("currentBase");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Roboto Slab")});
        font1.setPointSize(11);
        font1.setBold(true);
        currentBase->setFont(font1);
        currentBase->setStyleSheet(QString::fromUtf8("color:black;\n"
"font-family: 'Roboto Slab', serif;\n"
""));
        currentBase->setMargin(2);

        verticalLayout_2->addWidget(currentBase);

        toBase = new QLabel(centralwidget);
        toBase->setObjectName("toBase");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Roboto Slab")});
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setKerning(true);
        toBase->setFont(font2);
        toBase->setStyleSheet(QString::fromUtf8("color:black;\n"
"font-family: 'Roboto Slab', serif;\n"
""));

        verticalLayout_2->addWidget(toBase);


        horizontalLayout_4->addLayout(verticalLayout_2);


        horizontalLayout_5->addLayout(horizontalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        currentBaseBox = new QComboBox(centralwidget);
        currentBaseBox->addItem(QString());
        currentBaseBox->addItem(QString());
        currentBaseBox->addItem(QString());
        currentBaseBox->addItem(QString());
        currentBaseBox->addItem(QString());
        currentBaseBox->addItem(QString());
        currentBaseBox->addItem(QString());
        currentBaseBox->addItem(QString());
        currentBaseBox->addItem(QString());
        currentBaseBox->addItem(QString());
        currentBaseBox->addItem(QString());
        currentBaseBox->addItem(QString());
        currentBaseBox->addItem(QString());
        currentBaseBox->addItem(QString());
        currentBaseBox->addItem(QString());
        currentBaseBox->addItem(QString());
        currentBaseBox->addItem(QString());
        currentBaseBox->addItem(QString());
        currentBaseBox->addItem(QString());
        currentBaseBox->addItem(QString());
        currentBaseBox->addItem(QString());
        currentBaseBox->addItem(QString());
        currentBaseBox->addItem(QString());
        currentBaseBox->addItem(QString());
        currentBaseBox->addItem(QString());
        currentBaseBox->addItem(QString());
        currentBaseBox->addItem(QString());
        currentBaseBox->addItem(QString());
        currentBaseBox->addItem(QString());
        currentBaseBox->addItem(QString());
        currentBaseBox->addItem(QString());
        currentBaseBox->addItem(QString());
        currentBaseBox->addItem(QString());
        currentBaseBox->addItem(QString());
        currentBaseBox->addItem(QString());
        currentBaseBox->setObjectName("currentBaseBox");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Roboto Slab")});
        font3.setPointSize(8);
        font3.setBold(true);
        currentBaseBox->setFont(font3);
        currentBaseBox->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        currentBaseBox->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"    float: right;\n"
"    margin-right: 3%;\n"
"    margin-top: 5px;\n"
"    border-radius: 5px;\n"
"    padding: 5px 9px;\n"
"    font-size: 1.2em;\n"
"    background-color: rgba(236, 101, 80, 1);\n"
"    border-bottom: 4px solid rgba(217, 91, 72, 1);\n"
"    color:black;\n"
"    font-family: 'Roboto Slab', serif;\n"
"}\n"
"QComboBox:hover{\n"
"      float: right;\n"
"    margin-right: 3%;\n"
"    margin-top: 10px;\n"
"    border-radius: 5px;\n"
"    padding: 5px 9px;\n"
"    font-size: 1.2em;\n"
"    background-color: rgba(130, 46, 80, 1);\n"
"    border-bottom: 4px solid rgba(130, 46, 80, 1);\n"
"    color:white;\n"
"   font-family: 'Roboto Slab', serif;\n"
"}"));

        verticalLayout_3->addWidget(currentBaseBox);

        toBaseBox = new QComboBox(centralwidget);
        toBaseBox->addItem(QString());
        toBaseBox->addItem(QString());
        toBaseBox->addItem(QString());
        toBaseBox->addItem(QString());
        toBaseBox->addItem(QString());
        toBaseBox->addItem(QString());
        toBaseBox->addItem(QString());
        toBaseBox->addItem(QString());
        toBaseBox->addItem(QString());
        toBaseBox->addItem(QString());
        toBaseBox->addItem(QString());
        toBaseBox->addItem(QString());
        toBaseBox->addItem(QString());
        toBaseBox->addItem(QString());
        toBaseBox->addItem(QString());
        toBaseBox->addItem(QString());
        toBaseBox->addItem(QString());
        toBaseBox->addItem(QString());
        toBaseBox->addItem(QString());
        toBaseBox->addItem(QString());
        toBaseBox->addItem(QString());
        toBaseBox->addItem(QString());
        toBaseBox->addItem(QString());
        toBaseBox->addItem(QString());
        toBaseBox->addItem(QString());
        toBaseBox->addItem(QString());
        toBaseBox->addItem(QString());
        toBaseBox->addItem(QString());
        toBaseBox->addItem(QString());
        toBaseBox->addItem(QString());
        toBaseBox->addItem(QString());
        toBaseBox->addItem(QString());
        toBaseBox->addItem(QString());
        toBaseBox->addItem(QString());
        toBaseBox->addItem(QString());
        toBaseBox->setObjectName("toBaseBox");
        toBaseBox->setFont(font3);
        toBaseBox->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        toBaseBox->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"    float: right;\n"
"    margin-right: 3%;\n"
"    margin-top: 5px;\n"
"    border-radius: 5px;\n"
"    padding: 5px 9px;\n"
"    font-size: 1.2em;\n"
"    background-color: rgba(236, 101, 80, 1);\n"
"    border-bottom: 4px solid rgba(217, 91, 72, 1);\n"
"    color:black;\n"
"    font-family: 'Roboto Slab', serif;\n"
"}\n"
"QComboBox:hover{\n"
"      float: right;\n"
"    margin-right: 3%;\n"
"    margin-top: 10px;\n"
"    border-radius: 5px;\n"
"    padding: 5px 9px;\n"
"    font-size: 1.2em;\n"
"    background-color: rgba(130, 46, 80, 1);\n"
"    border-bottom: 4px solid rgba(130, 46, 80, 1);\n"
"    color:white;\n"
"   font-family: 'Roboto Slab', serif;\n"
"}"));

        verticalLayout_3->addWidget(toBaseBox);


        horizontalLayout_5->addLayout(verticalLayout_3);


        horizontalLayout_2->addLayout(horizontalLayout_5);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 3);

        exitButton = new QPushButton(centralwidget);
        exitButton->setObjectName("exitButton");
        exitButton->setMinimumSize(QSize(100, 40));
        exitButton->setFont(font3);
        exitButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        exitButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   float: right;\n"
"    margin-right: 3%;\n"
"    margin-top: 5px;\n"
"    border-radius: 5px;\n"
"    padding: 2px 9px;\n"
"    font-size: 1.2em;\n"
"    background-color: rgba(236, 101, 80, 1);\n"
"    border-bottom: 4px solid rgba(217, 91, 72, 1);\n"
"    color:white;\n"
"   font-family: 'Roboto Slab', serif;\n"
"}\n"
"QPushButton:hover{\n"
"      float: right;\n"
"    margin-right: 3%;\n"
"    margin-top: 10px;\n"
"    border-radius: 5px;\n"
"    padding: 2px 9px;\n"
"    font-size: 1.2em;\n"
"    background-color: rgba(130, 46, 80, 1);\n"
"    border-bottom: 4px solid rgba(130, 46, 80, 1);\n"
"    color:white;\n"
"   font-family: 'Roboto Slab', serif;\n"
"}"));

        gridLayout->addWidget(exitButton, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(13, 51, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 1, 1, 1);

        initializeButton = new QPushButton(centralwidget);
        initializeButton->setObjectName("initializeButton");
        initializeButton->setMinimumSize(QSize(100, 40));
        initializeButton->setFont(font3);
        initializeButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        initializeButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"float: right;\n"
"margin-right: 3%;\n"
"margin-top: 5px;\n"
"border-radius: 5px;\n"
"padding: 2px 9px;\n"
"font-size: 1.2em;\n"
"background-color: rgba(236, 101, 80, 1);\n"
"border-bottom: 4px solid rgba(217, 91, 72, 1);\n"
"color:white;\n"
"font-family: 'Roboto Slab', serif;\n"
"}\n"
"QPushButton:hover{\n"
"      float: right;\n"
"    margin-right: 3%;\n"
"    margin-top: 10px;\n"
"    border-radius: 5px;\n"
"    padding: 2px 9px;\n"
"    font-size: 1.2em;\n"
"    background-color: rgba(130, 46, 80, 1);\n"
"    border-bottom: 4px solid rgba(130, 46, 80, 1);\n"
"    color:white;\n"
"   font-family: 'Roboto Slab', serif;\n"
"}"));

        gridLayout->addWidget(initializeButton, 1, 2, 1, 1);

        copyButton = new QPushButton(centralwidget);
        copyButton->setObjectName("copyButton");
        copyButton->setMinimumSize(QSize(100, 40));
        copyButton->setFont(font3);
        copyButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        copyButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    float: right;\n"
"    margin-right: 3%;\n"
"    margin-top: 5px;\n"
"    border-radius: 5px;\n"
"    padding: 3px 9px;\n"
"    font-size: 1.2em;\n"
"    background-color: rgba(236, 101, 80, 1);\n"
"    border-bottom: 4px solid rgba(217, 91, 72, 1);\n"
"    color:white;\n"
"    font-family: 'Roboto Slab', serif;\n"
"}\n"
"QPushButton:hover{\n"
"    float: right;\n"
"    margin-right: 3%;\n"
"    margin-top: 10px;\n"
"    border-radius: 5px;\n"
"    padding: 3px 9px;\n"
"    font-size: 1.2em;\n"
"    background-color: rgba(130, 46, 80, 1);\n"
"    border-bottom: 4px solidrgba(130, 46, 80, 1);\n"
"    color:white;\n"
"    font-family: 'Roboto Slab', serif;\n"
"}"));

        gridLayout->addWidget(copyButton, 2, 0, 1, 1);

        convertedButton = new QPushButton(centralwidget);
        convertedButton->setObjectName("convertedButton");
        convertedButton->setMinimumSize(QSize(100, 40));
        convertedButton->setFont(font3);
        convertedButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        convertedButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    float: right;\n"
"    margin-right: 3%;\n"
"    margin-top: 5px;\n"
"    border-radius: 5px;\n"
"    padding: 5px 9px;\n"
"    font-size: 1.2em;\n"
"    background-color: rgba(236, 101, 80, 1);\n"
"    border-bottom: 4px solid rgba(217, 91, 72, 1);\n"
"    color:white;\n"
"    font-family: 'Roboto Slab', serif;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"    width: 20px;\n"
"    float: right;\n"
"    margin-right: 3%;\n"
"    margin-top: 10px;\n"
"    border-radius: 5px;\n"
"    padding: 5px 9px;\n"
"    font-size: 1.2em;\n"
"    background-color: rgba(130, 46, 80, 1);\n"
"    border-bottom: 4px solid rgba(130, 46, 80, 1);\n"
"    color:white;\n"
"    font-family: 'Roboto Slab', serif;\n"
"}\n"
""));

        gridLayout->addWidget(convertedButton, 2, 2, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);
        QObject::connect(exitButton, &QPushButton::clicked, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        valueEdit->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        outpuLabel->setText(QString());
        swapButton->setText(QCoreApplication::translate("MainWindow", "<>", nullptr));
        currentBase->setText(QCoreApplication::translate("MainWindow", "\320\230\320\267 \320\276\321\201\320\275\320\276\320\262\320\260\320\275\320\270\321\217:", nullptr));
        toBase->setText(QCoreApplication::translate("MainWindow", "\320\222 \320\276\321\201\320\275\320\276\320\262\320\260\320\275\320\270\320\265:", nullptr));
        currentBaseBox->setItemText(0, QCoreApplication::translate("MainWindow", "10", nullptr));
        currentBaseBox->setItemText(1, QCoreApplication::translate("MainWindow", "2", nullptr));
        currentBaseBox->setItemText(2, QCoreApplication::translate("MainWindow", "3", nullptr));
        currentBaseBox->setItemText(3, QCoreApplication::translate("MainWindow", "4", nullptr));
        currentBaseBox->setItemText(4, QCoreApplication::translate("MainWindow", "5", nullptr));
        currentBaseBox->setItemText(5, QCoreApplication::translate("MainWindow", "6", nullptr));
        currentBaseBox->setItemText(6, QCoreApplication::translate("MainWindow", "7", nullptr));
        currentBaseBox->setItemText(7, QCoreApplication::translate("MainWindow", "8", nullptr));
        currentBaseBox->setItemText(8, QCoreApplication::translate("MainWindow", "9", nullptr));
        currentBaseBox->setItemText(9, QCoreApplication::translate("MainWindow", "11", nullptr));
        currentBaseBox->setItemText(10, QCoreApplication::translate("MainWindow", "12", nullptr));
        currentBaseBox->setItemText(11, QCoreApplication::translate("MainWindow", "13", nullptr));
        currentBaseBox->setItemText(12, QCoreApplication::translate("MainWindow", "14", nullptr));
        currentBaseBox->setItemText(13, QCoreApplication::translate("MainWindow", "15", nullptr));
        currentBaseBox->setItemText(14, QCoreApplication::translate("MainWindow", "16", nullptr));
        currentBaseBox->setItemText(15, QCoreApplication::translate("MainWindow", "17", nullptr));
        currentBaseBox->setItemText(16, QCoreApplication::translate("MainWindow", "18", nullptr));
        currentBaseBox->setItemText(17, QCoreApplication::translate("MainWindow", "19", nullptr));
        currentBaseBox->setItemText(18, QCoreApplication::translate("MainWindow", "20", nullptr));
        currentBaseBox->setItemText(19, QCoreApplication::translate("MainWindow", "21", nullptr));
        currentBaseBox->setItemText(20, QCoreApplication::translate("MainWindow", "22", nullptr));
        currentBaseBox->setItemText(21, QCoreApplication::translate("MainWindow", "23", nullptr));
        currentBaseBox->setItemText(22, QCoreApplication::translate("MainWindow", "24", nullptr));
        currentBaseBox->setItemText(23, QCoreApplication::translate("MainWindow", "25", nullptr));
        currentBaseBox->setItemText(24, QCoreApplication::translate("MainWindow", "26", nullptr));
        currentBaseBox->setItemText(25, QCoreApplication::translate("MainWindow", "27", nullptr));
        currentBaseBox->setItemText(26, QCoreApplication::translate("MainWindow", "28", nullptr));
        currentBaseBox->setItemText(27, QCoreApplication::translate("MainWindow", "29", nullptr));
        currentBaseBox->setItemText(28, QCoreApplication::translate("MainWindow", "30", nullptr));
        currentBaseBox->setItemText(29, QCoreApplication::translate("MainWindow", "31", nullptr));
        currentBaseBox->setItemText(30, QCoreApplication::translate("MainWindow", "32", nullptr));
        currentBaseBox->setItemText(31, QCoreApplication::translate("MainWindow", "33", nullptr));
        currentBaseBox->setItemText(32, QCoreApplication::translate("MainWindow", "34", nullptr));
        currentBaseBox->setItemText(33, QCoreApplication::translate("MainWindow", "35", nullptr));
        currentBaseBox->setItemText(34, QCoreApplication::translate("MainWindow", "36", nullptr));

        toBaseBox->setItemText(0, QCoreApplication::translate("MainWindow", "10", nullptr));
        toBaseBox->setItemText(1, QCoreApplication::translate("MainWindow", "2", nullptr));
        toBaseBox->setItemText(2, QCoreApplication::translate("MainWindow", "3", nullptr));
        toBaseBox->setItemText(3, QCoreApplication::translate("MainWindow", "4", nullptr));
        toBaseBox->setItemText(4, QCoreApplication::translate("MainWindow", "5", nullptr));
        toBaseBox->setItemText(5, QCoreApplication::translate("MainWindow", "6", nullptr));
        toBaseBox->setItemText(6, QCoreApplication::translate("MainWindow", "7", nullptr));
        toBaseBox->setItemText(7, QCoreApplication::translate("MainWindow", "8", nullptr));
        toBaseBox->setItemText(8, QCoreApplication::translate("MainWindow", "9", nullptr));
        toBaseBox->setItemText(9, QCoreApplication::translate("MainWindow", "11", nullptr));
        toBaseBox->setItemText(10, QCoreApplication::translate("MainWindow", "12", nullptr));
        toBaseBox->setItemText(11, QCoreApplication::translate("MainWindow", "13", nullptr));
        toBaseBox->setItemText(12, QCoreApplication::translate("MainWindow", "14", nullptr));
        toBaseBox->setItemText(13, QCoreApplication::translate("MainWindow", "15", nullptr));
        toBaseBox->setItemText(14, QCoreApplication::translate("MainWindow", "16", nullptr));
        toBaseBox->setItemText(15, QCoreApplication::translate("MainWindow", "17", nullptr));
        toBaseBox->setItemText(16, QCoreApplication::translate("MainWindow", "18", nullptr));
        toBaseBox->setItemText(17, QCoreApplication::translate("MainWindow", "19", nullptr));
        toBaseBox->setItemText(18, QCoreApplication::translate("MainWindow", "20", nullptr));
        toBaseBox->setItemText(19, QCoreApplication::translate("MainWindow", "21", nullptr));
        toBaseBox->setItemText(20, QCoreApplication::translate("MainWindow", "22", nullptr));
        toBaseBox->setItemText(21, QCoreApplication::translate("MainWindow", "23", nullptr));
        toBaseBox->setItemText(22, QCoreApplication::translate("MainWindow", "24", nullptr));
        toBaseBox->setItemText(23, QCoreApplication::translate("MainWindow", "25", nullptr));
        toBaseBox->setItemText(24, QCoreApplication::translate("MainWindow", "26", nullptr));
        toBaseBox->setItemText(25, QCoreApplication::translate("MainWindow", "27", nullptr));
        toBaseBox->setItemText(26, QCoreApplication::translate("MainWindow", "28", nullptr));
        toBaseBox->setItemText(27, QCoreApplication::translate("MainWindow", "29", nullptr));
        toBaseBox->setItemText(28, QCoreApplication::translate("MainWindow", "30", nullptr));
        toBaseBox->setItemText(29, QCoreApplication::translate("MainWindow", "31", nullptr));
        toBaseBox->setItemText(30, QCoreApplication::translate("MainWindow", "32", nullptr));
        toBaseBox->setItemText(31, QCoreApplication::translate("MainWindow", "33", nullptr));
        toBaseBox->setItemText(32, QCoreApplication::translate("MainWindow", "34", nullptr));
        toBaseBox->setItemText(33, QCoreApplication::translate("MainWindow", "35", nullptr));
        toBaseBox->setItemText(34, QCoreApplication::translate("MainWindow", "36", nullptr));

        exitButton->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        initializeButton->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        copyButton->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\277\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        convertedButton->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\275\320\262\320\265\321\200\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
