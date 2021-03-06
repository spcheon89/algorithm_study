/*
N X N 크기의 단어 퍼즐을 만들려고 한다. 입력으로 단어 퍼즐의 모양이 주어진다.
주어진 퍼즐 모양에서 특정 길이 K를 갖는 단어가 들어갈 수 있는 자리의 수를 출력하는 프로그램 작성

[제약 사항]
1. N은 5 이상 15 이하의 정수이다. (5 ≤ N ≤ 15)
2. K는 2 이상 N 이하의 정수이다. (2 ≤ K ≤ N)

[입력]
입력은 첫 줄에 총 테스트 케이스의 개수 T가 온다.
다음 줄부터 각 테스트 케이스가 주어진다.
테스트 케이스의 첫 번째 줄에는 단어 퍼즐의 가로, 세로 길이 N 과, 단어의 길이 K 가 주어진다.
테스트 케이스의 두 번째 줄부터 퍼즐의 모양이 2차원 정보로 주어진다.
퍼즐의 각 셀 중, 흰색 부분(비어있는)은 1, 검은색 부분(비어있지 않은)은 0 으로 주어진다.

[출력]
테스트 케이스 t에 대한 결과는 “#t”을 찍고, 한 칸 띄고, 정답을 출력한다.
(t는 테스트 케이스의 번호를 의미하며 1부터 시작한다.)
*/

#include <iostream>
#include <string.h>
using namespace std;

int test_case;
int N, K;
int puzzle[15][15];
int word;
int len_count;


int main()
{
    cin >> test_case;
    for(int i=1; i<=test_case; i++)
    {
        cin >> N >> K;

        // 배열, 변수 초기화
        word = 0;
        memset(puzzle, 0, sizeof(puzzle));

        // 퍼즐 초기화
        for(int x=0; x<N; x++){
            for(int y=0; y<N; y++){
                cin >> puzzle[x][y];
            }
        }

        // 퍼즐 searching
        // case 1. row searching
        for(int x=0; x<N; x++){
            for(int y=0; y<N; y++){
                len_count = 0;
                // 빈 칸이 나오면
                if(puzzle[x][y] == 1){
                    len_count++;
                    // len길이 측정
                    for(int len=y+1; len<N; len++){
                        if(puzzle[x][len] == 1)
                            len_count++;
                        else
                            break;
                    }
                    // len길이가 K이면, word count
                    if(len_count == K){
                        word++;
                    }
                    y += len_count;
                }
            }
        }

        // case 2. column searching
        for(int x=0; x<N; x++){
            for(int y=0; y<N; y++){
                len_count = 0;
                // 빈 칸이 나오면
                if(puzzle[y][x] == 1){
                    len_count++;
                    // len길이 측정
                    for(int len=y+1; len<N; len++){
                        if(puzzle[len][x] == 1)
                            len_count++;
                        else
                            break;
                    }
                    // len길이가 K이면, word count
                    if(len_count == K){
                        word++;
                    }
                    y += len_count;
                }
            }
        }

        cout << "#" << i << " " << word << "\n";
    }

    return 0;
}
