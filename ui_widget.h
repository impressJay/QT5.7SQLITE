/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *name_lineEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QComboBox *sex_comboBox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QLineEdit *number_lineEdit;
    QHBoxLayout *horizontalLayout;
    QLineEdit *find_lineEdit;
    QPushButton *find_pushButton;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *delete_lineEdit;
    QPushButton *delete_pushButton;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *save_pushButton;
    QPushButton *change_pushButton;
    QPushButton *creat_sql_Button;
    QTableView *tableView;
    QPushButton *pallette;
    QGraphicsView *graphicsView;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(575, 454);
        verticalLayoutWidget = new QWidget(Widget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 10, 211, 377));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(16);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinAndMaxSize);
        verticalLayout->setContentsMargins(0, 10, 0, 20);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_3->addWidget(label);

        name_lineEdit = new QLineEdit(verticalLayoutWidget);
        name_lineEdit->setObjectName(QStringLiteral("name_lineEdit"));

        horizontalLayout_3->addWidget(name_lineEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(2);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_4->addWidget(label_2);

        sex_comboBox = new QComboBox(verticalLayoutWidget);
        sex_comboBox->setObjectName(QStringLiteral("sex_comboBox"));
        sex_comboBox->setEditable(true);

        horizontalLayout_4->addWidget(sex_comboBox);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_5->addWidget(label_3);

        number_lineEdit = new QLineEdit(verticalLayoutWidget);
        number_lineEdit->setObjectName(QStringLiteral("number_lineEdit"));

        horizontalLayout_5->addWidget(number_lineEdit);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        find_lineEdit = new QLineEdit(verticalLayoutWidget);
        find_lineEdit->setObjectName(QStringLiteral("find_lineEdit"));

        horizontalLayout->addWidget(find_lineEdit);

        find_pushButton = new QPushButton(verticalLayoutWidget);
        find_pushButton->setObjectName(QStringLiteral("find_pushButton"));

        horizontalLayout->addWidget(find_pushButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        delete_lineEdit = new QLineEdit(verticalLayoutWidget);
        delete_lineEdit->setObjectName(QStringLiteral("delete_lineEdit"));

        horizontalLayout_2->addWidget(delete_lineEdit);

        delete_pushButton = new QPushButton(verticalLayoutWidget);
        delete_pushButton->setObjectName(QStringLiteral("delete_pushButton"));

        horizontalLayout_2->addWidget(delete_pushButton);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        save_pushButton = new QPushButton(verticalLayoutWidget);
        save_pushButton->setObjectName(QStringLiteral("save_pushButton"));

        horizontalLayout_6->addWidget(save_pushButton);

        change_pushButton = new QPushButton(verticalLayoutWidget);
        change_pushButton->setObjectName(QStringLiteral("change_pushButton"));

        horizontalLayout_6->addWidget(change_pushButton);


        verticalLayout->addLayout(horizontalLayout_6);

        creat_sql_Button = new QPushButton(verticalLayoutWidget);
        creat_sql_Button->setObjectName(QStringLiteral("creat_sql_Button"));

        verticalLayout->addWidget(creat_sql_Button);

        tableView = new QTableView(Widget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(250, 10, 301, 371));
        pallette = new QPushButton(Widget);
        pallette->setObjectName(QStringLiteral("pallette"));
        pallette->setGeometry(QRect(20, 400, 75, 23));
        graphicsView = new QGraphicsView(Widget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(-40, 0, 671, 461));
        graphicsView->raise();
        verticalLayoutWidget->raise();
        tableView->raise();
        pallette->raise();

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "\345\217\266\345\255\220\346\257\205qtsql", 0));
        label->setText(QApplication::translate("Widget", "\345\247\223\345\220\215\357\274\232", 0));
        label_2->setText(QApplication::translate("Widget", "\346\200\247\345\210\253\357\274\232", 0));
        sex_comboBox->clear();
        sex_comboBox->insertItems(0, QStringList()
         << QApplication::translate("Widget", "\347\224\267", 0)
         << QApplication::translate("Widget", "\345\245\263", 0)
        );
        label_3->setText(QApplication::translate("Widget", "\345\255\246\345\217\267\357\274\232", 0));
        find_pushButton->setText(QApplication::translate("Widget", "\346\237\245\346\211\276", 0));
        delete_pushButton->setText(QApplication::translate("Widget", "\345\210\240\351\231\244", 0));
        save_pushButton->setText(QApplication::translate("Widget", "\344\277\235\345\255\230", 0));
        change_pushButton->setText(QApplication::translate("Widget", "\344\277\256\346\224\271", 0));
        creat_sql_Button->setText(QApplication::translate("Widget", "\345\210\233\345\273\272/\346\211\223\345\274\200\346\225\260\346\215\256\345\272\223", 0));
        pallette->setText(QApplication::translate("Widget", "\350\260\203\350\211\262\346\235\277", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
