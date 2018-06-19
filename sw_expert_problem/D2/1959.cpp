/*
N 개의 숫자로 구성된 숫자열 Ai (i=1~N) 와 M 개의 숫자로 구성된 숫자열 Bj (j=1~M) 가 있다.
Ai 나 Bj 를 자유롭게 움직여서 숫자들이 서로 마주보는 위치를 변경할 수 있다.
단, 더 긴 쪽의 양끝을 벗어나서는 안 된다.
이때 서로 마주보는 숫자들을 곱한 뒤 모두 더할 때 최댓값을 구하라.

[제약 사항]
N 과 M은 3 이상 20 이하이다.

[입력]
가장 첫 줄에는 테스트 케이스의 개수 T가 주어지고, 그 아래로 각 테스트 케이스가 주어진다.
각 테스트 케이스의 첫 번째 줄에 N 과 M 이 주어지고,
두 번째 줄에는 Ai, 세 번째 줄에는 Bj 가 주어진다.

[출력]
출력의 각 줄은 '#t'로 시작하고, 공백을 한 칸 둔 다음 정답을 출력한다.
(t는 테스트 케이스의 번호를 의미하며 1부터 시작한다.)
*/

#include <iostream>
#include <string.h>
using namespace std;

int test_case;
int N, M;
int M_array[20];
int N_array[20];
int sum;
int max_sum;

int main()
{
    cin >> test_case;
    for(int i=1; i<=test_case; i++)
    {
        cin >> N >> M;
        // 변수, 배열 초기화
        max_sum = -10000;
        memset(N_array, 0, sizeof(N_array));
        memset(M_array, 0, sizeof(M_array));

        // array 초기화
        for(int t=0; t<N; t++)
            cin >> N_array[t];
        for(int c=0; c<M; c++)
            cin >> M_array[c];

        // N > M인 경우
        if(N > M){
            for(int move=0; move<=N-M; move++)
            {
                sum = 0;
                for(int j=0; j<M; j++){
                    sum += (N_array[move+j] * M_array[j]);
                }
                if(max_sum < sum){
                    max_sum = sum;
                }
            }
        }
        // N < M인 경우
        else{
            for(int move=0; move<=M-N; move++)
            {
                sum = 0;
                for(int j=0; j<N; j++){
                    sum += (N_array[j] * M_array[move+j]);
                }
                if(max_sum < sum){
                    max_sum = sum;
                }
            }
        }
        cout << "#" << i << " " << max_sum << "\n";
    }

    return 0;
}
