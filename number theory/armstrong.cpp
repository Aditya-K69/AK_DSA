#include<bits/stdc++.h>

using namespace std;


int main(){
    int n;
    cin>>n;
    int digits = (int)log10(n)+1;
    int sum = 0;
    int temp = n;
    while (temp>0){
        int ld = temp%10;
        temp /= 10;
        sum += pow(ld,digits);
    }
    
    if(sum == n) cout<<"true";
    else{
        cout<<"false";
    }
    

    return 0;
}