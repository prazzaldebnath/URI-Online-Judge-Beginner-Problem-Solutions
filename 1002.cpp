#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double r;
    cin >> r;
    double pi = 3.14159;
    double area = pi * r * r;
    /* without std::cout << std::setprecision(x) << std::fixed and std::cout << variable << endl
    then setprecision(x) will be total x digits including  all digits before and after
    decimal point*/
    // such as
    //cout << setprecision(4) << area << endl;
    std::cout << std::setprecision(4) << std::fixed;
    std::cout << "A="  << area << endl;

}
