#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    string name;
    double salary, sales;
    cin >> name >> salary >> sales;
    std::cout << std::setprecision(2) << std::fixed;

    std::cout << "TOTAL = R$ " << salary + (sales * 0.15) << endl;


}
