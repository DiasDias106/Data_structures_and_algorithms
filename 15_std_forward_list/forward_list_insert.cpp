#include<iostream>
#include<forward_list>
#include<string>
using namespace std;
int main(){
    forward_list<int> num ={12,5,3,7};
    for(auto El: num){
        cout << El << "\t";
    }
    cout << "separador" << "separador" << endl;
    num.push_front(1);
    for(auto El :num){
        cout << El << "\t";
    }
     cout << "separador" << "separador" << endl;
    num.pop_front();
    for(auto El:num){
        cout << El << "\t";
    }
     cout << "separador" << "separador" << endl;
    num.insert_after(num.begin(),2,3);
    for(auto El: num){
        cout << El << "\t";
    }
     cout << "separador" << "separador" << endl;

    forward_list<int>::iterator it = num.before_begin();
    for(size_t i=1;i<4;i++) it++;
    num.insert_after(it,6);
    for(auto El :num){
        cout << El << "\t";
    }
}