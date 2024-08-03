//vec.reserve(1000); internally it create the array of 1000 size from 0 to 999
//vec.resize(1000);

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> vec;
  vec.reserve(31);
    for(int i=0;i<32;i++){
        vec.push_back(i);
        cout<<"size : "<<vec.size()<<" "<<"capacity:"<<vec.capacity()<<endl;
    }
    return 0;
}