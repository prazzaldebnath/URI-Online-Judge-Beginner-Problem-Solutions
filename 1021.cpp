#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;
int main()
{
    double x;
    cin >> x;
    int a = x/1.00;

    double b = x-a;

    cout << "NOTAS:" << endl;
    int temp = a/100;
    a = a%100;
    cout << temp << " nota(s) de R$ 100.00" << endl;
    temp = a/50;
    a = a % 50;
    cout << temp << " nota(s) de R$ 50.00" << endl;
    temp = a/20;
    a = a % 20;
    cout << temp << " nota(s) de R$ 20.00" << endl;
    temp = a/10;
    a = a % 10;
    cout << temp << " nota(s) de R$ 10.00" << endl;
    temp = a/5;
    a = a % 5;
    cout << temp << " nota(s) de R$ 5.00" << endl;
    temp = a/2;
    a = a%2;
    cout << temp << " nota(s) de R$ 2.00" << endl;
    cout << "MOEDAS:" << endl;
    cout << a << " moeda(s) de R$ 1.00" << endl;

    int c = b * 100;
    temp = c / 50;
    c = c % 50;
    cout << temp << " moeda(s) de R$ 0.50" << endl;
    temp = c / 25;
    c = c % 25;
    cout << temp << " moeda(s) de R$ 0.25" << endl;
    temp = c / 10;
    c = c % 10;
    cout << temp << " moeda(s) de R$ 0.10" << endl;
    temp = c / 5;
    c = c % 5;
    cout << temp << " moeda(s) de R$ 0.05" << endl;
    temp = c / 1;

    cout << temp << " moeda(s) de R$ 0.01" << endl;
}
