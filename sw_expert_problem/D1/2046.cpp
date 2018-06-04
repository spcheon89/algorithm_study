/*
주어진 숫자만큼 #을 출력하는 프로그램 작성

[input]
출력할 #의 갯수

[output]
input 수만큼 #출력
*/

#include <iostream>
using namespace std;

int input;

int main()
{
    cin >> input;
    for (int i=1; i<=input; i++)
    {
        cout << "#";
    }
    return 0;
}
