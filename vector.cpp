// size() – Returns the number of elements in the vector.
// max_size() – Returns the maximum number of elements that the vector can hold.
// capacity() – Returns the size of the storage space currently allocated to the vector expressed as number of elements.
// resize(n) – Resizes the container so that it contains ‘n’ elements.
// empty() – Returns whether the container is empty.
// shrink_to_fit() – Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity.
// reserve() – Requests that the vector capacity be at least enough to contain n elements.
// begin() – Returns an iterator pointing to the first element in the vector
// end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector
// rbegin() – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
// rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
// cbegin() – Returns a constant iterator pointing to the first element in the vector.
// cend() – Returns a constant iterator pointing to the theoretical element that follows the last element in the vector.
// crbegin() – Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
// crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
// assign() – It assigns new value to the vector elements by replacing old ones
// push_back() – It push the elements into a vector from the back
// pop_back() – It is used to pop or remove elements from a vector from the back.
// insert() – It inserts new elements before the element at the specified position
// erase() – It is used to remove elements from a container from the specified position or range.
// swap() – It is used to swap the contents of one vector with another vector of same type. Sizes may differ.
// clear() – It is used to remove all the elements of the vector container
// emplace() – It extends the container by inserting new element at position
// emplace_back() – It is used to insert a new element into the vector container, the new element is added to the end of the vector
#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    // vector<int>v;
    // for (int i=0 ; i < 10 ; i++){
    //     v.push_back(i);
    // }
    // for (auto it =  v.begin() ; it!= v.end() ; ++it){ // printing elements from start to end
    //     cout << *it << " " ;
    // }
    // cout << " " << endl;
    // for (auto i = v.rbegin() ; i != v.rend() ; i++){ // printing elemnets from the last to first
    //     cout << * i<< " ";
    // }
    // cout << " " << endl;
    // for (auto a = v.cbegin(); a != v.cend() ; a++){
    //     cout << *a << " ";
    // }
    // cout << v.size() << endl;
    // cout << v.max_size() << endl;
    // cout << v.capacity()<< endl;
    // cout << v.empty() << endl;
    // v.erase(v.begin()); 
    // cout << v[0];
    // v.insert(v.end(),1);
    // for (auto it =  v.begin() ; it!= v.end() ; ++it){ // printing elements from start to end
    //     cout << *it << " " ;
    // }
    // sort(v.begin(),v.end());
    // for (auto it =  v.begin() ; it!= v.end() ; ++it){ // printing elements from start to end
    //     cout << *it << " " ;
    // }
    // vector<int>v1;
    // v1.push_back(10);
    // v1.push_back(20);
    // v1.swap(v);
    // for (auto it : v){
    //     cout << it << " " ;
    // }
    // cout << " " << endl;
    // for (auto it : v1){
    //     cout << it << " " ;
    // }
    // vector<int>A[3]; // here we are creating like [[][][]].
    // for (int i = 0 ; i < 3 ; i++){
    //     for (int j =0 ; j < 3 ; j++){
    //         int x; 
    //         cin >> x;
    //         A[i].push_back(x);
    //     }
    // }
    // for (int i = 0 ; i < 3 ; i++){
    //     for (int j =0 ; j < 3 ; j++){
    //         cout << A[i][j] << " " ;
    //     }
    //     cout <<endl;
    // }
    // vector<vector<int>>v;
    // for (int i=0 ; i<3 ; i++){
    //     vector<int>temp;
    //     for (int j =0 ; j < 3 ; j++){
    //         int x;
    //         cin >> x;
    //         temp.push_back(x);
    //     }
    //     v.push_back(temp);
    // }
    // for (int i=0 ; i<3 ; i++){
    //     for (int j =0 ;j < 3; j++){
    //         cout << v[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    vector<pair<int,int>>p;
    for (int i=0 ; i< 3 ; i++){
        int x,y;
        cin >> x >> y;
        // p.push_back({x,y});
        p.push_back(make_pair(x,y));
    }
    for (int i = 0 ; i < 3 ; i++){
        cout << p[i].first<< " "<< p[i].second ;
        cout <<endl;
    }
}