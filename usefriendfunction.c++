//use of friend function and classes in C++.

#include<bits/stdc++.h>
using namespace std;
class Base{
int x;
public:
Base(){

}
Base(int x):x{x}{

}
friend void fun1(Base &);
};
void fun1(Base &obj){
    cout<<obj.x<<endl;
    obj.x=20;
    cout<<obj.x<<endl;
}
int main(){
    Base b(10);
    fun1(b);
    return 0;
}