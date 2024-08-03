// map<T1,T2> obj;// where t1 is key and t2 is value type
//1.map is associative container that store elements in key value combination.
//where key should be unique,otherwise it overrides the previous value.
//2.it is implement using self balancing binary search tree(AVL/Red black tree)
//3.It store key value pair in sorted order on the basis of key(ascending/descending).
//5/map is generally used in dictionary type problems.

#include<bits/stdc++.h>
using namespace std;
int main(){
    // map<string,int,less<>> Map;
    // Map["chotu"]=90909009;
    // Map["Amit"]=6281906440;
    // Map.insert(make_pair("Bot",9963561684));

    // for(auto &el1 : Map){   //Range based loop
    //     cout<<el1.first<<" "<<el1.second<<endl;
    // }
    //cout<<Map["chotu"]<<endl; //accessing the value by the key.so,we can get the value by using the key.
    //we can update the value by using the reference of the key,but we cannot
    //change the key once we intialized it.


    map<string,vector<int>,less<>> Map;
    Map["chotu"].push_back(90909009);
    Map["Amit"].push_back(6281906440);
    Map["Amit"].push_back(6281906449);
     //Map.insert(make_pair("Bot",9963561684));
     //The above insert part will not work bocz we are using vector.

    for(auto &el1 : Map){   //Range based loop
        cout<<el1.first<<endl;
        for(auto &el2: el1.second){
            cout<<el2<<" ";
        }
        cout<<endl;
    }

    return 0; 
}