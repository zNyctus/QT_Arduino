#include "fase1exploracao.h"
#include <QGraphicsView>

Fase1Exploracao::Fase1Exploracao(QObject *parent)
    : QObject(parent),
    scene(new QGraphicsScene(0, 0, 5760, 3240)) // Tamanho total do mapa

{
}

void Fase1Exploracao::iniciarFase(QGraphicsView *view)
{
    // LEMBRETE : OS QPIXMAP QUE VÊM DEPOIS, FICAM EM CIMA DOS ANTERIORES!!
    QPixmap backgroundPixmap(":/fase1/sprites/fase1/tilesetOpenGameBackground.png");
    QPixmap scaledBackgroundPixmap = backgroundPixmap.scaled(5760, 3240, Qt::KeepAspectRatioByExpanding);
    QGraphicsPixmapItem *backgroundItem = new QGraphicsPixmapItem(scaledBackgroundPixmap);
    backgroundItem->setPos(0, 0);
    scene->addItem(backgroundItem);

    QPixmap characterPixmap(":/personagem/sprites/personagem/paradoE.png");
    QGraphicsPixmapItem *spriteItem = new QGraphicsPixmapItem(characterPixmap);
    spriteItem->setPos(0, 2900);
    scene->addItem(spriteItem);

    QPixmap piso1Pixmap(":/fase1/sprites/fase1/piso1_img.png");
    QGraphicsPixmapItem *piso1 = new QGraphicsPixmapItem(piso1Pixmap);
    piso1->setPos(0, 3040);
    scene->addItem(piso1);

    if (!characterPixmap.isNull()) {
        qDebug() << "Imagem carregada corretamente!";
    } else {
        qDebug() << "Falha ao carregar imagem!";
    }

    view->setScene(scene);
    view->setRenderHint(QPainter::Antialiasing);

    view->centerOn(spriteItem);
    view->show();


}
