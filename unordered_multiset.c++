//no unique and sorted

//WHY UNORDERED MULTISET
//it maintains a collection of non unique items with fast insertion and removal

#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_multiset<int> umset={4,1,2,3,9,4,3,2,9,8,10};
    auto search=umset.find(2);
    if(search!= umset.end())
    {
        cout<<"Found"<<(*search)<<'\n';
    }
    else{
        cout<<"Not found\n";
    }
    for(auto& elm: umset)
    {
        cout<<elm<<" ";
    }
    cout<<endl;
    cout<<umset.count(4)<<endl;

    return 0;
}