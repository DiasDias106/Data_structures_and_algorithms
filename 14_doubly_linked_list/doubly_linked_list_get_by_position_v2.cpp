#include<iostream>
#include<string>
using namespace std;
struct el{
    string nome;
    int idade;
    el *next;
    el* prev;
};
el *phead = nullptr;
el *ptail = nullptr;

void getData(el *elemento){
    cout << "Dados Pessoais" << endl;
    cout << "Nome:";cin.ignore();getline(cin, elemento->nome);
    cout << "Idade:";cin >> elemento->idade;
}

void putData(el*elemento){
    cout << "Dados Pessoais" << endl;
    cout << "Nome:\t" << elemento->nome << endl;
    cout << "Idade:\t" << elemento->idade << endl;
}

bool insHead(){
    el *pnovo = new (nothrow) el;
    if(!pnovo) return false;
    getData(pnovo);
    pnovo->next = phead;
    pnovo->prev = nullptr;
    if(!phead){
        pnovo = phead;
    }else{
        phead->prev = pnovo;
    }
    phead = pnovo;
}
bool insTail(){
    el *pnovo = new (nothrow) el;
    if(!pnovo) return false;
    getData(pnovo);
    pnovo->next = nullptr;
    pnovo->prev = ptail;
    if(!phead){
        ptail = pnovo;
    }else{
        ptail->next = pnovo;
    }
    ptail =  pnovo;
}

bool delhead(){
    el *pdel = phead;
    if(phead) return false;
     if( !phead->next ) ptail = nullptr;
    else phead->next->prev = nullptr;
    phead = phead->next;
    delete pdel;
    return true;
}

bool delTail(){
    el *pdel = ptail;
    if(!ptail) return false;
    if(!ptail->prev) phead = nullptr;
    else ptail->prev->next = nullptr;
    ptail->prev = ptail;
    delete pdel;
    return true;
}

void list(){
    el *paux = phead;
    if(!phead) cout << "Lista vazia" << endl;
    while(paux){
        putData(paux);
        paux = paux->next;
    }
}

void revlist(){
    el *paux = ptail;
    if(!phead) cout << "lista vazia" << endl;
    while(paux){
        putData(paux);
        paux = paux->prev;
    }
}

el *getPosition( size_t pos ){
    el *pAux = phead;

    if( !phead || pos==0 ) return nullptr;

    for(size_t i=1; i<pos; i++){
        pAux = pAux->next;
        if( !pAux ) return nullptr; 
    }
    
    return pAux;
}

bool insHere( el *pHere){
    el *pNovo;
    
    if( !pHere ) return false; 
    
    pNovo = new (nothrow) el; 

    if( !pNovo ) return false; 

    getData( pNovo );

    pNovo->next = pHere;
    pNovo->prev = pHere->prev;
    if( pHere->prev ) 
        pHere->prev->next = pNovo;
    else {
        phead = pNovo;
    }
    pHere->prev = pNovo;
    return true;
}

bool delHere( el *pHere){
    el * pDel = pHere;

    if( !pHere ) return false; 

    if( pHere->prev ) 
        pHere->prev->next = pHere->next;
    else 
        phead = pHere->next;

    if( pHere->next ) 
        pHere->next->prev = pHere->prev;
    else 
        ptail = pHere->prev;

    delete pHere;
    
    return true;
}

