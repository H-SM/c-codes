#include<iostream>
#include<array>
#include<algorithm>//contains comman unction like sorting , searching
using namespace std;
void updatearray(array<int,6> &arr,int i,int val)// changed to CALL BY REF using &
{
    arr[i]=val;
}
void printarray(const array<int,6> &arr)//can do size even in function 
{
   //used "const" to make sure that values isnt changed in the function(read only)
   int n= arr.size();
   //arr[0]=100;
   for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }
  cout<<endl; 
}
int main()
{
   // int arr[5]={1,6,3,4,5};
   // int n=sizeof(arr)/sizeof(int);
  //  cout<<arr<<"\n";
    array<int,6> arr={1,23,35,4,15,86};

    arr[0]=10;
     updatearray(arr,1,9);
    printarray(arr);
    //sort
    sort(arr.begin(),arr.end());
    //imported algorithm file to use this
    //end gives the last location after everytihng is filled
    //       begin             end
    //         ^                ^
    //    arr |12|14|45|667|69|  |  
    //         ^            ^
    //   arr.front()    arr.back() <some special functions>
    // for classical>> sort(arr,arr+n);
    printarray(arr);
    //FILL
    array<int,10> fies;
    fies.fill(5);
     for(int i=0;i<fies.size();i++){
      cout<<fies[i]<<" ";
    }
    cout<<endl;
    // for,each loop
    // doesnt req size to iter(iter over using arrays)
    for(int x: arr)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;     
}