#include<iostream>
#include<forward_list>
using namespace std;
void listar(forward_list<int> &v);
int main(){
    forward_list<int> myL;
    cout << "introduza 5 valores no contentor"<<endl;
    auto it = myL.before_begin();
    while(it != myL.end()){
        int valor;
        cin >> valor;
        myL.insert_after(it,valor);
    }

    listar(myL);
}

void listar(forward_list<int> &v){
    for(auto El : v){
        cout << El << endl;
    }
}