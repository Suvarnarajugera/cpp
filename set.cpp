/* Set is a container which stores unique elements
begin() – Returns an iterator to the first element in the set.
end() – Returns an iterator to the theoretical element that follows the last element in the set.
size() – Returns the number of elements in the set.
max_size() – Returns the maximum number of elements that the set can hold.
empty() – Returns whether the set is empty
begin()	Returns an iterator to the first element in the set.
end()	Returns an iterator to the theoretical element that follows the last element in the set.
rbegin()	Returns a reverse iterator pointing to the last element in the container.
rend()	Returns a reverse iterator pointing to the theoretical element right before the first element in the set container.
crbegin()	Returns a constant iterator pointing to the last element in the container.
crend()	Returns a constant iterator pointing to the position just before the first element in the container.
cbegin()	Returns a constant iterator pointing to the first element in the container.
cend()	Returns a constant iterator pointing to the position past the last element in the container.
size()	Returns the number of elements in the set.
max_size()	Returns the maximum number of elements that the set can hold.
empty()	Returns whether the set is empty.
insert(const g) 	Adds a new element ‘g’ to the set.
iterator insert (iterator position, const g)	Adds a new element ‘g’ at the position pointed by the iterator.
erase(iterator position) 	Removes the element at the position pointed by the iterator.
erase(const g)	Removes the value ‘g’ from the set.
clear() 	Removes all the elements from the set.
key_comp() / value_comp()	Returns the object that determines how the elements in the set are ordered (‘<‘ by default).
find(const g)	Returns an iterator to the element ‘g’ in the set if found, else returns the iterator to the end.
count(const g)	Returns 1 or 0 based on whether the element ‘g’ is present in the set or not.
lower_bound(const g)	Returns an iterator to the first element that is equivalent to ‘g’ or definitely will not go before the element ‘g’ in the set.
upper_bound(const g)	Returns an iterator to the first element that will go after the element ‘g’ in the set.
equal_range()	The function returns an iterator of pairs. (key_comp). The pair refers to the range that includes all the elements in the container which have a key equivalent to k.
emplace()	This function is used to insert a new element into the set container, only if the element to be inserted is unique and does not already exist in the set.
emplace_hint()	Returns an iterator pointing to the position where the insertion is done. If the element passed in the parameter already exists, then it returns an iterator pointing to the position where the existing element is.
swap()	This function is used to exchange the contents of two sets but the sets must be of the same type, although sizes may differ.
operator=	The ‘=’ is an operator in C++ STL that copies (or moves) a set to another set and set::operator= is the corresponding operator function.
get_allocator()	Returns the copy of the allocator object associated with the set.*/
#include<iostream>
#include<algorithm>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>s1,s;
    for (int i=0 ; i<10 ; i++){
        s.insert(i);
    }
    for (auto it : s){
        cout << it << " ";
    }
    for (auto  i = s.begin();i!=s.end();i++){
        cout << *i << " ";
    }
    cout << *s.lower_bound(6);
    cout << *s.upper_bound(6);//returns the upper and lower bounds of the number
    cout << s.max_size();
    s.erase(9);
    cout << endl;
    cout << s.size()<<endl;
    s.emplace(20);
    s.emplace(1);
    for (auto it : s){
        cout << it << " ";
    }
    s1.swap(s);
    cout << s1.size()<<" " << s.size();

}
/*Expected TLE
Insertion of Elements – O(log N)
Deletion of Elements – O(log N)
*/