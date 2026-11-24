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
    cout << "Dados pessoais" << endl;
    cout << "Nome:";cin.ignore();getline(cin,elemento->nome);
    cout << "Idade:";cin >> elemento->idade;
}
void putData(el *elemento){
    cout << "Dados pessoais"<< endl;
    cout << "Nome:" << elemento->nome << endl;
    cout << "Idade:" << elemento->idade << endl;
}

bool insHead(){
    el *pnovo = new (nothrow) el;
    if(!pnovo) return false;
    getData(pnovo);
     pnovo->next = phead;
    pnovo->prev = nullptr;
    if( !phead ) ptail = pnovo;
    else phead->prev = pnovo;
    phead = pnovo;
    return true;
}

bool delHead(){
    el *pdel = phead;
    if(!phead) return false;
    if( !phead->next ) ptail = nullptr; 
    else phead->next->prev = nullptr;
    phead->next = phead;
    delete pdel;
}
void list(){
    el *paux = phead;
    if(!phead) cout << "lista vazia"<<endl;
    if(phead == ptail) cout << "a lista so tem um elemento"<<endl;
    while(paux){
        putData(paux);
        paux = paux->next;
    }
}

    bool delTail(){
    el *pDel = ptail;

    if( !phead ) return false; // lista vazia

    // se só há 1 elemento
    if( !phead->next ) phead = nullptr; //fica vazia
    else ptail->prev->next = nullptr;

    ptail = ptail->prev;
    delete pDel;
    return true;
}

bool insTail(){
   el *pnovo = new (nothrow) el;
   pnovo->next = nullptr;
    pnovo->prev = ptail;
    if( !phead ) phead = pnovo;
    else ptail->next = pnovo;
    ptail = pnovo;
    return true;
}
void revList(){
    el *pAux = ptail; // para percorrer a lista

    if( !phead ){
        cout << "A lista está vazia!\n";
    }
    while(pAux){
        putData( pAux );
        pAux = pAux->prev;
    }
} 