#include<iostream>
#include<string>
using namespace std;
struct el
{
    string nome;
    int idade;
    el *next;
};
el *phead = nullptr;

void getData(el *elemento){
    cout << "Dados Pessoais" << endl;
    cout << " Nome: "; cin.ignore(); getline(cin, elemento->nome);
    cout << "Idade: "; cin >> elemento->idade;
    cout << endl;
}

void putData(el *elemento){
    cout << "Dados Pessoais"<<endl;
    cout << "Nome:\t" << elemento->nome << endl;
    cout << "Idade:\t" << elemento->idade << endl;
}

bool insHead(){
    el *pnovo = new (nothrow) el;
    if(!pnovo) return false;
    getData(pnovo);
    if(!phead){
        phead = pnovo;
    }else{
    pnovo->next = phead;
    phead = pnovo;
    }
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
    if(!phead) cout << "a lista esta vazia" << endl;
    while(paux){
        putData(paux);
        paux = paux->next;
    }
}

void revlist(){
    el *pListed = nullptr; // último elemento listado
    el *pAux; // para percorrer a lista

    if( !phead ){
        cout << "A pilha está vazia!\n";
        return;
    }

    while( pListed != phead ){ // enquanto o elemento listado não foi o 1º

        // avançar pAux até ao último elemento não listado
        pAux = phead;
        while( pAux->next != pListed ) pAux = pAux->next;

        //listar elemento
        putData( pAux );
        pListed = pAux;
    }
}

