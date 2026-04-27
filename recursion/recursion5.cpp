#include<bits/stdc++.h>
using namespace std;

int fct(int n){
    
    if(n==1){
        return 1;
    }
    return n * fct(n-1);
}

int main(){

    cout<<"The factorial is :"<<fct(-1);

}