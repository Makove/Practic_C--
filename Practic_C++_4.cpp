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
//������� 1
	int x, le, maxle = 0, minle = 400, su=0, ch=0;
	
	
	for (;;)
	{
		cout << "������� ������� ����������. ����� ��������� ��������� � �������� ����� ��� ������� 0: ";
		cin >> le;
		
		if (le == 0)
		{
			cout << "�� ��������� ����.";
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
	cout << "������� ������ ��������: " << minle << ", ������� ������ ��������: " << maxle << ", ������� �������: " << su/ch;

//������� 2
int apple_box, car, i=1;
cout << "������� ���-�� ������ �� ������: ";
cin >> apple_box;
while (apple_box > 0)
{
	cout << "������� ���-�� ������ ��� " << i << " ������: ";
	cin >> car;
	if(car > apple_box)
		cout << "� ��������� �� ������ �������� ������ " << apple_box << " �����(��)" << endl;
	else
	{
		apple_box -= car;
		cout << car << " ������ ������� ��������� �� " << i << " ������. �� ������� ��������� " << apple_box << " �������" << endl;
		i++;
	}
}

//������� 3
int a, b, su=0;
cout << "������� ��� ����� - �������� �� a �� b: ";
cin >> a >> b;
for(a;a<b+1;a++)
{
	if(a%2 != 0)
	su += a;
}
cout << "����� ���� �������� ����� � ���������: " << su;

//������� 4
int x, i, j;
cout << "������� ������ ������������: ";
cin >> x;

for (int i = 0; i < x; ++i)
    cout << setw(x + i) << string(i * 2 + 1, '^') << endl;
        
//������� 5
int x, ma=0, i;
cout << "������� ����� � ������� ����� ����� ���������� �����: ";
cin >> x;
while(x>0)
{
	if(x%10 > ma)
		ma = x%10;
	x/=10;
}
cout << "���������� ����� ����� - " << ma;

//������� 6
int i;
float q=0;
for(i=0;i<1000;i++)
{
	if(rand()%100 % 2 == 0)
		q++;
}
cout << "����������� ������������ ������� ����� = " << q/1000 * 100;

//������� 7
int n, i, su=0;
cout << "������� n ��� �������� ��������� 1+2+...+n = n(n+1)/2: ";
cin >> n;
for(i=1;i<n+1;i++)
	su = su + i;
i = n* (n+1) / 2;
if (i == su)
	cout << "1+2+...+n = n(n+1)/2 = " << su;
else
	cout << "1+2+...+n = " << su << ", � n(n+1)/2 = " << i;

//������� 8
srand(time(0));
int x, ch=10, k;
x = rand()%(101);
cout << "� ������� �����. � ���� ������ ������� ����� ��� ��������. ����� ����� ������������ ������� � ���� ��������, ������ ��� ������ ��� ����� �� �����." << endl;

for (ch; ch > 0;ch--)
{
	cout << "�������� �������: " << ch << ". ����� �����: ";
	cin >> k;
	if (k == x)
	{
		cout << "����������! �� ������� �� �����!!! ������� �� ������������ ����� ���������.";
		break;
	}
	else
	{
		if (k > x)
			cout << "���� ����� ������ �����." << endl;
		else
			cout << "���� ����� ������ �����." << endl;
	}
}
if (ch == 0)
	cout << "���, �� �� �� ������ �� �����. �� ����� ����: " << x;
 
//������� 9
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
	
//������� 10
int x, such=0, sunch=0;
cout << "������� ����������� �����: ";
cin >> x;
while (x > 0)
{
	if (x%10%2 != 0)
		sunch++;
	else
		such++;
	x = x/10;
}
cout << "���-�� ������ ����: " << such << endl << "���-�� �������� ����: " << sunch;

//������� 11
int x, l1=1, l2=1;
cout << "������� ���-�� ����� ��������� (�� ������ ������): ";
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

//������� 12
	int i, n, s;
	cout << "������� �������, �������� � ���: ";
	cin >> i >> n >> s;
	
	for(i; i < n+1; i=i+s)
	{
		cout << i << " ";
	}

//������� 13
	int x;
	
	cout << "������� �����: ";
	cin >> x;
	
	while (x > 0)
		{
			cout << x%10;
			x = x/10;
		}

//������� 14	
	unsigned long int x;
	int su = 0, pr = 1, ch;
	
	cout << "������� ����������� �����: ";
	cin >> x;
	ch = x;
	
	while (x > 0)
		{	
			su = su + x%10;
			x = x / 10;
		}
	cout << "����� ���� �����: " << su << endl;
	
	while (ch > 0)
		{
			pr = pr * ch%10;
			ch = ch / 10;
		}
	cout << "������������ ���� �����: " << pr;
	
//������� 15
	float a, b;
	string s;
	
	do 
	{
			cout << "������� ��� ����� ��� ���������� �������������� �������������� � ����: ";
			cin >> a >> b;
			cout << "������� ������ ��������, ��� ������ �� ��������� ������� '0': ";
			cin >> s;
			if (s == "+")
				{
					cout << "����� " << a << " � " << b << " = " << a+b << endl;
				}
			else 
				{
					if (s == "-")
						{
							cout << "�������� " << a << " � " << b << " = " << a-b << endl;
						}
					else
						{
							if (s == "*")
								{
									cout << "������������ " << a << " � " << b << " = " << a*b << endl;
								}
							else
								{
									if (s == "/")
										{
											if (b == 0)
												{
													cout << "�� ���� ������ �����!!! �� �� ��!" << endl;
												}
											else
												{
													cout << "������� " << a << " � " << b << " = " << a/b << endl;
												}
										}
									else
										{
											if (s == "0")
												{
													cout << "���� ��������� ���������";
													break;
												}
											else
												{
													cout << "�� ����� ������������ ���� ��������" << endl;
												}
										}
								}
						}
				}	
	}	while (s != "0");
	
	*/
	
	
	
		
		
		
	return 0;
}



