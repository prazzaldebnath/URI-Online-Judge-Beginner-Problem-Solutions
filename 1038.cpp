#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    std::cout << std::setprecision(2) << std::fixed;
    if(x == 1)
       std::cout << "Total: R$ " << 4.00*y << std::endl;
    else if(x == 2)
       std::cout << "Total: R$ " << 4.50*y << std::endl;
    else if(x == 3)
       std::cout << "Total: R$ " << 5.00*y << std::endl;
    else if(x == 4)
       std::cout << "Total: R$ " << 2.00*y << std::endl;
    else if(x == 5)
       std::cout << "Total: R$ " << 1.50*y << std::endl;

}
