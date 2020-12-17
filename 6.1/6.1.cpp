// 6.1.cpp 
#include <iostream>
#include<iomanip>

using namespace std;

void print1(int* c, const int n)
{
    cout << setw(3) << "c[] = ";
    for (int i = 0; i < n; i++)
        cout << setw(3) << c[i];
    cout << '\n';
}

void format_mas(int* c, int& sum, int& k, const int n)
{
    for (int i = 0; i < n; i++)
    {
        if (!(c[i] % 2 == 0) || c[i] % 13 == 0) // !(c[i] % 2 == 0) - крім парних; c[i] % 13 == 0 - з індексами, кратними 13
        {
            k++;
            sum += c[i];
            c[i] = 0;
        }
    }
    cout << '\n';
    cout << "quantity - " << k << '\n';
    cout << "sum - " << sum << '\n';
    cout << '\n';
}

void print0(int* c, const int n)
{
    cout << setw(3) << "c[] = ";
    for (int i = 0; i < n; i++)
        cout << setw(3) << c[i];
    cout << '\n';
}

void create(int* c, const int n, const int Low, const int High)
{
    srand(unsigned(time(0)));

    for (int i = 0; i < n; i++)
        c[i] = Low + rand() % (High - Low + 1);
}

int main()
{
    const int n = 21;
    int c[n];


    create(c, n, 15, 85); // створюємо масив (15, 85 - мін і макс значення відповідно)
    print0(c, n); // виводимо
    int sum = 0;
    int k = 0;
    format_mas(c, sum, k, n); // опрацьовуємо    
    print1(c, n); // виводимо опрацьований

    getchar();
}