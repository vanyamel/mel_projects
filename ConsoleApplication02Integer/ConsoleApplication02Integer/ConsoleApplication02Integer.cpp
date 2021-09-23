

#include <iostream>
using namespace std;
void task_integer01();
void task_integer23();
void task_integer28();
void task_integer29();
void task_integer30();


int main()

{
	task_integer01();
	task_integer23();
	task_integer28();
	task_integer29();
	task_integer30();
	return 0;
}

void task_integer01() // Дано расстояние в см. Найдите количество полных метров
{
	int a;
	cout << "kolichestvo santimetrov: ";
	cin >> a;
	cout << "polnih metrov: "<< a / 100 << "\n";
}

void task_integer23() //С начала суток прошло н секунд, найти количество полных минут, прошедших с начало последнего часа
{
	int n,b;
	cout << "secundi:";
	cin >> n;
	b = n % 3600 / 60;
	cout << "kolichestvo polnih minut, proshedshih c nachala poslednego chasa: " << b <<"\n";
}

void task_integer28() 
{
	int k, n, m;
	cout << "k(1-365): ";
	cin >> k;
	cout << "n(1-7): ";
	cin >> n;
	n = n - 2;
	m = ((k + n) % 7) + 1;
	cout << "nomer dnya nedeli: " << m<<"\n";
}

void task_integer29()
{
	int a, b, c,n,s;
	cout << "A:";
	cin >> a;
	cout << "B:";
	cin >> b;
	cout << "C:";
	cin >> c;
	n = (a/c)*(b/c);
	cout << "kolichestvo kvadratov: " << n << "\n";
	s = a * b - n * pow(c, 2);
	cout << "ne zanyataya ploshad: " << s << "\n";
}

void task_integer30() 
{
	int a, b;
	cout << "god: ";
	cin >> a;
	b = (a / 100) + 1;
	cout << b << "\n";

}
