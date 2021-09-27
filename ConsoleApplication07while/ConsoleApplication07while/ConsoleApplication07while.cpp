
#include <iostream>
using namespace std;
void task_while9();
void task_while18();
void task_while22();
void task_while24();
void task_while25();


int main()
{
	task_while9();
	task_while18();
	task_while22();
	task_while24();
	task_while25();
}

void task_while9() {
	int n, k;
	cout << "n: ";
	cin >> n;
	
	if (n < 1) {
		cout << "error\n";
	}
		int a = 3;
		k = 1;
	while (a <= n) {
		a *= 3;
		k++;
	}

	cout << k << endl;
}


void task_while18() {

	int n;
	cout << "n: ";
	cin >> n;
	int sum = 0, num = 0;
	while (n > 0) {
		++num;
		sum += n % 10;
		n /= 10;
	}
	cout << "Num:" << num << endl << "Sum:" << sum << endl;
}

void task_while22() {

	int n, k;
	cout << "N: ";
		cin >> n;
	k = 2;

	while ((k < n - 1) & ((n % k) != 0)) {
		++k;

	}
	if ((n % k) != 0)
		cout << "True\n";
	else
		cout << "False\n";
}

void task_while24() {
	int n;
	cout << "N:";
	cin >> n;

	int f1 = 1, f2 = 1, f = 0;

	while (f < n) {
		f = f2 + f1;
		f2 = f1;
		f1 = f;
	}
	if (f == n)
		cout << "True\n";
	else
		cout << "False\n";




}
void task_while25() {

	int n;
	cout << "N:";
	cin >> n;

	int f1 = 1, f2 = 1, f = 0;

	while (f < n + 1) {
		f = f2 + f1;
		f2 = f1;
		f1 = f;
	}
	cout << f << endl;
}