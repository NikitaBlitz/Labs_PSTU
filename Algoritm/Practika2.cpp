#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	float a, b, ch;
	cout << "Введите числитель и знаменатель" << endl;
	cin >> a >> b;
	if (b != 0)
	{
		ch = a / b;
		cout << ch << endl;
	}
	else
	{
		cout << "У вас знаменатель равен нулю!!!";
	}
	return 0;
}