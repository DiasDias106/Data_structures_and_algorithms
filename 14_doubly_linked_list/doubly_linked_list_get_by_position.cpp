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

void getData(el*elemento){
    cout << "Dados Pessoais"<<endl;
    cout << "Nome";cin.ignore();getline(cin, elemento->nome);
    cout << "Idade:";cin >> elemento->idade;
}

void putData(el*elemento){
    cout << "Dados Pessoais" << endl;
    cout << "Nome:" << elemento->nome << endl;
    cout << "Idade:" << elemento->idade << endl;
}

bool insHead(){
    el *pnovo = new(nothrow) el;
    if(!pnovo)return false;
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
        ptail = pnovo;
    }else{
        ptail->next = pnovo;
    }
    ptail = pnovo;
    return true;
}


bool delhead(){
    el *pdel = phead;
    if(!ptail) return false;
    if( !phead->next ) ptail = nullptr; 
    else phead->next->prev = nullptr;
    phead = phead->next;
    delete pdel;
}

bool deltail(){
    el *pdel = ptail;
    if(!phead)return false;
    if(!ptail->prev) phead = nullptr;
    else ptail->prev->next = nullptr;
    ptail = ptail->prev;
    delete ptail;
}

void listar(){
    el *paux = phead;
    if(!phead) cout << "lista esta vazia" << endl;
    while (paux)
    {
        putData(paux);
        paux = paux->next;
    }
    
}

void revlistar(){
    el *paux = ptail;
    if(!phead) cout << "lista esta vazia" << endl;
    while (paux)
    {
        putData(paux);
        paux = paux->prev;
    }
}

el *getPtrToPos( size_t pos ){
    el *pAux = phead;

    // lista tem de ter elementos e o menor valor possível é pos=1
    if( !phead || pos==0 ) return nullptr;

    for(size_t i=1; i<pos; i++){
        pAux = pAux->next;
        if( !pAux ) return nullptr; // pos demasiado grande
    }
    
    return pAux;
}

bool insHere( el *pHere){
    el *pNovo;
    
    if( !pHere ) return false; // não há local para inserir
    
    pNovo = new (nothrow) el; // alocação de espaço

    if( !pNovo ) return false; // impossível alocar espaço

    // preencher dados do novo elemento
    getData( pNovo );

    // inserir o elemento
    pNovo->next = pHere;
    pNovo->prev = pHere->prev;
    if( pHere->prev ) //existia um elemento antes de pHere
        pHere->prev->next = pNovo;
    else // pHere era o 1º da lista
        phead = pNovo;
    pHere->prev = pNovo;
    return true;
}