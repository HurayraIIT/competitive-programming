#include<bits/stdc++.h>
#include<stack>
using namespace std;

// add new element and minimum untill now as a pair

void add_new_element(stack<pair<int,int>> &st , int new_element)
{
    int new_minimum = st.empty() ? new_element : min( new_element , new_minimum ) ;
    st.push( { new_element , new_minimum } ) ;
}

int main()
{
    // We want to modify the stack data structure in such a way, 
    // that it possible to find the smallest element in the stack 
    // in O(1) time

    // For this reason, we will store the elements in pairs in the stack:
    // The element itself and the minimum element upto this position

    stack< pair<int,int> > st;

    // add new elements

    add_new_element(st, 12);
    add_new_element(st, 6);
    add_new_element(st, 9);
    add_new_element(st, 10);
    add_new_element(st, 40);

    // find the minimum element in O(1) time

    cout << "Last elem: " << st.top().first << endl
         << "Minimum elem: " << st.top().second << endl;


    // delete an element

    st.pop();

    return 0;
}