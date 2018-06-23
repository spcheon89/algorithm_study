/*
N x N 행렬이 주어질 때,
시계 방향으로 90도, 180도, 270도 회전한 모양을 출력하라.

[제약 사항]
N은 3 이상 7 이하이다.

[입력]
가장 첫 줄에는 테스트 케이스의 개수 T가 주어지고, 그 아래로 각 테스트 케이스가 주어진다.
각 테스트 케이스의 첫 번째 줄에 N이 주어지고,
다음 N 줄에는 N x N 행렬이 주어진다.

[출력]
출력의 첫 줄은 '#t'로 시작하고,
다음 N줄에 걸쳐서 90도, 180도, 270도 회전한 모양을 출력한다.
입력과는 달리 출력에서는 회전한 모양 사이에만 공백이 존재함에 유의하라.
(t는 테스트 케이스의 번호를 의미하며 1부터 시작한다.)
*/

#include <iostream>
#include <string.h>
using namespace std;

int test_case;
int N;
int num_array[7][7];
int rot90_array[7][7];
int rot180_array[7][7];
int rot270_array[7][7];


// rotation function
void rot(int (*num_array)[7], int degree)
{
    for(int y=0; y<N; y++){
        for(int x=0; x<N; x++){
            if(degree == 90)
                rot90_array[x][y] = num_array[y][N-1-x];
            else if(degree == 180)
                rot180_array[x][y] = num_array[N-1-x][N-1-y];
            else if(degree == 270)
                rot270_array[x][y] = num_array[N-1-y][x];
        }
    }
}


int main()
{
    cin >> test_case;
    for(int i=1; i<=test_case; i++)
    {
        cin >> N;

        // matrix 초기화
        memset(num_array, 0, sizeof(num_array));
        memset(rot90_array, 0, sizeof(rot90_array));
        memset(rot180_array, 0, sizeof(rot180_array));
        memset(rot270_array, 0, sizeof(rot270_array));

        // matrix 값 입력
        for(int y=0; y<N; y++){
            for(int x=0; x<N; x++){
                cin >> num_array[x][y];
            }
        }

        cout << "#" << i << "\n";

        // matrix rotation (90, 180, 270)
        rot(num_array, 90);
        rot(num_array, 180);
        rot(num_array, 270);

        // output
        for(int y=0; y<N; y++){
            for(int x=0; x<N; x++){
                cout << rot90_array[x][y];
            }
            cout << " ";

            for(int x=0; x<N; x++){
                cout << rot180_array[x][y];
            }
            cout << " ";

            for(int x=0; x<N; x++){
                cout << rot270_array[x][y];
            }
            cout << "\n";
        }
    }

    return 0;
}
