#include <iostream>
#include <math.h>
#define Pi 3,14
using namespace std;
//Базовий клас геометрічне тіло
class Geometric_body
{
public:
	// Віртуальна функція
	virtual void Geometric()
	{
		cout << "Geometric body" << endl;
	}
};

// Клас Ball повертає площу
class Ball : public Geometric_body
{
	int s_Ball = 0;
public:
	virtual void Geometric() override
	{
		s_Ball = 4 * Pi * (2 * 2);
		cout << s_Ball << endl;
	}
};

// Клас parallelepiped повертає площу
class parallelepiped : public Geometric_body
{
	int s_parallelepiped = 0;
public:
	virtual void Geometric() override
	{
		s_parallelepiped = 2 * (2 * 4 + 4 * 3 + 2 * 3);
		cout << s_parallelepiped << endl;
	}
};

// Клас tetrahedron повертає площу
class tetrahedron : public Geometric_body
{
	int s_tetrahedron = 0;
public:
	virtual void Geometric() override
	{
		s_tetrahedron = sqrt(3*(4*4));
		cout << s_tetrahedron << endl;
	}
};

int main()
{
	Geometric_body* A[3]; // Вказівник на базовий клас геометрічне тіло.
	Ball B; parallelepiped C; tetrahedron D; // Зазначення класам відповідних значень.
	A[0] = &B;// Вказівник на базовий клас посилається на об'єкт класу Ball.
	A[1] = &C;// Вказівник на базовий клас посилається на об'єкт класу parallelepiped.
	A[2] = &D;// Вказівник на базовий клас посилається на об'єкт класу tetrahedron.
	for (int i = 0; i < 3; i++)
		A[i]->Geometric();// Поліморфний виклик
}
