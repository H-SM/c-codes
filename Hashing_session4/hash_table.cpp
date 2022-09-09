#include<iostream>
#include<unordered_map>

using namespace std;

int main()
{

    unordered_map<string,int> menu;
    //insertion of elements o(1)
    menu["maggi"]=15;
    menu["colddrink"]=20;
    menu["dosa"]=99;
    menu["pizza"]=499;
    menu["indianplatter"]=399;
    menu["daal"]=199;
    menu["something"]=99999;

    //update
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
    //very fast , o(1)
    if(menu.count(item)==0)
        cout<<"item not avaliable "<<item<<endl;
    else
        cout<<item<<" is avaliable, and its cost is "<<menu[item]<<endl;

    return 0;     
}