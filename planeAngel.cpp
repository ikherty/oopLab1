#include "planeAngel.h"

planeAngel::planeAngel(){}


void planeAngel::convert(){
    if(degree!=0||radian!=0){
        if(degree==0)
            degree=(int)radian*180/M_PI;
        if(radian==0)
            radian=M_PI*degree/180;
    }
}

void planeAngel::privedenie0_360(){
    while(degree<0)
        degree+=360;
    while(degree>360)
        degree-=360;
    convert();
}

void planeAngel::getSin(){
    cout<<"Синус угла="<<sin(degree)<<endl;
}

void planeAngel::inDEcrease(bool fl, double value, char znak){
    if(fl==0)
        if(znak=='-')
            radian-=(int)value;
        else
            radian+=(int)value;
    else
        if(znak=='-')
            degree-=value;
        else
            degree+=value;
}

void planeAngel::diff(int radian){
    if(this->radian==radian)
        cout<<"Углы равны."<<endl;
    if(this->radian<radian)
        cout<<"Угол в объекте меньше."<<endl;
    if(this->radian>radian)
        cout<<"Угол в объекте больше."<<endl;
}

void planeAngel::Init(int radian, double degree){
    this->radian=radian;
    this->degree=degree;
}

void planeAngel::Read(){
    int radian;
    double degree;
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
    convert();
    Init(radian, degree);
}

void planeAngel::toString(){
    cout<<"Угол на плоскости задан в "<<radian<<" радианах"<<endl;
    cout<<"Угол на плоскости задан в "<<(int)degree<<"°"<<(degree-(int)degree)*100<<"'"<<endl;
}
