#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    std::cout << std::setprecision(1) << std::fixed;
    if((a+b > c) && (b+c > a) && (c+a > b)){
        double perimeter = a+b+c;
        std::cout << "Perimetro = " << perimeter << std::endl;
    }
    else{
        double area = (a+b) * 0.5 * c;
        std::cout << "Area = " << area << std::endl;
    }
    return 0;
}
