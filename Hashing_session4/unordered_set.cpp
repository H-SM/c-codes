#include<iostream>
#include<unordered_set>
using namespace std;

int main(){

    //set is collection of keys
    unordered_set<int> s{1,2,3,4,5,6,7,8,9};

    int key;
    cin>>key;
    //find function works o(1),on the other side array has o(N) and sorted array o(logn)
    //element are in random locations
    //s.end stores/denote the address just after the last element(will return an iterator)... something that is after the last element 
    //denotes the space after the last element, basically containing nothing useful after this point

    if(s.find(key)!=s.end()){
        cout<<key<<" is present"<<endl;
    }
    else
        cout<<key<<" is not present"<<endl;
    //erasing of an element from set
    s.erase(8);
    //print all elements

    s.insert(56);
    //inserting an element in set

    for(auto x:s)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}