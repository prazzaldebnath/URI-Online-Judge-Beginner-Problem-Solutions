#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int year, month, day;
    year = a / 365;
    a = a % 365;
    month = a/30;
    day = a % 30;

    cout << year << " ano(s)" << endl << month << " mes(es)" << endl << day << " dia(s)" << endl;

}
