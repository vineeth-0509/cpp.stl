#include<bits/stdc++.h>
using namespace std;
int main(){

    // vector<int> n;
    // n.assign(9,1);
    // cout<<"The contents are: ";
    // for(int a=0;a<n.size();a++){
    //     cout<<n[a]<<" ";
    //     cout<<endl;
    // }

    // n.push_back(2);
    // int no=n.size();
    // cout<<"Last element :"<<n[no-1]<<endl;

    // n.pop_back();
    // cout<<"Now the contents are:";
    // for(int a=0;a<n.size();a++){
    //     cout<<n[a]<<" ";
    //     cout<<endl;
    // }

    // n.insert(n.begin(),7);
    // cout<<"firat element is: "<<n[0]<<endl;

    // n.clear();
    // cout<<"Now the size is: "<<n.size();

    vector<int> Vec;
    for(int i=0;i<32;i++){
        Vec.push_back(i);

        cout<<"size"<<Vec.size()<<" "<<"capacity"<<Vec.capacity()<<endl;
    }
    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> vec;
//     vec.reserve(31);
//     for(int i=0;i<32;i++){
//     vec.push_back(i);
//     cout<<"Size:"<<vec.size()<<" "<<"Capacity:"<<vec.capacity()<<endl;
//     }
//     return 0;
// }