//unordered multimap is an unorderd associative container that supports equivalent keys(an unordered_multimap
//may contain multiple copies of each key value) and that associates values of another type with the keys.
//2.Internally the elements are organized into buckets
//3.it uses hashing to insert elements into buckets
//4.this allows fast access to individual elements,since once a hash is computed
//it refers to the exact bucket the elements is placed into

//WHY UNORDERED_MULTIMAP
//maintain a collection of duplicate(key:value) pairs with fast insertion and removal
#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_multimap<int,char> umm={{5,'d'}};
    umm.insert({1,'a'});
    umm.insert(pair<int,char>{2,'b'});
    umm.insert(make_pair(3,'c'));
    umm.insert(make_pair(3,'c'));

    for(auto& elm: umm)
    {
        cout<<elm.first<<" "<<elm.second<<endl;
    }

    return 0;
}