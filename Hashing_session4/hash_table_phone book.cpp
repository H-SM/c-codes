#include<iostream>
#include<map>
#include<list>

using namespace std;

int main()
{

    map<string,list<string>> phonebook;
    //insertion of elements o(1)
    phonebook["Prateek"].push_back("1111111");
    phonebook["Prateek"].push_back("1111112");
    phonebook["Prateek"].push_back("1111113");
    phonebook["Prateek"].push_back("1111114");
    phonebook["Prateek"].push_back("1111115");

    
    phonebook["Krishna"].push_back("1111121");
    phonebook["Krishna"].push_back("1111132");
    phonebook["Krishna"].push_back("1111123");
    phonebook["Krishna"].push_back("1111124");
    phonebook["Krishna"].push_back("1111125");

     //TRY ON YOUR OWN AND PRINT
  
    //ITEM STORED IN LEXICOGRAPHIC SORTED ORDER(alphabetic) keys
    //o(1) changes to o(log n) order now , as its represents tree like structure <balanced tree with height n>
    //update
    /*
   menu["dosa"]=(1+0.1)*menu["dosa"];

    //deletion
    menu.erase("dosa");

    //searching using count function
    string item;
    cin>>item;
    for(pair<string,int> item:menu)
    {
        cout<<item.first<<" - "<<item.second<<endl;
    }
    //fast<not very as unordered maps , o(log n)
    if(menu.count(item)==0)
        cout<<"item not avaliable "<<item<<endl;
    else
        cout<<item<<" is avaliable, and its cost is "<<menu[item]<<endl;
    */
  // cout<<"The phone-book for Krishna is : " << phonebook["Krishna"]<<endl;
    return 0;     
}