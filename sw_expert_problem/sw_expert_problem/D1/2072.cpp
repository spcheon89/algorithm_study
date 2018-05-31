/*
10개의 수를 입력 받아, 그 중에서 홀수만 더한 값을 출력하는 프로그램 작성

[input]
첫 줄에 test case의 개수 T가 주어지고, 그 아래로 각 test case가 주어짐
각 test case의 첫 번째 줄에는 10개의 수가 주어진다

[output]
출력의 각 줄은 '#t'로 시작하고, 공백을 한 칸 둔 다음 정답을 출력
t는 1부터 시작
*/

#include <iostream>

using namespace std;
int main()
{
    int input, num;
    int sum = 0;
    cin >> input;

    for(int i=1; i<=input; i++)
    {
        for(int j=1; j<=10; j++)
        {
            cin >> num;
            if(num % 2 == 1)
                sum += num;
        }
        cout << "#" << i << " " << sum << "\n";
        sum = 0;
    }

    return 0;
}
