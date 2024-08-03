// std::pair<T1,T2> obj;
//std::pair is a struct template that provides a way to store two heterogeneous objects as a single units.
//1.map,multimap,unorder_map,unorder_multimap can use pair to insert data into their structures.


#include<bits/stdc++.h>
using namespace std;

void print(pair<int,int>& obj)
{
    cout<<obj.first<<" "<<obj.second<<endl;
}
int main(){
    {
    pair<int,int> obj(10,20);
    print(obj);
    }
    {
        pair<int,int> obj=make_pair(30,40);
        print(obj);
    }
    {
        vector<pair<string,int>> list;
        list.push_back(make_pair("vineeth",1));
        list.push_back(make_pair("sunny",2));
         list.push_back(make_pair("Thunagni",3));
          list.push_back(make_pair("name",4));

          for(auto& elm1: list){
            cout<<elm1.first<<' '<<elm1.second<<endl;

          }

    }
    return 0;
}