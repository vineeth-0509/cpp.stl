#include<bits/stdc++.h>
#include<map>
#include<functional>
using namespace std;
int main(){

    std::map<string,vector<int>,std::less<>> Map;
    Map["chotu"].push_back(90909009);
    Map["Amit"].push_back(982349819);
    Map["Amit"].push_back(98249819);
    // Map.insert(std::make_pair("Bot",782348818));

    for(auto &el1: Map){
        cout<<el1.first<<endl;

        // cout<<Map["chotu"]<<endl;
        
    

    for(auto &el2: el1.second)
        cout<<el2<<" "<<endl;
    }
 
    return 0;
}