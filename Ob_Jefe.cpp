#include "Ob_Jefe.h"
#include <QDebug>
#include <ctime>
#include <random>
#include <ctime>
void Ob_Jefe::mover(){
    if (_posX-10 > 0){
        time_t  timev;
        qsrand(time(&timev));
        int num = rand()%10;

        if ((num==4)or(num==5)){
            _posX -= 5;
        }
        if ((num<4)&&(_posY-5>0)){
            _posY -= 5;
        }
        if ((num>5)&&(_posY+5<900)){
            _posY += 5;
        }
    }
    else{
        _salud = 0;
    }
}
Ob_Jefe::~Ob_Jefe(){
    qDebug()<<"mori jefe";
}
