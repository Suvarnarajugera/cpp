/*Operations on array :- 
1. at() :- This function is used to access the elements of array. 
2. get() :- This function is also used to access the elements of array. This function is not the member of array class but overloaded function from class tuple. 
3. operator[] :- This is similar to C-style arrays. This method is also used to access array elements.
4. front() :- This returns reference to  the first element of array. 
5. back() :- This returns reference to the last element of array.
6. size() :- It returns the number of elements in array. This is a property that C-style arrays lack. 
7. max_size() :- It returns the maximum number of elements array can hold i.e, the size 
8. swap() :- The swap() swaps all elements of one array with other.
9. empty() :- This function returns true when the array size is zero else returns false. 
10. fill() :- This function is used to fill the entire array with a particular value.
*/
#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    array<int , 5>arr ={2,3,5,1,7};
    // for (int i=0 ; i<5 ; i++){
    //     cout <<arr.at(i) << " ";
    // }
    // for (int i=0 ;i< 7 ; i++){
    //     cin >> arr[i];
    // }
    // cout << arr.front() << endl;
    // cout << arr.back()<< endl;
    // cout << arr.max_size()<<endl;
    // for (int i=0 ;i< 7 ; i++){
    //     cout << arr[i] << " ";
    // }
    // array<int , 5 > arr1;
    // arr1.fill(0);
    // // for (auto it : arr1){
    // //     cout << it << " ";
    // // }
    // arr1.swap(arr);
    // for (auto it : arr){
    //     cout << it << " ";
    // }
    // cout << " " << endl;
    // for (auto it : arr1){
    //     cout << it << " ";
    // }
    sort(arr.rbegin(),arr.rend()); // sort in descending to ascending order
    sort(arr.begin(),arr.end());
    for (auto it:arr){
        cout << it << " ";
    }
}