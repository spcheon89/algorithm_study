/*
스도쿠는 숫자퍼즐로, 가로 9칸 세로 9칸으로 이루어져 있는 표에 1 부터 9 까지의 숫자를 채워넣는 퍼즐이다.
같은 줄에 1 에서 9 까지의 숫자를 한번씩만 넣고, 3 x 3 크기의 작은 격자 또한,
1 에서 9 까지의 숫자가 겹치지 않아야 한다.
입력으로 9 X 9 크기의 스도쿠 퍼즐의 숫자들이 주어졌을 때, 위와 같이 겹치는 숫자가 없을 경우,
1을 정답으로 출력하고 그렇지 않을 경우 0 을 출력한다.

[제약 사항]
1. 퍼즐은 모두 숫자로 채워진 상태로 주어진다.
2. 입력으로 주어지는 퍼즐의 모든 숫자는 1 이상 9 이하의 정수이다.

[입력]
입력은 첫 줄에 총 테스트 케이스의 개수 T가 온다.
다음 줄부터 각 테스트 케이스가 주어진다.
테스트 케이스는 9 x 9 크기의 퍼즐의 데이터이다.

[출력]
테스트 케이스 t에 대한 결과는 “#t”을 찍고, 한 칸 띄고, 정답을 출력한다.
(t는 테스트 케이스의 번호를 의미하며 1부터 시작한다.)
*/

#include <iostream>
#include <string.h>
#define SUDOKU_ROW 9
#define SUDOKU_COL 9

using namespace std;

int test_case;
int cnt;

int sudoku[9][9];
int check_square[9];

// 세로(col) 중복 check
int check_col(int (*sudoku)[9])
{
    for(int row=0; row<SUDOKU_ROW; row++){
        for(int col=0; col<SUDOKU_COL; col++){
            for(int check_col=col+1; check_col<SUDOKU_COL; check_col++){
                if(sudoku[row][col] == sudoku[row][check_col]){
                    cnt++;
                    return 0;
                }
            }
        }
    }
}
// 가로(row) 중복 check
int check_row(int (*sudoku)[9])
{
    for(int col=0; col<SUDOKU_COL; col++){
        for(int row=0; row<SUDOKU_ROW; row++){
            for(int check_row=row+1; check_row<SUDOKU_ROW; check_row++){
                if(sudoku[row][col] == sudoku[check_row][col]){
                    cnt++;
                    return 0;
                }
            }
        }
    }
}

// sqaure (사각형) 중복 check
int check_grid(int (*sudoku)[9])
{
    for(int col=0; col<SUDOKU_COL; col+=3){
        for(int row=0; row<SUDOKU_ROW; row+=3){
            check_square[0] = sudoku[row][col];
            check_square[1] = sudoku[row][col+1];
            check_square[2] = sudoku[row][col+2];
            check_square[3] = sudoku[row+1][col];
            check_square[4] = sudoku[row+1][col+1];
            check_square[5] = sudoku[row+1][col+2];
            check_square[6] = sudoku[row+2][col];
            check_square[7] = sudoku[row+2][col+1];
            check_square[8] = sudoku[row+2][col+2];

            for(int num=0; num<9; num++){
                for(int move=num+1; move<9; move++){
                    if(check_square[num] == check_square[move]){
                        cnt++;
                        return 0;
                    }
                }
            }
        }
    }
}


int main()
{
    ios::sync_with_stdio(false);
    cin >> test_case;
    for(int i=1; i<=test_case; i++)
    {
        cnt = 0;
        memset(sudoku, 0, sizeof(sudoku));
        memset(check_square, 0, sizeof(check_square));

        // sudoku 입력
        for(int row=0; row<SUDOKU_ROW; row++){
            for(int col=0; col<SUDOKU_COL; col++){
                cin >> sudoku[row][col];
                // out of range 조건
                if(sudoku[row][col] > 9 || sudoku[row][col] < 0){
                    cout << "out of range" << "\n";
                    return 0;
                }
            }
        }

        // 세로(col) 중복 check
        check_col(sudoku);
        if(cnt != 0){
            cout << "#" << i << " " << "0" << "\n";
            continue;
        }
        // 가로(row) 중복 check
        check_row(sudoku);
        if(cnt != 0){
            cout << "#" << i << " " << "0" << "\n";
            continue;
        }
        // sqaure (사각형) 중복 check
        check_grid(sudoku);
        if(cnt != 0){
            cout << "#" << i << " " << "0" << "\n";
        }
        else{
            cout << "#" << i << " " << "1" << "\n";
        }
    }

    return 0;
}
