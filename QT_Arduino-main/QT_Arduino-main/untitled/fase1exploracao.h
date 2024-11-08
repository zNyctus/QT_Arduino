#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QPixmap>
#include <QObject>

class Fase1Exploracao : public QObject {
    Q_OBJECT

public:
    explicit Fase1Exploracao(QObject *parent = nullptr);
    void iniciarFase(QGraphicsView *view);

private:
    QGraphicsScene *scene;
};

