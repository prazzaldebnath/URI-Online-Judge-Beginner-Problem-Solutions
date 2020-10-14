#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    double media = ((a*2)+(b*3)+(c*5))/(2+3+5);
    std::cout << std::setprecision(1) << std::fixed;
    std::cout << "MEDIA = " << media << endl;
}
