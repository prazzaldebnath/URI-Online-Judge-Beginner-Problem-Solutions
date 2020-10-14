#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    int a;
    cin >> a;
    cout << a << endl;
    int r = a/100;
    a = a%100;
    cout << r << " nota(s) de R$ 100,00" <<endl;
    r = a/50;
    a = a%50;
    cout << r << " nota(s) de R$ 50,00" << endl;
    r = a/20;
    a = a%20;
    cout << r << " nota(s) de R$ 20,00" << endl;
    r = a/10;
    a = a%10;
    cout << r << " nota(s) de R$ 10,00" << endl;
    r = a/5;
    a = a%5;
    cout << r << " nota(s) de R$ 5,00" << endl;
    r = a/2;
    a = a%2;
    cout << r << " nota(s) de R$ 2,00" << endl;
    r = a/1;
    cout << r << " nota(s) de R$ 1,00" << endl;
}
