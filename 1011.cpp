#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main()
{
    double r, pi = 3.14159;
    cin >> r;
    double volume = (4.0/3) * pi * (pow(r, 3));
    std::cout << std::setprecision(3) << std::fixed;
    std::cout << "VOLUME = " << volume << std::endl;

}
