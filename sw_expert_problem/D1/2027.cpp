/*
아래의 주어진 텍스트 출력하기

#++++
+#+++
++#++
+++#+
++++#

*/

#include <iostream>
using namespace std;

int num_sharp = 1;

int main()
{
    for(int i=1; i<=5; i++)
    {
        for(int i=1; i<=5; i++)
        {
            if(i == num_sharp)
            {
                cout << "#";
                continue;
            }
            else
                cout << "+";
        }
        num_sharp++;
        cout << "\n";
    }

    return 0;
}
