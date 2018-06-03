/*
하나의 자연수를 입력 받아 각 자릿수의 합을 계산하는 프로그램 작성

[input]
입력은 자연수

[output]
각 자릿수의 합을 출력
*/

#include <iostream>
using namespace std;

int input;
int sum = 0;


int main()
{
    cin >> input;
    while(1)
    {
        sum = sum + input%10;
        input = input/10;
        if(input == 0)
            break;
    }
    cout << sum << "\n";
    return 0;
}
