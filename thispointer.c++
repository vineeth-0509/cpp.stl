
#include<bits/stdc++.h>
using namespace std;
class Base{
int x;
public:
Base(){

}
Base(int a):x{a}{

}
int get(){
    return this-> x;
}
// int get(Base* const this){
//    return this->x;
// }
void set(int a){
  x=a;
}
// void set(Base *const this,int a){
//    this->x=a;
// }
};
int main(){
Base b1;
Base b2(10);
cout<<"The value is:"<<b2.get()<<endl;
return 0;
}