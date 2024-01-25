// Bubble sort
// Time complexity 
//  -> O(n^2) -> In worst case
//  -> O(n)  - > If the array is sorted
#include<bits/stdc++.h>
using namespace std;
// Recursive approch
void Bubblesort(int *arr,int n){
    if(n == 1)return;
    for(int i = 0 ; i < n -1 ; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    Bubblesort(arr,n-1);
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    Bubblesort(arr,n);
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] <<" ";
    }
}
