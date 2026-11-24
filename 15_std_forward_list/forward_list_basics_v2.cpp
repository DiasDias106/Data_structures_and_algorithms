#include<iostream>
#include<forward_list>
#include<string>
using namespace std;
int main(){
    forward_list<int> myL1 ={10,20,30};
    myL1.insert_after(myL1.before_begin(),1);
    for(auto El : myL1){
        cout << El << endl;
    }
    cout << "separdor" << endl;
    myL1.push_front(0);
    for(auto El : myL1){
        cout << El << endl;
    }
    cout << "separador" << endl;
    myL1.pop_front();
    for(auto El : myL1){
        cout << El << endl;
    }
    cout << "separador" << endl;

    forward_list<int>::iterator it = myL1.before_begin();
    for(size_t i=1;i<4;i++) it++;
    myL1.insert_after(it,5);
    for(auto El : myL1){
        cout << El << endl;
    }
}