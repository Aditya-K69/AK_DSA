#include<bits/stdc++.h>
using namespace std;

void recur(int n,int cnt,string name){
    if(n==cnt){
        return;
    }
    cout<<name<<" ";
    recur(n,cnt+1,name);
}

int main(){
    string name = "Ak";
    recur(5,0,name);
    return 0;
}