#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n, h;
    double s;
    cin >> n >> h >> s;
    std::cout << std::setprecision(2) << std::fixed;
    std::cout << "NUMBER = " << n << endl;
    std::cout << "SALARY = U$ " << h * s << endl;

}
