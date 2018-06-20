/*
10개의 수를 입력 받아, 그 중에서 홀수만 더한 값을 출력하는 프로그램을 작성하라.

[제약 사항]
각 수는 0 이상 10000 이하의 정수이다.

[입력]
가장 첫 줄에는 테스트 케이스의 개수 T가 주어지고, 그 아래로 각 테스트 케이스가 주어진다.
각 테스트 케이스의 첫 번째 줄에는 10개의 수가 주어진다.

[출력]
출력의 각 줄은 '#t'로 시작하고, 공백을 한 칸 둔 다음 정답을 출력한다.
(t는 테스트 케이스의 번호를 의미하며 1부터 시작한다.)
*/

#include <iostream>
#include <string.h>
using namespace std;

int test_case;
int input;
int count = 0;
int count_array[5];
int num_array[5] = {2, 3, 5, 7, 11};
int num_array_size = sizeof(num_array)/sizeof(int);


int count_function(int input, int j)
{
    if(input % num_array[j] == 0){
        count++;
        input /= num_array[j];
        return count_function(input, j);
    }
    else{
        count_array[j] = count;
    	count = 0;
    	return input;
    }
}


int main()
{
    cin >> test_case;
    for(int i=1; i<=test_case; i++)
    {
        cin >> input;
        memset(count_array, 0, sizeof(count_array));
        cout << "#" << i << " ";

        for(int j=0; j<num_array_size; j++){
           input = count_function(input, j);
           cout << count_array[j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
