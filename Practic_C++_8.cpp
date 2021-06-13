#include <iostream>
#include <iomanip>
#include <math.h>
#include <cmath>
#include <string>
#include <stdio.h>
#include <cstdlib>
#include <time.h>

using namespace std;


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
	AEROFLOT pr;
	string type_of_aircraft;
	
	for(i=0; i<7; i++)
	{
		cout << "Введите название пункта назначения рейса, номер рейса и тип самолета: ";
		cin >> A[i].name_of_destination >> A[i].flight_number >> A[i].type_of_aircraft;
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
	MARSH pr;
	
	for(i=0; i<8; i++)
	{
		cout << "Введите название начального пункта маршрута, конечного пункта маршрута и номер маршрута: ";
		cin >> A[i].start_name >> A[i].end_name >> A[i].marsh_number;
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









