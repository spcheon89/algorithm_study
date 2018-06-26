/*
3 6 9 게임을 프로그램으로 제작중이다. 게임 규칙은 다음과 같다.

1. 숫자 1부터 순서대로 차례대로 말하되, “3” “6” “9” 가 들어가 있는 수는 말하지 않는다.

  1 2 - 4 5 - 7 8 -…

2. "3" "6" "9"가 들어가 있는 수를 말하지 않는대신, 박수를 친다. 이 때, 박수는 해당 숫자가 들어간 개수만큼 쳐야 한다.
예를 들어 숫자 35의 경우 박수 한 번, 숫자 36의 경우 박수를 두번 쳐야 한다.

입력으로 정수 N 이 주어졌을 때, 1~N 까지의 숫자를
게임 규칙에 맞게 출력하는 프로그램을 작성하라.
박수를 치는 부분은 숫자 대신, 박수 횟수에 맞게 “-“ 를 출력한다.
여기서 주의해야 할 것은 박수 한 번 칠 때는 - 이며, 박수를 두 번 칠 때는 - - 가 아닌 -- 이다.

[제약사항]
N은 10이상 1,000이하의 정수이다. (10 ≤ N ≤ 1,000)

[입력]
입력으로 정수 N 이 주어진다.

[출력]
1 ~ N까지의 숫자를 게임 규칙에 맞게 출력한다.
*/

#include <iostream>

using namespace std;

int N;
int clap_cnt;
int digit_one, digit_two, digit_three;

int main()
{
    cin >> N;

    for(int i=1; i<=N; i++)
    {
        // 변수 초기화
        clap_cnt = 0;
   		digit_one = 0; digit_two = 0; digit_three = 0;
        // 1000의 자릿수 check
        if((i/1000)!= 0 && (i/1000) % 3 == 0){
            clap_cnt++;
        }
        digit_three = i%1000;
        // 100의 자릿수 check
        if((digit_three/100)!= 0 && (digit_three/100) % 3 == 0){
            clap_cnt++;
        }
        digit_two = digit_three%100;
        // 10의 자릿수 check
        if((digit_two/10)!= 0 && (digit_two/10) % 3 == 0){
            clap_cnt++;
        }
        digit_one = digit_two%10;
        // 1의 자릿수 check
        if(digit_one != 0 && digit_one % 3 == 0){
            clap_cnt++;
        }
        // 369게임 출력

        if(clap_cnt == 0)
            cout << i << " ";

        else{
            for(int j=1; j<=clap_cnt; j++)
                cout << "-";

            cout << " ";
        }
    }
    return 0;
}
