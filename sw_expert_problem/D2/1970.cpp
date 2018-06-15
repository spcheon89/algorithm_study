/*
S마켓에서 손님에게 거술러 주어야 할 금액 N이 입력되면 최소 개수의 돈을 거슬러 주기 위하여
각 종류의 돈이 몇 개씩 필요한지 출력하는 프로그램 작성

[제약 사항]
1. N은 10이상 1,000,000이하의 정수이다. (10 ≤ N ≤ 1,000,000)
2. N의 마지막 자릿수는 항상 0이다. (ex : 32850)

[입력]
가장 첫 줄에는 테스트 케이스의 개수 T가 주어지고, 그 아래로 각 테스트 케이스가 주어진다.
각 테스트 케이스에는 N이 주어진다.

[출력]
각 줄은 '#t'로 시작하고, 다음줄에 각 돈의 종류마다 필요한 개수를 빈칸을 사이에 두고 출력한다.
(t는 테스트 케이스의 번호를 의미하며 1부터 시작한다.)
*/

#include <iostream>
#include <string.h>
using namespace std;

int test_case;
int money;

int money_won[8] = {50000, 10000, 5000, 1000, 500, 100, 50, 10}; // 돈의 종류
int money_num[8]; // 돈의 갯수
int money_length = sizeof(money_won) / sizeof(int);

int main()
{
    cin >> test_case;
    for(int i=1; i<=test_case; i++)
    {
        cin >> money;
        // money_num를 0으로 초기화
        memset(money_num, 0, money_length*sizeof(int));

        cout << "#" << i << "\n";

        // 돈의 갯수 최소화
        for(int j=0; j<money_length; j++)
        {
            money_num[j] = money / money_won[j];
            money = money % money_won[j];

            if(money == 0)
                break;
        }
        // 돈의 갯수 출력
        for(int k=0; k<money_length; k++)
        {
            cout << money_num[k] << " ";
            if(k == money_length -1)
                cout << "\n";
        }

    }
    return 0;
}
