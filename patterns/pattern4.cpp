#include<bits/stdc++.h>
using namespace std;
int main(){
    for (int i = 0; i < 5; i++)
    {

        for (int j = 0; j < 5; j++)
        {
            if(j<=i){
                cout<<i+1;
            }
        }
        cout<<"\n";
    }
    
    return 0;
}