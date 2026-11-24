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
    cout << "Dados pessoais" << endl;
    cout <<"Nome:";cin.ignore();getline(cin, elemento->nome);
    cout << "Idade:";cin>> elemento->idade;
}

void putData(el *elemento){
    cout << "Dados Pessoais" << endl;
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

bool delHead(){
    el *pdel = phead;
    if(!phead) return false;
    phead= phead->next;
    delete pdel;
    return true;
}

void list(){
    el *paux = phead;
    if(!phead) cout<<"lista vazia" <<endl;
    while(paux){
        putData(paux);
        paux = paux->next;
    }
}

el *getpos(size_t pos){
    el *paux = phead;
    if(pos == 0 || !phead ){
        return nullptr;
    }
    for(size_t i=0;i<pos;i++){
        paux = paux->next;
    }
    if(!paux) return nullptr;
    return paux;

}

bool inshere(el *phere) {
    if (!phere) return false;
    el *pnovo = new (nothrow) el;
    if (!pnovo) return false;
    getData(pnovo);
    pnovo->next = phere->next;
    phere->next = pnovo;
    return true;
}

bool delHere(el *phere) {
    if (!phere || !phead) return false;
    if (phead == phere) {
        return delHead();
    }

    el *paux = phead;
    while (paux->next && paux->next != phere) {
        paux = paux->next;
    }

    if (!paux->next) return false; // phere não está na lista

    paux->next = phere->next;
    delete phere;
    return true;
}
