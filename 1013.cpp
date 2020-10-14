#include<iostream>
#include<iomanip>
#include<math.h>
#include<cmath>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int fact1 = ((a+b)+abs(a-b))/2;
    int fact2 = ((fact1+c)+abs(fact1-c))/2;
    cout << fact2 << " eh o maior" << endl;
}
