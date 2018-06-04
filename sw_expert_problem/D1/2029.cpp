/*
두 개의 수를 입력 받아 나눈 몫과 나머지를 출력하는 프로그램 작성

[input]
가장 첫 줄에는 테스트 케이스의 개수
그 아래로 각 테스트 케이스가 주어짐
각 테스트 케이스의 첫 번째 줄에는 2개의 수가 주어짐

[output]
#t로 시작하고 공백을 한 칸 둔 다음, 몫을 출력하고 공백을 한 칸 둔 다음 나머지를 출력
*/


#include <iostream>
using namespace std;

int input;
int num_L, num_R;
int num_div, num_mod;
int main()
{
    cin >> input;
    for(int i=1; i<=input; i++)
    {
        cin >> num_L >> num_R;
        num_div = num_L / num_R;
        num_mod = num_L % num_R;
        cout << "#" << i << " " << num_div << " " << num_mod << "\n";
    }
    return 0;
}
