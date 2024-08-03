#include<bits/stdc++.h>
using namespace std;
int partition( int arr[],int s,int e ){
        int pivot=arr[e];
        int pindex=s;

        for(int i=s;i<e;i++){
            if(arr[i]<pivot){
                int temp=arr[i];
                arr[i]=arr[pindex];
                arr[pindex]=temp;
                pindex++;
            }
        }
        int temp=arr[e];
        arr[e]=arr[pindex];
        arr[pindex]=temp;
        return pindex;
    }


void Quicksort(int arr[],int s,int e){
    if(s<e){
      int p=partition( arr, s, e );
      Quicksort( arr, s,(p-1));//recursive quicksort called for left partition
       Quicksort( arr, (p+1),e);//recursive quicksort called for right partition

      }
    }
   
    int main(){
    int size=0;
    cout<<"Enter the size of an array:"<<endl;
    cin>>size;
    int myarray[size];
    cout<<"Enter "<<size<<" integers in any order: "<<endl;
    for(int i=0;i<size;i++){
        cin>>myarray[i];
    }
    cout<<"Before sorting:"<<endl;
for(int i=0;i<size;i++){
    cout<<myarray[i]<<" ";
}
cout<<endl;
Quicksort(myarray,0,(size-1));

cout<<"After sorting:"<<endl; //quicl sort called
for(int i=0;i<size;i++){
    cout<<myarray[i]<<" ";
}

    return 0;
}