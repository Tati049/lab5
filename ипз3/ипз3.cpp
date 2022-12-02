#include <iostream>
using namespace std;

void checkValidInput() {
    setlocale(LC_ALL, "UKRAINIAN");
    if (cin.fail()) {
        throw "Невiрне введення";
    }
}

void checkValidParams(int n, int x)
{
    setlocale(LC_ALL, "UKRAINIAN");
    if (x <= 0)
    {
    if (n < 0) {
            throw "Невiрне введення даних";
        }
    } 
}

int first(int n, int x)
{
    int p = 1;
    for (int i = 0; i <= n; i++)
    {
        p *= i * i + i;
    }
    return (p);
}

int second(int n, int x)
{
    int sum = 0, sum1 = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        int  sum1= 0;
        for (int j = 0; j <= n - 1; j++)
        {
            sum1 += x / (i + j);
        }

     
        sum += sum1;
    }
    return (sum);
}

int y(int n, int x)
{
    setlocale(LC_ALL, "UKRAINIAN");
    if (x < 0)
    {
        if (n < 0) {
            cout << "Неправильнi данi";
            exit;
        }
        return (first(n, x));
    }
    else
    {
        if (n < 0) {
            cout << "Неправильнi данi";
            exit;
        }
        return (second(n, x));
    }
}

int main()
{
    setlocale(LC_ALL, "UKRAINIAN");
    int n, x = { 0 };
    try {
        cout << "Введiть n & x: ";
        cin >> n >> x;
        checkValidParams(n, x);
        checkValidInput();
        cout << "y = " << y(n, x);
    }
    catch (const char* ex) {
        cout << ex << endl;
        return -1;
    }
    catch (...) {
        cout << "Не вiдома помилка";
    }
}