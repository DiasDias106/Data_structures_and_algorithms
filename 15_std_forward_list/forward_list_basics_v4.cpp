#include<iostream>
#include<forward_list>
using namespace std;
int main(){
    forward_list<int> myL1;
    myL1.push_front(0);
    myL1.push_front(1);
    myL1.insert_after(myL1.before_begin(),2);
    myL1.insert_after(myL1.begin(),22);
    myL1.insert_after(myL1.before_begin(),4);
    for(auto El : myL1){
        cout << El << "\t";
    }
    cout << "" <<endl;
    myL1.pop_front();
    myL1.erase_after(myL1.before_begin());
    for(auto El : myL1){
        cout << El << "\t";
    }
    cout << "" << endl;
    myL1.empty();
    for(auto El : myL1){
        cout << El << endl;
    }


}