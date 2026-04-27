#include<bits/stdc++.h>
using namespace std;

void printrev(int n,int cnt){
    if (cnt==0)
    {
        return;
    }
    cout<<cnt<<" ";
    printrev(n,cnt-1);

}

int main(){
    printrev(10,10);
}