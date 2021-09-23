

#include <iostream>
# include <cmath>
using namespace std;
void task_if03();
void task_if15();
void task_if16();
void task_if18();
void task_if10();

int main()
{
    task_if03();
    task_if15();
    task_if16();
    task_if18();
    task_if10();
}

void task_if03() {

    int a;
    cout << "tseloe chislo: ";
    cin >> a;
    if ((a > 0)) 
        cout << ++a << endl;

    else
    {
        if (a < 0)
        cout << a - 2 << endl;
        else {
            cout << 10 << endl;
        }

    }
}

void task_if15() {
    
    int a, b, c;
    cout << "A: ";
    cin >> a;
    cout << "B: ";
    cin >> b; 
    cout << "C: ";
    cin >> c;
    if (b <= c && b <= a) {
        cout << a + c << endl;
    }
    else {
        if (a <= c && a <= b) {
            cout << b + c << endl;
        }
        else {
            cout << b + a << endl;
        }
    }

}

void task_if16() {
    int a, b, c;
    cout << "first number: ";
    cin >> a;
    cout << "second number: ";
    cin >> b;
    cout << "Third number: ";
    cin >> c;

    if ((a <= b) & (b <= c)) {
        a = a * 2;
        b = b * 2;
        c = c * 2;
        cout << "a:" << a << ' ' << "b:" << b << ' ' << "c:" << c << endl;
    }
    else {
        a = a * (-1);
        b = b * (-1);
        c = c * (-1);
        cout << "a:" << a << ' ' << "b:" << b << ' ' << "c:" << c << endl;
    }
}

void task_if18() {
    int a, b, c;
    cout << "first number: ";
    cin >> a;
    cout << "second number: ";
    cin >> b;
    cout << "third number: ";
    cin >> c;

    if (a == b)
        cout << 3 << endl;
    else if (a == c)
        cout << 2 << endl;
    else
        cout << 1 << endl;
 }

void task_if10() {
    int a, b;
    cout << "first number: ";
    cin >> a;
    cout << "second number: ";
    cin >> b;

    if (a != b) {
        a = a + b;
        b = a;
        cout << "a:" << a << ' ' << "b:" << b << endl;
    }
    else {
        a = b = 0;
        cout << "a:" << a << ' ' << "b:" << b << endl;
    }
}


   













