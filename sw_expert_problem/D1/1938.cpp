/*
2개의 자연수를 입력받아 사칙연산을 수행하는 프로그램 작성

[제약 사항]

1. 두 개의 자연수 a, b는 1부터 9까지의 자연수이다. (1 ≤ a, b ≤ 9)
2. 사칙연산 + , - , * , / 순서로 연산한 결과를 출력한다.
3. 나누기 연산의 결과에서 소수점 이하의 숫자는 버린다.

[input]
입력으로 두 개의 자연수 a, b가 빈 칸을 두고 주어짐

[output]
사칙연산의 결과를 각 줄에 순서대로 출력
*/

#include <iostream>
using namespace std;

int a, b;
int result_sum, result_sub, result_mul, result_div;

int main()
{
    cin >> a >> b;
    result_sum = a+b;
    result_sub = a-b;
    result_mul = a*b;
    result_div = a/b;

    cout << result_sum << "\n";
    cout << result_sub << "\n";
    cout << result_mul << "\n";
    cout << result_div << "\n";

    return 0;
}
