//we keep datamembers as private ,we consider it as data hiding.
#include<bits/stdc++.h>
using namespace std;
class Abcplayer{
    int volume;
    public:
    Abcplayer():volume{0}{}
    void setvolume(int x){
        if(x>=0 && x<=100){
        volume=x;
    cout<<"Set"<<endl;
        }
    else{
    cout<<"Cant set"<<endl;
    }
    }
};
int main(){
    Abcplayer abc;
    abc.setvolume(50);
     abc.setvolume(-30);
    return 0;
}