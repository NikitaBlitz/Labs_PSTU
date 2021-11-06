#include <iostream> 
using namespace std; 
int main() 
{
    setlocale(LC_ALL, "Russian"); // вывод русского языка в консоле
    const int n = 10; // объявление константы
    int m; //объявление m
    m = n * 2; // присваивание m
    cout << n << endl;
    cout << m << endl;
    cout << --m << endl; // операция декремента
}
