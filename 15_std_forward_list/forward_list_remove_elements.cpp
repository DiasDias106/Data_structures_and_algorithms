#include<iostream>
#include<forward_list>
#include<string>
using namespace std;
int main(){
    forward_list<string> nomes = {"francisco","lara","anabela","francisco"};
    for(auto El: nomes){
        cout << El << "\t";
    }
    cout << endl<< "separador" << endl;
    nomes.pop_front();
    for(auto El: nomes){
        cout << El << "\t";
    }
    cout << endl << "separador" << endl;
    nomes.remove("anabela");
    for(auto El: nomes){
        cout << El << "\t";
    }

}