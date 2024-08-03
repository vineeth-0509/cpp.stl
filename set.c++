#include<bits/stdc++.h>
using namespace std;

class person{
    public :
    float age;
    string name;
    bool operator<(const person& rhs)const{return age<rhs.age;}//commpartor function
     bool operator>(const person& rhs)const{return age>rhs.age;}//commpartor function

};
int main(){
    // set<int> Set={1,2,3,4,5,1,2,3,4,5};
    // for(const auto& e: Set){
    //     cout<<e<<" ";
    // }
    set<person,std::less<person>> Set={{30,"Rupesh"},{25,"Hitesh"},{22,"john"}};
    for(const auto& e: Set){
        cout<<e.age<<" "<<e.name<<" "<<endl;

    }
    cout<<endl;
    set<person,std::greater<person>> set={{30,"Rupesh"},{25,"Hitesh"},{22,"john"}};
    for(const auto& e: set){
        cout<<e.age<<" "<<e.name<<" "<<endl;

    }
    
return 0;
}
