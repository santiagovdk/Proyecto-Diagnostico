#include "gui.h"
#include "ui_gui.h"
#include <QMovie>
#include <QMouseEvent>
#include <QDebug>
#include <QLabel>



gui::gui(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::gui)
{
    ui->setupUi(this);
    this->setFixedSize(800,600);
    QPixmap bkgnd("C:/Users/Shagy/Desktop/Proyecto-Diagnostico/recursos/bg1.png");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);


    QMovie *movie = new QMovie(":/recursos/pyro.gif");
    QLabel *processLabel = new QLabel(this);
    processLabel->setMovie(movie);
    movie->start();
    processLabel->setGeometry(QRect(300, 200, 500, 350));


}

myLabel::myLabel( const QString & text, QWidget * parent )
:QLabel(parent)
{
    connect( this, SIGNAL( clicked() ), this, SLOT( slotClicked() ) );
}

void myLabel::slotClicked()
{
    qDebug()<<"Clicked";
}

void myLabel::mousePressEvent ( QMouseEvent * event )
{
    emit clicked();
}





gui::~gui()
{
    delete ui;
}