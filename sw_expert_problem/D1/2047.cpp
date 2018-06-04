/*
알파벳 소문자를 모두 대문자로 바꾸는 프로그램 작성

[input]
80 bytes 이하의 길이를 가진 문자열

[output]
문자열의 소문자를 모두 대문자로 변경한 결과 출력
*/


#include <iostream>
#include <string>
using namespace std;

//문장열을 저장할 string 선언
string sentence;

int main()
{
    // 문자열 입력 받기 위해 getline사용
    // 대소문자 변경은 ASCII 코드 참고 (대문자랑 소문자는 32차이가 남)
    // (참고) ASCII - 'a': 97. 'A': 65
    getline(cin, sentence);
    for(int i=0; i<sentence.size(); i++)
    {
        if(sentence[i] >= 'a' && sentence[i] <='z')
            sentence[i] = sentence[i] -32;
        else if(sentence[i] >= 'A' && sentence[i] <='Z')
            continue;
        else
            continue;
    }

    cout << sentence << "\n";
    return 0;
}
