#include <iostream>

using namespace std;
void task_begin01();
void task_begin02();
void task_begin20();
void task_begin21();
void task_begin32();

int main()

{
    task_begin01();
    task_begin02();
    task_begin20();
    task_begin21();
    task_begin32();
    return 0;
    
    }
   
void task_begin01()//Дана сторона квадрата а, найти его периметр. 
{
    int a;
    cout << "storona kvadrata ";
    cin >> a;
    cout << "perymetr kvadrava raven " << a * 4 << endl;

}

void task_begin02() //Дана сторона квадрата а, найти его площадь.
{
    int a;
    cout << "storona kvadrata ";
    cin >> a;
    cout << "ploshad kvadrata ravna " << pow(a,2) << endl;

}

void task_begin20() //Найти расстояние между двумя точками с заданными координатами на плоскости.
{

    int x1, y1, x2, y2;
    cout << "koordinata x pervoi tochki ";
    cin >> x1;
    cout << "koordinata y pervoi tochki ";
    cin >> y1;
    cout << "koordinata x vtoroi tochki ";
    cin >> x2;
    cout << "koordinata y vtoroi tochki ";
    cin >> y2;
    cout << "rastoyaniye na ploskosti ravna " << sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)) << endl;
}

void task_begin21() // Даны координаты трех вершин треугольника. Найти его периметр и площадь, используя формулу task_begin20.
{
    int x1, x2, x3, y1, y2, y3, a, b, c, p;
    cout << "koordinata x pervoi versini ";
    cin >> x1;
    cout << "koordinata y pervoi versini ";
    cin >> y1;
    cout << "koordinata x vtoroi versini ";
    cin >> x2;
    cout << "koordinata y vtoroi versini ";
    cin >> y2;
    cout << "koordinata x tretiei versini ";
    cin >> x3;
    cout << "koordinata y tretiei versini ";
    cin >> y3;
     a= sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
     b= sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
     c= sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
     cout << "Perimetr treugilnika raven " << a + b + c << endl;
     p = (a + b + c) / 2;
     cout << "ploshad treygolnika ravna " << sqrt(p * (p - a) * (p - b) * (p - c)) << endl;
}

void task_begin32() //Дано значение температуры в цельсиях. Определить значение той же температуры в градусах Фаренгейта.
{
    double t_c, t_f;
    cout << "temperatura v celsiah ";
    cin >> t_c;
    t_f = t_c * 1.8 + 32;
    cout << "temperatura v farengeitah " << t_f << endl;
}














