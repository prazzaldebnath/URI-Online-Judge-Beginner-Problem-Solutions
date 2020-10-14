#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double a, b;
    cin >> a >> b;
    double media = ((a*3.5)+(b*7.5))/(3.5+7.5);
    std::cout << std::setprecision(5) << std::fixed;
    std::cout << "MEDIA = " << media << endl;
}
