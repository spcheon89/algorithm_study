/*
1부터 주어진 숫자까지 2를 곱한 값들을 출력하는 프로그램 작성

[input]
자연수 1개 (30 이하)

[output]
1부터 입력에 주어진 숫자까지 2를 곱한 값들
*/

#include <iostream>
//#include <math.h>
using namespace std;

int input;
int num;


int pow(int num, int power)
{
    int num_multiply = 1;
    if(power == 0)
        return num_multiply;

    for(int i=1; i<=power; i++)
        num_multiply *= num;

    return num_multiply;
}

int main()
{
    cin >> input;
    for(int i=0; i<=input; i++)
    {
        cout << pow(2,i) << " ";
    }
    return 0;
}
