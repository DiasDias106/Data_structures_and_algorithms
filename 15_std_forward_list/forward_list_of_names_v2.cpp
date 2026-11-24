#include<iostream>
#include<forward_list>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    forward_list<string> nomes = {"francisco","lara"};
    cout << "nomes" << endl;
    for(auto El: nomes){
        cout << El << endl;
    }
    cout << "separador";
     cout << "separador" <<endl;
    nomes.push_front("joaquim");
    for(auto El: nomes){
        cout << El << endl;
    }
     cout << "separador";
      cout << "separador"<<endl;
    nomes.insert_after(nomes.before_begin(),"maria");
    for(auto El: nomes){
        cout << El << endl;
    }
     cout << "separador";
      cout << "separador"<<endl;
    nomes.insert_after(nomes.begin(),"nuno");
    for(auto El: nomes){
        cout << El << endl;
    }
     cout << "separador"; cout << "separador"<<endl;

    forward_list<string>::iterator it = nomes.before_begin(); // atenção ao before_begin() //este coddigo e usado para aceder a uma parte da lista para poder mos colocar um elemento numa posiçao da lista ou seja podemos por codigo no meio ou no segundo etc
    for(size_t i=1; i<4; i++) it++; // note a necessidade de começar em 1

    nomes.insert_after(it,"adalberto");

    for(auto El: nomes){
        cout << El << endl;
    }
}