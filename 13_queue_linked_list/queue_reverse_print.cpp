#include<iostream>
#include<string>
using namespace std;
struct el{
    string nome;
    int idade;
    el *next;
};
el *phead = nullptr;
el *ptail = nullptr;

void getData(el *elemento){
    cout << "Dados pessoais" << endl;
    cout << "Nome:";cin.ignore(); getline(cin, elemento->nome);
    cout << "Idade"; cin >> elemento->idade;
}

void putData(el *elemento){
    cout << "Dados pessoais" <<endl;
    cout << "Nome:" << elemento->nome << endl;
    cout << "idade:" << elemento->idade << endl;
}

bool insTail(){
    el *pnovo = new (nothrow) el;
    if(!pnovo) return false;
    getData(pnovo);
    pnovo->next = nullptr;
    if(!phead){
        phead = pnovo;
    }else{
        ptail->next = pnovo;
    }
    ptail = pnovo;
    return true;
}

bool delhead(){
    el *pdel = phead;
    if(!phead) return false;
    phead->next = phead;
    delete pdel;
}

void list(){
    el *paux = phead;
    if(!phead) cout << "lista vazia" <<endl;
    while(paux){
        putData(paux);
        paux = paux->next;
    }
}

void qReverseList(){
    el *pListed = nullptr; // último elemento listado
    el *pAux = ptail; // para percorrer a lista

    if( !phead ){
        cout << "A fila está vazia!\n";
        return;
    }

    do{
        //listar elemento
        putData( pAux );
        pListed = pAux;

        // avançar pAux até ao último elemento não listado
        pAux = phead;
        while( pAux->next && (pAux->next != pListed) ) pAux = pAux->next;

    }while( pListed != phead ); // repete enquanto o elemento listado não foi o 1º
}