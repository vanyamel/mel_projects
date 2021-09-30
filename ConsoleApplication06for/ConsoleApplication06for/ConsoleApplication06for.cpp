
#include <iostream>
#include <cmath>
using namespace std;

void task_for01();
void task_for15();
void task_for13();
void task_for20();
void task_for31();



int main()
{
	task_for01();
	task_for15();
	task_for13();
	task_for20();
	task_for31();
}

void task_for01() {
	int k, n;
	cout << "k: ";
	cin >> k;
	cout << "n: ";
	cin >> n;
		int i;
		for (i = 0; i < n; ++i)
			cout << k << endl;
}

void task_for15() {
	int a,n;
	cout << "a: ";
	cin >> a;
	cout << "n: ";
	cin >> n;
	int i;
	float result = 1;
	for (i = 1; i <= n; ++i)
		result *= a;
	cout << result << endl;
}

void task_for13() {
	int n;
	cout << "n ";
	cin >> n;
		float rez = 0;
	for (double i = 1; i <= n; i++)
		rez += pow(-1, i + 1) * (1.0 + i / 10);
	cout << "Result= " << rez << endl;

}
void task_for20() {
	int n;
	cout << "N:";
	cin >> n;
	float n1 = 1, rez = 0;
	for (float i = 1; i <= n; ++i) {
		n1 *= i;
		rez += n1;
	}
	cout << rez << endl;
}
void task_for31() {
	int N;
	cout << "N: ";
	cin >> N;
	double A = 2;
	for (int i = 1; i <= N; ++i) {
		A = 2 + 1 / A;
		cout << A << " ";
	}
	cout << endl;
}

