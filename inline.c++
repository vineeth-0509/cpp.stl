//inline thinks whether to replace the function body into the function call or not.
//it reduces the task for the improvement in the execution of program
#include<bits/stdc++.h>
using namespace std;
inline void printMe(string str,int i){
    cout<<str<<i<<endl;
}

int main(){
    for(int i=0;i<10000;i++){
        printMe("Hello world",i);
    }
    return 0;
}
//Advantages of :
//1) Function calling overhead reduced.
//2) variables push/pop on the stack is reduced.
//3)Return call from a function overhead reduced.
//4)Increases locality of reference by utilizing instuction cache.
//5)once inling is done comppiler can also apply intra-procedural optimiztion is specified.


//Disadvantages
//1)If use dto many inline function the code size will increase.
//2)Compilation overhead will increase if someone changes code inside inline function
// then all calling location will also be compiled.