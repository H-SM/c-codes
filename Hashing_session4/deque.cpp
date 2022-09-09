#include<iostream>
#include<deque>
#include<algorithm>

using namespace std;
int main()
{
   /* WAYS TO INITIALIZE-
   deque<int> first;
   int n;
   deque<int> second(4,100);//fill constructor( 4 integers with number 100)
    //range constructor 
    deque<int> third(second.begin(),second.end());//iter over another deque
    int n={1,2,3,4,5}
    //copy construstor 
    deque<int> fourth(third);
    int s=sizeof(n)/sizeof(int)
    //or
    deque<int>fifth(n,n+s)
  
    deque<int> arr={1,2,4,5,3};
    */
   deque<int>dq(10);

   for(int i=0;i<10;i++)
   {
    dq[i]=i*i;
   }
    /*SOME FUNCTIONS FOR DEQUE:
    arr.at(i);
    arr[i];
    arr.size();
    arr.push_back(20);
    arr.pop_back();
    arr.push_front(300);
    arr.pop_front();
    */
    for(auto x: dq)
   {
    cout<<x<<",";
   }
   //DEQUE DOESN'T HAVE CAPACITY
    cout<<"\nsize: ";
    cout<<dq.size()<<endl;
    dq.push_back(123);
    dq.push_front(234);
    
      for(auto x: dq)
   {
    cout<<x<<",";
   }
    cout<<"\nsize: ";
    cout<<dq.size()<<endl;
  
    return 0;     
}