#include "fase1exploracao.h"
#include <QGraphicsView>

Fase1Exploracao::Fase1Exploracao(QObject *parent)
    : QObject(parent),
    scene(new QGraphicsScene(0, 0, 5760, 3240)) // Tamanho total do mapa
{
}

// Função que configura e retorna a cena
void Fase1Exploracao::iniciarFase(QGraphicsView *view) {
    // Configura e adiciona os elementos na cena
    QPixmap characterPixmap(":/personagem/sprites/personagem/paradoD.png");
    QGraphicsPixmapItem *spriteItem = new QGraphicsPixmapItem(characterPixmap);
    spriteItem->setPos(100, 100);
    scene->addItem(spriteItem);
    if (!characterPixmap.isNull()) {
        qDebug() << "Imagem carregada corretamente!";
    } else {
        qDebug() << "Falha ao carregar imagem!";
    }

    QPixmap backgroundPixmap(":/fase1/sprites/fase1/tilesetOpenGameBackground.png");
    QGraphicsPixmapItem *backgroundItem = new QGraphicsPixmapItem(backgroundPixmap);
    backgroundItem->setPos(0, 0);
    scene->addItem(backgroundItem);



    // Configura a view para usar essa cena
    view->setScene(scene);
    view->setRenderHint(QPainter::Antialiasing);
    view->show();
}
