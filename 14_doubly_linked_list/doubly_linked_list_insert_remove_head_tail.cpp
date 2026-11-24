#include<iostream>
#include<string>
using namespace std;
struct el{
    int idade;
    string nome;
    el *next;
    el *prev;
};
el *phead= nullptr;
el *ptail= nullptr;

void getData(el *elemento){
    cout << "Dados Pessoais" << endl;
    cout << "Nome:";cin.ignore();getline(cin , elemento->nome);
    cout << "Idade";cin >> elemento->idade;
}

void putData(el *elemento){
    cout << "Dados Pessoais" << endl;
    cout << "Nome:" << elemento->nome <<endl;
    cout << "Nome:" << elemento->idade << endl;
}

bool insHead(){
    el *pnovo = new (nothrow) el;
    if(!pnovo) return false;
    getData(pnovo);
    pnovo->next = phead;
    pnovo->prev = nullptr;
    if(!phead) phead = pnovo;
    else pnovo->next->prev = pnovo;
    phead = pnovo;
    return true;
}

bool insTail(){
    el *pnovo = new (nothrow) el;
    if(!pnovo) return false;
    getData(pnovo);
    pnovo->next = nullptr;
    pnovo->prev = ptail;
    if(!phead) phead = pnovo;
    else{
        pnovo->prev->next = pnovo;
    } 
    ptail = pnovo;
    return true;
}

bool delHead(){
    el*pdel = phead;
    if(!phead) return false;
    if(!phead->next) phead = nullptr;
    else phead->next->prev = nullptr;
    delete pdel;
    return true;
}

bool delTail(){
    el*pdel = ptail;
    if(!phead) return false;
    if(!ptail->prev) ptail=nullptr;
    else ptail->prev->next = nullptr;
}


