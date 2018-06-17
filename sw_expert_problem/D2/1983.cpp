/*
학기가 끝나고, 학생들의 점수로 학점을 계산중이다.
학점은 상대평가로 주어지는데, 총 10개의 평점(A+, A0, A-, B+, B0, B-, C+, C0, C-, D0)이 있다.

10 개의 평점을 총점이 높은 순서대로 부여하는데, 각각의 평점은 같은 비율로 부여할 수 있다.
예를 들어, N 명의 학생이 있을 경우 N/10 명의 학생들에게 동일한 평점을 부여할 수 있다.
입력으로 각각의 학생들의 중간, 기말, 과제 점수가 주어지고, 학점을 알고싶은 K 번째 학생의 번호가 주어졌을 때,
K 번째 학생의 학점을 출력하는 프로그램을 작성

총점 = 중간고사 (35%) + 기말고사 (45%) + 과제 (20%)

[제약사항]
1. N은 항상 10의 배수이며, 10이상 100이하의 정수이다. (10 ≤ N ≤ 100)
2. K는 1 이상 N 이하의 정수이다. (1 ≤ K ≤ N)
3. K 번째 학생의 총점과 다른 학생의 총점이 동일한 경우는 입력으로 주어지지 않는다.

[입력]
입력은 첫 줄에 총 테스트 케이스의 개수 T가 온다.
다음 줄부터 각 테스트 케이스가 주어진다.
테스트 케이스의 첫 번째 줄은 학생수 N 과, 학점을 알고싶은 학생의 번호 K 가 주어진다.
테스트 케이스 두 번째 줄 부터 각각의 학생이 받은 시험 및 과제 점수가 주어진다.

[출력]
테스트 케이스 t에 대한 결과는 “#t”을 찍고, 한 칸 띄고, 정답을 출력한다.
(t는 테스트 케이스의 번호를 의미하며 1부터 시작한다.)
*/
#include <iostream>
#include <string.h>

using namespace std;
int test_case;
int N, K;
int mid_exam, final_exam, assignment;
int rank_count;

string score[10] = {"A+", "A0", "A-", "B+", "B0", "B-", "C+", "C0", "C-", "D0"};
float sum[10];

int main()
{
    cin >> test_case;
    for(int i=1; i<=test_case; i++)
    {
        cin >> N >> K;
        memset(sum, 0, sizeof(sum));
        rank_count = 0;
        // 총점 계산
        for(int num=0; num<N; num++)
        {
            cin >> mid_exam >> final_exam >> assignment;
            sum[num] = 0.35 * mid_exam + 0.45 * final_exam + 0.2 * assignment;
            cout <<sum[num] << "\t";
        }
        // Searching
        for(int j=0; j<N; j++)
        {
            if(sum[j] > sum[K-1]){
                rank_count++;
            }
        }

        cout << "#" << i << " " << score[rank_count / (N/10)] << "\n";
    }
    return 0;
}
