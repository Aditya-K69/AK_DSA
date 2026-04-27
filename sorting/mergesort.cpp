#include<bits/stdc++.h>
using namespace std;


void mergearr(int arr[], int left, int mid, int right) {

    int n1 = mid - left + 1;
    int n2 = right - mid;

    // static temp arrays
    int L[100], R[100];

    // copy data
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];

    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0;
    int k = left;

    // merge
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // remaining elements
    while (i < n1) {
        arr[k] = L[i];
        i++; k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++; k++;
    }
}

void mergesort(int arr[],int left, int right){

    if (left>=right)
    {
        return;
    }
    
    int mid = (left+right)/2;

    mergesort(arr,left,mid);
    mergesort(arr,mid+1,right);

    mergearr(arr,left,mid,right);

}


int main(){

    int arr[] = {42, 17, 88, 5, 63, 29, 91, 14, 76, 50};
    mergesort(arr,0,9);
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}