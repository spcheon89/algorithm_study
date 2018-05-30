/*
10개의 수를 입력 받아, 평균 값을 출력하는 프로그램 작성
(소수 첫째자리에서 반올림)

[input]
첫 줄에 test case의 개수 T가 주어지고, 그 아래로 각 test case가 주어짐
각 test case의 첫 번째 줄에는 10개의 수가 주어진다

[output]
출력의 각 줄은 '#t'로 시작하고, 공백을 한 칸 둔 다음 정답을 출력
t는 1부터 시작
*/


# include <iostream>
using namespace std;

int input, num;
int sum, avg;

int main()
{
    cin >> input;
    for(int i=1; i<=input; i++)
    {
        for(int j=0; j<10; j++)
        {
            cin >> num;
            sum += num;
        }
        // 반올림하는 부분(double을 int로 변형할경우 소수점 아래는 버리기 때문에 +0.5를 해줌)
        avg =double(sum)/10 + 0.5f;
        cout << "#" << i << " " << avg << "\n";
        sum = 0;
    }

    return 0;
}
