#include<bits/stdc++.h>
using namespace std;

int main(){
 array<int,5> myarray;
 myarray.fill(10);
 cout<<myarray[5];
 array<int,5> myarray={1,2,3,4,5}; //intializer list.
 array<int,5> myarray {1,2,3,4,5}; /// uniform intialization.

 //Assign using intializer list
 array<int,5> myarray;
 myarray={1,2,3,4,5};

    return 0;
}
//Access elements
//1. at()
//2. []
//3. front[] ,gives the front elemnt
//4. back(),gives the back element.
//5. data() gives access to the undelying array