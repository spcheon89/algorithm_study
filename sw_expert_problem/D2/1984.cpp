/*
10개의 수를 입력 받아, 최대 수와 최소 수를 제외한 나머지의 평균값을 출력하는 프로그램을 작성
(소수점 첫째 자리에서 반올림한 정수를 출력)

[제약 사항]
각 수는 0 이상 10000 이하의 정수

[입력]
가장 첫 줄에는 테스트 케이스의 개수 T가 주어지고, 그 아래로 각 테스트 케이스가 주어짐
각 테스트 케이스의 첫 번째 줄에는 10개의 수가 주어짐

[출력]
출력의 각 줄은 '#t'로 시작하고, 공백을 한 칸 둔 다음 정답을 출력한다.
(t는 테스트 케이스의 번호를 의미하며 1부터 시작한다.)
*/

#include <iostream>
using namespace std;

int test_case;
int input;
int sum, avg, num_max, num_min;

int main()
{
    cin >> test_case;

    for(int i=1; i<=test_case; i++)
    {
        // test case마다 변수 초기화
        sum = 0;
    	num_max = 0;
    	num_min = 100000;

        for(int j=0; j<10; j++)
        {
            cin >> input;
            // max 값 계산
            if(num_max < input)
                num_max = input;
            // min 값 계산
            if(num_min > input)
                num_min = input;

             sum += input;
        }

        sum = sum - (num_max + num_min);    // 최대, 최소값 제외 sum
        avg = (sum+4)/8;    // 최대, 최소값 제외 avg (+4는 반올림 계산하기 위한 항)

        cout << "#" << i << " " << avg << "\n";

    }

    return 0;
}
