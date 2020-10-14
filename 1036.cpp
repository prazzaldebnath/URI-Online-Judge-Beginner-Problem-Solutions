#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    double a, b, c;
    cin >> a >> b >> c;

    double d = b*b-4*a*c;
    if(a == 0.0 || d < 0.0)
    {
        cout << "Impossivel calcular" << endl;
    }
    else
    {
        d = sqrt(d);
        std::cout << std::setprecision(5) << std::fixed;
        std::cout << "R1 = " << (-(b)+d)/(2*a) << std::endl;
        std::cout << "R2 = " << (-(b)-d)/(2*a) << std::endl;
    }

}
