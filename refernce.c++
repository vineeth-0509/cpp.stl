#include<bits/stdc++.h>
using namespace std;
class Base{
int &x;
public:
Base(int &a):x{a}{}
void print(){
    cout<<x<<endl;
}

};
int main(){
 int val=10;
Base b(val);
b.print();
    return 0;
}

//use reference when you are ok with your data member can be changed
//without your knowledge.
//use when you dont need to implement assignment operator in your class
//(this is restriction)
//if OK with,the contained object is not owned by the containing object 
//and thus their lifrtimes are not bound.
//you need to ensure that the referred object is guaranteed to exist
//till your class object exists.