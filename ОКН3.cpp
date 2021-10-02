#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите число до 10.000.000: " << endl;
	int a1, a;
	cin >> a1;
	a = a1;
	if (a > 10000000) { cout << "Слишком большое число"; }
	else {
		int c;
		c = a / 1000000;
		a = a % 1000000;
		switch (c) {
		case 1: cout << "Миллион "; break;
		case 2: cout << "Два миллиона"; break;
		case 3: cout << "Три миллиона"; break;
		case 4: cout << "Четыре миллиона "; break;
		case 5: cout << "Пять миллиона "; break;
		case 6: cout << "Шесть миллионов "; break;
		case 7: cout << "Семь миллионов "; break;
		case 8: cout << "Восемь миллионов "; break;
		case 9: cout << "Девять миллионов "; break;
		case 10: cout << "Десять миллионов"; break;
		default: cout << " ";
		}
		c = a / 100000;
		a = a % 100000;
		switch (c) {
		case 1: cout << "Сто "; break;
		case 2: cout << "Двести "; break;
		case 3: cout << "Тристо "; break;
		case 4: cout << "Четыресто "; break;
		case 5: cout << "Пятьсот "; break;
		case 6: cout << "Шестьсот "; break;
		case 7: cout << "Семьсот "; break;
		case 8: cout << "Восемьсот "; break;
		case 9: cout << "Девятьсот "; break;
		default: cout << " ";
		}
		c = a / 10000;
		if (c == 1) {
			c = a / 1000;
			switch (c) {
			case 10: cout << "Десять тысяч "; break;
			case 11: cout << "Одиннадцать тысяч "; break;
			case 12: cout << "Двеннадцать тысяч "; break;
			case 13: cout << "Триннадцать тысяч "; break;
			case 14: cout << "Четырнадцать тысяч "; break;
			case 15: cout << "Пятнадцать тысяч "; break;
			case 16: cout << "Шестнадцать тысяч "; break;
			case 17: cout << "Семнадцать тысяч "; break;
			case 18: cout << "Восемнадцать тысяч "; break;
			case 19: cout << "Девятнадцать тысяч "; break;
			default: cout << " ";
			}
			a = a % 1000;
		}
		else {
			switch (c) {
			case 2: cout << "Двадцать "; break;
			case 3: cout << "Тридцать "; break;
			case 4: cout << "Сорок "; break;
			case 5: cout << "Пятдесят "; break;
			case 6: cout << "Шестдесят "; break;
			case 7: cout << "Семьдесят "; break;
			case 8: cout << "Восемдесят "; break;
			case 9: cout << "Девяносто "; break;
			default: cout << " ";
			}
			a = a % 10000;
			c = a / 1000;
			if (c == 1) { cout << "одна тысяча "; }
			else {
				switch (c) {
				case 2: cout << "Две тысячи "; break;
				case 3: cout << "три тысячи "; break;
				case 4: cout << "четыре тысячи "; break;
				case 5: cout << "пять тысяч "; break;
				case 6: cout << "шесть тесяч "; break;
				case 7: cout << "семь тысяч "; break;
				case 8: cout << "восемь тысяч "; break;
				case 9: cout << "девять тысяч "; break;
				default: cout << " ";
				}
				if (a1 > 1019) { cout << "тысяч "; }
			}
		}
		a = a % 1000;
		c = a / 100;
		switch (c) {
		case 1:cout << "сто "; break;
		case 2:cout << "двести "; break;
		case 3:cout << "тристо "; break;
		case 4:cout << "четыресто "; break;
		case 5:cout << "пятьсот "; break;
		case 6:cout << "шесот "; break;
		case 7:cout << "семьсот "; break;
		case 8:cout << "восемьсот "; break;
		case 9:cout << "девятьсот "; break;
		default: cout << " ";
		}
		a = a % 100;
		c = a / 10;
		if (c == 1) {
			c = a;
			switch (c) {
			case 10: cout << "Десять "; break;
			case 11: cout << "Одиннадцать "; break;
			case 12: cout << "Двеннадцать "; break;
			case 13: cout << "Триннадцать "; break;
			case 14: cout << "Четырнадцать "; break;
			case 15: cout << "Пятнадцать "; break;
			case 16: cout << "Шестнадцать "; break;
			case 17: cout << "Семнадцать "; break;
			case 18: cout << "Восемнадцать "; break;
			case 19: cout << "Девятнадцать "; break;
			default: cout << " ";
			}
			a = a / 10;
		}
		else {
			switch (c) {
			case 2: cout << "Двадцать "; break;
			case 3: cout << "Тридцать "; break;
			case 4: cout << "Сорок "; break;
			case 5: cout << "Пятдесят "; break;
			case 6: cout << "Шестдесят "; break;
			case 7: cout << "Семьдесят "; break;
			case 8: cout << "Восемдесят "; break;
			case 9: cout << "Девяносто "; break;
			default: cout << " ";
			};
			a = a % 10;
			switch (a) {
			case 1: cout << "один"; break;
			case 2: cout << "два"; break;
			case 3: cout << "три"; break;
			case 4: cout << "четыре"; break;
			case 5: cout << "пять"; break;
			case 6: cout << "шесть"; break;
			case 7: cout << "семь"; break;
			case 8: cout << "восемь"; break;
			case 9: cout << "девять"; break;
			};
		}
	}
}