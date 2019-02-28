#ifndef PLANEANGEL_H
#define PLANEANGEL_H
/*Угол задается в градусах и минутах либо в радианах.
Должны быть реализованы: перевод из градусов в радианы, 
приведение к диапазону 0 – 360, 
увеличение и уменьшение на заданную величину, 
 получение синуса, сравнение углов.
 
• метод инициализации Init();
• ввод с клавиатуры Read();
• преобразование в строку toString();*/
#include <iostream>
#include <cmath>
using namespace std;

class planeAngel
{
    int radian;
    int degree;
public:
    planeAngel();
    static void convert();//M_PI*degree/180;
    void privedenie();

    void getSin();
    void Init(int radian, int degree);
    static int Read();
    void toString();
};

#endif // PLANEANGEL_H
