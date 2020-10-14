#include<iostream>
#include<iomanip>
#include<cmath>
#include<math.h>
using namespace std;

int main()
{
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    double distance = sqrt(pow((c-a), 2)+pow((d-b),2));
    //distance = sqrt(distance);
    std::cout << std::setprecision(4) << std::fixed;
    std::cout << distance << std::endl;
}
