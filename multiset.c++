#include<bits/stdc++.h>
using namespace std;

class person{
    public:
    float age;
    string name;
    bool operator < (const person& rhs) const {return age<rhs.age;}
    bool operator > (const person& rhs)const {return age<rhs.age;}
};
int main(){

    std::multiset<person,std::greater<>> multiset={{25,"Rupesh"},{20,"Hitesh"}};

    for(const auto& e:multiset)
    cout<<e.age<<" "<<e.name<<endl;


      
    // multiset<int,std::less<>> multiset={5,2,4,3,2,5};
    // multiset.insert(50);
    // for(const auto e: multiset)
    // cout<<e<<endl;


    //  multiset<int,std::greater<>> multiset={5,2,4,3,2,5};
    // // multiset.insert(50);
    // for(const auto e: multiset)
    // cout<<e<<endl;
    // return 0;
}