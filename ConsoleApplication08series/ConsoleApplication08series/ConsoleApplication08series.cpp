

#include <iostream>
using namespace std;
void task_series8();
void task_series12();
void task_series4();
void task_series6();
void task_series16();

int main()
{
    task_series8();
    task_series12();
    task_series4();
    task_series6();
    task_series16();
}

void task_series8() {
    int i, n, k, num = 0;
    cout << "N:";
    cin >> n;
    for (i = 1; i <= n; ++i) {
        cout << "i" << i << "-";
        cin >> k;
        if (k % 2 == 0) {
            cout << k << endl;
            ++num;
        } 
    }
    cout << "Number "<< num << endl;
}

void task_series12() {
    int i = 0, r = 1;
    while (r != 0) {
        ++i;
        cout << i << " =" << endl;
        cin >> r;
    }
    cout << i - 1 << endl;
}

void task_series4() {
    float  sum = 0, pro = 1, n;
    int i;
    for (i = 1; i <= 10; ++i) {
        cout << "i" << i << "-";
        cin >> n;
        sum += n;
        pro *= n;
    }
    cout << "Sum " << sum << endl << "Pro is " << pro <<endl;
}

void task_series6() {
    
    float  r, pro = 1;
    int i, n;
    cout << "N:";
    cin >> n;
    for (i = 1; i <= n; ++i) {
        cout << "i" << i << "-";
        cin >> r;
        cout << r - (float)((int)r) << endl;
        pro *= r - (float)((int)r);
    }
    cout << "pro is " << pro << endl;
}
void task_series16() {
    int k, r = 1, num = 0;
    cout << "K: ";
    cin >> k;
    while (r != 0) {
        cout << "Num ";
        cin >> r;
        if (r > k) num = r;
    }
    cout << num << endl;
}