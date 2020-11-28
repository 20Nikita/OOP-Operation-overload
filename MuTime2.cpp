#include"MyTime2h.h"
/*************************************************************
* � � � � � � � � � �   � � � � � � �   � � � � � �          *
*************************************************************/
//-----------------------------------------------------------
//������� �������������
Time::Time() {
	Hours = Minutes = 0;
}

//-----------------------------------------------------------
//������� ����������
Time::Time(int h, int m) {
	Hours = h;
	Minutes = m;
}

//-----------------------------------------------------------
//��������� ������
void Time::addmin(int m) {
	Minutes += m;
	Hours = Hours + Minutes / 60;
	Minutes %= 60;
}

//-----------------------------------------------------------
//��������� ����
void Time::addhr(int h) {
	Hours += h;
}

//-----------------------------------------------------------
//�������� �� ��������� 
void Time::Reset(int h, int m) {
	Hours = h;
	Minutes = m;
}

//-----------------------------------------------------------
//������� �����
Time Time::operator + (const Time& t) const
{
	Time SumTime;
	SumTime.Minutes = Minutes + t.Minutes;
	SumTime.Hours = Hours + t.Hours + SumTime.Minutes / 60;
	SumTime.Minutes %= 60;
	//Minutes++;//������ ����� ���������
	return SumTime;
}

// ---------------------------------------------------------- -
//������� �����
Time Time::operator - (const Time& t) const
{
	Time SumTime;
	int m = 0;
	m = m + Minutes - t.Minutes + Hours * 60 - t.Hours * 60;
	SumTime.Hours = m / 60;
	SumTime.Minutes = m % 60;
	return SumTime;
}


//-----------------------------------------------------------
//�������� ����� �� �����
Time Time::operator * (double dN) const
{
	Time SumTime;
	int totMinA, newTotMin;
	totMinA = Hours * 60 + Minutes;
	newTotMin = totMinA * dN;

	SumTime.Hours = newTotMin / 60;
	SumTime.Minutes = newTotMin % 60;

	return SumTime;
}

//-----------------------------------------------------------
//��������� ����� �� �����
Time Time::operator / (double dN) const
{
	Time SumTime{ 0,0 };
	if (dN == 0) {
		cout << "\n\n\t\t������\n\n\t\t������� �� 0\n";
		return SumTime;
	}
	int totMinA, newTotMin;
	totMinA = Hours * 60 + Minutes;
	newTotMin = totMinA / dN;

	SumTime.Hours = newTotMin / 60;
	SumTime.Minutes = newTotMin % 60;

	return SumTime;
}


//-----------------------------------------------------------
//�������� ����� �� �����
void Time::Shov() const
{
	cout << "Hours = " << Hours << "  Minutes = " << Minutes << endl;
}

