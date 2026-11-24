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

void getData(el*elemento){
    cout << "dados pessoais" << endl;
    cout << "Nome:";cin.ignore();getline(cin,elemento->nome);
    cout << "Idade";cin >> elemento->idade;
}

void putData(el *elemento){
    cout << "Dados pessoais"<<endl;
    cout << "Nome:" << elemento->nome << endl;
    cout << "idade:" << elemento->idade << endl;
}

bool instail(){
    el *pnovo = new (nothrow) el;
    if(!pnovo) return false;
    getData(pnovo);
    pnovo->next = nullptr;
    if(!phead){
        phead = pnovo;
    }else{
        ptail->next = pnovo;
        ptail = pnovo;
    }
    return true;
}

bool removehead(){
    el *pdel = phead;
    if(!phead) return false;
    phead = phead->next;
    delete pdel;
}

void list(){
    el *paux = phead;
    if(!phead) cout << "lista vazia"<<endl;
    while(paux){
        putData(paux);
        paux = paux->next;
    }
}
