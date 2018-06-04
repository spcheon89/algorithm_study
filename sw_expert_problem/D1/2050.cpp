/*
알파벳으로 이루어진 문자열을 입력 받아 각 알파벳을 1부터 26까지의 숫자로 변환하여 출력

[input]
알파벳으로 이루어진 문자열

[output]
각 알파벳을 숫자로 변환한 결과값을 빈 칸을 두고 출력
*/

#include <iostream>
#include <string>
using namespace std;

string sentence;

int main()
{
    getline(cin, sentence);
    for(int i=0; i<sentence.size(); i++)
    {
        //string을 int로 변환시키면 ASCII코드의 숫자 반환
        cout << int(sentence[i]) - 64 << " ";
    }

    return 0;
}
