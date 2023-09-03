#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    list<int> lst;
    for ( int i=0 ; i< 5 ; i++){
        lst.push_back(i); // loading values to list from the back
        // lst.push_front(i); // loading values to list from the front
    }
    // for (auto it : lst){
    //     cout << it << " ";
    // }
    // cout << lst.front() << " ";
    // cout << lst.back() << " ";
    // list<int>::iterator it = lst.end(); // creating an iterator and inserting element at the position
    // lst.insert(it,10);
    // for (auto it : lst){
    //     cout << it << " ";
    // }
    lst.pop_back();
    lst.pop_front();
    for (auto i=lst.begin();i!=lst.end();i++){
        cout<< *i << endl;
    }
    cout << lst.size();
    cout << lst.empty();
    lst.erase(3);
    for (auto i=lst.begin();i!=lst.end();i++){
        cout<< *i << endl;
    }
}