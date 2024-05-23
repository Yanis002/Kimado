/********************************************************************************
** Form generated from reading UI file 'UiMainWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UIMAINWINDOW_H
#define UIMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow {
  public:
    QWidget* centralwidget;
    QTabWidget* tabWidget;
    QWidget* actorTab;
    QGroupBox* paramGroup;
    QComboBox* actorTypeList;
    QLabel* actorTypeLabel;
    QWidget* formLayoutWidget;
    QFormLayout* paramLayout;
    QWidget* gridLayoutWidget;
    QGridLayout* paramGrid;
    QPushButton* rotYLabel;
    QLineEdit* rotYBox;
    QPushButton* rotZLabel;
    QLineEdit* rotZBox;
    QPushButton* paramLabel;
    QLineEdit* rotXBox;
    QLineEdit* paramBox;
    QPushButton* rotXLabel;
    QCheckBox* evalParamBox;
    QCheckBox* ignoreTiedBox;
    QGroupBox* groupBox;
    QWidget* gridLayoutWidget_2;
    QGridLayout* optionsGrid;
    QPushButton* editActorBtn;
    QPushButton* openActorFileBtn;
    QPushButton* saveActorFileBtn;
    QPushButton* addActorBtn;
    QPushButton* deleteActorBtn;
    QPushButton* deleteAllBtn;
    QGroupBox* searchGroup;
    QWidget* verticalLayoutWidget;
    QVBoxLayout* searchLayout;
    QLineEdit* searchBox;
    QListWidget* actorFoundBox;
    QComboBox* actorCategoryList;
    QLabel* actorFoundLabel;
    QWidget* flagTab;
    QWidget* statTab;

    void setupUi(QMainWindow* MainWindow) {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(571, 504);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(571, 504));
        MainWindow->setMaximumSize(QSize(571, 504));
        QIcon icon;
        icon.addFile(QString::fromUtf8("logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setToolButtonStyle(Qt::ToolButtonIconOnly);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setGeometry(QRect(0, 0, 581, 511));
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setDocumentMode(true);
        actorTab = new QWidget();
        actorTab->setObjectName(QString::fromUtf8("actorTab"));
        paramGroup = new QGroupBox(actorTab);
        paramGroup->setObjectName(QString::fromUtf8("paramGroup"));
        paramGroup->setGeometry(QRect(250, 10, 311, 461));
        actorTypeList = new QComboBox(paramGroup);
        actorTypeList->setObjectName(QString::fromUtf8("actorTypeList"));
        actorTypeList->setEnabled(false);
        actorTypeList->setGeometry(QRect(80, 30, 221, 21));
        actorTypeLabel = new QLabel(paramGroup);
        actorTypeLabel->setObjectName(QString::fromUtf8("actorTypeLabel"));
        actorTypeLabel->setGeometry(QRect(10, 30, 61, 21));
        formLayoutWidget = new QWidget(paramGroup);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 60, 291, 191));
        paramLayout = new QFormLayout(formLayoutWidget);
        paramLayout->setObjectName(QString::fromUtf8("paramLayout"));
        paramLayout->setContentsMargins(0, 0, 0, 0);
        gridLayoutWidget = new QWidget(paramGroup);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 260, 291, 191));
        paramGrid = new QGridLayout(gridLayoutWidget);
        paramGrid->setObjectName(QString::fromUtf8("paramGrid"));
        paramGrid->setHorizontalSpacing(6);
        paramGrid->setVerticalSpacing(8);
        paramGrid->setContentsMargins(0, 0, 0, 0);
        rotYLabel = new QPushButton(gridLayoutWidget);
        rotYLabel->setObjectName(QString::fromUtf8("rotYLabel"));
        rotYLabel->setAcceptDrops(false);
        rotYLabel->setAutoFillBackground(false);
        rotYLabel->setCheckable(false);
        rotYLabel->setFlat(true);

        paramGrid->addWidget(rotYLabel, 3, 0, 1, 1);

        rotYBox = new QLineEdit(gridLayoutWidget);
        rotYBox->setObjectName(QString::fromUtf8("rotYBox"));
        rotYBox->setEnabled(false);
        rotYBox->setReadOnly(false);

        paramGrid->addWidget(rotYBox, 3, 1, 1, 1);

        rotZLabel = new QPushButton(gridLayoutWidget);
        rotZLabel->setObjectName(QString::fromUtf8("rotZLabel"));
        rotZLabel->setAcceptDrops(false);
        rotZLabel->setAutoFillBackground(false);
        rotZLabel->setCheckable(false);
        rotZLabel->setFlat(true);

        paramGrid->addWidget(rotZLabel, 4, 0, 1, 1);

        rotZBox = new QLineEdit(gridLayoutWidget);
        rotZBox->setObjectName(QString::fromUtf8("rotZBox"));
        rotZBox->setEnabled(false);
        rotZBox->setReadOnly(false);

        paramGrid->addWidget(rotZBox, 4, 1, 1, 1);

        paramLabel = new QPushButton(gridLayoutWidget);
        paramLabel->setObjectName(QString::fromUtf8("paramLabel"));
        paramLabel->setAcceptDrops(false);
        paramLabel->setAutoFillBackground(false);
        paramLabel->setCheckable(false);
        paramLabel->setFlat(true);

        paramGrid->addWidget(paramLabel, 1, 0, 1, 1);

        rotXBox = new QLineEdit(gridLayoutWidget);
        rotXBox->setObjectName(QString::fromUtf8("rotXBox"));
        rotXBox->setEnabled(false);
        rotXBox->setReadOnly(false);

        paramGrid->addWidget(rotXBox, 2, 1, 1, 1);

        paramBox = new QLineEdit(gridLayoutWidget);
        paramBox->setObjectName(QString::fromUtf8("paramBox"));
        paramBox->setReadOnly(false);
        paramBox->setClearButtonEnabled(false);

        paramGrid->addWidget(paramBox, 1, 1, 1, 1);

        rotXLabel = new QPushButton(gridLayoutWidget);
        rotXLabel->setObjectName(QString::fromUtf8("rotXLabel"));
        rotXLabel->setAcceptDrops(false);
        rotXLabel->setAutoFillBackground(false);
        rotXLabel->setCheckable(false);
        rotXLabel->setFlat(true);

        paramGrid->addWidget(rotXLabel, 2, 0, 1, 1);

        evalParamBox = new QCheckBox(gridLayoutWidget);
        evalParamBox->setObjectName(QString::fromUtf8("evalParamBox"));
        evalParamBox->setTristate(false);

        paramGrid->addWidget(evalParamBox, 0, 0, 1, 1);

        ignoreTiedBox = new QCheckBox(gridLayoutWidget);
        ignoreTiedBox->setObjectName(QString::fromUtf8("ignoreTiedBox"));

        paramGrid->addWidget(ignoreTiedBox, 0, 1, 1, 1);

        groupBox = new QGroupBox(actorTab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 330, 221, 141));
        gridLayoutWidget_2 = new QWidget(groupBox);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 22, 201, 111));
        optionsGrid = new QGridLayout(gridLayoutWidget_2);
        optionsGrid->setSpacing(6);
        optionsGrid->setObjectName(QString::fromUtf8("optionsGrid"));
        optionsGrid->setContentsMargins(0, 0, 0, 0);
        editActorBtn = new QPushButton(gridLayoutWidget_2);
        editActorBtn->setObjectName(QString::fromUtf8("editActorBtn"));
        editActorBtn->setEnabled(false);

        optionsGrid->addWidget(editActorBtn, 1, 1, 1, 1);

        openActorFileBtn = new QPushButton(gridLayoutWidget_2);
        openActorFileBtn->setObjectName(QString::fromUtf8("openActorFileBtn"));

        optionsGrid->addWidget(openActorFileBtn, 0, 0, 1, 1);

        saveActorFileBtn = new QPushButton(gridLayoutWidget_2);
        saveActorFileBtn->setObjectName(QString::fromUtf8("saveActorFileBtn"));

        optionsGrid->addWidget(saveActorFileBtn, 0, 1, 1, 1);

        addActorBtn = new QPushButton(gridLayoutWidget_2);
        addActorBtn->setObjectName(QString::fromUtf8("addActorBtn"));
        addActorBtn->setEnabled(false);

        optionsGrid->addWidget(addActorBtn, 1, 0, 1, 1);

        deleteActorBtn = new QPushButton(gridLayoutWidget_2);
        deleteActorBtn->setObjectName(QString::fromUtf8("deleteActorBtn"));

        optionsGrid->addWidget(deleteActorBtn, 2, 0, 1, 1);

        deleteAllBtn = new QPushButton(gridLayoutWidget_2);
        deleteAllBtn->setObjectName(QString::fromUtf8("deleteAllBtn"));

        optionsGrid->addWidget(deleteAllBtn, 2, 1, 1, 1);

        searchGroup = new QGroupBox(actorTab);
        searchGroup->setObjectName(QString::fromUtf8("searchGroup"));
        searchGroup->setGeometry(QRect(10, 10, 221, 311));
        searchGroup->setAlignment(Qt::AlignLeading | Qt::AlignLeft | Qt::AlignTop);
        searchGroup->setFlat(false);
        searchGroup->setCheckable(false);
        verticalLayoutWidget = new QWidget(searchGroup);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 30, 201, 271));
        searchLayout = new QVBoxLayout(verticalLayoutWidget);
        searchLayout->setObjectName(QString::fromUtf8("searchLayout"));
        searchLayout->setContentsMargins(0, 0, 0, 0);
        searchBox = new QLineEdit(verticalLayoutWidget);
        searchBox->setObjectName(QString::fromUtf8("searchBox"));

        searchLayout->addWidget(searchBox);

        actorFoundBox = new QListWidget(verticalLayoutWidget);
        actorFoundBox->setObjectName(QString::fromUtf8("actorFoundBox"));

        searchLayout->addWidget(actorFoundBox);

        actorCategoryList = new QComboBox(verticalLayoutWidget);
        actorCategoryList->setObjectName(QString::fromUtf8("actorCategoryList"));

        searchLayout->addWidget(actorCategoryList);

        actorFoundLabel = new QLabel(verticalLayoutWidget);
        actorFoundLabel->setObjectName(QString::fromUtf8("actorFoundLabel"));

        searchLayout->addWidget(actorFoundLabel);

        tabWidget->addTab(actorTab, QString());
        flagTab = new QWidget();
        flagTab->setObjectName(QString::fromUtf8("flagTab"));
        tabWidget->addTab(flagTab, QString());
        statTab = new QWidget();
        statTab->setObjectName(QString::fromUtf8("statTab"));
        tabWidget->addTab(statTab, QString());
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        rotYLabel->setDefault(false);
        rotZLabel->setDefault(false);
        paramLabel->setDefault(false);
        rotXLabel->setDefault(false);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow* MainWindow) {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Cole - OoT Mod Helper", nullptr));
        paramGroup->setTitle(QCoreApplication::translate("MainWindow", "Parameters", nullptr));
        actorTypeLabel->setText(QCoreApplication::translate("MainWindow", "Actor Type", nullptr));
        rotYLabel->setText(QCoreApplication::translate("MainWindow", "Rot Y", nullptr));
        rotZLabel->setText(QCoreApplication::translate("MainWindow", "Rot Z", nullptr));
        paramLabel->setText(QCoreApplication::translate("MainWindow", "Parameters", nullptr));
        rotXLabel->setText(QCoreApplication::translate("MainWindow", "Rot X", nullptr));
        evalParamBox->setText(QCoreApplication::translate("MainWindow", "Eval Params", nullptr));
        ignoreTiedBox->setText(QCoreApplication::translate("MainWindow", "Ignore Tied Params", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Options", nullptr));
        editActorBtn->setText(QCoreApplication::translate("MainWindow", "Edit Actor", nullptr));
        openActorFileBtn->setText(QCoreApplication::translate("MainWindow", "Open Actor File", nullptr));
        saveActorFileBtn->setText(QCoreApplication::translate("MainWindow", "Save Actor File", nullptr));
        addActorBtn->setText(QCoreApplication::translate("MainWindow", "Add Actor", nullptr));
        deleteActorBtn->setText(QCoreApplication::translate("MainWindow", "Delete Actor", nullptr));
        deleteAllBtn->setText(QCoreApplication::translate("MainWindow", "Delete All", nullptr));
        searchGroup->setTitle(QCoreApplication::translate("MainWindow", "Search Actor", nullptr));
#if QT_CONFIG(tooltip)
        searchBox->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        searchBox->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
        searchBox->setPlaceholderText(QCoreApplication::translate("MainWindow", "Search...", nullptr));
        actorFoundLabel->setText(QCoreApplication::translate("MainWindow", "Found: 0", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(actorTab),
                              QCoreApplication::translate("MainWindow", "Actors", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(flagTab), QCoreApplication::translate("MainWindow", "Flags", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(statTab),
                              QCoreApplication::translate("MainWindow", "Statistics", nullptr));
    } // retranslateUi
};

namespace Ui {
class MainWindow : public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UIMAINWINDOW_H
