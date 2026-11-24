#include<iostream>
#include<list>
using namespace std;
int main(){
    list <int> myL1 = {10,20,30};
    for(auto El : myL1){
        cout << El << "/t";
    }
    cout << endl;
    myL1.push_back(40);
    myL1.push_front(1);
    for(auto El : myL1){
        cout << El << "\t";
    }
    cout << endl;
    myL1.insert(myL1.begin(),2,50);
    for(auto El : myL1){
        cout << El << "\t";
    }
    cout << endl;
    list <int> ::iterator it = myL1.begin();
    for(size_t i=0;i<4;i++) it++;
    myL1.insert(it,11);
        for(auto El : myL1){
        cout << El << "\t";
    }
     cout << endl;
}