//1.std vector is a asequenece conatainer abd also known as Dynamic Array or SrrayList.
//2.its size can grow and shrink dynamically,and no need to provide size at compile time.
// vector=linked list+Array o(1) access time.
//ELEMENT ACCCESS
//at(),[],front(),back(),data()

//MODIFIERS
//insert(),emplace(),push_back(),emplace_back(),pop_back(),resize(),swap(),erase(),clear()
//caapacity(),size();

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    //Declarations
    std::vector<int> arr1;
    std::vector<int> arr2(5,20);
    std::vector<int> arr3={1,2,3,4,5}; //intializer
    std::vector<int> arr4 {1,2,3,4,5}; //uniform intialization

    //Accessing Elements
    arr2[3]=10;
    arr2.at(3)=10;
    return 0;
}
//"${workspaceFolder}/**",
//"${workspaceFolder}/MinGW/x86_64-w64-mingw32/include"