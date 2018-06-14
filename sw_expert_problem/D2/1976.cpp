/*
시 분으로 이루어진 시각을 2개 입력 받아, 더한 값을 시 분으로 출력하는 프로그램 작성
(시각은 12시간제로 표시한다. 즉, 시가 가질 수 있는 값은 1시부터 12시이다.)

[제약 사항]
시는 1이상 12 이하의 정수이다. 분은 0이상 59 이하의 정수이다.

[입력]
가장 첫 줄에는 테스트 케이스의 개수 T가 주어지고, 그 아래로 각 테스트 케이스가 주어짐
각 테스트 케이스의 첫 번째 줄에는 4개의 수가 주어짐
첫 번쨰 수가 시를 나타내고 두 번째 수가 분을 나타낸다.
그 다음 같은 형식으로 두 번째 시각이 주어진다.

[출력]
출력의 각 줄은 '#t'로 시작하고, 공백을 한 칸 둔 다음 시를 출력하고 공백을 한 칸 둔 다음 분을 출력한다.
(t는 테스트 케이스의 번호를 의미하며 1부터 시작한다.)
*/

#include <iostream>

using namespace std;

int test_case;
int time_array[4];
int plus_hour, plus_min;

int main()
{
    cin >> test_case;
    for(int i=1; i<=test_case; i++)
    {
        // 변수 초기화
        plus_hour =0;
        plus_min =0;

        for(int j=0; j<4; j++)
            cin >> time_array[j];

        // hour, min 합
        plus_hour = time_array[0] + time_array[2];
        plus_min = time_array[1] + time_array[3];

        // min이 60이상일 경우
        if(plus_min >= 60){
            plus_min -= 60;
            plus_hour += 1;
        }

        // hour가 12이상일 경우
        if((plus_hour/12) >= 1){
            plus_hour = plus_hour - 12*(plus_hour/12);
            // hour가 12의 배수일 경우
            if(plus_hour % 12 == 0)
                plus_hour += 12;
        }

        cout << "#" << i << " " << plus_hour << " " << plus_min << "\n";
    }

    return 0;
}
