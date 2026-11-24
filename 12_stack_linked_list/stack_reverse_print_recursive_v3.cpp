#include<iostream>
#include<string>
using namespace std;
struct el
{
    string nome;
    int idade;
    el *next;
};
el *phead = nullptr;

void getData(el *elemento){
    cout << "conjunto de dados" <<endl;
    cout << "Nome:";cin.ignore();getline(cin,elemento->nome);
    cout << "Idade:";cin >> elemento->idade;
}

void putData(el *elemento){
    cout << "Nome:" << elemento->nome << endl;
    cout << "Idade:" << elemento->idade << endl;
}

bool insHead(){
    el *pnovo = new (nothrow) el;
    if(!pnovo) return false;
    getData(pnovo);
    pnovo->next = phead;
    phead = pnovo;
    return true;
}
void list(){
    el *paux = phead;
    if(!phead) cout << "lista esta vazia" << endl;
    while(paux){
        putData(paux);
        paux = paux->next;
    }
}

void reverselist(el *paux){
    if(!phead) cout << "a lista esta vazia" << endl;
    putData(paux);
    reverselist(paux->next);
}

bool delhead(){
    el *pdel = phead;
    if(!phead) return false;
    phead-> next = phead;
    delete pdel;
    return true;
}

int main(){
int tot;
cout << "introduza a quantidade de numeros que quer introduzir"<<endl;
cin >> tot;

for(size_t i=0;i<tot;i++){
    insHead();
}

cout << "listar" << endl;
list();

cout << "apagar a cabeça" << endl;
delhead();

cout << "listar" << endl;
list();
}