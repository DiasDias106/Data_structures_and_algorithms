#include<iostream>
#include<string>
using namespace std;
struct el {
    string nome;
    int idade;
    el *next;
};
el *phead= nullptr;

void getData(el *elemento){
    cout << "Dados Pessoais" << endl;
    cout << "Nome:";cin.ignore();getline(cin, elemento->nome);    
    cout << "Idade:";cin >> elemento->idade;
}

void putData(el *elemento){
    cout << "Dados Pessoais" << endl;
    cout << "Nome:" << elemento->nome << endl;
    cout << "Idade:" << elemento->idade << endl;
}

bool insTail(){
    el *pnovo = new(nothrow) el;
    if(!pnovo) return false;
    getData(pnovo);
    pnovo->next = nullptr;
    if(!phead){
        phead = pnovo;
    }else{
        el *paux = phead;
        while(paux->next) paux=paux->next;
        paux->next = pnovo;
        return true;
    }
}

bool delHead(){
    el *pdel = phead;
    if(!phead) return false;
    phead = phead->next;
    delete pdel;
    return true;
}

void list(){
    el *paux = phead;
    if(!phead) cout << "lista vazia" <<endl;
    while(paux){
        putData(paux);
        paux = paux->next;
    }
}

void revlist(){
    el *plisted = nullptr;
    el *paux =ptail ;
    if(!phead) cout << "lista vazia" << endl;
    do{
       putData(paux);
       plisted = paux;
       paux = phead;
       while((paux->next !=plisted)&& paux->next) paux = paux->next;
    }while(plisted != phead);
}