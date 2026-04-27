#include<bits/stdc++.h>
using namespace std;

void rev(int arr[],int fp,int lp){
    
    if(fp >= lp ){
        return;
    }
    swap(arr[fp],arr[lp]);
    rev(arr,fp+1,lp-1);

}

int main(){

    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    rev(arr,0,9); 
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}