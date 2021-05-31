#include <iostream>
#include <iomanip>
#include <math.h>
#include <cmath>
#include <string>
#include <stdio.h>
#include <cstdlib>
#include <time.h>
using namespace std;


int main()
{
	setlocale(LC_ALL, "rus");

/*
//Задание 1
	int x, le, maxle = 0, minle = 400, su=0, ch=0;
	
	
	for (;;)
	{
		cout << "Введите возраст посетителя. Чтобы завершить программу и подвести итоги дня введите 0: ";
		cin >> le;
		
		if (le == 0)
		{
			cout << "Вы завершили день.";
			break;
		}
		else
		{ch ++;
			su = su + le;
			if (le > maxle)
				{
					maxle = le;
				}
			if (le < minle)
				{
					minle = le;
				}
		}	
	} 
	cout << "Возраст самого молодого: " << minle << ", возраст самого старшего: " << maxle << ", средний возраст: " << su/ch;

//Задание 2
int apple_box, car, i=1;
cout << "Введите кол-во ящиков на складе: ";
cin >> apple_box;
while (apple_box > 0)
{
	cout << "Введите кол-во ящиков для " << i << " машины: ";
	cin >> car;
	if(car > apple_box)
		cout << "К сожалению на складе осталось только " << apple_box << " ящика(ов)" << endl;
	else
	{
		apple_box -= car;
		cout << car << " ящиков успешно погружены на " << i << " машину. На сколаде остаолось " << apple_box << " коробок" << endl;
		i++;
	}
}

//Задание 3
int a, b, su=0;
cout << "Введите два числа - диапазон от a до b: ";
cin >> a >> b;
for(a;a<b+1;a++)
{
	if(a%2 != 0)
	su += a;
}
cout << "Сумма всех нечётных чисел в диапазоне: " << su;

//Задание 4
int x, i, j;
cout << "Введите высоту треугольника: ";
cin >> x;

for (int i = 0; i < x; ++i)
    cout << setw(x + i) << string(i * 2 + 1, '^') << endl;
        
//Задание 5
int x, ma=0, i;
cout << "Введите числа в котором нужно найти наибольшую цифру: ";
cin >> x;
while(x>0)
{
	if(x%10 > ma)
		ma = x%10;
	x/=10;
}
cout << "Наибольшая цифра числа - " << ma;

//Задание 6
int i;
float q=0;
for(i=0;i<1000;i++)
{
	if(rand()%100 % 2 == 0)
		q++;
}
cout << "Вероятность рандомизации чётного числа = " << q/1000 * 100;

//Задание 7
int n, i, su=0;
cout << "Введите n для проверки равенства 1+2+...+n = n(n+1)/2: ";
cin >> n;
for(i=1;i<n+1;i++)
	su = su + i;
i = n* (n+1) / 2;
if (i == su)
	cout << "1+2+...+n = n(n+1)/2 = " << su;
else
	cout << "1+2+...+n = " << su << ", а n(n+1)/2 = " << i;

//Задание 8
srand(time(0));
int x, ch=10, k;
x = rand()%(101);
cout << "Я загадал число. У тебя десять попыток чтобы его отгадать. После кадой неправильной попытки я буду говорить, меньше или больше твоё число от моего." << endl;

for (ch; ch > 0;ch--)
{
	cout << "Осталось попыток: " << ch << ". Введи число: ";
	cin >> k;
	if (k == x)
	{
		cout << "Невероятно! Ты отгадал моё число!!! Спасибо за испоьзование нашей программы.";
		break;
	}
	else
	{
		if (k > x)
			cout << "Ваше число больше моего." << endl;
		else
			cout << "Ваше число меньше моего." << endl;
	}
}
if (ch == 0)
	cout << "Увы, но ты не угадал моё число. Моё число было: " << x;
 
//Задание 9
int x=32, i;
while (x<128)
{
	for (i=0; i<10; i++)
	{
		cout << x << "-" << (char)(x) << "  ";
		x++;
	}
	cout << endl;
}
	
//Задание 10
int x, such=0, sunch=0;
cout << "Введите натуральное число: ";
cin >> x;
while (x > 0)
{
	if (x%10%2 != 0)
		sunch++;
	else
		such++;
	x = x/10;
}
cout << "Кол-во чётных цифр: " << such << endl << "Кол-во нечётных цифр: " << sunch;

//Задание 11
int x, l1=1, l2=1;
cout << "Введите кол-во чисел Фиббоначи (не меннее одного): ";
cin >> x;
cout << l2 << " ";
while (x-1 > 0)
{
	l1 = l2 + l1;
	x--;
	cout << l1 << " ";
	if (x-1 != 0)
	{
		l2 = l2 + l1;
		x--;
		cout << l2 << " ";
	}
}

//Задание 12
	int i, n, s;
	cout << "Введите минимум, максимум и шаг: ";
	cin >> i >> n >> s;
	
	for(i; i < n+1; i=i+s)
	{
		cout << i << " ";
	}

//Задание 13
	int x;
	
	cout << "Введите число: ";
	cin >> x;
	
	while (x > 0)
		{
			cout << x%10;
			x = x/10;
		}

//Задание 14	
	unsigned long int x;
	int su = 0, pr = 1, ch;
	
	cout << "Введите натуральное число: ";
	cin >> x;
	ch = x;
	
	while (x > 0)
		{	
			su = su + x%10;
			x = x / 10;
		}
	cout << "Сумма цифр числа: " << su << endl;
	
	while (ch > 0)
		{
			pr = pr * ch%10;
			ch = ch / 10;
		}
	cout << "Произведение цифр числа: " << pr;
	
//Задание 15
	float a, b;
	string s;
	
	do 
	{
			cout << "Введите два числа для выполнения математических преобразований с ними: ";
			cin >> a >> b;
			cout << "Введите символ операции, для выхода из программы введите '0': ";
			cin >> s;
			if (s == "+")
				{
					cout << "Сумма " << a << " и " << b << " = " << a+b << endl;
				}
			else 
				{
					if (s == "-")
						{
							cout << "Разность " << a << " и " << b << " = " << a-b << endl;
						}
					else
						{
							if (s == "*")
								{
									cout << "Произведение " << a << " и " << b << " = " << a*b << endl;
								}
							else
								{
									if (s == "/")
										{
											if (b == 0)
												{
													cout << "На ноль делить нелзя!!! Ай яй яй!" << endl;
												}
											else
												{
													cout << "Частное " << a << " и " << b << " = " << a/b << endl;
												}
										}
									else
										{
											if (s == "0")
												{
													cout << "Ваша программа завершена";
													break;
												}
											else
												{
													cout << "Вы ввели неккоректный знак операции" << endl;
												}
										}
								}
						}
				}	
	}	while (s != "0");
	
	*/
	
	
	
		
		
		
	return 0;
}



