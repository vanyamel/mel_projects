

#include <iostream>
using namespace std;
void task_boolean01();
void task_boolean24();
void task_boolean28();
void task_boolean33();
void task_boolean34();




int main()
{
	task_boolean01();
	task_boolean24();
	task_boolean28();
	task_boolean33();
	task_boolean34();
}

void task_boolean01() 
{
	int a;
	cout << "celoe chislo: " << endl;
	cin >> a;
	if (a > 0) 
	{
		cout << "True" << endl;
	}
	else 
	{
		cout << "False" << endl;
	}
}
void task_boolean24()
{
	float a, b, c, d;
	cout << "A: ";
	cin >> a;
	cout << "B: ";
	cin >> b;
	cout << "C: ";
	cin >> c;
	d = pow(b, 2) - (4 * a * c);
		if (d >= 0) 
		{
			cout << "True" << endl;
		}
		else 
		{
			cout << "False" << endl;
		}
}

void task_boolean28()
{
	double x, y;
	cout << "koordinata x: ";
	cin >> x;
	cout << "koordinata y: ";
	cin >> y;
	if (x > 0 && y > 0 || x < 0 && y < 0)
	{
		cout << "True" << endl;
	}
	else
	{
		cout << "False" << endl;
	}
}

void task_boolean33() {
	int a, b, c;
	cout << "A:";
	cin >> a;
	cout << "B:";
	cin >> b;
	cout << "C:";
	cin >> c;

	if ((a + b) > c && (a + c) > b && (b + c) > a) {
		cout << "True" << endl;
	}
	else {
		cout << "False" << endl;
	}
}

void task_boolean34() {
	int x, y;
	cout << "X: ";
	cin >> x;
	cout << "Y: ";
	cin >> y;
	if ((x + y) % 2 != 0)
	{
		cout << "True" << endl;
	}
	else {
		cout << "False" << endl;
	}
}











