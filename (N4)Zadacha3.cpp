#include <iostream>;
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, res;
	cout << "Введите 2 числа"<< endl;
	cin >> a >> b;//ввод 2 чисел
	res = a * b;//умножений этих цифр
	cout << res;//результат
}
