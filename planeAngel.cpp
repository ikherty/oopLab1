#include "planeAngel.h"
#include <cstring>

planeAngel::planeAngel(){}

void planeAngel::Init(int radian, int degree, int minute){
    this->radian=radian;
    this->degree=degree;
    this->minute=minute;
}

int planeAngel::Read(int radian, int degree, int minute){
    radian=degree=minute=0;
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
             cout<<"Введите количество градусов:";
             cin>>degree;
             cout<<"Введите количество минут:";
             cin>>minute;
         }
        else
            cout<<"Введен некорректный номер. Повторите попытку.";
    }
}

void planeAngel::toString(){
    cout<<""<<endl;
}
//             while((degree>360)||(degree<-360)){
//                 cout<<"Количество градусов задается в диапазоне от -360 до 360. Повторите попытку.\n:";
//                 cin>>degree;
//             }
//             while((minute>60)||(minute<0)){
//                 cout<<"Количество минут задается в диапазоне 0-60. Повторите попытку.\n:";
//                 cin>>minute;
//             }
