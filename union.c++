//just like structures and classes a union is a user defined data type.
//2.In union all members share the biggest same memory location.
//3.This is used to achieve polymorphism in c.
#include<bits/stdc++.h>
using namespace std;

// union Square{
//     int height;
//     int width;
// };
// int getArea(int height,int width){

//     return height*width;
// }
// int main(){
//     Square sqr;
//     sqr.width=10;
//     cout<<getArea(sqr.height,sqr.width)<<endl;
//     return 0;
// }
union myunion{
char byte[4];
unsigned int value;
};
int main(){
    myunion un;
    un.value=0;

    un.value=16453;
    cout<<(int)un.byte[0]<<endl;
    cout<<(int)un.byte[1]<<endl;
    cout<<(int)un.byte[2]<<endl;
    cout<<(int)un.byte[3]<<endl;

    return 0;
}