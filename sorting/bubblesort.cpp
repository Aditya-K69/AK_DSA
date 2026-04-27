#include<iostream>
using namespace std;

void bubblesort(int arr[],int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1 ; j < n; j++)
        {
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
        
    }
    
}

int main(){

    int arr[] = {42, 17, 88, 5, 63, 29, 91, 14, 76, 50};
    bubblesort(arr,10);
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}