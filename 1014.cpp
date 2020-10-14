#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    int a;
    double b;

    cin >> a >>b;
    std::cout << std::setprecision(3) << std::fixed;
    std::cout << a/b << " km/l" << std::endl;
}
