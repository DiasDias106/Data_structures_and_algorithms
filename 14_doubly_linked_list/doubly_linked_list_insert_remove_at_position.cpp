#include<iostream>
#include<string>
using namespace std;
struct el{
    string nome;
    int idade;
    el *next;
    el *prev;
};
el *phead = nullptr;
el *ptail = nullptr;

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

bool insHead(){
    el *pnovo = new (nothrow) el;
    if(!pnovo) return false;
    getData(pnovo);
    pnovo->next = phead;
    pnovo->prev = nullptr;
    if(!phead){
        phead = pnovo;
    }else{
        phead->prev = pnovo;
    }
    phead = pnovo;
    return true;
}

bool insTail(){
    el *pnovo = new (nothrow) el;
    if(!pnovo) return false;
    getData(pnovo);
    pnovo->next = nullptr;
    pnovo->prev = ptail;
    if(!phead){
        phead = pnovo;
    }else{
        ptail->next = pnovo;
    }
    ptail = pnovo;
    return true;
}

bool delHead(){
    el *pdel = phead;
    if(!phead) return false;
    if(!phead->next) phead=nullptr;
    else phead->next->prev = nullptr;
    delete pdel;
    return true;
}

bool delTail(){
    el *pdel = ptail;
    if(!phead) return false;
    if(!ptail->prev) ptail = nullptr;
    else ptail->prev->next = nullptr;
    delete pdel;
    return true;
}


el *getposition(size_t pos){
    el *paux = phead;
    if(pos == 0 || !phead) return nullptr;
    for(size_t i=0;i<pos;i++){
        paux = paux->next;
    }
    if(!paux) return nullptr;
    return paux;

}

bool inshere(el *phere){
    el *pnovo;
    if(!phere) return false;
    pnovo = new (nothrow) el;
    if(!pnovo) return false;
    getData(pnovo);
    pnovo->next = phere;
    pnovo->prev = phere->prev;
    if( phere->prev ) 
        phere->prev->next = pnovo;
    else {
        phead = pnovo;
    }
    phere->prev = pnovo;
    return true;
}

bool delhere(el *phere){
    el *pdel = phere;
    if(!phere) return false;
    if( phere->prev ) 
        phere->prev->next = phere->next;
    else 
        phead = phere->next;

    if( phere->next ) 
        phere->next->prev = phere->prev;
    else 
        ptail = phere->prev;

    delete phere;
    
    return true;
}

void list(){
    el *paux =  phead;
    if(!phead) cout << "lista vazia" << endl;
    while(paux){
        putData(paux);
        paux = paux->next;
    }
}

void revlist(){
    el *paux =  ptail;
    if(!phead) cout << "lista vazia" << endl;
    while(paux){
        putData(paux);
        paux = paux->prev;
    }
}