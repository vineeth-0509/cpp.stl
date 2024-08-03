#include<bits/stdc++.h>
using namespace std;
class Test{
int x;
public:
Test(int x=0):x{x} {}
void print(){ cout<<"Non constant"<<endl;}
void print() const { cout <<"Constant"<< endl;}
};
int main(){
    Test t;
    // int k=10;
    // const int p=20;
    // t.print();
    // t.print();
    Test t1;
    const Test t2;
    t1.print();
    t2.print();
    return 0;
}

//points
//1.c++ allows to overlaod member functions on the basis of const and nonconst.
//const parameters allows to overload member functons  and normal function but it should be refernce/pointer.