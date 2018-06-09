
/*
패턴에서 반복되는 부분을 마디라고 부른다.
문자열을 입력 받아 마디의 길이를 출력하는 프로그램을 작성하라.

[제약 사항]
각 문자열의 길이는 30이다. 마디의 최대 길이는 10이다.

[입력]

가장 첫 줄에는 테스트 케이스의 개수 T가 주어지고, 그 아래로 각 테스트 케이스가 주어진다.
각 테스트 케이스의 첫 번째 줄에는 길이가 30인 문자열이 주어진다.

[출력]

출력의 각 줄은 '#t'로 시작하고, 공백을 한 칸 둔 다음 정답을 출력한다.
(t는 테스트 케이스의 번호를 의미하며 1부터 시작한다.)

*/

#include <iostream>
#include <string>

using namespace std;

#define pattern_len_max 10

int test_case;
int pattern_len = 0;

string input_str;
string pattern_a, pattern_b;


// pattern_serching function
void pattern_searching(int start)
{
    for(int k=start+1; k<=pattern_len_max; k++)
    {
        if(input_str[0] == input_str[k])
        {
            pattern_a = input_str.substr(0, k);
            pattern_b = input_str.substr(k, pattern_a.size());

            // pattern_a와 pattern_b 비교
            if(pattern_a.compare(pattern_b) == 0)
            {
                pattern_len = pattern_a.size();
                break;
            }
        }
    }
}


int main()
{
    cin >> test_case;
    cin.ignore(); // "\n" 문자 지우기 위해 사용

    for(int i=1; i<=test_case; i++)
    {
        cin >> input_str;

        // 2. Pattern Searching
        // case 1. 초기 인접 문자가 같을 경우
        if(input_str[0] == input_str[1])
        {
            for(int j=2; j<=pattern_len_max; j++)
            {
                if(input_str[0] == input_str[j])
                    continue;

                pattern_searching(j);
            }
        }

        // 2. Pattern Searching
        // case 2. case1을 제외한 나머지 경우
        else
            pattern_searching(1);

        // output
        cout << "#" << i << " " << pattern_len << "\n";
        pattern_len = 0;
    }

    return 0;

}
