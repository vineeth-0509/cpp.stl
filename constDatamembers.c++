
#include<iostream>
using namespace std;
// class Circle{
//     const float pi=3.14;
//     float r;
//     public:
//     Circle(float a){
//         r=a;
//     }
//     float getArea(){
//         return r*r*pi;
//     }


// };
// int main(){
//     Circle c1(5.2),c2(5.9),c3(10);
//     cout<<c1.getArea()<<endl;
//     cout<<c2.getArea()<<endl;
//     cout<<c3.getArea()<<endl;
//     return 0;
//}


//** INtializer list **//
class phone{
const string pname;
int memsize;
public:
phone(string str,int a): pname{str},memsize{a}{}
 int getphoneName(){
return memsize;

}

};
int main(){
    phone p1("Motto G4",32),p2("I phone",16);
    cout<<p1.getphoneName()<<endl;
    cout<<p2.getphoneName()<<endl;
    return 0;
}