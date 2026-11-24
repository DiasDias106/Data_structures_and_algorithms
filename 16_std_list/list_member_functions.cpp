#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> myL;
    cout << "introduza 5 elementos a lista" << endl;
    for(size_t i=0;i<5;i++){
        int valor;
        cin >> valor;
        myL.push_back(valor);
    }
    for(auto El : myL){
        cout << El << "\t";
    }
    cout << endl;
    for(size_t i=0;i<2;i++){
        myL.pop_back();
    }
    for(auto El : myL){
        cout << El << "\t";
    }
    cout << endl;

    list<int>::iterator it = myL.begin();
    for(size_t i=1;i<3;i++) it++;
    myL.insert(it,2,44);

    for(auto El : myL){
        cout << El << "\t";
    }

   myL.erase(myL.begin());

    /*Algumas funções
    myL.push_back(valor a incerir) --coloca atras;
    myL.push_front(valor a incerir) --coloca a frente;
    myL.pop_back()-- remove atras;
    myL.pop_front() --remove a frente;
    myL.insert(posição onde incerir,quantas vezes, valor a incerir);
    myL.clear() --limpa a lista;
    myL.erase(posição onde apagar) --para apagar em determinado sitio;
    */
}