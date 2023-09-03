/* LIFO -Last in First Out
empty() – Returns whether the stack is empty – Time Complexity : O(1) 
size() – Returns the size of the stack – Time Complexity : O(1) 
top() – Returns a reference to the top most element of the stack – Time Complexity : O(1) 
push(g) – Adds the element ‘g’ at the top of the stack – Time Complexity : O(1) 
pop() – Deletes the most recent entered element of the stack – Time Complexity : O(1) */
#include <iostream>
#include <stack>
using namespace std;
int main() {
    stack<int>st;
    st.push(21);
    st.push(22);
    st.push(24);
    st.push(25);
    while (!st.empty()) {
        cout << st.top() <<" ";
        st.pop();
    }
    int len =st.size();
    while (!st.empty()) {
        cout << st.top() <<" ";
        st.pop();
    }
}