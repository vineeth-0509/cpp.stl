//1.This is singly linked list that we know from C programming 
//2.why forward_list and why not single_list?
//3.we should use this class instead of traditional single linkedlist because
// a. well tested
// b.Bumch of available function
//4.Few available operations
// operator=,assign,front,empty,Max_size,clear,insert_after,emplace_after
// reverse,sort,merge,splice_after,unique,remove,remove_if,resize 


#include<bits/stdc++.h>
using namespace std;
int main(){
    forward_list<int> list1={5,2,4,6,2};
    forward_list<int> list2={7,6,1,9};
   // list1.insert_after(list1.begin(),8);
    //list1.reverse();
    // list1.sort();
    // list2.sort();
    //list1.merge(list2);//merge will be performe on only 2 sorted lists and it is 
    // not possible on unsorted list.
    // list1.splice_after(list1.begin(),list2);


      //unique means remove dupicate values adn only adjacent duplicates.
    //list1.unique();


    //remove means serach for that elements and remove
    //list1.remove(2);

    //remove_if
    //remove all the numbers from the list greater than 4.
    // list1.remove_if([] (int n) {
    //     return n > 4;
    // });
    

    //resize
    //resize the list,if we give number 2 it will delete the rest of the the elements
    //and shows the present no. of elements as per the given number.
    list1.resize(6);


    for(auto& elm: list1)
    cout<<elm<<endl;
   // cout<<"size of list2: "<< distance(list2.begin(),list2.end())<<endl;
    //unique means remove dupicate values adn only adjacent duplicates.
    
    return 0;
}