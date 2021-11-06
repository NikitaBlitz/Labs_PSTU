#include <iostream>;
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");//вывод русского языка в консоле
	int gal;
	float f;//будем использовать этот тип, так как у нас будут нецелые числа
	cout << "введите количество галлонов" << endl;
	cin >>  gal;
	f = gal / 7.481;
	cout << "кубических футов в этих галлонов" << endl;
	cout << f;
}