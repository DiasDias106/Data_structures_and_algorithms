#include<iostream>
#include<forward_list>
using namespace std;
int main(){
    forward_list<int> myL;
    cout << "introduza 5 valores na lista" << endl;
    for(size_t i=0;i<5;i++){
        int valor;
        cin>> valor;
        myL.insert_after(myL.before_begin(),valor);
    }

    for(auto El : myL){
        cout << El << "\t";
    }
    cout << endl;
    for(size_t i=0;i<2;i++){
    myL.pop_front();
    }
    for(auto El : myL){
        cout << El << "\t";
    }
    cout << endl;
    forward_list<int>::iterator it = myL.before_begin();
    for(size_t i=1;i<2;i++) it++;

    myL.insert_after(it,2,55);

    for(auto El : myL){
        cout << El << "\t";
    }

    myL.clear();

   


   /*Algumas Funções
   myL.incert_after(colocar onde incerir, quantas vezes, o que incerir);
   myL.push_front(o que incerir);
   myL.pop_front();
   forward_list<tipo a usar>::iterator it = myL.before_begin();
   myL.erase_after(onde apagar,quantas vezes,o que apagar);
   myL.clear() ----usado para apagar tudo
   */
}