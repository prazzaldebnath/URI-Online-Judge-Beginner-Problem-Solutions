#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int distance = a*b;
    std::cout << std::setprecision(3) << std::fixed;
    std::cout << distance/12.0 <<endl;

}
