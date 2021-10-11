
#include <iostream>
using namespace std;
void task_array1_1();
void task_array1_7();
void task_array1_8();
void task_array2_18();
void task_array2_24();
void task_array2_28();
void task_array3_51();
void task_array3_53();
void task_array3_58();

int main()
{
     task_array1_1();
     task_array1_7();
     task_array1_8();
     task_array2_18();
     task_array2_24();
     task_array2_28();
     task_array3_51();
     task_array3_53();
     task_array3_58();
   

}
    
 void task_array1_1() {
    int arr[100];
    int n;

    cout << "N: ";
    cin >> n;

    for (int i = 0; i < n; i++)
        arr[i] = 1 + i * 2;

    for (int i = 0; i < n; ++i)
        cout << "a[" << i << "]=" << arr[i] << endl;
}

void task_array1_7() {
    int arr[100];
    int n, i;
    cout << "N: ";
    cin >> n;

    for ( i = 0; i < n; ++i)
    {
        cout << "a[" << i << "]:";
        cin >> arr[i];
    }
    for (i = n - 1; i >= 0; --i)
        cout << arr[i] << endl;
}

void task_array1_8() {
    int n, k = 0;
    cout << "n: ";
    cin >> n;
    int arr[100];

    for (int i = 0; i < n; ++i)
    {
        cout << "a[" << i << "]:";
        cin >> arr[i];
    }
        for (int i = 0; i <= n; i++) {

            if (arr[i] % 2 == 1)
            {
                cout << arr[i] << endl;
                    k++;
            }
            
                
        }
    cout << " k = " << k << endl;
    

}
void task_array2_18() {
    int arr[10];
    int k;
    cout << "k:  ";
    cin>> k;
    for (k = 0; k < 10; ++k)
    {
        cout << "a[" << k << "]:";
        cin >> arr[k];
    }
    for (k = 0; arr[k] >= arr[9]; ++k) {
        if (k == 10)
            cout << "0" << endl;
        else
            cout << arr[k] << endl;
    }
}

void task_array2_24() {
    int arr[10];
    int n;
    cout << "n: ";
    cin >> n;
    int i;
    for (i = 0; i < n; ++i) {
        cout << "a[" << i << "]:";
        cin >> arr[i];
    }
    int r = arr[1] - arr[0];
    for (i = 1; i < n; ++i) {
        if (r != arr[i] - arr[i - 1]) {
            r = 0;
        }
    }
    cout << r << endl;
}

void task_array2_28() {
    int arr[10];
    int n;
    cout << "N: ";
    cin >> n;
    int i;
    for (i = 0; i < n; ++i) {
        cout << "a[" << i << "]:";
        cin >> arr[i];
    }
    int min = arr[1];

    for (i = 1; i < n; i += 2) {
        if (arr[i] < min) min = arr[i];
    }
    cout << min << endl;
}

void task_array3_51() {
    int a[10], b[10];
    int n;
    cout << "N: ";
    cin >> n;
    int i;
    for (i = 0; i < n; ++i) {
        cout << "a[" << i << "]:";
        cin >> a[i];
    }
    for (i = 0; i < n; ++i) {
        cout << "b[" << i << "]:";
        cin >> b[i];
    }
    for (i = 0; i < n; ++i) {
        a[i] += b[i];
        b[i] = a[i] - b[i];
        a[i] = a[i] - b[i];
    }
    for (i = 0; i < n; ++i) {
        cout << "A: " << a[i] << endl;
    }
    for (i = 0; i < n; ++i) {
        cout << "B: " << b[i] << endl;
    }
}

void task_array3_53() {
    float a[10], b[10], c[10];
    int n;
    cout << "N: ";
    cin >> n;
    int i;
    for (i = 0; i < n; ++i) {
        cout << "a[" << i << "]:";
        cin >> a[i];
    }
    for (i = 0; i < n; ++i) {
        cout << "b[" << i << "]:";
        cin >> b[i];
    }
    for (i = 0; i < n; ++i) {
        if (a[i] > b[i]) c[i] = a[i];
        else c[i] = b[i];
    }
    for (i = 0; i < n; ++i) {
        cout << "c:" << c[i] << endl;
    }
}

void task_array3_58() {
    int a[10], b[10];
    int n;
    cout << "N: ";
    cin >> n;
    int k;
    for (k = 0; k < n; ++k) {
        cout << "a[" << k << "]:";
        cin >> a[k];
    }
    int i;
    for (k = 0; k < n; ++k) {
        b[k] = 0;
        for (i = 0; i <= k; ++i) {
            b[k] += a[i];
        }
    }
    for (i = 0; i < n; ++i) {
        cout << "b:" << b[k] << endl;
    }
}



