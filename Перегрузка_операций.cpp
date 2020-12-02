///*************************************************************
//*                КФЕДРА № 304 КУРС ООП  С++                  *
//**************************************************************
//* Prodgect type	: ConsoleApplication                         *
//* Progect name	: Laba1                                      *
//* File name		: Laba1.sln                                  *
//* Language		: Cpp, MSVS 2017                             *
//* Programmes	: М3О-107Б-18                                *
//*                 Гордеев Никита                             *
//* Modified by	: 03.10.2018                                 *
//* Created		: 02.10.2018                                 *
//* Comment		: ПЕРЕГРУЗКА ОПЕРАЦИИ СЛОЖЕНИЕ ДЛЯ ТИПА,     *
//*                 ЗАДАВАЕМОГО ПОЛЬЗОВАТЕЛЕМ БЕЗ КЛАССА       *
//*------------------------------------------------------------*
//
//*************************************************************/
//#include <iostream>
//using namespace std;
//
//class CPoint {
//private:
//	int mx;
//	int my;
//public:
//	CPoint()
//	{
//		mx = my = 0;
//	}
//	CPoint(int h = 0, int m = 0) {
//		mx = h;
//		my = m;
//	}
//	CPoint(int h, int m) {
//		mx = h;
//		my = m;
//	}
//};
//
//	int CPoint::GetX(void) { return mx; };
//
//	void addmin(int m); //прибавить минуты
//	void addhr(int h);//прибавить часы
//	void Reset(int h = 0, int m = 0);//значения по умолчанию
//
//	void Shov() const;
//
//
//
///*************************************************************
//*         О С Н О В Н А Я   П Р О Г Р А М М А                *
//*************************************************************/
//
//
//int main()
//{
//	setlocale(LC_ALL, "RUSSIAN");
//	system("color F0");
//
//
//
//
//	cout << endl;
//	system("pause");
//	return 0;
//}
/*************************************************************
*                КФЕДРА № 304 КУРС ООП  С++                  *
**************************************************************
* Prodgect type	: ConsoleApplication                         *
* Progect name	: Laba1                                      *
* File name		: Laba1.sln                                  *
* Language		: Cpp, MSVS 2017                             *
* Programmes	: М3О-107Б-18                                *
*                 Гордеев Никита                             *
* Modified by	: 03.10.2018                                 *
* Created		: 02.10.2018                                 *
* Comment		: ПЕРЕГРУЗКА ОПЕРАЦИИ СЛОЖЕНИЕ ДЛЯ ТИПА,     *
*                 ЗАДАВАЕМОГО ПОЛЬЗОВАТЕЛЕМ БЕЗ КЛАССА       *
*------------------------------------------------------------*

*************************************************************/
#include <iostream>
#include <ctime>
#include"MyTime2h.h"
using namespace std;
	
/*************************************************************
*         О С Н О В Н А Я   П Р О Г Р А М М А                *
*************************************************************/


int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	system("color F0");

	Time ATime;
	Time BTime = { 5,31 };
	Time CTime = { 2,55 };

	//1----------------------------------------------
	cout << "\n\t/1 ИСХОДНЫЕ ДАННЫЕ\n";

	cout << "  Atime = ";
	ATime.Shov();

	cout << "  Btime = ";
	BTime.Shov();

	cout << "  Ctime = ";
	CTime.Shov();

	cout << endl;

	//2----------------------------------
	//Cложение через перегруженую ф-ю +

	cout << "\t/2Функциональная и операторная форма вызовова\n";
	cout << "\n\t/2Функциональная форма вызовова:\n";
	//можно ATime = BTime.operator+(B);
	ATime = BTime.operator + (CTime);
	cout << "ATime = BTime.operator + (CTime) : ";
	ATime.Shov();


	cout << "\n\t/Операторная форма вызовова:\n";
	ATime = BTime + CTime;
	cout << "ATime = BTime + CTime : ";
	ATime.Shov();

	//3----------------------------------
	//Умножение через перегруженую опер-ю *
	double Scale;
	cout << "\n/Умножить время на число\n";
	cout << "Введите число = ";
	cin >> Scale;

	ATime = ATime.operator * (Scale);
	cout << "ATime = ATime.operator * (" << Scale << ") : ";
	ATime.Shov();


	ATime = CTime * Scale;
	cout << "\t\t CTime * " << Scale << " : ";
	ATime.Shov();

	//4----------------------------------
	//Вычитание через перегруженую ф-ю -

	cout << "  Atime = ";
	ATime.Shov();
	cout << "  Btime = ";
	BTime.Shov();
	cout << "  Ctime = ";
	CTime.Shov();
	cout << endl;
	cout << "\n\t/Вычитание через перегруженую ф-ю -\n";
	ATime = CTime - BTime;
	cout << "ATime = BTime - CTime : ";
	ATime.Shov();

	//5----------------------------------
	//Деление через перегруженую опер-ю /
	cout << "\n\t/Вычитание через перегруженую ф-ю /\n";
	ATime = CTime / Scale;
	cout << "CTime / " << Scale << " : ";
	ATime.Shov();


	cout << endl;
	system("pause");
	return 0;
}


///*************************************************************
//*                КФЕДРА № 304 КУРС ООП  С++                  *
//**************************************************************
//* Prodgect type	: ConsoleApplication                         *
//* Progect name	: Laba1                                      *
//* File name		: Laba1.sln                                  *
//* Language		: Cpp, MSVS 2017                             *
//* Programmes	: М3О-107Б-18                                *
//*                 Гордеев Никита                             *
//* Modified by	: 03.10.2018                                 *
//* Created		: 02.10.2018                                 *
//* Comment		: ПЕРЕГРУЗКА ОПЕРАЦИИ СЛОЖЕНИЕ ДЛЯ ТИПА,     *
//*                 ЗАДАВАЕМОГО ПОЛЬЗОВАТЕЛЕМ БЕЗ КЛАССА       *
//*------------------------------------------------------------*
//
//*************************************************************/
//#include <iostream>
//using namespace std;
//
///*************************************************************
//*          П Р О Т О Т И П Ы    Ф У Н К Ц И Й                *
//*************************************************************/
////прототип шаблона функции
//struct Time
//{
//	int Hours;
//	int Minutes;
//};
//
////перегрузка оператора сложения для типа Time
//Time operator + (const Time& a, const Time& b)
//{
//	Time SumTime;
//	SumTime.Minutes = a.Minutes + b.Minutes;
//	SumTime.Hours = a.Hours + b.Hours + SumTime.Minutes / 60;
//	SumTime.Minutes %= 60;
//	return SumTime;
//}
//
///*************************************************************
//*         О С Н О В Н А Я   П Р О Г Р А М М А                *
//*************************************************************/
//
//
//int main()
//{
//	setlocale(LC_ALL, "RUSSIAN");
//	system("color F0");
//
//	Time Atime = { 4,40 };
//	Time Btime = { 3,55 };
//	Time CTime;
//
//	cout << "\n\tИСХОДНЫЕ ДАННЫЕ\n";
//	cout << "  Atime: Hours = " << Atime.Hours << "\tMinutes = " << Atime.Minutes << endl;
//	cout << "  Btime: Hours = " << Btime.Hours << "\tMinutes = " << Btime.Minutes << endl;
//
//	CTime = Atime + Btime;
//	cout << "\n\tОператорная форма вызовова: \n";
//	cout << "\t\tCTime = Atime + Btime; \n";
//	cout << "  CTime: Hours = " << CTime.Hours << "\tMinutes = " << CTime.Minutes << endl;
//
//	//функциональная форма вызова
//	CTime = operator + (Atime, Btime);
//
//	cout << "\n\tФункциональная форма вызовова: \n";
//	cout << "\t\tCTime = operator (Atime + Btime); \n";
//	cout << "  CTime: Hours = " << CTime.Hours << "\tMinutes = " << CTime.Minutes << endl;
//
//	cout << endl;
//	system("pause");
//	return 0;
//}
//
