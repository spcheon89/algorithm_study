/*
10개의 수를 입력 받아, 그 중에서 가장 큰 수를 출력하는 프로그램 작성

[input]
첫 줄에 test case의 개수 T가 주어지고, 그 아래로 각 test case가 주어짐
각 test case의 첫 번째 줄에는 10개의 수가 주어진다

[output]
출력의 각 줄은 '#t'로 시작하고, 공백을 한 칸 둔 다음 정답을 출력
t는 1부터 시작
*/

#include <iostream>
using namespace std;

int input;
int num;
int max_value = 1;

int main()
{
    cin >> input;
    for (int i=1; i<=input; i++)
    {
        for(int j=0; j<10; j++)
        {
            cin >> num;
            if(num > max_value)
                max_value = num;
        }
        cout << "#" << i << " " << max_value << "\n";
        max_value = 0;
    }

    return 0;
}
