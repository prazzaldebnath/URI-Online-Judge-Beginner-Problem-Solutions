#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
void printinorder(int a, int b, int c){
    int low, mid, high;
    if(a > b && b > c){
        low = c;
        mid = b;
        high = a;
    }
    else if(a > b && b < c){
        low = b;
        if(a > c){
            mid = c;
            high = a;
        }
        else{
            mid = a;
            high = c;
        }
    }
    else if(a < b && b > c){
        if(a > c){
            low = c;
            mid = a;
        }
        else
        {
            low = a;
            mid = c;
        }
        high = b;
    }
    else{
        low = a;
        mid = b;
        high = c;
    }
    cout << low << endl << mid << endl << high << endl;
    cout << "\n";
}
int main()
{
    int a, b, c, temp1, temp2, temp3;
    cin >> a >> b >> c;
    printinorder(a, b, c);
    cout << a << endl << b << endl << c << endl;
    return 0;

}

