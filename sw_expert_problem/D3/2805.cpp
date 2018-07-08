#include <iostream>
#include <string.h>
#include <string>
#include <cstdio>
#include <math.h>
using namespace std;

int test_case;
int N;

int farm[49][49];
int profit;
int count;

string pre_farm;


int main()
{
    ios::sync_with_stdio(false);
    cin >> test_case;
    for(int i=1; i<=test_case; i++)
    {
        cin >> N;
        memset(farm, 0, sizeof(farm));
        profit = 0;

        // farm array (input)
        for(int y=0; y<N; y++){
            cin >> pre_farm;
            // Convert string to int
            for(int x=0; x<N; x++){
                farm[x][y] = pre_farm[x] - '0';
            }
        }

        for(int y=0; y<N; y++){
            count = 0;
            // 증가 part
            if(y <= N/2){
                for(int x=0; x<N; x++){
                    if(x < (N/2 - y)){
                        continue;
                    }
                    else{
                        if(count < (2*y + 1)){
                            profit += farm[x][y];
                            count++;

                        }
                        else{
                            break;
                        }
                    }
                }
            }
            // 감소 part
            else{
                for(int x=0; x<N; x++){
                    if(x < (y - N/2)){
                        continue;
                    }
                    else{
                        if(count < (N -2*(y-N/2))){
                            profit += farm[x][y];
                            count++;
                        }
                        else{
                            break;
                        }
                    }
                }
            }
        }

        // output
        cout << "#" << i << " " << profit << "\n";

    }
}
