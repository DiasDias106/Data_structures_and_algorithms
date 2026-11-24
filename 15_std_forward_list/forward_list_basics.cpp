#include<iostream>
#include<forward_list>
#include<string>
using namespace std;
int main(){
    forward_list<string> nomes = {"fra","mer","jack"};
    for(auto El : nomes){
        cout << El << "\t";
    }
    cout << endl;
    nomes.push_front("ti");
    nomes.insert_after(nomes.before_begin(),"rt");
    for(auto El : nomes){
        cout << El << "\t";
    }
    cout << endl;
    forward_list<string> ::iterator it= nomes.before_begin();
    for(size_t i=1;i<4;i++) it++;
    nomes.insert_after(it,"puta");
    for(auto El : nomes){
        cout << El << "\t";
    }

}