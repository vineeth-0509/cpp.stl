//Constructors and men=mber intializers list c++
//this is used to intialize data members of classes
//Two ways are to do this .
//1.using {} this is uniform intialization and should be performed.
//2.using ().

#include<bits/stdc++.h>
using namespace std;

class Base{
int x;
int y;
public:
Base(int a,int b):x(a),y{b}
{
}
   void print(){
    cout<<x<<" "<<y<<endl;
   }

};
int main(){
    Base b(300,100);
    b.print();
    return 0;
}