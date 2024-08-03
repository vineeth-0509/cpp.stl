#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int>v;
    for(int x=1;x<=10;x++){
        v.push_back(x);
    }
    cout<<"vector size is: "<<v.size()<<endl;
    cout<<"Capacity of vector is:"<<v.capacity()<<endl;
    cout<<"Maximu size of the vector is: "<<v.max_size()<<endl;
    v.resize(5);
    cout<<"Vector size after resize: "<<v.size()<<endl;

    if(v.empty()==false){
        cout<<"vector is not empty"<<endl;
    }
    else{
        cout<<"vector is empty"<<endl;
    }


    return 0;
}
