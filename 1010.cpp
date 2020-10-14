#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int c1, c2, u1, u2;
    double p1, p2;
    cin >> c1 >> u1 >> p1 >> c2 >> u2 >> p2;
    std::cout << std::setprecision(2) << std::fixed;
    std::cout << "VALOR A PAGAR: R$ " << ((u1 * p1)+(u2 * p2)) << std::endl;
}
