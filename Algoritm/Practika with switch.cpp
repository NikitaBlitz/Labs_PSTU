#include <iostream>
#include <cmath>
using namespace std;
int practika = -1;
void practika_2_1()
{
	int N, sum;
	sum = 0;
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		sum = sum + i;
	}
	cout << sum;
}
void practika_2_2()
{
	int N, sum;
	sum = 1;
	cin >> N;
	if (N <= 0)
	{
		cout << "Это не натуральное число" << endl;
	}
	else
	{
		for (int i = 1; i <= N; i++)
		{
			sum = sum * i;
		}
	}
	cout << sum;
}
void practika_2_3()
{
	int s, n, t;
	s = 0;
	cin >> n;
	if (n <= 0)
	{
		cout << "это не натуральное число" << endl;
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			t = 1;
			for (int j = i; j <= i * 2; j++)
			{
				t *= j;
			}
			s += t;
		}
		cout << s << endl;
	}
}
void practika_2_4()
{
	cout << "напечатать в консоли равнобедренный треугольник из звездочек (*) с вершиной, направленной вверх, и основанием N, где N — натуральное нечетное число больше 3." << endl;
	cout << "введите основание больше 3 и нечетное" << endl;
	int n;
	cin >> n;
	int spaces = n / 2;
	int stars = 1;
	if ((n > 3) and (n % 2 != 0)) 
    {
		for (int i = 1; i <= (n + 1) / 2; i++) 
		{
			for (int j = 1; j <= spaces; j++)
			{
				cout << " ";
			}
			spaces--;
			for (int j = 1; j <= stars; j++)
			{
				cout << "*";
			}
			stars += 2;
			cout << endl;
		}
	}
}
void practika_2_5()
{
	cout << "напечатать заполненный прямоугольный равнобедренный треугольник из * со сторонами катетов, равными N, и прямым углом справа снизу. где N — натуральное число больше 2." << endl;
	cout << "Введите натуральное число N, которое больше 2" << endl;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 1; j < n - i; j++) {
			cout << " ";
		}
		for (int j = 0; j <= i; j++) {
			cout << "* ";
		}
		cout << endl;
	}
}
void practika_2_6()
{
	cout << "напечатать заполненный прямоугольный равнобедренный треугольник из * со сторонами катетов, равными N, и прямым углом справа сверху. где N — натуральное число больше 2." << endl;
	cout << "Введите натуральное число N, которое больше 2" << endl;
	int n;
	cin >> n;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "  ";
		}
		for (int j = 1; j <= n - i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
}
void practika_2_7()
{
	cout << "Напечатать квадрат из N звездочек. Реализовать все три варианта.  А) В котором ВСЕГО N звездочек. Б) Заполненный квадрат со стороной N. В) Пустой квадрат со стороной N." << endl;
	float n, storona;
	int otvet;
	cout << "Выберите какое задание нужно: 1, 2 или 3" << endl;
	cin >> (otvet);
	if (otvet==1)
	{
		cout << "Введите кол. звезд" << endl;
		cin >> n;
		storona = sqrt(n);
		if (n != pow(storona, 2))
		{
			cout << "Ваше число не подходит по условиям";
		}
		else
		{
			for (int i = 1; i <= storona; i++)
			{
				for (int j = 1; j <= storona; j++)
				{
					cout << "* ";
				}
				cout << endl;
			}
		}
	}
	if (otvet == 2)
	{
		cout << "Введите сторону квадрата" << endl;
		cin >> n;
		for (int i = 0; i <= n - 1; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				cout << "* ";
			}
			cout << endl;
		}
	}
	if (otvet == 3)
	{
		cout << "Введите сторону квадрата" << endl;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (i > 0 and i < (n - 1) and j>0 and j < (n - 1))
				{
					cout << "  ";
				}
				else
				{
					cout << "* ";
				}
			}
			cout << endl;
		}
	}
}
void practika_2_8()
{
	cout << "Напечатать прямоугольный равнобедренный треугольник со сторонами катетов, равными N, и прямым углом слева, где N — натуральное число больше 2." << endl;
	int n;
	cin >> n;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
}
void practika_2_9()
{
	cout << "Построить пустой куб из звездочек." << endl;
	int n, d;

	cout << "Введите сторону куба:" << endl;
	cin >> n;
	d = n / 2;
	// Задняя верхняя грань
	for (int i = 0; i < d; i++)
	{
		cout << " ";
	}
	for (int i = 0; i < n; i++)
	{
		cout << "* ";
	}
	cout << endl;

	//Верхние диагонали
	for (int i = 0; i < d - 1; i++)
	{
		for (int j = 1; j < d - i; j++)
		{
			cout << " ";
		}
		cout << "* ";
		for (int j = 0; j < n - 2; j++)
		{
			cout << "  ";
		}
		cout << "*";
		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}
		cout << "*";
		cout << endl;
	}

	// Передняя верхняя грань
	for (int i = 0; i < n; i++)
	{
		cout << "* ";
	}
	for (int i = 0; i < d - 2; i++)
	{
		cout << " ";
	}
	cout << "*";
	cout << endl;
	// Боковые грани
	for (int i = 0; i < n - d - 1; i++)
	{
		cout << "* ";
		for (int j = 0; j < n - 2; j++)
		{
			cout << "  ";
		}
		cout << "* ";
		for (int j = 0; j < d - 2; j++)
		{
			cout << " ";
		}
		cout << "*";
		cout << endl;
	}
	// Нижние диагонали
	for (int i = 0; i < d - 1; i++)
	{
		cout << "* ";
		for (int j = 0; j < n - 2; j++)
		{
			cout << "  ";
		}
		cout << "*";
		for (int j = 1; j < d - i - 1; j++)
		{
			cout << " ";
		}
		cout << "*";
		cout << endl;
	}
	// Нижняя грань
	for (int i = 0; i < n; i++)
	{
		cout << "* ";
	}
	cout << endl;
}
void practika_2_10()
{
	cout << " Последовательность целых чисел вводится с клавиатуры. Первое введенное число не является элементом последовательности, а задает количество элементов последовательности. Необходимо найти первый max элемент в последовательности." << endl;
	setlocale(LC_ALL, "Russian");
	int n, t, max;
	cout << "введите длину последовательности";
	cin >> n;
	cout << "введите число";
	cin >> max;
	for (int i = 2; i <= n; i++)
	{
		cout << "введите число";
		cin >> t;
		if (t >= max)
		{
			max = t;
		}
	}
	cout << max;
}
void practika_2_11()
{
	cout << "Последовательность целых чисел вводится с клавиатуры. Первое введенное число не является элементом последовательности, а задает количество элементов последовательности. Определить, что вводится раньше в последовательности: положительные или отрицательные числа (все введенные элементы могут быть нулевыми)." << endl;
	int n, i, t;
	bool fl = false;

	cout << "Введите длину последовательности:";
	cin >> n;
	i = 1;
	while (i <= n && !fl)
	{
		cin >> t;
		if (t == 0)
		{
			i++;
		}
		else
		{
			fl = true;
		}
	}

	if (t>0)
	{
		cout << "Сначала ввели положительное число";
	}
	if (t<0)
	{
		cout << "Сначала ввели отрицательное число";
	}
	if (t = 0)
	{
		cout << "Сначала ввели ноль";
	}
}
void practika_2_12()
{
	cout << "Последовательность из N положительных чисел вводится с клавиатуры. Найти сумму максимального и минимального элементов последовательности." << endl;
	setlocale(LC_ALL, "Russian");
	int n, t, max, min;
	cout << "введите длину последовательности положительное число" << endl;
	cin >> n;
	cout << "введите первое число" << endl;
	cin >> t;
	max = min = t;
	for (int i = 2; i <= n; i++)
	{
		cin >> t;
		if (t > max)
		{
			max = t;
		}
		if (t < min)
		{
			min = t;
		}
	}
	cout << "сумма макс и мин." << (max + min) << endl;
}
void practika_2_13()
{
	cout << "Решите квадратное уравнение вида ax<sup>2</sup> + bx + c = 0. Коэффициенты уравнения вводятся с клавиатуры." << endl;
	setlocale(LC_ALL, "Russian");
	float a, b, c, x1, x2;
	float d;
	cout << "введите коэффициенты уравнения" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	d = (b * b) - (4 * a * c);
	if (d < 0)
	{
		cout << "решения нет" << endl;
	}
	if (d > 0)
	{
		x1 = (-b - sqrt(d)) / (2 * a);
		x2 = (-b + sqrt(d)) / (2 * a);
		cout << x1 << "  " << x2 << endl;
	}
	if (d == 0)
	{
		x1 = (-b / (2 * a));
		cout << x1 << endl;
	}
}
void practika_2_14()
{
	cout << "дано натуральное число N. НАйти сумму цифр этого числа." << endl;
	setlocale(LC_ALL, "Russian");
	int n, sum = 0;
	cout << "введте число" << endl;
	cin >> n;
	while (n > 0)
	{
		sum += n % 10;
		n = n / 10;
	}
	cout << sum;
}
void practika_2_15()
{
	cout << "дано натуральное число N. Входит ли цифра Z в запись этого числа." << endl;
	setlocale(LC_ALL, "Russian");
	{
		int n, k, z;

		setlocale(LC_ALL, "Rus");
		cin >> n;
		cin >> z;
		while (n > 0)
		{
			k = n % 10;
			if (z == k)
			{
				cout << "Да, входит.";
				break;
			}
			n = n / 10;
		}
	}
}
void practika_2_16()
{
	int n, sum = 0;
	cin >> n;
	for (int i = 0; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			sum += i;
		}
		if (i % 2 != 0)
		{
			sum -= i;
		}
	}
	cout << sum;
	int n1, z, sum1 = 0;
	cin >> n1;
	cin >> z;
	for (int i = 0; i <= n1; i++)
	{
		if (i % 2 == 0 and i % z == 0)
		{
			sum1 += i;
		}
		if (i % 2 != 0 and i % z == 0)
		{
			sum1 -= i;
		}
	}
	cout << sum1;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Выберите задание из практики от 2.1 до 2.16( выбирайте последнее число, например для 2.1 пиши 1" << endl;
	cin >> practika;
	switch (practika)
	{
	case 1: practika_2_1(); break;
	case 2: practika_2_2(); break;
	case 3: practika_2_3(); break;
	case 4: practika_2_4(); break;
	case 5: practika_2_5(); break;
	case 6: practika_2_6(); break;
	case 7: practika_2_7(); break;
	case 8: practika_2_8(); break;
	case 9: practika_2_9(); break;
	case 10: practika_2_10(); break;
	case 11: practika_2_11(); break;
	case 12: practika_2_12(); break;
	case 13: practika_2_13(); break;
	case 14: practika_2_14(); break;
	case 15: practika_2_15(); break;
	case 16: practika_2_16(); break;
	default: cout << "Такой задачи нет" << endl;
		break;
	}
}

