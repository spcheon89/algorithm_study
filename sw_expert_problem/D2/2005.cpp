/*
N을 입력 받아 크기 N인 파스칼의 삼각형을 출력하는 프로그램을 작성

[제약 사항]
파스칼의 삼각형의 크기 N은 1 이상 10 이하의 정수 (1 ≤ N ≤ 10)

[입력]
가정 첫 줄에는 테스트 케이스의 개수 T, 그 아래로 각 테스트 케이스가 주어짐
각 테스트 케이스에는 N이 주어짐

[출력]
각 줄은 '#t'로 시작하고, 다음 줄부터 파스칼의 삼각형을 출력
삼각형 각 줄의 처음 숫자가 나오기 전까지의 빈 칸은 생략하고
숫자들 사이에는 한 칸의 빈칸을 출력한다.
(t는 테스트 케이스의 번호를 의미하며 1부터 시작한다.)
*/

#include <iostream>
using namespace std;

int test_case;
int pascal_size;
int pascal_array[10][10];

int main()
{
    cin >> test_case;
    for(int i=1; i<=test_case; i++)
    {
        cin >> pascal_size;
        cout << "#" << i <<"\n";

        for(int j=0; j<pascal_size; j++)
        {
            for(int k=0; k<=j; k++)
            {
                // pascal 삼각형 양끝 모서리 조건
                if(j==0 || k==0 || j==k){
                    pascal_array[j][k] = 1;
                	cout<<pascal_array[j][k] << " ";
                }
                else{
                    // pascal 삼각형 점화식: a[j][k] = a[j-1][k-1] + a[j-1][k]
                    pascal_array[j][k] = pascal_array[j-1][k-1] + pascal_array[j-1][k];
                	cout<<pascal_array[j][k] << " ";
                }
            }

            cout << "\n";
        }
    }

    return 0;
}
