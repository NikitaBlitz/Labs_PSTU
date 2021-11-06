#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");//вывод русского языка в консоли
    int f; float c;//объявляем переменные
    cout << "введите градусы по Фарингейту" << endl;
    cin >> f;
    c = 5.0 / 9.0 * (f-32);//с у нас вещественное
    cout << "градусы Цельсия" << endl;
    cout << c<<endl;
}
