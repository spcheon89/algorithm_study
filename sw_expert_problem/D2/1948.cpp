/*
월 일로 이루어진 날짜를 2개 입력 받아,
두 번째 날짜가 첫 번째 날짜의 며칠째인지 출력하는 프로그램을 작성하라.

[제약 사항]
월은 1 이상 12 이하의 정수이다. 각 달의 마지막 날짜는 다음과 같다.
1/31, 2/28, 3/31, 4/30, 5/31, 6/30, 7/31, 8/31, 9/30, 10/31, 11/30, 12/31
두 번째 날짜가 첫 번째 날짜보다 항상 크게 주어진다.

[입력]
가장 첫 줄에는 테스트 케이스의 개수 T가 주어지고, 그 아래로 각 테스트 케이스가 주어진다.
각 테스트 케이스의 첫 번째 줄에는 4개의 수가 주어진다.
첫 번째 수가 월을 나타내고 두 번째 수가 일을 나타낸다. 그 다음 같은 형식으로 두 번째 날짜가 주어진다.

[출력]
출력의 각 줄은 '#t'로 시작하고, 공백을 한 칸 둔 다음 정답을 출력한다.
(t는 테스트 케이스의 번호를 의미하며 1부터 시작한다.)
*/

#include <iostream>

using namespace std;

int test_case;
int month_start, month_end;
int day_start, day_end;
int sum;
int check;

// 월 날짜 check function
int check_month(int month)
{
    if(month == 2)
        return 28;
    else if(month == 4 || month == 6 || month == 9 || month == 11)
        return 30;
    else
        return 31;
}


int main()
{
    cin >> test_case;
    for(int i=1; i<=test_case; i++)
    {
        cin >> month_start >> day_start >> month_end >> day_end;
        sum = 0;
        // 날짜 체크
        for(int j=month_start; j<=month_end; j++)
        {
            // 마지막 달
            if(j == month_end){
                sum += day_end;
            }
            // 첫 달 ~ 마지막 달 전까지
            else{
                check = check_month(j);
                // 첫 달
                if(j == month_start){
                    check = check - day_start + 1;
                    sum += check;
                }
                // 첫 달 외에 달(두 번째 달 ~ 마지막 달 전까지)
                else{
                    sum += check;
                }
            }
        }
        cout << "#" << i << " " << sum << "\n";
    }

    return 0;
}
