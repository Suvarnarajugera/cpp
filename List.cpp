/*front() – Returns the value of the first element in the list.
back() – Returns the value of the last element in the list.
push_front() – Adds a new element ‘g’ at the beginning of the list.
push_back() – Adds a new element ‘g’ at the end of the list.
pop_front() – Removes the first element of the list, and reduces the size of the list by 1.
pop_back() – Removes the last element of the list, and reduces the size of the list by 1.
insert() – Inserts new elements in the list before the element at a specified position.
size() – Returns the number of elements in the list.
begin() – begin() function returns an iterator pointing to the first element of the list.
end() – end() function returns an iterator pointing to the theoretical last element which follows the last element.
front()	Returns the value of the first element in the list.
back()	Returns the value of the last element in the list.
push_front(g)	Adds a new element ‘g’ at the beginning of the list.
push_back(g) 	Adds a new element ‘g’ at the end of the list.
pop_front()	Removes the first element of the list, and reduces the size of the list by 1.
pop_back()	Removes the last element of the list, and reduces the size of the list by 1.
list::begin()	begin() function returns an iterator pointing to the first element of the list.
list::end()	end() function returns an iterator pointing to the theoretical last element which follows the last element.
list rbegin() and rend()	rbegin() returns a reverse iterator which points to the last element of the list. rend() returns a reverse iterator that points to the position before the beginning of the list.
list cbegin() and cend() 	 cbegin() returns a constant random access iterator which points to the beginning of the list. cend() returns a constant random access iterator which points to the end of the list.
list crbegin() and crend() 	crbegin() returns a constant reverse iterator which points to the last element of the list i.e reversed beginning of the container. crend() returns a constant reverse iterator which points to the theoretical element preceding the first element in the list i.e. the reverse end of the list.
empty() 	Returns whether the list is empty(1) or not(0).
insert()	Inserts new elements in the list before the element at a specified position.
erase()	Removes a single element or a range of elements from the list.
assign()	Assigns new elements to the list by replacing current elements and resizing the list.
remove()	Removes all the elements from the list, which are equal to a given element.
list::remove_if()	Used to remove all the values from the list that correspond true to the predicate or condition given as a parameter to the function.
reverse()	Reverses the list.
size()	Returns the number of elements in the list.
list resize()	Used to resize a list container.
sort()	Sorts the list in increasing order.
list max_size() 	Returns the maximum number of elements a list container can hold.
list unique()	Removes all duplicate consecutive elements from the list.
list::emplace_front() and list::emplace_back()	emplace_front() function is used to insert a new element into the list container, and the new element is added to the beginning of the list. emplace_back() function is used to insert a new element into the list container, and the new element is added to the end of the list.
list::clear()	clear() function is used to remove all the elements of the list container, thus making it size 0.
list::operator=	This operator is used to assign new contents to the container by replacing the existing contents.
list::swap()	This function is used to swap the contents of one list with another list of the same type and size.
list splice()	Used to transfer elements from one list to another.
list merge()	Merges two sorted lists into one.
list emplace()	Extends the list by inserting a new element at a given position.*/
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
