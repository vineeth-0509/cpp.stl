//list is faster compared to other sequence containers(vector,forward_list,dequeue)
//in terms of insertion,removal and moving elements in any position provided we have the iterator of the position
//available operations are:
//operator =,assign, front, back, empty, size, max_size, clear, insert, emplace, push_back, pop_back,  push_front,
//pop_front,reverse,sort,merge,splice,unique,remove,remove_if,resize.

#include<bits/stdc++.h>
using namespace std;
int main()
{

    list<int> list1={5,2,4,6,2,2,2};
    list<int> list2={7,6,1,9};
    // list1.sort();
    // list2.sort();
    // list1.merge(list2);
  // list1.splice(list1.begin(),list2);
    list1.sort();
    list1.unique();
    //list1=list2;

    for(auto& elm: list1)
    cout<<elm<<' ';
    cout<<endl;

    // for(auto& elm: list2)
    // cout<<elm<<' ';
    // cout<<endl;

    return 0;
}