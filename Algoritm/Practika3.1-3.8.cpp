#include <iostream>
using namespace std;
int option = -1;
void practika_3_1()
{
	int n = 10;
	int a[10] = {2,3,6,3,1,-64,6,-754,10,56 };
	int count = 1;
	int max = -1;
	int i = 0;
	int tmp;

	cout << "Условие: Дан массив целых чисел.Отсортировать его сортировкой вставками"<< endl;
	for (int j = 1; j < n; j++)
	{
		tmp = a[j];
		i = j - 1;
		while (i >= 0 && a[i] > tmp)
		{
			a[i + 1] = a[i];
			i--;
		}
		a[i + 1] = tmp;
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
void practika_3_2()
{
	cout << "Условие: Дан массив целых чисел. Отсортировать его сортировкой выбором." << endl;
	const int n = 10;
	int tmp, min_index;
	int arr[10] = { 5, 2, 4, 6, 0, 1, 3 ,-11,-128,943};

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < n - 1; i++)
	{
		min_index = i;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[min_index])
			{
				min_index = j;
			}
		}
		tmp = arr[min_index];
		arr[min_index] = arr[i];
		arr[i] = tmp;
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
void practika_3_3()
{
	cout << "Условие: Дан массив целых чисел. Отсортировать его сортировкой простыми обменами (пузырьком)." << endl;
	const int n = 10;
	int tmp;
	int arr[10] = { 5,21,34,-30, 2, 4, 6, 0, 1, 3 };
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
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