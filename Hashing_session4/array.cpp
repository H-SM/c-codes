#include<iostream>
using namespace std;
void updatearray(int arr[],int i,int val)
{
    arr[i]=val;
}
void printarray(int arr[],int n)
{
   for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }
  cout<<endl; 
}
int main()
{
    int arr[5]={1,6,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    updatearray(arr,1,9);
    printarray(arr,n);
    cout<<arr<<"\n";
}
 // namespace std;
