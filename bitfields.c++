//it is used to reduce the size of "class/struct" if we can.
#include<bits/stdc++.h>
using namespace std;
// struct Date{
// unsigned int d;
// unsigned int m;
// unsigned int y;

// };
// int main(){
//     Date d;
//     d.d=5; d.m=9, d.y=2002;
//     cout<<d.d<<"-"<<d.m<<"-"<<d.y<<endl;
//     cout<<sizeof(Date)<<endl;
//     return 0;
// }

// force allignment is possible using unnamed bit fields of size 0.
struct Node1{
    unsigned int a:6;
    unsigned int b:9;

};
//with force allignment 
struct Node2{
unsigned int a:6;
unsigned int:0;
unsigned int b:9;
};

//2.Taking pointers tobit field members are not allowed as they not start at a byte boundary.
struct Node{
unsigned int a:5;
unsigned int b:5;
unsigned int c;

};
//3. Assigning an out-of -range value to a bit field member is implementation
//defined.
struct Node3{
unsigned int a :2;
unsigned int b:2;
unsigned int c:2;
};
//4.we can have static members in a structure/class in c++,but bit fields
//cannot be static.
// struct Node4{
// static unsigned int x: 5;

// };

//5.Array of bit fields is not allowed.for example,the below program fails in compilation
// struct Node5{
// unsigned int x[10]: 2;
// };
int main(){
    cout<<sizeof(Node1)<<endl;
    cout<<sizeof(Node2)<<endl;
    Node t;
    //This will not work.
    //cout<&t.a;
    //This will work because c is not a bit field memeber.
    cout<<&t.c;
    Node3 n;
    n.a=5;
    cout<<n.a<<endl;
    return 0;
}