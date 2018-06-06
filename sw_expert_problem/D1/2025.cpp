/*
1부터 주어진 숫자만큼 모두 더한 값을 출력하는 프로그램 작성

[input]
자연수 1개 (10000이하)

[output]
1부터 입력에 주어진 수까지의 자연수 합
*/

#include <iostream>
using namespace std;

int input;
int sum = 0;

int main()
{
    cin >> input;
    for(int i=1; i<=input; i++)
    {
        sum += i;
    }
    cout << sum << "\n";
    return 0;
}
