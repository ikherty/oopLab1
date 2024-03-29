#ifndef PLANEANGEL_H
#define PLANEANGEL_H
/*увеличение и уменьшение на заданную величину,
 получение синуса, сравнение углов.
*/
#include <iostream>
#include <cmath>
#include <cstring>
#include <clocale>
using namespace std;

class planeAngel
{
    int radian;
    double degree;
public:
    planeAngel();
    void convert();
    void privedenie0_360();
    void getSin();
    void inDEcrease(bool fl, double value, char znak);
    void diff(int radian);
    void Init(int radian, double degree);
    void Read();
    void toString();
};

#endif // PLANEANGEL_H
