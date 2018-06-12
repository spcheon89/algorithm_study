/*
회문(palindrome) (거꾸로 읽어도 제대로 읽은 것과 같은 문장이나 낱말) 프로그램 작성
회문이면 1, 아니면 0을 출력하는 프로그램 작성

[제약 사항]
각 단어의 길이는 3이상 10 이하

[입력]
가정 첫 줄에는 테스트 케이스의 개수 T, 그 아래로 각 테스트 케이스가 주어짐
각 테스트 케이스의 첫 번쨰 줄에 하나의 단어가 주어짐

[출력]
출력의 각 줄은 '#t'로 시작하고, 공백을 한 칸 둔 다음 정답을 출력한다.
(t는 테스트 케이스의 번호를 의미하며 1부터 시작한다.)
*/

#include <iostream>
using namespace std;

string sentence;
int test_case;

int main()
{
    cin >> test_case;
    for(int i=1; i<=test_case; i++)
    {
        cin >> sentence;
        int sentence_size = sentence.size();

        if(sentence_size % 2 == 0){
            // case 1. even
            for(int num=0; num<sentence_size/2; num++)
            {
                if(sentence[num] == sentence[(sentence_size-1)-num]){
                    if(num == (sentence_size/2) - 1){
                        cout << "#" << i << " " << "1" << "\n";
                        break;
                    }
                }
                else{
                    cout << "#" << i << " " << "0" << "\n";
                    break;
                }
            }
        }

        else{
            // case 2. odd
            for(int num=0; num<sentence_size/2; num++)
            {
                if(sentence[num] == sentence[(sentence_size-1)-num]){
                    if(num == (sentence_size/2) - 1){
                        cout << "#" << i << " " << "1" << "\n";
                        break;
                    }
                }
                else{
                    cout << "#" << i << " " << "0" << "\n";
                    break;
                }
            }
        }
    }

    return 0;
}
