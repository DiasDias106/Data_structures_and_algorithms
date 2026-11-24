#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> myL;
    int n;
    cout << "introduza quantos numeros quer incerir" << endl;
    cin >> n;
    for(size_t i=0;i<n;i++){
        int valor;
        cin >> valor;
        myL.push_back(valor);
    }
    cout << endl;
    myL.pop_front();
    for(auto El : myL){
        cout << El << endl;
    }
    cout <<endl;
    for(auto El : myL){
        cout << El << endl;
    }
    cout << endl;
    myL.insert(myL.begin(),2,50);
    
    list<int>::iterator it = myL.begin();
    for(size_t i=1;i<2;i++) it++;
    myL.erase(it);

    for(auto El : myL){
        cout << El << "\t";
    }

     
}