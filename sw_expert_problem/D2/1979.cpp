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
