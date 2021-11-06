#include <iostream> 
using namespace std; 
int main() 
{
    setlocale(LC_ALL, "Russian"); // вывод русского языка в консоли 
    char a, b, c, d, e; // Объявляем переменные
    cout << "Введите 5 символов:" << endl;
    cin >> a >> b >> c >> d >> e;// ввод переменных
    cout << "В обратной последовательности:" << endl;
    cout << e << " " << d << " " << c << " " << b << " " << a; // вывод переменных в обратной последовательности
}
