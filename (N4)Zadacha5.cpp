#include <iostream> 
using namespace std; 
int main() 
{
	int i, a; // объявляем переменные 
	i = 1; // Присваиваем i, 1
	a = ++i*i++; // ++i = 2; i++ = 2; a = 2 * 2; a = 4
	cout << a; // выводим a
}
