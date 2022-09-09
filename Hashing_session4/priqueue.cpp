#include<iostream>
#include<queue>

using namespace std;

class Compare{
    public:
    bool operator()(int a,int b){
        return a>b;//this makes the changes
    }
};

int main()
{
    int arr[]={10,15,20,13,6,90};
    int n=sizeof(arr)/sizeof(int);

    //priority_queue<int> heap; //Max heap by default
    //priority_queue<int, vector <int>,greater<int>> heap;//For MIN HEAP <<this is in-built comparitor
    //you can write own custom comparitor too<<this is in the class Compare>>
    priority_queue<int, vector <int>, Compare > heap;
    for(int x:arr){
        heap.push(x);
    }

     while(!heap.empty()){
        cout<<heap.top()<<endl;
        heap.pop();
     }
     //elements come in decending order<<max heap by default>>
    return 0;     
}