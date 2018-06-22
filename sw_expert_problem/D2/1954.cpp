/*
달팽이는 1부터 N*N까지의 숫자가 시계방향으로 이루어져 있다.
다음과 같이 정수 N을 입력 받아 N크기의 달팽이를 출력하시오.

(예) N이 3일 경우,
1 2 3
8 9 4
7 6 5

[제약사항]
달팽이의 크기 N은 1 이상 10 이하의 정수이다. (1 ≤ N ≤ 10)

[입력]
가장 첫 줄에는 테스트 케이스의 개수 T가 주어지고, 그 아래로 각 테스트 케이스가 주어진다.
각 테스트 케이스에는 N이 주어진다.

[출력]
각 줄은 '#t'로 시작하고, 다음 줄부터 빈칸을 사이에 두고 달팽이 숫자를 출력한다.
(t는 테스트 케이스의 번호를 의미하며 1부터 시작한다.)
*/

#include <iostream>
#include <string.h>
using namespace std;

int test_case;
int N;
int snail_board[10][10];
bool check_board[10][10];
// direction
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int x, y;
int count;

int main()
{
    cin >> test_case;

    for(int i=1; i<=test_case; i++)
    {
        cin >> N;
        // 변수, 배열 초기화
        memset(snail_board, 0, sizeof(snail_board));
        memset(check_board, 0, sizeof(check_board));
        x=0, y=0;
        count=0;

        for(int i=0; i<N*N; i++)
		{
            // board 밖을 벗어나거나 지나갔던 위치인 경우 (board check)
            if(x < 0 || y < 0 || x == N || y == N || check_board[x][y] == 1){
                x = x - dx[count];
                y = y - dy[count];
                count++;

                if(count % 4 == 0)
                    count = 0;

                x = x + dx[count];
                y = y + dy[count];
            }

            // 안 지나간 board check & 수 입력
            check_board[x][y] = 1;
            snail_board[x][y] = i+1;

            // 이동(direction에 따라)
            x = x + dx[count];
            y = y + dy[count];
        }


        // snail board 출력
        cout << "#" << i << "\n";
        for(y=0; y<N; y++){
            for(x=0; x<N; x++){
                cout << snail_board[x][y] << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}
