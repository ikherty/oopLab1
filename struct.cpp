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
    if(degree!=0||radian!=0){
        if(degree==0)
            degree=(int)radian*180/M_PI;
        if(radian==0)
            radian=M_PI*degree/180;
    }
}

void privedenie0_360(){
    while(degree<0)
        degree+=360;
    while(degree>360)
        degree-=360;
    convert();
}

void getSin(){
    cout<<"Синус угла="<<sin(degree)<<endl;
}

void inDEcrease(bool fl, double value, char znak){
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

void diff(int radian){
    if(this->radian==radian)
        cout<<"Углы равны."<<endl;
    if(this->radian<radian)
        cout<<"Угол в объекте меньше."<<endl;
    if(this->radian>radian)
        cout<<"Угол в объекте больше."<<endl;
}

void Init(int radian, double degree){
    this->radian=radian;
    this->degree=degree;
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
    cout<<"Угол на плоскости задан в "<<radian<<" радианах"<<endl;
    cout<<"Угол на плоскости задан в "<<(int)degree<<"°"<<(int)(degree-(int)degree)*100<<"'"<<endl;
}

int main(int argc, char *argv[])
{
    setlocale(LC_ALL,"rus");
    return 0;
}
