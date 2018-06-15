/*
N x N 배열 안의 원소들에 각각 파리의 개수가 적혀있다.
이때 M x M 크기의 파리채를 한 번 내리쳐 파리를 죽이고자 할때,
파리채를 사용해 죽일 수 있는 최대 파리 수는 얼마인가?

[제약 사항]
1. N 은 5 이상 15 이하이다.
2. M은 2 이상 N 이하이다.
3. 각 영역의 파리 갯수는 30 이하 이다.

[입력]
가장 첫 줄에는 테스트 케이스의 개수 T가 주어지고, 그 아래로 각 테스트 케이스가 주어진다.
각 테스트 케이스의 첫 번째 줄에 N 과 M 이 주어지고,
다음 N 줄에 걸쳐 N x N 배열이 주어진다.

[출력]
출력의 각 줄은 '#t'로 시작하고, 공백을 한 칸 둔 다음 정답을 출력한다.
(t는 테스트 케이스의 번호를 의미하며 1부터 시작한다.)
*/

#include <iostream>
#include <string.h>
using namespace std;

int test_case;
int N, M;
int num_fly[15][15];

int max_dead_fly;
int dead_fly;

int main()
{
    cin >> test_case;
    for(int i=1; i<= test_case; i++)
    {
        cin >> N >> M;
        // (test_case 시작지점에서) 변수, 배열 초기화
        memset(num_fly, 0, sizeof(num_fly));
        max_dead_fly = 0;
        // 파리 수 초기화
        for(int j=0; j<N; j++){
            for(int k=0; k<N; k++){
                cin >> num_fly[j][k];
            }
        }

        // 파리 수 Searching
        for(int j=0; j<N-M+1; j++){
            for(int k=0; k<N-M+1; k++){
                    // 파리채에 죽은 파리 수 count
                    dead_fly = 0;
                	for(int len=0; len<M; len++){
           				for(int width=0; width<M; width++){
                			dead_fly += num_fly[j+len][k+width];
           	 			}
        			}
                	// 최대 파리 수
                    if(max_dead_fly < dead_fly){
                        max_dead_fly = dead_fly;
                    }
            }
        }
        cout << "#" << i << " " << max_dead_fly << "\n";
    }

    return 0;
}
