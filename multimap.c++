#include<bits/stdc++.h>
using namespace std;
int main(){
    std::multimap<char,int,std::greater<>> Multimap;
    Multimap.insert(pair<char,int>('a',1));
    Multimap.insert(make_pair('a',2));
    Multimap.insert(make_pair('a',3));
    Multimap.insert(make_pair('b',4));
    Multimap.insert(make_pair('b',5));

    cout<<"count of a is:";
    cout<<Multimap.count('a')<<endl;
    Multimap.find('a');
    //Multimap.contains('a');//gives true or false and contains is present in c++ 20.

    auto pair=Multimap.find('a');
    cout<<pair->first<<" "<<pair->second;
    cout<<endl;

    cout<<"Iterator over multimap: "<<endl;
    for(auto& elm:Multimap){
        cout<<elm.first<<" "<<elm.second<<endl;
    }

    cout<<endl;

    // // cout<<"All pairs of given key:";
    // cout<<endl;


    // pair<multimap<char,int>::iterator,multimap<char,int>::iterator>
    auto range=Multimap.equal_range('a'); //ots return type is above of it.
    for(auto it=range.first;it!=range.second;++it){
        cout<<it->first<<" "<<it->second<<endl;
    }

    // cout<<"Lower bound of a is:";
    //  auto range=Multimap.lower_bound('a');
    //     cout<<range->first<<" "<<range->second<<endl;
    

    return 0;
}

//          IMPORTANT       //
//look up:count,find,contains,equal_range,lower_bound,upper_bound;
// wedont have at() and [] functions to get element like we had in std::map.