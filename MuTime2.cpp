#include"MyTime2h.h"
/*************************************************************
* Р Е А Л И З А Ц И Я   М Е Т О Д О В   К Л А С С А          *
*************************************************************/
//-----------------------------------------------------------
//нулевая инециализация
Time::Time() {
	Hours = Minutes = 0;
}

//-----------------------------------------------------------
//нулевая значениями
Time::Time(int h, int m) {
	Hours = h;
	Minutes = m;
}

//-----------------------------------------------------------
//прибавить минуты
void Time::addmin(int m) {
	Minutes += m;
	Hours = Hours + Minutes / 60;
	Minutes %= 60;
}

//-----------------------------------------------------------
//прибавить часы
void Time::addhr(int h) {
	Hours += h;
}

//-----------------------------------------------------------
//значения по умолчанию 
void Time::Reset(int h, int m) {
	Hours = h;
	Minutes = m;
}

//-----------------------------------------------------------
//сложить время
Time Time::operator + (const Time& t) const
{
	Time SumTime;
	SumTime.Minutes = Minutes + t.Minutes;
	SumTime.Hours = Hours + t.Hours + SumTime.Minutes / 60;
	SumTime.Minutes %= 60;
	//Minutes++;//ошибка конст запрещает
	return SumTime;
}

// ---------------------------------------------------------- -
//вычесть время
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
//умножить время на число
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
//Раздилить время на число
Time Time::operator / (double dN) const
{
	Time SumTime{ 0,0 };
	if (dN == 0) {
		cout << "\n\n\t\tОшибка\n\n\t\tДеление на 0\n";
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
//умножить время на число
void Time::Shov() const
{
	cout << "Hours = " << Hours << "  Minutes = " << Minutes << endl;
}

