#include <iostream>
#include <math.h>
#include <cmath>
#include <string>
#include <time.h>
#include <cstdlib>
using namespace std;

int main(){
	setlocale(LC_ALL, "rus");
	/*
	//������� 1
	int i, n, f=0;
	cout << "������� ������ �������: ";
	cin >> n;
	int mas[n];
	
	cout << "������� �������� �������: ";
	for (i=0; i<n; i++)
	{
		cin >> mas[i];
		if (mas[i] >= 0 && mas[i]%2 == 0 )
		f+=mas[i];
	}
	cout << "����� ������ ������������� ���������: " << f;
	
	//������� 2
	int i, n, f=-10000;
	cout << "������� ������ �������: ";
	cin >> n;
	int mas[n];
	
	cout << "������� �������� �������: ";
	for (i=0; i<n; i++)
	{
		cin >> mas[i];
		if (mas[i] > f && i%2 == 0 )
			f = mas[i];
	}
	cout << "������������ ������� ������� � ������ ��������: " << f;
	
	//������� 3
	int i, n, sr_ar, summ=0;
	cout << "������� ������ �������: ";
	cin >> n;
	int mas[n];
	
	cout << "������� �������� �������: ";
	for (i=0; i<n; i++)
	{
		cin >> mas[i];
		summ += mas[i];
	}
	sr_ar = summ / n;
	
	cout << "������� �������������� �������: " << sr_ar << endl << "�������� �������, ��� �������� ������ �������� ���������������: " << endl;
	for (i=0; i<n; i++)
	{
		if (mas[i] < sr_ar)
			cout << mas[i] << endl;
	}
	
	//������� 4
	int i, n, min1 = 10000, min2 = 10000;
	cout << "������� ������ �������: ";
	cin >> n;
	int mas[n];
	
	cout << "������� �������� �������: ";
	for (i=0; i<n; i++)
	{
		cin >> mas[i];
		if (mas[i] < min1)
			min1 = mas[i];
		else
		{
			if ((mas[i] >= min1)  &&  (mas[i] < min2))
				min2 = mas[i];
		}
	}
	cout << "����������� �������� �������: " << min1 << " � " << min2;
	
	//������� 5
	int i, n, n1, a, b, ch=0, l;
	cout << "������� a � b: ";
	cin >> a >> b;
	cout << "������� ������ �������: ";
	cin >> n;
	n1 = n;
	int mas[n];
	
	cout << "������� �������� �������: ";
	for (i=0; i<n; i++)
	{
		cin >> l;
		if ((a <= l) && (l <= b))
			{
				ch++;
				i--;
				n--;
			}
		else
			mas[i] = l;
	}
	
	for (i=n; i<=n1; i++)
	{
		mas[i] = 0;
	}
	
	for (i=0; i<n1; i++)
	{
		cout << mas[i] << " ";
	}
	
	//������� 6
	int i, n, f, su=-1;
	cout << "������� ������ �������: ";
	cin >> n;
	int mas[n];
	
	cout << "������� �������� �������: ";
	for (i=0; i<n; i++)
	{
		cin >> mas[i];
		if ((mas[i] < 0) && su == -1)
			su = 0;
		else
		{
			if (su != -1)
				su+=abs(mas[i]);
				
		}	
	}
	cout << "����� ������� ��������� �������, ������������� ����� ������� ������������� ��������: " << su;
	
	//������� 7
	int i, n, mi=999999, in;
	cout << "������� ������ �������: ";
	cin >> n;
	int mas[n];
	
	cout << "������� �������� �������: ";
	for (i=0; i<n; i++)
	{
		cin >> mas[i];
		if ( abs(mas[i]) < mi)
		{
			mi = mas[i];
			in = i;
		}
	}
	cout << "����������� �� ������ ������� �����: " << mi << ", � ��� ������: " << in;
	
	//������� 8
	int i, n, su=0;
	cout << "������� ������ �������: ";
	cin >> n;
	int mas[n];
	
	cout << "������� �������� �������: ";
	for (i=0; i<n; i++)
	{
		cin >> mas[i];
		while (mas[i] > 0)
		{
			su += mas[i]%10;
			mas[i]/=10;
		}
	}
	cout << "����� ���� ���� �������: " << su;
	
	//������� 9
	int i, j, k;
	int B[4][3];
	
	cout << "������� 12 ��������� ��� ���������� ���������� �������: ";
	for (i=0; i<4; i++)
	{
		for (j=0; j<3; j++)
		{
			cin >> k;
			B[i][j] = k*k;
		}
	}
	
	cout << "��� ������ � ����������, ����������� � �������: " << endl;
	for (i=0; i<4; i++)
	{
		for (j=0; j<3; j++)
		{
			cout << B[i][j] << " ";
		}
		cout << endl;
	}
	
	//������� 10
	srand(time(0));
	int i, j, su=0, ma= -9999999, l;
	int A[7][7];
	
	for (i=0; i<7; i++)
	{
		for(j=0; j<7; j++)
		{
			A[i][j] = 10 + rand()%100;
			su += A[i][j];
		}
		if (su > ma)
		{
			ma = su;
			l=i;
			su=0;
		}
		else
			su = 0;
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
	*/
	return 0;
}
