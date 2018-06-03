/*
비밀번호 P와 주어진 번호 K가 주어질때,
K부터 1씩 증가하며 비밀번호를 확인한다.
이때 P와 K가 주어진다면 K부터 시작하여 몇 번 만에 P를 맞출 수 있는지
계산하는 프로그램 작성

[input]
입력으로 P와 K가 빈 칸을 사이로 주어짐

[output]
몇 번 만에 비밀번호를 맞출 수 있는지 출력
*/

#include <iostream>
using namespace std;

int P, K;
int case_num;

int main()
{
    cin >> P >> K;
    case_num = (P-K) + 1;
    cout << case_num << "\n";
    return 0;
}
