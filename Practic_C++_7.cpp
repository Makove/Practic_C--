#include <iostream>
#include <iomanip>
#include <math.h>
#include <cmath>
#include <string>
#include <stdio.h>
#include <cstdlib>
#include <time.h>

using namespace std;
/*
int main(){
	setlocale(LC_ALL, "rus");
// Массивы



	//Задание 1
	int n, f=0, *p;
	cout << "Введите длинну массива: ";
	cin >> n;
	int mas[n];

	cout << "Введите элементы массива: ";
	for (p=mas; p<&mas[n]; p++)
	{
		cin >> *p;
		if (*p >= 0 && *p%2 == 0 )
			f+=*p;
	}
	cout << "Сумма чётных положительных элементов: " << f;


	//Задание 2
	int  n, f=-10000, *p, i=0;
	cout << "Введите длинну массива: ";
	cin >> n;
	int mas[n];
	
	cout << "Введите элементы массива: ";
	for (p=mas; p<&mas[n]; p++)
	{
		cin >> *p;
		if (*p > f && i%2 == 0 )
			f = *p;
		i++;
	}
	cout << "Максимальный элемент массива с чётным индексом: " << f;


	//Задание 3
	int n, sr_ar, summ=0, *p;
	cout << "Введите длинну массива: ";
	cin >> n;
	int mas[n];
	
	cout << "Введите элементы массива: ";
	for (p=mas; p<&mas[n]; p++)
	{
		cin >> *p;
		summ += *p;
	}
	sr_ar = summ / n;
	
	cout << "Среднее арифметическое массива: " << sr_ar << endl << "Элементы массива, чьё значение меньше среднего арифметического: " << endl;
	for (p=mas; p<&mas[n]; p++)
	{
		if (*p < sr_ar)
			cout << *p << endl;
	}


	//Задание 4
	int n, min1=10000, min2=10000, *p;
	cout << "Введите длинну массива: ";
	cin >> n;
	int mas[n];
	
	cout << "Введите элементы массива: ";
	for (p=mas; p<&mas[n]; p++)
	{
		cin >> *p;
		if (*p < min1)
			min1 = *p;
		else
		{
			if ((*p >= min1)  &&  (*p < min2))
				min2 = *p;
		}
	}
	cout << "Минимальные элементы массива: " << min1 << " и " << min2;


	//Задание 5
	int *p, n, n1, a, b, ch=0, l;
	cout << "Введите a и b: ";
	cin >> a >> b;
	cout << "Введите длинну массива: ";
	cin >> n;
	n1 = n;
	int mas[n];
	
	cout << "Введите элементы массива: ";
	for (p=mas; p<&mas[n]; p++)
	{
		cin >> l;
		if ((a <= l) && (l <= b))
			{
				ch++;
				p--;
				n--;
			}
		else
			*p = l;
	}
	
	cout << n << "  " << n1 << endl;
	for (p=&mas[n]; p<&mas[n1]; p++)
	{
		*p = 0;
	}
	
	for (p=mas; p<&mas[n1]; p++)
	{
		cout << *p << " ";
	}


	//Задание 6
	int *p, n, f, su=-1;
	cout << "Введите длинну массива: ";
	cin >> n;
	int mas[n];
	
	cout << "Введите элементы массива: ";
	for (p=mas; p<&mas[n]; p++)
	{
		cin >> *p;
		if ((*p < 0) && su == -1)
			su = 0;
		else
		{
			if (su != -1)
				su+=abs(*p);
				
		}	
	}
	cout << "Сумма модулей элементов массива, расположенных после первого отрицателного элемента: " << su;


	//Задание 7
	int i=0, n, mi=999999, *p, in;
	cout << "Введите длинну массива: ";
	cin >> n;
	int mas[n];
	
	cout << "Введите элементы массива: ";
	for (p=mas; p<&mas[n]; p++)
	{
		cin >> *p;
		if (abs(*p) < mi)
		{
			mi = *p;
			in = i;
		}
		i++;
	}
	cout << "Минимальный по модулю элемент равен: " << mi << ", а его индекс: " << in;


	//Задание 8
	int *p, n, su=0;
	cout << "Введите длинну массива: ";
	cin >> n;
	int mas[n];
	
	cout << "Введите элементы массива: ";
	for (p=mas; p<&mas[n]; p++)
	{
		cin >> *p;
		while (*p > 0)
		{
			su += *p%10;
			*p/=10;
		}
	}
	cout << "Сумма всех цифр массива: " << su;


	//Задание 9
	int k, *p, *end;
	int B[4][3];
	end = &B[0][0] + 12;
	
	cout << "Введите 12 элементов для заполнения двумерного массива: ";
	for (p=&B[0][0]; p<end; p++)
	{
		cin >> k;
		*p = k*k;
	}
	
	k=1;
	cout << "Ваш массив с элементами, возведёнными в квадрат: " << endl;
	for (p=&B[0][0]; p<end; p++)
	{
		cout << *p << " ";
		if (k == 3)
		{
			cout << endl;
			k=1;
		}
		else
			k++;
	}

	
	//Задание 10
	srand(time(0));
	int i=0, j, su=0, ma= -9999999, l, *p, *end, k=1;
	int A[7][7];
	end = &A[0][0] + 49;
	
	for (p=&A[0][0]; p<end; p++)
	{

		*p = 10 + rand()%100;
		su += *p;

		if (k == 7)
		{
			if (su > ma)
			{
				ma = su;
				l=i;
				su=0;
				i++;
			}
			else
			{
				su = 0;
				i++;
			}
				
		}
		else
			k++;
	}
	
	for (i=0; i<7; i++)
	{
		for(j=0; j<7; j++)
		{
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	cout << "Наибольшая сумма в " << l << " строчке";
	
	return 0;
}
*/


// Структуры



	//Задание 1-2
/*
struct AEROFLOT
{
	string name_of_destination;
	int  flight_number;
	string type_of_aircraft;
};


int main(){
	setlocale(LC_ALL, "rus");
	
	int i, j;
	AEROFLOT A[7];
	AEROFLOT pr, *p;
	string type_of_aircraft;
	
	for(p=&A[0]; p<&A[7]; p++)
	{
		cout << "Введите название пункта назначения рейса, номер рейса и тип самолета: ";
		cin >> p->name_of_destination >> p->flight_number >> p->type_of_aircraft;
	}
	
	for(i=0; i<7; i++)
	{
		for(j=0; j<7; j++)
		{
			if (A[i].name_of_destination < A[j].name_of_destination)
			{
				pr = A[i];
				A[i] = A[j];
				A[j] = pr;
			}
		}
	}
	
	cout << "Введите тип самолёта, чтобы посмотреть номера рейсов и пункты назначения, обслуживаемых самолётом введённого типа: ";
	cin >> type_of_aircraft;
	j=0;
	
	for(i=0; i<7; i++)
	{
		if (A[i].type_of_aircraft == type_of_aircraft)
		{
			cout << "Пункт назначения рейса - " << A[i].name_of_destination << "; номер рейса - " << A[i].flight_number << endl;
			j++;
		}
	}
	
	if (j==0) cout << "К сожалению рейсов для заданного типа самолётов нет.";
	
	return 0;
}
*/

/*
//Задание 3-4
struct MARSH
{
	string start_name;
	int  marsh_number;
	string end_name;
};

int main(){
	setlocale(LC_ALL, "rus");
	
	int i, j, marsh_number;
	MARSH A[8];
	MARSH pr, *p;
	
	for(p=&A[0]; p<&A[7]; p++)
	{
		cout << "Введите название начального пункта маршрута, конечного пункта маршрута и номер маршрута: ";
		cin >> p->start_name >> p->end_name >> p->marsh_number;
	}
	
	for(i=0; i<8; i++)
	{
		for(j=0; j<8; j++)
		{
			if (A[i].marsh_number < A[j].marsh_number)
			{
				pr = A[i];
				A[i] = A[j];
				A[j] = pr;
			}
		}
	}
	
	cout << "Введите номер маршрута, чтобы ппосмотреть о нём информацию: ";
	cin >> marsh_number;
	j=0;
	
	for(i=0; i<8; i++)
	{
		if (A[i].marsh_number == marsh_number)
		{
			cout << "Начало маршрута - " << A[i].start_name << "; конец маршрута - " << A[i].end_name << endl;
			j++;
		}
	}
	
	if (j==0) cout << "К сожалению информации по номеру вашего маршрута нет.";

	return 0;
}

*/




































