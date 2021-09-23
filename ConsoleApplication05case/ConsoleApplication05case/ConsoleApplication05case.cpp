

#include <iostream>
using namespace std;
void task_case01();
void task_case02();
void task_case07();
void task_case13();
void task_case14();

int main()
{
    task_case01();
    task_case02();
    task_case07();
    task_case13();
    task_case14();
}

void task_case01() {
        int a;
        cout << "date:  ";
        cin >> a;
        switch (a) {
        case 1: cout << "Monday\n"; break;
        case 2: cout << "Tuesday\n"; break;
        case 3: cout << "Wednesday\n"; break;
        case 4: cout << "Thursday\n"; break;
        case 5: cout << "Friday\n"; break;
        case 6: cout << "Saturday\n"; break;
        case 7: cout << "Sunday\n"; break;
        default: cout << "Error\n";
        }
    }

void task_case02() {
    int k;

    cout << "k: "; 
    cin >> k;

    switch (k)
    {
    case 1: cout << "Bad\n"; break;
    case 2: cout << "Badv2.0\n"; break;
    case 3: cout << "Nice\n"; break;
    case 4: cout << "Good\n"; break;
    case 5: cout << "Exellent\n"; break;
    default: cout << "Error\n";
    }      
}
void task_case07() {
    int n, m;
    cout << "number of mass(1-5): ";
    cin >> n;
    cout << "mass: ";
    cin >> m;


    switch (n) {
        case 1: cout << m << endl; break;
        case 2: cout << m / 1000000 << endl; break;
        case 3: cout << m / 1000 << endl; break;
        case 4: cout << m * 1000 << endl; break;
        case 5: cout << m * 100 << endl;  break;
    }
}

void task_case13() {
    int n;
    float x, a, c, h, s;
    cout << "number: ";
    cin >> n;
    cout << "length: ";
    cin >> x;

    switch (n) {
    case 1:
        a = x;
        c = a * sqrt(2);
        h = c / 2;
        s = c * h / 2;
        cout << c << endl << h << endl << s << endl;
        break;
    case 2:
        c = x;
        a = c / sqrt(2);
        h = c / 2;
        s = c * h / 2;
        cout << a << endl << h << endl << s << endl;
        break;
    case 3:
        h = x;
        c = 2 * h;
        a = c / sqrt(2);
        s = c * h / 2;
        cout << a << endl << c << endl << s  << endl;
        break;
    case 4:
        s = x;
        h = sqrt(s);
        c = 2 * h;
        a = c / sqrt(2);
        cout << a <<endl <<c << endl << h << endl;
        break;
    }
}
void task_case14() {
    int n;
    float x, a, r1, r2, s;
    cout << "number: ";
    cin >> n;
    cout << "length: ";
    cin >> x;

    switch (n) {
    case 1:
        a = x;
        r1 = a * sqrt(3) / 6;
        r2 = 2 * r1;
        s = a * a * sqrt(3) / 4;
        cout << r1 << endl << r2 << endl << s << endl;
        break;
    case 2:
        r1 = x;
        a = r1 * 6 / sqrt(3);
        r2 = 2 * r1;
        s = a * a * sqrt(3) / 4;
        cout << a << endl << r2 << endl << s << endl;
        break;
    case 3:
        r2 = x;
        r1 = r2 / 2;
        a = r1 * 6 / sqrt(3);
        s = a * a * sqrt(3) / 4;
        cout << a << endl << r1 << endl << s << endl;
        break;
    case 4:
        s = x;
        a = sqrt(s * 4 / sqrt(3));
        r1 = a * sqrt(3) / 6;
        r2 = 2 * r1;
        cout << a << endl << r1 << endl << r2 << endl;
        break;
    }
}



