#include "planeAngel.h"
#include <cstring>

planeAngel::planeAngel(){}

void planeAngel::Init(int radian, int degree){
    this->radian=radian;
    this->degree=degree;
}

int planeAngel::Read(){
    int radian, degree;
    cout<<"Задайте величину угла. Выберите, как задать угол(введите 1 или 2):"<<endl;
    cout<<" 1) в радианах;\n"<<" 2) в градусах и минутах;\n"<<":";
    int answer;
    bool loop=0;
    while(!loop){
     cin>>answer;
     if(answer==1){
        loop=1; 
        cout<<"Введите угол в радианах:";
        cin>>radian;
        //сразу метод для перевода для присвоения
        
     }
     else
         if(answer==2){
             loop=1; 
             cout<<"Введите угол в градусах и минутах. Минуты отделяются запятой.:";
             cin>>degree;
         }
        else
            cout<<"Введен некорректный номер. Повторите попытку.";
    }
    Init(radian, degree);
}

void planeAngel::toString(){
    cout<<""<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
}


void planeAngel::convert(){//сделать статиком
 //из радиан в градусы
    degree=(int)radian*180/M_PI;
}//M_PI*degree/180;
void planeAngel::privedenie(){
    
}
