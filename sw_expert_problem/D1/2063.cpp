/*
N개의 수를 입력 받아, 그 중에서 중간값을 출력하는 프로그램 작성
* 중간값? - 통계 집단의 수치를 크기 순으로 배열 했을 때 전체의 중앙에 위치하는 수치를 뜻함

[input]
첫 줄에 N이 주어진다.
둘째 줄에 N개의 점수가 주어진다

[output]
N개의 점수들 중, 중간값에 해당하는 점수를 정답으로 출력한다.
*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int input;
int num, median;
vector <int> value;

int main()
{
    cin >> input;
    if(input % 2 == 0 || input <9 || input >199){
        cout << "error" << "\n";
        return 0;
    }

    for(int i=1; i<=input; i++)
    {
        cin >> num;
        value.push_back(num);
    }

    sort(value.begin(), value.end());	  // sorting
    median = value[input/2]; 			// median value
    cout << median << "\n";
    return 0;
}
