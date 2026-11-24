#include<iostream>
#include<string>
using namespace std;
struct el{
    string nome;
    int idade;
    el *next;
};
el *phead = nullptr;

void getData(el *elemento){
    cout << "Dados Pessoais"<<endl;
    cout << "Nome:";cin.ignore(); getline(cin, elemento->nome);
    cout << "Idade";cin >> elemento->idade;
}

void putData(el *elemento){
    cout << "Dados Pessoais" << endl;
    cout << "Nome:\t" << elemento->nome << endl;
    cout << "Idade:\t" << elemento->idade << endl;
}

bool insHead(){
    el *pnovo = new (nothrow) el;
    if(!pnovo) return false;
    getData(pnovo);
    pnovo->next = phead;
    phead = pnovo;
    return true;
}

bool delHead(){
    el *pdel = phead;
    if(!phead) return false;
    phead->next = phead;
    delete pdel;
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


void revlist(el *paux){
    if(!paux) cout << "lista vazia" << endl;
    getData(paux);
    revlist(paux->next);
}