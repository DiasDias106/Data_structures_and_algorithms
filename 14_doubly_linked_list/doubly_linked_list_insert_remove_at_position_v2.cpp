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
    cout << "Dados Personagem" << endl;
    cout << "Nome:";cin.ignore();getline(cin,elemento->nome);
    cout << "Idade:";cin >> elemento->nome;
}

void putData(el *elemento){
    cout << "Dados pessoais" << endl;
    cout << "Nome:\t" << elemento->nome << endl;
    cout << "Idade:\t" << elemento->idade <<endl;
}


bool insHead(){
    el *pNovo = new (nothrow) el; // alocação de espaço

    if( !pNovo ) return false; // impossível alocar espaço

    // preencher dados do novo elemento
    getData( pNovo );

    // inserir o elemento no início da lista
    pNovo->next = phead;
    pNovo->prev = nullptr;
    if( !phead ) ptail = pNovo;
    else phead->prev = pNovo;
    phead = pNovo;
    return true;
}

bool insTail(){
    el *pnovo = new (nothrow) el;
    if(!pnovo) return false;
    getData(pnovo);
    pnovo->next = nullptr;
    pnovo -> prev = ptail;
    if(!ptail){
        phead = pnovo;
    }else{
        ptail->next = pnovo;
    }
        ptail = pnovo;
        return true;
    }

void list(){
    el *paux = phead;
    if(!phead) cout << "lista vazia" << endl;
    while(paux){
        putData(paux);
        paux = paux->next;
    }
}

void reverselist(){
    el *paux = ptail;
    if(!phead) cout <<"lista esta vazia" << endl;
    while(paux){
        putData(paux);
        paux = paux->prev;
    }
}

bool delHead(){
    el *pDel = phead;

    if( !phead ) return false; 

   
    if( !phead->next ) ptail = nullptr; 
    else phead->next->prev = nullptr;

    phead = phead->next;
    delete pDel;
    return true;
}
bool delTail(){
    el *pDel = ptail;

    if( !phead ) return false; // lista vazia

    // se só há 1 elemento
    if( !ptail->prev ) phead = nullptr; //fica vazia
    else ptail->prev->next = nullptr;

    ptail = ptail->prev;
    delete pDel;
    return true;
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
    else 
        phead = pNovo;
    pHere->prev = pNovo;
    return true;
}


// remove elemento da posição indicada
// devolve true se conseguiu
// assume-se que pHere aponta para um elemento existente
bool delHere( el *pHere){
    el * pDel = pHere;

    if( !pHere ) return false; // não há elemento para apagar

    if( pHere->prev ) //existia um elemento antes de pHere
        pHere->prev->next = pHere->next;
    else // pHere era o 1º da lista
        phead = pHere->next;

    if( pHere->next ) //existia um elemento depois de pHere
        pHere->next->prev = pHere->prev;
    else // pHere era o último da lista
        ptail = pHere->prev;

    delete pHere;
    
    return true;
}

