#ifndef _MYTIMEO_H
#define _MYTIMEO_H
#include <iostream>
using namespace std;

class Time {
private:
	int Hours;
	int Minutes;
public:
	Time();//конструктор без параметрор - нулевая инециализация
	Time(int h, int m = 0);//конструктор c параметрами по умалчанию
	void addmin(int m); //прибавить минуты
	void addhr(int h);//прибавить часы
	void Reset(int h = 0, int m = 0);//значения по умолчанию
	Time operator + (const Time& t) const;//сложить время
	Time operator * (double dN) const;//умножить время на число
	Time operator - (const Time& t) const;//Разность времен
	Time operator / (double dN) const;//подилить время на число
	void Shov() const;
};
#endif
