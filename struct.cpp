#include <iostream>
#include <cmath>
#include <cstring>
#include <clocale>
using namespace std;
//структура с методами
struct planeAngle
{
    int radian;
    double degree;
}one;

void convert(){
    if(one.degree!=0||one.radian!=0){
        if(one.degree==0)
            one.degree=(int)one.radian*180/M_PI;
        if(one.radian==0)
            one.radian=M_PI*one.degree/180;
    }
}

void privedenie0_360(){
    while(one.degree<0)
        one.degree+=360;
    while(one.degree>360)
        one.degree-=360;
    convert();
}

void getSin(){
    cout<<"Синус угла="<<sin(one.degree)<<endl;
}

void inDEcrease(bool fl, double value, char znak){
    if(fl==0)
        if(znak=='-')
            one.radian-=(int)value;
        else
            one.radian+=(int)value;
    else
        if(znak=='-')
            one.degree-=value;
        else
            one.degree+=value;
}

void diff(int radian){
    if(one.radian==radian)
        cout<<"Углы равны."<<endl;
    if(one.radian<radian)
        cout<<"Угол в объекте меньше."<<endl;
    if(one.radian>radian)
        cout<<"Угол в объекте больше."<<endl;
}

void Init(int radian, double degree){
    one.radian=radian;
    one.degree=degree;
}

void Read(){
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

void toString(){
    cout<<"Угол на плоскости задан в "<<one.radian<<" радианах"<<endl;
    cout<<"Угол на плоскости задан в "<<(int)one.degree<<"°"<<(int)(one.degree-(int)one.degree)*100<<"'"<<endl;
}

int main(int argc, char *argv[])
{
    setlocale(LC_ALL,"rus");

    return 0;
}
