#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

/*
void updatearray(array<int,6> &arr,int i,int val)
{
    arr[i]=val;
}
void printarray(const array<int,6> &arr)
{
   int n= arr.size();
   for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }
  cout<<endl; 
}
*/
int main()
{
   /* <<<ways to make a vector>>>
    vector<int> first;//empty vector 
    vector<int> second(4,20);//fill constructor( 4 integers with number 20)
    //range constructor 
    int numbers[]={10,20,30,40};
    vector<int> third(numbers,numbers+4);
    
    //copy construstor 
    vector<int> fourth(third);

    //or
    vector<int>fifth={1,2,3,4,5};
  
    vector<int> arr={1,2,4,5,3};
    */
   vector<int>v;
   //for reserving uncomment >>
   //v.reserve(100);
   //initialize each value to zero 
   //vector<int>v(1000,0);
   int n;
   cin>>n;
   for(int i=0;i<n;i++)
   {
    int no;
    cin>>no;
    v.push_back(no);
    cout<<" Capacity: "<<v.capacity()<<"\tSize:"<<v.size()<<endl;//run and see what capacity and size shws
   }
    //EVERYTIME DOUBLING HAPPENS, LINEARLY DOUBLE TIME IS TAKEN <<IT BECOMES EXPENSIVE>>
    //THUS WE USE RESERVE
    
    /*SOME FUNCTIONS FOR VECTORS:
    arr.at(i);
    arr[i];
    arr.size();
    arr.capacity();
    arr.max_size();
    //memory avaliable
    arr.push_back(20);
    arr.pop_back();
    arr.clear();
    arr.erase(arr.begin()+3);
    arr.erase(arr.begin(),arr,begin()+3);*/

    for(int x: v)
   {
    cout<<x<<" ";
   }

   //SORT

   sort(v.begin(),v.end());
    cout<<endl;
   for(int x: v)
   {
    cout<<x<<" ";
   }
   cout<<endl;
    return 0;     
}