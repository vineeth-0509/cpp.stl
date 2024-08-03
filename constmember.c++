#include<bits/stdc++.h>
using namespace std;
class Base{
mutable int x;
int y;
public:
Base(){

}
Base(int a,int b):x{a},y{b}{

}
void setx(int a,int b){
    x=a;
    y=b;
}
int getx() const {
    x=20;
    
    return y;
    return x;
}
};
int main(){
Base b;
b.setx(10,30);
cout<<b.getx()<<endl;
    return 0;
}