/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *menu;
    QGraphicsView *menu_graphicsView;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *iniciarJogo_pushButton;
    QPushButton *configuracoes_pushButton;
    QPushButton *sair_pushButton;
    QWidget *menuSom;
    QGraphicsView *configuracoes_graphicsView;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *musicaOff_pushButton;
    QPushButton *efeitosSonorosOff_pushButton;
    QPushButton *efeitosSonorosOn_pushButton;
    QLabel *efeitosSonoros_label;
    QLabel *musica_label;
    QPushButton *musicaOn_pushButton;
    QPushButton *voltar_pushButton;
    QWidget *fase1Exploracao;
    QGraphicsView *fase1Exploracao_graphicsView;
    QWidget *fase1Batalha;
    QLabel *item2Hero_label;
    QLabel *item4Monster_label;
    QLabel *item1Monster_label;
    QLabel *item4Hero_label;
    QLabel *hero_label;
    QLabel *item3Hero_label;
    QPushButton *item4Hero_pushButton;
    QLabel *item3Monster_label;
    QProgressBar *healthMonster_progressBar;
    QPushButton *item3Monster_pushButton;
    QLabel *item2Monster_label;
    QPushButton *item2Monster_pushButton;
    QLabel *item1Hero_label;
    QPushButton *item2Hero_pushButton;
    QPushButton *item4Monster_pushButton;
    QGraphicsView *fase1Batalha_graphicsView;
    QLabel *monster_label;
    QPushButton *item1Hero_pushButton;
    QPushButton *item3Hero_pushButton;
    QPushButton *item1Monster_pushButton;
    QProgressBar *healthHero_progressBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(5760, 3240);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 5760, 3240));
        menu = new QWidget();
        menu->setObjectName("menu");
        menu_graphicsView = new QGraphicsView(menu);
        menu_graphicsView->setObjectName("menu_graphicsView");
        menu_graphicsView->setGeometry(QRect(0, 0, 1920, 1080));
        verticalLayoutWidget = new QWidget(menu);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(240, 110, 501, 481));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        iniciarJogo_pushButton = new QPushButton(verticalLayoutWidget);
        iniciarJogo_pushButton->setObjectName("iniciarJogo_pushButton");

        verticalLayout_2->addWidget(iniciarJogo_pushButton);

        configuracoes_pushButton = new QPushButton(verticalLayoutWidget);
        configuracoes_pushButton->setObjectName("configuracoes_pushButton");

        verticalLayout_2->addWidget(configuracoes_pushButton);

        sair_pushButton = new QPushButton(verticalLayoutWidget);
        sair_pushButton->setObjectName("sair_pushButton");

        verticalLayout_2->addWidget(sair_pushButton);

        stackedWidget->addWidget(menu);
        menuSom = new QWidget();
        menuSom->setObjectName("menuSom");
        configuracoes_graphicsView = new QGraphicsView(menuSom);
        configuracoes_graphicsView->setObjectName("configuracoes_graphicsView");
        configuracoes_graphicsView->setGeometry(QRect(0, 0, 1920, 1080));
        gridLayoutWidget = new QWidget(menuSom);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(280, 110, 431, 471));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        musicaOff_pushButton = new QPushButton(gridLayoutWidget);
        musicaOff_pushButton->setObjectName("musicaOff_pushButton");

        gridLayout->addWidget(musicaOff_pushButton, 0, 2, 1, 1);

        efeitosSonorosOff_pushButton = new QPushButton(gridLayoutWidget);
        efeitosSonorosOff_pushButton->setObjectName("efeitosSonorosOff_pushButton");

        gridLayout->addWidget(efeitosSonorosOff_pushButton, 1, 2, 1, 1);

        efeitosSonorosOn_pushButton = new QPushButton(gridLayoutWidget);
        efeitosSonorosOn_pushButton->setObjectName("efeitosSonorosOn_pushButton");

        gridLayout->addWidget(efeitosSonorosOn_pushButton, 1, 1, 1, 1);

        efeitosSonoros_label = new QLabel(gridLayoutWidget);
        efeitosSonoros_label->setObjectName("efeitosSonoros_label");

        gridLayout->addWidget(efeitosSonoros_label, 1, 0, 1, 1);

        musica_label = new QLabel(gridLayoutWidget);
        musica_label->setObjectName("musica_label");

        gridLayout->addWidget(musica_label, 0, 0, 1, 1);

        musicaOn_pushButton = new QPushButton(gridLayoutWidget);
        musicaOn_pushButton->setObjectName("musicaOn_pushButton");

        gridLayout->addWidget(musicaOn_pushButton, 0, 1, 1, 1);

        voltar_pushButton = new QPushButton(gridLayoutWidget);
        voltar_pushButton->setObjectName("voltar_pushButton");

        gridLayout->addWidget(voltar_pushButton, 2, 1, 1, 1);

        stackedWidget->addWidget(menuSom);
        fase1Exploracao = new QWidget();
        fase1Exploracao->setObjectName("fase1Exploracao");
        fase1Exploracao_graphicsView = new QGraphicsView(fase1Exploracao);
        fase1Exploracao_graphicsView->setObjectName("fase1Exploracao_graphicsView");
        fase1Exploracao_graphicsView->setGeometry(QRect(0, 0, 1920, 1080));
        stackedWidget->addWidget(fase1Exploracao);
        fase1Batalha = new QWidget();
        fase1Batalha->setObjectName("fase1Batalha");
        item2Hero_label = new QLabel(fase1Batalha);
        item2Hero_label->setObjectName("item2Hero_label");
        item2Hero_label->setGeometry(QRect(300, 369, 120, 120));
        item4Monster_label = new QLabel(fase1Batalha);
        item4Monster_label->setObjectName("item4Monster_label");
        item4Monster_label->setGeometry(QRect(770, 530, 120, 120));
        item1Monster_label = new QLabel(fase1Batalha);
        item1Monster_label->setObjectName("item1Monster_label");
        item1Monster_label->setGeometry(QRect(640, 379, 120, 120));
        item4Hero_label = new QLabel(fase1Batalha);
        item4Hero_label->setObjectName("item4Hero_label");
        item4Hero_label->setGeometry(QRect(300, 520, 120, 120));
        hero_label = new QLabel(fase1Batalha);
        hero_label->setObjectName("hero_label");
        hero_label->setGeometry(QRect(170, 129, 250, 201));
        hero_label->setScaledContents(false);
        hero_label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        item3Hero_label = new QLabel(fase1Batalha);
        item3Hero_label->setObjectName("item3Hero_label");
        item3Hero_label->setGeometry(QRect(170, 520, 120, 120));
        item4Hero_pushButton = new QPushButton(fase1Batalha);
        item4Hero_pushButton->setObjectName("item4Hero_pushButton");
        item4Hero_pushButton->setGeometry(QRect(300, 520, 120, 120));
        item3Monster_label = new QLabel(fase1Batalha);
        item3Monster_label->setObjectName("item3Monster_label");
        item3Monster_label->setGeometry(QRect(640, 530, 120, 120));
        healthMonster_progressBar = new QProgressBar(fase1Batalha);
        healthMonster_progressBar->setObjectName("healthMonster_progressBar");
        healthMonster_progressBar->setGeometry(QRect(640, 80, 250, 21));
        healthMonster_progressBar->setValue(24);
        item3Monster_pushButton = new QPushButton(fase1Batalha);
        item3Monster_pushButton->setObjectName("item3Monster_pushButton");
        item3Monster_pushButton->setGeometry(QRect(640, 530, 120, 120));
        item2Monster_label = new QLabel(fase1Batalha);
        item2Monster_label->setObjectName("item2Monster_label");
        item2Monster_label->setGeometry(QRect(770, 379, 120, 120));
        item2Monster_pushButton = new QPushButton(fase1Batalha);
        item2Monster_pushButton->setObjectName("item2Monster_pushButton");
        item2Monster_pushButton->setGeometry(QRect(770, 379, 120, 120));
        item1Hero_label = new QLabel(fase1Batalha);
        item1Hero_label->setObjectName("item1Hero_label");
        item1Hero_label->setGeometry(QRect(170, 369, 120, 120));
        item2Hero_pushButton = new QPushButton(fase1Batalha);
        item2Hero_pushButton->setObjectName("item2Hero_pushButton");
        item2Hero_pushButton->setGeometry(QRect(300, 369, 120, 120));
        item4Monster_pushButton = new QPushButton(fase1Batalha);
        item4Monster_pushButton->setObjectName("item4Monster_pushButton");
        item4Monster_pushButton->setGeometry(QRect(770, 530, 120, 120));
        fase1Batalha_graphicsView = new QGraphicsView(fase1Batalha);
        fase1Batalha_graphicsView->setObjectName("fase1Batalha_graphicsView");
        fase1Batalha_graphicsView->setGeometry(QRect(0, 0, 1920, 1080));
        monster_label = new QLabel(fase1Batalha);
        monster_label->setObjectName("monster_label");
        monster_label->setGeometry(QRect(640, 129, 250, 201));
        monster_label->setLineWidth(0);
        monster_label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        monster_label->setWordWrap(false);
        monster_label->setMargin(1);
        monster_label->setIndent(0);
        monster_label->setOpenExternalLinks(true);
        monster_label->setTextInteractionFlags(Qt::TextInteractionFlag::LinksAccessibleByMouse);
        item1Hero_pushButton = new QPushButton(fase1Batalha);
        item1Hero_pushButton->setObjectName("item1Hero_pushButton");
        item1Hero_pushButton->setGeometry(QRect(170, 369, 120, 120));
        item3Hero_pushButton = new QPushButton(fase1Batalha);
        item3Hero_pushButton->setObjectName("item3Hero_pushButton");
        item3Hero_pushButton->setGeometry(QRect(170, 520, 120, 120));
        item1Monster_pushButton = new QPushButton(fase1Batalha);
        item1Monster_pushButton->setObjectName("item1Monster_pushButton");
        item1Monster_pushButton->setGeometry(QRect(640, 379, 120, 120));
        healthHero_progressBar = new QProgressBar(fase1Batalha);
        healthHero_progressBar->setObjectName("healthHero_progressBar");
        healthHero_progressBar->setGeometry(QRect(170, 80, 250, 21));
        healthHero_progressBar->setValue(24);
        stackedWidget->addWidget(fase1Batalha);
        item3Hero_pushButton->raise();
        item1Monster_pushButton->raise();
        item1Hero_pushButton->raise();
        item4Hero_pushButton->raise();
        item3Monster_pushButton->raise();
        item2Monster_pushButton->raise();
        item2Hero_pushButton->raise();
        item4Monster_pushButton->raise();
        fase1Batalha_graphicsView->raise();
        monster_label->raise();
        healthHero_progressBar->raise();
        healthMonster_progressBar->raise();
        hero_label->raise();
        item1Hero_label->raise();
        item1Monster_label->raise();
        item2Hero_label->raise();
        item2Monster_label->raise();
        item3Hero_label->raise();
        item3Monster_label->raise();
        item4Hero_label->raise();
        item4Monster_label->raise();
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        iniciarJogo_pushButton->setText(QCoreApplication::translate("MainWindow", "Iniciar Jogo", nullptr));
        configuracoes_pushButton->setText(QCoreApplication::translate("MainWindow", "Configura\303\247\303\265es", nullptr));
        sair_pushButton->setText(QCoreApplication::translate("MainWindow", "Sair", nullptr));
        musicaOff_pushButton->setText(QCoreApplication::translate("MainWindow", "OFF", nullptr));
        efeitosSonorosOff_pushButton->setText(QCoreApplication::translate("MainWindow", "OFF", nullptr));
        efeitosSonorosOn_pushButton->setText(QCoreApplication::translate("MainWindow", "ON", nullptr));
        efeitosSonoros_label->setText(QCoreApplication::translate("MainWindow", "EFEITOS SONOROS", nullptr));
        musica_label->setText(QCoreApplication::translate("MainWindow", "M\303\232SICA", nullptr));
        musicaOn_pushButton->setText(QCoreApplication::translate("MainWindow", "ON", nullptr));
        voltar_pushButton->setText(QCoreApplication::translate("MainWindow", "VOLTAR", nullptr));
        item2Hero_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        item4Monster_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        item1Monster_label->setText(QCoreApplication::translate("MainWindow", "text label", nullptr));
        item4Hero_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        hero_label->setText(QCoreApplication::translate("MainWindow", "text label", nullptr));
        item3Hero_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        item4Hero_pushButton->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        item3Monster_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        item3Monster_pushButton->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        item2Monster_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        item2Monster_pushButton->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        item1Hero_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        item2Hero_pushButton->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        item4Monster_pushButton->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        monster_label->setText(QCoreApplication::translate("MainWindow", "text label", nullptr));
        item1Hero_pushButton->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        item3Hero_pushButton->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        item1Monster_pushButton->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
