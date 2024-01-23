#include<bits/stdc++.h>
using namespace std;
void merge(int low, int high, int mid, int arr[]){
    int left = low;
    int right = mid + 1;
    int ind = 0;
    int temp1[1000];
    while(left <= mid && right <= high){
        if(arr[left] < arr[right]){
            temp1[ind++] = arr[left++];
        }
        else{
            temp1[ind++] = arr[right++];
        }
    }
    while(left <= mid){
        temp1[ind++] = arr[left++];
    }
    while(right <= high){
        temp1[ind++] = arr[right++];
    }
    for(int i = low; i <= high; i++){
        arr[i] = temp1[i-low];
    }
}
void merge_sort(int low, int high, int arr[]){
    if(low == high) return;
    int mid = (low + high) >> 1;
    merge_sort(low, mid, arr);
    merge_sort(mid + 1, high, arr);
    merge(low, high, mid, arr);
}
int main(){
    int arr[] = {6,5,3,2,1, -1, 3, 1, -1, -1};
    int n = sizeof(arr)/sizeof(int);
    int low = 0;
    int high = n - 1;
    merge_sort(low, high, arr);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    
}
// divide and conquire alogorithm
//merge sort
// time complexity O(nlon(n))
// because it is splitting the array