#include<bits/stdc++.h>
using namespace std;

template <class T>
void display(vector<T> &v){
    cout<<"Displaying this vector"<<endl;
    vector<int> v1;
    int element;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
        //  cout<<v.at(i)<<" ";
    }
}
int main(){
    vector<int> vec1;
    int element,size=5;
    // cout<<"Enter the size:"<<endl;
    // cin>>size;
    // for(int i=0;i<size;i++){
    //     cout<<"Enter an element to add to this vector"<<endl;
    //     cin>>element;
    //     vec1.push_back(element);
    // }
    // vec1.pop_back();
//    display(vec1);
//     cout<<endl;
//     vector<int>:: iterator iter=vec1.begin();
//     vec1.insert(iter+1,5,566);
//     display(vec1);
    vector<char> vec2(4);
    //  vec2.push_back('5');
    //  display(vec2);

    vector<char> vec3(vec2);
     display(vec3);

    vector<int> vec4(6,13);
    
     display(vec4);
     cout<<endl;
     cout<<"Size of the vec4"<<endl;
    cout<<vec4.size()<<endl;
     vector<int> vec5(13,6);
  
     display(vec5);
    return 0;
} 
