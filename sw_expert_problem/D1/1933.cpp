/*
정수 N의 약수를 오름차순으로 출력하는 프로그램 작성

[조건]
N은 1000이하의 자연수

[input]
정수 N

[output]
정수 N의 모든 약수를 오름차순으로 출력
*/

#include <iostream>
using namespace std;

int input;

int main()
{
    cin >> input;
    for(int i=1; i<=input; i++)
    {
        if(input%i == 0)
            cout << i << " ";
    }

    return 0;
}
