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

    QPixmap characterPixmap(":/personagem/sprites/personagem/paradoD.png");
    QGraphicsPixmapItem *spriteItem = new QGraphicsPixmapItem(characterPixmap);
    spriteItem->setPos(0, 2730);
    scene->addItem(spriteItem);

    QPixmap casteloPixmap(":/fase1/sprites/fase1/castelo.png");
    QGraphicsPixmapItem *castelo = new QGraphicsPixmapItem(casteloPixmap);
    castelo->setPos(5000, 600);
    scene->addItem(castelo);

    QPixmap piso1Pixmap(":/fase1/sprites/fase1/piso1_img.png");
    QGraphicsPixmapItem *piso1 = new QGraphicsPixmapItem(piso1Pixmap);
    piso1->setPos(0, 3040);
    scene->addItem(piso1);

    QPixmap escada1Pixmap(":/fase1/sprites/fase1/escada_img.png");
    QGraphicsPixmapItem *escada1 = new QGraphicsPixmapItem(escada1Pixmap);
    escada1->setPos(1138, 2870);
    scene->addItem(escada1);

    QPixmap escada1_2Pixmap(":/fase1/sprites/fase1/escada_img.png");
    QGraphicsPixmapItem *escada1_2 = new QGraphicsPixmapItem(escada1_2Pixmap);
    escada1_2->setPos(1323, 2700);
    scene->addItem(escada1_2);

    QPixmap piso2Pixmap(":/fase1/sprites/fase1/piso2_img.png");
    QGraphicsPixmapItem *piso2 = new QGraphicsPixmapItem(piso2Pixmap);
    piso2->setPos(1510, 2530);
    scene->addItem(piso2);

    QPixmap ponte1Pixmap(":/fase1/sprites/fase1/ponte1_img.png");
    QGraphicsPixmapItem *ponte1 = new QGraphicsPixmapItem(ponte1Pixmap);
    ponte1->setPos(2083, 2530);
    scene->addItem(ponte1);

    QPixmap piso3Pixmap(":/fase1/sprites/fase1/piso3_img.png");
    QGraphicsPixmapItem *piso3 = new QGraphicsPixmapItem(piso3Pixmap);
    piso3->setPos(3460, 2530);
    scene->addItem(piso3);

    QPixmap piso4Pixmap(":/fase1/sprites/fase1/piso4_img.png");
    QGraphicsPixmapItem *piso4 = new QGraphicsPixmapItem(piso4Pixmap);
    piso4->setPos(580, 2337);
    scene->addItem(piso4);

    QPixmap escada2_1Pixmap(":/fase1/sprites/fase1/escada_img.png");
    QGraphicsPixmapItem *escada2_1 = new QGraphicsPixmapItem(escada2_1Pixmap);
    escada2_1->setPos(390, 2157);
    scene->addItem(escada2_1);

    QPixmap escada2_2Pixmap(":/fase1/sprites/fase1/escada_img.png");
    QGraphicsPixmapItem *escada2_2 = new QGraphicsPixmapItem(escada2_2Pixmap);
    escada2_2->setPos(200, 1977);
    scene->addItem(escada2_2);

    QPixmap escada2_3Pixmap(":/fase1/sprites/fase1/escada_img.png");
    QGraphicsPixmapItem *escada2_3 = new QGraphicsPixmapItem(escada2_3Pixmap);
    escada2_3->setPos(10, 1797);
    scene->addItem(escada2_3);

    QPixmap escada3_1Pixmap(":/fase1/sprites/fase1/escada_img.png");
    QGraphicsPixmapItem *escada3_1 = new QGraphicsPixmapItem(escada3_1Pixmap);
    escada3_1->setPos(590, 1607);
    scene->addItem(escada3_1);

    QPixmap escada3_2Pixmap(":/fase1/sprites/fase1/escada_img.png");
    QGraphicsPixmapItem *escada3_2 = new QGraphicsPixmapItem(escada3_2Pixmap);
    escada3_2->setPos(780, 1426);
    scene->addItem(escada3_2);

    QPixmap escada3_3Pixmap(":/fase1/sprites/fase1/escada_img.png");
    QGraphicsPixmapItem *escada3_3 = new QGraphicsPixmapItem(escada3_3Pixmap);
    escada3_3->setPos(970, 1240);
    scene->addItem(escada3_3);

    QPixmap escada3_4Pixmap(":/fase1/sprites/fase1/escada_img.png");
    QGraphicsPixmapItem *escada3_4 = new QGraphicsPixmapItem(escada3_4Pixmap);
    escada3_4->setPos(1160, 1054);
    scene->addItem(escada3_4);

    QPixmap escada3_5Pixmap(":/fase1/sprites/fase1/escada_img.png");
    QGraphicsPixmapItem *escada3_5 = new QGraphicsPixmapItem(escada3_5Pixmap);
    escada3_5->setPos(1350, 868);
    scene->addItem(escada3_5);

    QPixmap escada3_6Pixmap(":/fase1/sprites/fase1/escada_img.png");
    QGraphicsPixmapItem *escada3_6 = new QGraphicsPixmapItem(escada3_6Pixmap);
    escada3_6->setPos(1540, 682);
    scene->addItem(escada3_6);

    QPixmap escada3_7Pixmap(":/fase1/sprites/fase1/escada_img.png");
    QGraphicsPixmapItem *escada3_7 = new QGraphicsPixmapItem(escada3_7Pixmap);
    escada3_7->setPos(1730, 496);
    scene->addItem(escada3_7);

    QPixmap escada3_8Pixmap(":/fase1/sprites/fase1/escada_img.png");
    QGraphicsPixmapItem *escada3_8 = new QGraphicsPixmapItem(escada3_8Pixmap);
    escada3_8->setPos(1920, 496);
    scene->addItem(escada3_8);

    QPixmap nuvem2Pixmap(":/fase1/sprites/fase1/nuvem2_img.png");
    QGraphicsPixmapItem *nuvem2 = new QGraphicsPixmapItem(nuvem2Pixmap);
    nuvem2->setPos(2110, 496);
    scene->addItem(nuvem2);

    QPixmap keyPixmap(":/fase1/sprites/fase1/key_img.png");
    QGraphicsPixmapItem *key = new QGraphicsPixmapItem(keyPixmap);
    key->setPos(4795, 360);
    scene->addItem(key);

    QPixmap cerca1Pixmap(":/fase1/sprites/fase1/cerca_img.png");
    QGraphicsPixmapItem *cerca1 = new QGraphicsPixmapItem(cerca1Pixmap);
    cerca1->setPos(3855, 1885);
    scene->addItem(cerca1);

    QPixmap cerca2Pixmap(":/fase1/sprites/fase1/cercaQuebrada_img.png"); // CERCA QUEBRADA
    QGraphicsPixmapItem *cerca2 = new QGraphicsPixmapItem(cerca2Pixmap);
    cerca2->setPos(3855, 1885);
    scene->addItem(cerca2);

    QPixmap lockPixmap(":/fase1/sprites/fase1/lock_img.png");
    QGraphicsPixmapItem *lock = new QGraphicsPixmapItem(lockPixmap);
    lock->setPos(3655, 2300);
    scene->addItem(lock);

    QPixmap monstroPixmap(":/fase1Monstro/sprites/fase1/monstro/monstro.png"); // MONSTRO
    QGraphicsPixmapItem *monstro = new QGraphicsPixmapItem(monstroPixmap);
    monstro->setPos(4460, 2120);
    scene->addItem(monstro);

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
