#ifndef _MYTIMEO_H
#define _MYTIMEO_H
#include <iostream>
using namespace std;

class Time {
private:
	int Hours;
	int Minutes;
public:
	Time();//����������� ��� ���������� - ������� �������������
	Time(int h, int m = 0);//����������� c ����������� �� ���������
	void addmin(int m); //��������� ������
	void addhr(int h);//��������� ����
	void Reset(int h = 0, int m = 0);//�������� �� ���������
	Time operator + (const Time& t) const;//������� �����
	Time operator * (double dN) const;//�������� ����� �� �����
	Time operator - (const Time& t) const;//�������� ������
	Time operator / (double dN) const;//�������� ����� �� �����
	void Shov() const;
};
#endif
