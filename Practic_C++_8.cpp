#include <iostream>
#include <iomanip>
#include <math.h>
#include <cmath>
#include <string>
#include <stdio.h>
#include <cstdlib>
#include <time.h>

using namespace std;


//������� 1-2
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
		cout << "������� �������� ������ ���������� �����, ����� ����� � ��� ��������: ";
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
	
	cout << "������� ��� �������, ����� ���������� ������ ������ � ������ ����������, ������������� �������� ��������� ����: ";
	cin >> type_of_aircraft;
	j=0;
	
	for(i=0; i<7; i++)
	{
		if (A[i].type_of_aircraft == type_of_aircraft)
		{
			cout << "����� ���������� ����� - " << A[i].name_of_destination << "; ����� ����� - " << A[i].flight_number << endl;
			j++;
		}
	}
	
	if (j==0) cout << "� ��������� ������ ��� ��������� ���� �������� ���.";
	
	return 0;
}
*/

//������� 3-4
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
		cout << "������� �������� ���������� ������ ��������, ��������� ������ �������� � ����� ��������: ";
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
	
	cout << "������� ����� ��������, ����� ����������� � �� ����������: ";
	cin >> marsh_number;
	j=0;
	
	for(i=0; i<8; i++)
	{
		if (A[i].marsh_number == marsh_number)
		{
			cout << "������ �������� - " << A[i].start_name << "; ����� �������� - " << A[i].end_name << endl;
			j++;
		}
	}
	
	if (j==0) cout << "� ��������� ���������� �� ������ ������ �������� ���.";

	return 0;
}









