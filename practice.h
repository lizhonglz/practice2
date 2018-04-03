#ifndef PRACTICE_H
#define PRACTICE_H
#include<stdlib.h>
#include<iostream>
#include<time.h>
using namespace std;
class Practice
{
public:
    Practice();
    ~Practice();
    void dice(int times);                          //骰子，测试rand的随机性
    void dice2(int times);                         //骰子，测试srand的随机性
    void twoDice(void);                            //双骰子赌博游戏
    long factorial(long number);                  //递归计算阶乘
private:
    int diceSum(void);                             //投掷骰子并返回二者之和
    enum result{WIN,LOST,CONTINUE};                //表示游戏结果

};
#endif // PRACTICE_H
