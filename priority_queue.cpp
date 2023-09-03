/* Priority queue is a queue which stores values in an sorted order
priority_queue::empty()	Returns whether the queue is empty.
priority_queue::size() 	Returns the size of the queue.
priority_queue::top()	Returns a reference to the topmost element of the queue.
priority_queue::push() 	Adds the element ‘g’ at the end of the queue.
priority_queue::pop()	Deletes the first element of the queue.
priority_queue::swap()	Used to swap the contents of two queues provided the queues must be of the same type, although sizes may differ.
priority_queue::emplace()	Used to insert a new element into the priority queue container.
priority_queue value_type 	Represents the type of object stored as an element in a priority_queue. It acts as a synonym for the template parameter.
*/
#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    priority_queue<int>pq;
    for (int i=0 ; i < 6 ; i++){
        pq.push(i);
    }
    while (!pq.empty()){
        cout << pq.top()<< " ";
        pq.pop();
    }
    cout << pq.size();
    cout << pq.top() <<endl;
    cout << pq.empty()<< endl;  
    int i=4;
    while (i){
        pq.emplace(10);
        i-=1;
    } 
    while (!pq.empty()){
        cout << pq.top()<<" ";
        pq.pop();
    }  
}