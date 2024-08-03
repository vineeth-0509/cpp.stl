#include<iostream>
using namespace std;

//Example of a friend function in a class
// class Base{
// int x;
// public:
// Base(){

// }
//  Base(int a):x{a}{

// }
// friend void set(Base&,int);
// friend int get(Base&);

// };
// void set(Base& obj,int x){
//     obj.x=x;
//     cout<<x<<endl;
// }
// int get(Base& obj){
//     return obj.x;
// }

// int main(){
//     Base obj(10);
//      cout<<get(obj)<<endl;
//     set(obj,20);
//     cout<<get(obj)<<endl;
//     return 0;
// }

/* Example of friend class inside a class*/

class Base{

int x;
public:
Base(){

}
Base(int a):x{a}{

}
friend class Getset;
};
class Getset{
public:
void set(Base& obj,int x){
obj.x=x;
}
int get(Base& obj){
return obj.x;
}
};
int main(){
    Base obj(10);
   Getset gs;
  cout<<gs.get(obj)<<endl;
  gs.set(obj,100);
  cout<<gs.get(obj)<<endl;
    return 0;
}
//1.friend function or friend class can access private/public/protected data
//members functions of another class.
//2.function cannot become friend of funtion.
//3.class cannot become a friend of function.
//4.friendship is not mutual .if a class A is friend of B,the B doesnt become friend of A automatically.
//5.Friendship is not inherited.