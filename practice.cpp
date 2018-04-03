#include "practice.h"

Practice::Practice()
{

}

Practice::~Practice()
{

}
//骰子，测试rand的随机性
void Practice::dice(int times)
{
    cout<<"dice2"<<endl;
    int diceNumber[6]={0};
    int i;
    for(i=0;i<times;i++)
    {
        diceNumber[rand()%6]++;
    }
    for(i=0;i<6;i++)
    {
        cout<<diceNumber[i]<<endl;
    }

}
//骰子，测试srand的随机性
void Practice::dice2(int times)
{
    cout<<"dice2:"<<endl;
    int diceNumber[6]={0};
    int i;
    srand(time(NULL));
    for(i=0;i<times;i++)
    {
        diceNumber[rand()%6]++;
    }
    for(i=0;i<6;i++)
    {
        cout<<diceNumber[i]<<endl;
    }

}

void Practice::twoDice()
{
    cout<<"twoDice:"<<endl;
    enum result result1;
    int sum,myPoint;
    srand(time(NULL));
    sum=diceSum();
    switch(sum)
    {
    case 7:
    case 11:
        result1=WIN;
        break;
    case 2:
    case 3:
    case 12:
        result1=LOST;
        break;
    default:
        result1=CONTINUE;
        myPoint=sum;
        cout<<"mypoint :"<<myPoint<<endl;
        break;
    }
    while(result1==CONTINUE)
    {
        sum=diceSum();
        if(sum==7)
        {
            result1=LOST;
        }
        else if(sum==myPoint)
        {
            result1=WIN;
        }
    }
    if(result1==WIN)
    {
        cout<<"congratulation,player win"<<endl;
    }
    else
    {
        cout<<"player failed"<<endl;
    }

}

long Practice::factorial(long number)
{
    long factorial2=1;
    if(number<=1)
    {
        return factorial2;
    }
    else
    {
        factorial2=number*factorial(number-1);
        return factorial2;
    }

}
//双骰子赌博游戏
int Practice::diceSum()
{
    int dice1,dice2,sum1;
    dice1=rand()%6+1;
    dice2=rand()%6+1;
    sum1=dice1+dice2;
    cout<<"dice1+dice2=sum: "<<dice1<<"+"<<dice2<<"="<<sum1<<endl;
    return sum1;
}

