#include<bits/stdc++.h>
using namespace std;

void printnum(int n,int cnt){
    if(n==cnt){
        cout<<cnt;
        return;
    }
    cout<<cnt<<" ";
    printnum(n,cnt+1);
}

int main(){
    printnum(10,1);
    return 0;
}