#include <iostream>
using namespace std;
void task_proc1();
void task_proc4();
void task_proc16();
void task_proc20();
void task_proc23();


int main()
{
	 task_proc1();
	 task_proc4();
	 task_proc16();
	 task_proc20();
	 task_proc23();
}
void poweraA3(float a, float* b)
{
	*b = a * a * a;
}

void TrianglePS(double a, double *p, double *s) {
	*p = 3*a;
	*s = a * a * ((sqrt(3)) / 4);

}
	int Sign(int x) {
	if (x < 0)
		return -1;
	if (x == 0)
		return 0;
	if (x > 0)
		return 1;
	}


	float TriangleP(float a, float h) {
		return 2 * sqrt(pow(a / 2, 2) + pow(h, 2)) + a;
	}

	float Quater(float x, float y) {
		if (x>0 && y > 0)
			return 1;
		if (x < 0 && y>0)
			return 2;
		if (x<0 && y < 0)
			return 3;
		if (x > 0 && y < 0)
			return 4;
	}

void task_proc1() {
	
		
	
	int i;
	for (i = 1; i <= 5; ++i) {
		float a, b;
		cout << "A:";
		cin >> a;
		poweraA3(a, &b);
		cout << b << endl;
	}

}
void task_proc4() {
	int i;
	for (i = 1; i < 4; ++i) {
		double a, p, s;
		cout << "A:";
		cin >> a;
		TrianglePS(a, &p, &s);
		cout << "P= " << p << endl << "S= " << s << endl;
		
	}
}
void task_proc16() {
	int a, b, res;
	cout << "A:";
	cin >> a;
	cout << "B:";
	cin >> b;
	res = Sign(a) + Sign(b);
	cout << "result is " << res << endl;
}

void task_proc20() {
	int i;
	for (i=1; i < 4; ++i) {
	float a, h, b, p;
	cout << "A:";
	cin >> a;
	cout << "H:";
	cin >> h;
	cout << "P= " << TriangleP(a, h) << endl;
	}
}
void task_proc23() {
	
	int i;
	for (i = 1; i< 4; ++i) {
	float x, y;
	cout << "X: ";
	cin >> x;
	cout << "Y: ";
	cin >> y;
	cout << "C is in " << Quater(x, y) << "quater" << endl;
	}

}