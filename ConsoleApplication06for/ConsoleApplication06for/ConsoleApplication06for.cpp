
#include <iostream>
#include <cmath>
using namespace std;

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
	cout << result;
}



int main()
{
	task_for01();
	task_for15();
}
