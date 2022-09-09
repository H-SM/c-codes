#include<iostream>
#include<queue>

using namespace std;
int main()
{
   queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
   
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
    //its a FIFO type of STL thus output result will be in the same not opposite style 
    /*
    OUTPUT-
    1
    2
    3
    4
    */
    return 0;     
}