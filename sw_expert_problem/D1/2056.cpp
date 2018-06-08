/*
연월일 순으로 구성된 8자리의 날짜가 입력으로 주어질때,
해당 날짜의 유효성을 판단한 후, 날짜가 유효하다면 YYYY/MM/DD 형식으로 출력
그렇지 않으면, -1을 출력하는 프로그램 작성

[조건]
연월일로 구성된 입력에서 월은 1~12 사이 값을 가져야 하며
2월의 경우, 28일인 경우만 고려한다. (윤년은 고려하지 않는다.)

[input]
첫 줄에는 테스트 케이스의 개수
다음 줄 부터 각 테스트 케이스가 주어짐

[output]
테스트 케이스 t에 대한 결과는 “#t”을 찍고, 한 칸 띄고, 정답을 출력
(t는 테스트 케이스의 번호를 의미하며 1부터 시작한다.)
*/
#include <iostream>
#include <string>
using namespace std;

int test_case;
string input;
string year_str, month_str, day_str;
int year_int, month_int, day_int;

int main()
{
    cin >> test_case;

    for (int i=1; i<=test_case; i++)
    {
        cin >> input;

        year_str = input.substr(0, 4);
        month_str = input.substr(4, 2);
        day_str = input.substr(6, 2);

        year_int = stoi(year_str);
        month_int = stoi(month_str);
        day_int = stoi(day_str);


        // Case 1: Month가 1~12월, Day가 1~31일을 벗어나는 경우
        if (month_int<1 || month_int>12 || day_int<1 || day_int>31)
            cout << "#" << i << " "<< "-1" << "\n";

        // Case 2: Month가 4, 6, 9, 11월인 경우
        else if (month_int==4 || month_int==6 || month_int==9 || month_int==11)
        {
            if(day_int == 31)
                cout << "#" << i << " "<< "-1" << "\n";

            else
                cout << "#" << i << " "<< year_str << "/" << month_str << "/" << day_str <<"\n";
        }

        // Case 3: Month가 2월인 경우
        else if (month_int ==2)
        {
            if(day_int>28)
                cout << "#" << i << " "<< "-1" << "\n";

            else
            	cout << "#" << i << " "<< year_str << "/" << month_str << "/" << day_str <<"\n";
        }

        // Case 4: Month가 1, 3, 5, 7, 8, 10, 12인 경우
        else
            cout << "#" << i << " "<< year_str << "/" << month_str << "/" << day_str <<"\n";
    }

    return 0;
}
