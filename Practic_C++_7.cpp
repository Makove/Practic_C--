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
// �������



	//������� 1
	int n, f=0, *p;
	cout << "������� ������ �������: ";
	cin >> n;
	int mas[n];

	cout << "������� �������� �������: ";
	for (p=mas; p<&mas[n]; p++)
	{
		cin >> *p;
		if (*p >= 0 && *p%2 == 0 )
			f+=*p;
	}
	cout << "����� ������ ������������� ���������: " << f;


	//������� 2
	int  n, f=-10000, *p, i=0;
	cout << "������� ������ �������: ";
	cin >> n;
	int mas[n];
	
	cout << "������� �������� �������: ";
	for (p=mas; p<&mas[n]; p++)
	{
		cin >> *p;
		if (*p > f && i%2 == 0 )
			f = *p;
		i++;
	}
	cout << "������������ ������� ������� � ������ ��������: " << f;


	//������� 3
	int n, sr_ar, summ=0, *p;
	cout << "������� ������ �������: ";
	cin >> n;
	int mas[n];
	
	cout << "������� �������� �������: ";
	for (p=mas; p<&mas[n]; p++)
	{
		cin >> *p;
		summ += *p;
	}
	sr_ar = summ / n;
	
	cout << "������� �������������� �������: " << sr_ar << endl << "�������� �������, ��� �������� ������ �������� ���������������: " << endl;
	for (p=mas; p<&mas[n]; p++)
	{
		if (*p < sr_ar)
			cout << *p << endl;
	}


	//������� 4
	int n, min1=10000, min2=10000, *p;
	cout << "������� ������ �������: ";
	cin >> n;
	int mas[n];
	
	cout << "������� �������� �������: ";
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
	cout << "����������� �������� �������: " << min1 << " � " << min2;


	//������� 5
	int *p, n, n1, a, b, ch=0, l;
	cout << "������� a � b: ";
	cin >> a >> b;
	cout << "������� ������ �������: ";
	cin >> n;
	n1 = n;
	int mas[n];
	
	cout << "������� �������� �������: ";
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


	//������� 6
	int *p, n, f, su=-1;
	cout << "������� ������ �������: ";
	cin >> n;
	int mas[n];
	
	cout << "������� �������� �������: ";
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
	cout << "����� ������� ��������� �������, ������������� ����� ������� ������������� ��������: " << su;


	//������� 7
	int i=0, n, mi=999999, *p, in;
	cout << "������� ������ �������: ";
	cin >> n;
	int mas[n];
	
	cout << "������� �������� �������: ";
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
	cout << "����������� �� ������ ������� �����: " << mi << ", � ��� ������: " << in;


	//������� 8
	int *p, n, su=0;
	cout << "������� ������ �������: ";
	cin >> n;
	int mas[n];
	
	cout << "������� �������� �������: ";
	for (p=mas; p<&mas[n]; p++)
	{
		cin >> *p;
		while (*p > 0)
		{
			su += *p%10;
			*p/=10;
		}
	}
	cout << "����� ���� ���� �������: " << su;


	//������� 9
	int k, *p, *end;
	int B[4][3];
	end = &B[0][0] + 12;
	
	cout << "������� 12 ��������� ��� ���������� ���������� �������: ";
	for (p=&B[0][0]; p<end; p++)
	{
		cin >> k;
		*p = k*k;
	}
	
	k=1;
	cout << "��� ������ � ����������, ����������� � �������: " << endl;
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

	
	//������� 10
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
	cout << "���������� ����� � " << l << " �������";
	
	return 0;
}
*/


// ���������



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
	AEROFLOT pr, *p;
	string type_of_aircraft;
	
	for(p=&A[0]; p<&A[7]; p++)
	{
		cout << "������� �������� ������ ���������� �����, ����� ����� � ��� ��������: ";
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

/*
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
	MARSH pr, *p;
	
	for(p=&A[0]; p<&A[7]; p++)
	{
		cout << "������� �������� ���������� ������ ��������, ��������� ������ �������� � ����� ��������: ";
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

*/




































