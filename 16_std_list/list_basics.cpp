#include<iostream>
#include<list>
#include<string>
using namespace std;
int main(){
    list<string> myL = {"fra","lara","jp"};
    for(auto El : myL){
        cout << El << "\t";
    }
    cout << endl;
    myL.push_back("tr");
    myL.push_front("er");
    for(auto El : myL){
        cout << El << "\t";
    }
    cout << endl;
    myL.insert(myL.begin(),2,"tt");
    for(auto El : myL){
        cout << El << "\t";
    }
    cout << endl;

    list<string> ::iterator it = myL.begin();
    for(size_t i=1;i<4;i++) it++;
    myL.insert(it,2,"tua_prima");
    for(auto El : myL){
        cout << El << "\t";
    }
}