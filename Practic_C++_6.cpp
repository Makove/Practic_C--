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
//Задание 1
int a=0;
void f()
{
	a++;
	cout << a << " ";
}
int main()
{
	f();
	f();
	return 0;
}



//Задание 2
int a=1;
void f()
{
	if(a % 3 == 0)
		cout << "Good evening!"<< endl;
	else
	{
		if(a % 2 == 0)
			cout << "Good afternoon!" << endl;
		else
		cout << "Good morning!"<< endl;
	}
	a++;
	if (a > 3)
		a = 1;
}
int main()
{
	for (int i=1; i<10; i++)
	{
		f();
	}
	return 0;
}


//Задание 3
int a=0;
void f(int x)
{
	cout << "Old value: " << a << endl;
	a = x;
}
int main()
{
	int t;
	for (int i=1; i<10; i++)
	{
		cout << "Enter new value: ";
		cin >> t;
		f(t);
	}
	return 0;
}


//Задание 4
int x=2;
void f()
{
	int su=1;
	while (su !=2)
	{
		su = 1;
		for(int i=2; i<=x; i++)
		{
			if(x%i == 0)
				su++;
		}
		if (su == 2)
		{
			cout << x << " ";
			x++;
		}
		else
			x++;
}
}
int main()
{
	for (int i=1; i<10; i++)
	{
		f();
	}
	return 0;
}

//Задание 5
int ch=1, cr=0;
void f(float m)
{
	cr = (m+((ch-1)*cr))/ch;
	ch++;
	cout << cr << endl;
}
int main()
{	
	float t;
	for (int i=1; i<10; i++)
	{
		cout << "Enter new value: ";
		cin >> t;
		f(t);
	}
	return 0;
}

//Задание 6
float x=0;
void f(float m)
{

	cout << "New value: " << x+1 << endl;
	x = m;
}
int main()
{
	int t;
	for (int i=1; i<10; i++)
	{
		cout << "Enter value: ";
		cin >> t;
		f(t);
	}
	return 0;
}

//Задание 7
float x1=0, x2=0, x3=0;
void f(float m)
{
	x1=x2;
	x2=x3;
	x3=m;
}
int main()
{
	int t;
	for (int i=1; i<10; i++)
	{
		cout << "Enter value: ";
		cin >> t;
		f(t);
	}
	cout << "Sum: " << x1+x2+x3;
	return 0;
}

//Задание 8
void f(int X[], int m)
{
	for(int i=0; i<m; i++)
	{
		X[i]=i;
	}
	for(int i=0; i<m; i++)
	{
		cout << X[i] << " ";
	}
	cout << endl;
}
int main()
{
	int A[20], B[10];
	f(A, 20);
	f(B, 10);
	return 0;
}

//Задание 9
void create_massive(int X[][5]) 
{
	for(int i=0; i<5; i++) {
		for(int j=0; j<5; j++) {
			X[i][j] = 30+rand()%30;
		}
	}

	for(int i=0; i<5; i++) {
		for(int j=0; j<5; j++) {
			cout << X[i][j] << " ";
		}
		cout << endl;
	}
}

void min_mas(int X[][5])
{
	int mi=999999;
	for(int i=0; i<5; i++) 
	{
		for(int j=0; j<5; j++) 
		{
			if (X[i][j] < mi)
				mi = X[i][j];
		}
	}
	cout << "Minimum: " << mi << endl;
}

void max_mas(int X[][5])
{
	int ma=-999999;
	for(int i=0; i<5; i++) 
	{
		for(int j=0; j<5; j++) 
		{
			if (X[i][j] > ma)
				ma = X[i][j];
		}
	}
	cout << "Maximum: " << ma;
}

int main() {
	int A[5][5];
	create_massive(A);
	min_mas(A);
	max_mas(A);
	return 0;
}

//Задание 10

int roll_the_dice()
{
	int a = 1+rand()%5;
	return a;
}

int who_is_first()
{
	srand(time(0));
	return rand()%2+1;
}

void result(int value)
{
	if (value == 1)
			cout << "0000000" << endl << "0     0" << endl << "0  *  0" << endl << "0     0" << endl << "0000000" << endl;
		else 
		{
			if (value == 2)
				cout << "0000000" << endl << "0 *   0" << endl << "0     0" << endl << "0   * 0" << endl << "0000000" << endl;	
			else
			{
				if (value == 3)
					cout << "0000000" << endl << "0 *   0" << endl << "0  *  0" << endl << "0   * 0" << endl << "0000000" << endl;
				else
				{
					if (value == 4)
						cout << "0000000" << endl << "0 * * 0" << endl << "0     0" << endl << "0 * * 0" << endl << "0000000" << endl;
					else
					{
						if (value == 5)
							cout << "0000000" << endl << "0 * * 0" << endl << "0  *  0" << endl << "0 * * 0" << endl << "0000000" << endl;
						else
							cout << "0000000" << endl << "0 * * 0" << endl << "0 * * 0" << endl << "0 * * 0" << endl << "0000000" << endl;
					}
				}
			}
		}
}

int main()
{	
	int r=who_is_first(), value, computer_score=0, you_score=0;
	
	if (r==1)
		cout << "You go first" << endl << endl;
	else
		cout << "Computer go first" << endl << endl;
	
	for(int i=0; i<4; i++)
	{

		if (r==1)
		{
			value = roll_the_dice();
			cout << "You value: " << endl;
			result(value);
			you_score += value;
			
			value = roll_the_dice();
			cout << "Computer value: "<< endl;
			result(value);
			computer_score += value;
		}
		else
		{
			value = roll_the_dice();
			cout << "Compter value: " << endl;
			result(value);
			computer_score += value;
			
			value = roll_the_dice();
			cout << "You value: " << endl;
			result(value);
			you_score += value;
		}
	
		cout << "The result of the first throws:   You-" << you_score << "  Computer-" << computer_score << endl << endl;
		
	}
	
	if (computer_score > you_score)
		cout << "Oh! You've lost. But next time you will definitely win";
	else
		cout << "Congratulations! You won!!!";

	return 0;
}

*/







