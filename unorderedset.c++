//unoreder set is a associative container that contains set of unique objects
//1.search,insertion,and removal have average constant time complexity
//2.Internally the elements are organized into buckets
//3.It uses hashing to insert elements into buckets
//4.This allows fast access to individual elements,since once a hash is computed,it refers to the exact bucketthe element is placed into
//it refers to the exact bucket the element is places into.

//WHY UNORDERED SET
//maintain a collection of unique items with fast insertion and removal.


#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_set<int> uset={4,1,2,3,4,2,3};
    auto search=uset.find(2);
    if(search != uset.end())
    {
        cout<<"Found"<<(*search)<<'\n';
    }
    else{
        cout<<"Not found\n";
    }
    for(auto& elm: uset){
        cout<<elm<<" ";
    }
    cout<<endl;
    return 0;
}