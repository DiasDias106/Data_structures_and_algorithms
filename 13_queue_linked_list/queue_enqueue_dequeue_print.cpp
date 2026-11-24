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
el *ptail = nullptr;

void getData(el *elemento){
    cout << "Dados pessoais" << endl;
    cout << "Nome:"; cin.ignore();getline(cin,elemento->nome);
    cout << "Idade:";cin >> elemento->idade;
}
void putData(el *elemento){
    cout << "Nome:" << elemento->nome << endl;
    cout << "Idade:" << elemento->idade << endl;
}

bool qInsTail(){
    el *pNovo = new (nothrow) el; // alocação de espaço

    if( !pNovo ) return false; // impossível inserir

    // preencher dados do novo elemento
    getData( pNovo );

    // inserir o elemento no fim da fila
    pNovo->next = nullptr;
    if( !phead ) // fila vazia
        phead = pNovo;
    else
        ptail->next = pNovo;
    ptail = pNovo;
    return true;
}

void list(){
    el *paux = phead;
    if(!phead) cout << "a lista esta vazia"<<endl;
    while(paux){
        putData(paux);
        paux = paux->next;
    }
}

bool delhead(){
    el *pdel = phead;
    if(!phead) return false;
    phead = phead->next;
    delete pdel;
}