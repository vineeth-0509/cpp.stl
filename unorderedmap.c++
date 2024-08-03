// unoredred_map is an associative conatainer that contains key value pairs with unique keys
//1.search,insertion,and removal have average constant time complexity
//2. internally,the elements are organized into buckets
//3. it uses hashing to insert elements into buckets
//4. this allows fast access to individual elements,because after computing the hash of the value it refers to
// the exact bucket the element is placed into
//we can use the key to get the value.

//WHY UNORDERD_MAP 
//maintain a collection of unique (key:value) pairs with fast insertion and removal

#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<int,char> umap={{1,'a'},{2,'b'}};
    //Access
    cout<<umap[1]<<endl;
    cout<<umap[2]<<endl;

    //upadte
    umap[1]='c';

    //iterate
    for(auto& elm: umap)
    {
        cout<<elm.first<<" "<<elm.second<<endl;
    }
    cout<<endl;

    //find
    auto result=umap.find(2);
    if(result != umap.end()){
        cout<<" Found "<<result->first<<" "<<result->second<<'\n';
    }
    else{
        cout<<"Not found\n";
    }

    return 0;
}