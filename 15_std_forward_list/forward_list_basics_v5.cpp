#include<iostream>
#include<forward_list>
using namespace std;
int main(){
    forward_list<int> myFL1 = {10,20,30};
    for(auto El : myFL1){
        cout << El << endl;
    }
    cout << endl;
    myFL1.push_front(1);
    myFL1.insert_after(myFL1.before_begin(),0);
    for(auto El : myFL1){
        cout << El << "\t";
    }
    cout << endl;
    forward_list<int> ::iterator it = myFL1.before_begin();
    for(size_t i=0;i<4;i++) it++;
    myFL1.insert_after(it,1);
    for(auto El : myFL1){
        cout << El << "\t";
    }
    cout << endl;
}