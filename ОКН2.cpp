#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");//на русский
    cout << "Введите дату";
    int a, b;
    cin >> a>> b;//вводим дату 
    int d = 365;// кол-во дней в году
    if (((a == 31) && ((b == (4)) || (b == 6) || (b == 9) || (b == 11) || (b == 2))) || ((b == 2) && ((a == 29) || (a == 30)) || (a > 31) || (b > 12))) { cout << "неверные данные"; }
   else {
        switch (a)
        {
        case 1: cout << "Первое"; break;
        case 2: cout << "Второе"; break;
        case 3: cout << "Третье"; break;
        case 4: cout << "Четвёртое"; break;
        case 5: cout << "Пятое"; break;
        case 6: cout << "Шестое"; break;
        case 7: cout << "Седьмое"; break;
        case 8: cout << "Восьмое"; break;
        case 9: cout << "Девятое"; break;
        case 10: cout << "Десятое"; break;
        case 11: cout << "Одиннадцатое"; break;
        case 12: cout << "Двеннадцатое"; break;
        case 13: cout << "Тринадцатое"; break;
        case 14: cout << "Четырнадцатое"; break;
        case 15: cout << "Пятнадцатое"; break;
        case 16: cout << "Шестнадцатое"; break;
        case 17: cout << "Семнадцатое"; break;
        case 18: cout << "Восемнадцатое"; break;
        case 19: cout << "Девятнадцатое"; break;
        case 20: cout << "Двадцатое"; break;
        case 21: cout << "Двадцать первое"; break;
        case 22: cout << "Двадцать второе"; break;
        case 23: cout << "Двадцать третье"; break;
        case 24: cout << "Двадцать четвёртое"; break;
        case 25: cout << "Двадцать пятое"; break;
        case 26: cout << "Двадцать шестое"; break;
        case 27: cout << "Двадцать седьмое"; break;
        case 28: cout << "Двадцать восьмое"; break;
        case 29: cout << "Двадцать девятое"; break;
        case 30: cout << "Тридцатое"; break;
        case 31: cout << "Тридцать первое"; break;
        default: cout << "Неверные данные";
        }//определяемся с датой
       switch (b) {
        case 1: cout << " Января"; break;
        case 2: cout << " Февраля"; break;
        case 3: cout << " Марта"; break;
        case 4: cout << " Апреля"; break;
        case 5: cout << " Мая"; break;
        case 6: cout << " Июня"; break;
        case 7: cout << " Июля"; break;
        case 8:cout << " Августа"; break;
        case 9: cout << " Сентября"; break;
        case 10: cout << " Октября"; break;
        case 11: cout << " Ноября"; break;
        case 12: cout << " Декабря"; break;
        default: cout << " Неверные данные";
        }//определяемся с месяцем
        switch (b - 1) {
        case 1: d = d - 31; break;
        case 2: d = d - 31 - 28; break;
        case 3: d = d - 31 - 28 - 31; break;
        case 4: d = d - 31 - 28 - 31 - 30; break;
        case 5: d = d - 31 - 28 - 31 - 30 - 31; break;
        case 6: d = d - 31 - 28 - 31 - 30 - 31 - 30; break;
        case 7: d = d - 31 - 28 - 31 - 30 - 31 - 30 - 31; break;
        case 8: d = d - 31 - 28 - 31 - 30 - 31 - 30 - 31 - 31; break;
        case 9: d = d - 31 - 28 - 31 - 30 - 31 - 30 - 31 - 31 - 30; break;
        case 10: d = d - 31 - 28 - 31 - 30 - 31 - 30 - 31 - 31 - 30 - 31; break;
        case 11: d = d - 31 - 28 - 31 - 30 - 31 - 30 - 31 - 31 - 30 - 31 - 30; break;
        }//убираем лишние дни
        cout << endl << "До нового года остлось: " << d - a;//выводим кол-во дней
   }
  return 0;
}