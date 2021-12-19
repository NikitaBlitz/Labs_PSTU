#include <iostream>
using namespace std;
int option = -1;
void practika_3_1()
{
	int n = 20;
	int a[20];
	int count = 1;
	int max = -1;
	int i = 0;
	int r, range_min, range_max, key;
	range_min = 2;
	range_max = 412;
	for  (i = 0; i < n; i++)
	{
		a[i] = ((double)rand() / RAND_MAX) * (range_max - range_min) + range_min;
		cout << a[i] << " ";
	}
	cout << endl;
	for (int j = 1; j < n; j++)
	{
		key = a[j];
		int i = j - 1;
		while (i >= 0 && a[i] > key)
		{
			a[i + 1] = a[i];
			i--;
		}
		a[i + 1] = key;
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
void practika_3_2()
{

}
void practika_3_3()
{

}
void practika_3_4()
{
	cout << "Условие: найти максимальный элемент массива (массив целых чисел)." << endl;
	int a[10] = { 2, 5, 4, 5, 4, 6, 5, 5, 5, 6 };
	int n = 10;
	int max = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}
	cout << "Максимальное число" << " " << max << endl;
}
void practika_3_5()
{
	cout << "Условие: найти максимальный элемент массива и количество с ним совпадающих (массив целых чисел)." << endl;
	int a[10] = { 2, 5, 4, 5, 4, 1, 5, 5, 5, 1 };
	int n = 10;
	int max = a[0];
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
			k = 0;
		}
		if (a[i] == max)
		{
			k+=1;
		}
	}
	cout << "Максимальное число" << " " << max << " " << "Кол-во" << " " <<k<< endl;
}
void practika_3_6()
{
	cout << "Условие: за один просмотр (т.е. один цикл) найти и минимальный, и максимальный элемент массива (массив целых чисел)." << endl;
	int a[10]{ 5,6,7,-42,9,1,2,3,4,6 };
	int n = 10;
	int max = a[0], min = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
		if (a[i] < min)
		{
			min = a[i];
		}
	}
	cout << max << " " << min << endl;
}
void practika_3_7()
{
	cout << "задан одномерный массив целых чисел. Проверить, упорядочен ли он по возрастанию" << endl;
	int n = 5;
	bool flag = true;
	int a[5]{ 1, 2, 43, 56, 58 };
	for (int i = n - 1; i > 0; i--)
	{
		if (a[i] < a[i - 1])
		{ 
			flag = false; 
		}
	}
	if (flag)
	{
		cout << "Массив упорядочен" << endl;
	}
	else
	{
		cout << "Массив не упорядочен" << endl;
	}
}
void practika_3_8()
{
	int n, t;
	n = 11;
	int arr[11] = { 41, 42, 66, 87, 36, 55, 75, 32, 11, 46, 23 };

	for (int i = 0; i < n / 2; i++)
	{
		t = arr[i];
		arr[i] = arr[n - i - 1];
		arr[n - i - 1] = t;
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите номер задачи" << endl;
	cin>>option;
	switch (option)
	{
	case 1: practika_3_1(); break;
	case 2: practika_3_2(); break;
	case 3: practika_3_3(); break;
	case 4: practika_3_4(); break;
	case 5: practika_3_5(); break;
	case 6: practika_3_6(); break;
	case 7: practika_3_7(); break;
	case 8: practika_3_8(); break;
	default: cout << "Такой задачи нет" << endl;break;
	}
}