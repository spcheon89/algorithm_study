/*
1부터 N까지의 숫자에서 홀수는 더하고 짝수는 뺐을 때 최종 누적된 값을 구하는 프로그램 작성

[제약 사항]
N은 1이상 10이하의 정수

[입력]
가정 첫 줄에는 테스트 케이스의 개수 T, 그 아래로 각 테스트 케이스가 주어짐

[출력]
출력의 각 줄은 '#t'로 시작하고, 공백을 한 칸 둔 다음 정답을 출력한다.
(t는 테스트 케이스의 번호를 의미하며 1부터 시작한다.)

*/

#include <iostream>

using namespace std;

int test_case;
int input;
int sum_odd, sum_even, sum;

int main()
{
    cin >> test_case;
    for(int i=1; i<=test_case; i++)
    {
        cin >> input;
        sum = 0, sum_odd = 0, sum_even = 0;

        // 짝수, 홀수 합 계산하는 부분
        for(int j=1; j<=input; j++)
        {
            if(j % 2 == 1)
                sum_odd += j;
            else
                sum_even += j;
        }
        sum = sum_odd - sum_even;
        cout << "#" << i << " " << sum << "\n";
    }

    return 0;
}
