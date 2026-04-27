#include<iostream>
using namespace std;

void selectionsort(int arr[],int size){
    for (int i = 0; i < size-1; i++)
    {
        int min = arr[i];
        for (int j = i+1; j < size; j++)
        {
            if(arr[j]<arr[i]){
                swap(arr[i],arr[j]);
            }
        }
    }
    
}

int main(){

    int arr[] = {42, 17, 88, 5, 63, 29, 91, 14, 76, 50};
    selectionsort(arr,10);
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}