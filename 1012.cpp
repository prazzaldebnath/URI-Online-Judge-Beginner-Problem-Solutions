#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{

    double a, b, c;
    double pi = 3.14159;
    cin >> a >> b>> c;
    std::cout << std::setprecision(3) << std::fixed;
    std::cout << "TRIANGULO: " << 0.5 * a * c << std::endl;
    std::cout << "CIRCULO: " << pi * c *c << std::endl;
    std::cout << "TRAPEZIO: " << ((a+b)/2)*c << std::endl;
    std::cout << "QUADRADO: " << b*b << std::endl;
    std::cout << "RETANGULO: " << a*b << std::endl;

}
