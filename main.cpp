#include <QCoreApplication>
#include"practice.h"
int main()
{
    Practice practice;
    practice.dice(6000);
    practice.dice2(6000);
    practice.twoDice();
    cout<<"the factorial is:"<<practice.factorial(5)<<endl;
    return 0;
}
