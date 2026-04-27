#include<iostream>
using namespace std;

void insertsort(int arr[],int n){

        for (int i = 1; i < n; i++)
        {
            int key = arr[i];
            int j = i-1;

            while (j>=0 && arr[j]>key)
            {
                arr[j+1] = arr[j];
                j--;
            }
            
            arr[j+1] = key;

        }
        


}

int main(){

    int arr[] = {42, 17, 88, 5, 63, 29, 91, 14, 76, 50};
    insertsort(arr,10);
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}