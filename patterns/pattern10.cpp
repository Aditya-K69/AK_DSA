#include<bits/stdc++.h>
using namespace std;
int main(){

    for (int i = 1; i <= 10; i++)
    {
     int stars = i;
     if(i>5)stars = 10-i;  

    for (int j = 1; j <= stars; j++)
    {
        cout<<"*";   
    }
     
    cout<<"\n";

    }


    
    
    
    return 0;
}