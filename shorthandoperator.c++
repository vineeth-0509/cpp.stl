//+= -=

#include<bits/stdc++.h>
using namespace std;
class Marks{
    int marks;
    public:
    Marks(){
        marks=0;
    }
    Marks(int m){
        marks=m;
    }
    void yourMarkplease(){
        cout<<"your marks is:"<<marks<<endl;
    }
    Marks operator+=(int bonusmark)
    {
        marks=marks+bonusmark;
    }
   //overload -= operator using the friend function.
   friend void operator-=(Marks &curobj,int redmark);
};
void operator-=(Marks &curobj,int redmark){
    curobj.marks -= redmark;
}
int main(){
    Marks anilmarks(45);
    anilmarks.yourMarkplease();

    int x=20;
    //x+=anilmarks;
    anilmarks+=x;
    anilmarks.yourMarkplease();
     anilmarks-=x;
    anilmarks.yourMarkplease();
    return 0;
}