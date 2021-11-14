#include <iostream>
using namespace std;
int main()
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
    return 0;
}

