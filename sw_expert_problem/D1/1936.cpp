/*
A와 B가 가위바위보를 할때, A와 B중에 누가 이겼는지 판별하는 프로그램 작성

[조건]
가위는 1, 바위는 2, 보는 3으로 포현
비기는 경우는 없음

[input]
입력으로 A와 B가 무엇을 냈는지 빈 칸을 사이로 주어짐

[output]
A가 이기면 A, B가 이기면 B를 출력
*/

#include <iostream>
using namespace std;

int A, B;
char result;

int main()
{
    cin >> A >> B;

    // A가 가위일 경우
    if(A == 1)
    {
        if(B == 2)
            result = 'B';
        else
            result = 'A';
    }
    // A가 바위일 경우
    else if(A == 2)
    {
        if(B == 1)
            result = 'A';
        else
            result = 'B';

    }
    // A가 보일 경우
    else
    {
        if(B == 1)
            result = 'B';
        else
            result = 'A';
    }

    cout << result << "\n";
    return 0;
}
