#include<iostream>
#include<forward_list>
using namespace std;
int main(){
    forward_list<int> myL = {10,20,5};
    myL.insert_after(myL.before_begin(),1);
    myL.insert_after(myL.begin(),2);
    for(auto El: myL){
        cout << El << "\t";
    }
    cout << endl;
    for(auto El : myL){
        cout << El << "\t";
    }
    cout << endl;
      forward_list<int>::iterator it = myL.before_begin(); // atenção ao before_begin()
    for(size_t i=1; i<4; i++) it++; // note a necessidade de começar em 1

    myL.insert_after( it, 34 );

    for(auto El : myL){
        cout << El << "\t";
    }
    cout << endl;
      forward_list<int>::iterator it1 = myL.before_begin(); // atenção ao before_begin()
    for(size_t i=1; i<5; i++) it1++; // note a necessidade de começar em 1

    myL.insert_after( it1, 35 );

     for(auto El : myL){
        cout << El << "\t";
    }

}