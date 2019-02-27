/*Все задания должны быть реализованы двумя способами:
    • тип данных представляется структурой с необходимыми полями, 
а операции реализуются как внешние функции, которые получают данные необходимых типов в качесмтве аргументов;
    • как класс с закрытыми полями, где операции реализются как методы класса.
• метод инициализации Init();
• ввод с клавиатуры Read();
• преобразование в строку toString();
• конструкторы
Создать класс для работы с углами на плоскости.
Угол задается в градусах и минутах либо в радианах.
Должны быть реализованы: перевод из градусов в радианы, 
приведение к диапазону 0 – 360, 
увеличение и уменьшение на заданную величину, 
 получение синуса, сравнение углов.*/
#include "planeAngel.h"

int main(int argc, char *argv[])
{
   // double e=1*RAD_TO_DEG;
    int radian, degree, minute;
    planeAngel firstObj;
    firstObj.Read(radian, degree, minute);
    firstObj.Init(radian, degree, minute);
    return 0;
}
