#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    double average = ((a*2)+(b*3)+(c*4)+(d*1))/(2+3+4+1);
    std::cout << std::setprecision(1) << std::fixed;
    std::cout << "Media: " << average << endl;

    if(average >= 7.0){
        cout << "Aluno aprovado." << endl;
    }
    else if(average < 5.0){
        cout << "Aluno reprovado." << endl;
    }
    else if(average >= 5.0 && average <= 6.9){
        cout << "Aluno em exame."<< endl;
        double x;
        cin >> x;
        std::cout << "Nota do exame: " << x << std::endl;
        average = (average+x)/2.0;
        if(average >= 5.0){
            cout << "Aluno aprovado." << endl;
        }
        else if(average <= 4.9){
            cout << "Aluno reprovado." << endl;
        }
        std::cout << "Media final: " << average << endl;
    }
    return 0;
}
