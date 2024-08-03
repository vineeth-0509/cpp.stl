//structure in c++ is similar with class in c++,except by default access 
//specifier in class is private,but not public in structure.
#include<bits/stdc++.h>
using namespace std;
// class Base1{
// public:
// int x;
// };
// struct Base2{
// int x;
// };
// int main(){
//     Base1 b1;
//     b1.x=10;
//     Base2 b2;
//     b2.x=20;
//     return 0;
// }
class A{};
class B:A{};

struct A{};
struct B:A{};