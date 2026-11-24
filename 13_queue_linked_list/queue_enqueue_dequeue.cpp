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
    cout << "Dados Pessoais" << endl;
    cout << "Nome:";cin.ignore();getline(cin, elemento->nome);
    cout << "Idade:";cin >> elemento->idade;
}

void putData(el *elemento){
    cout << "Dados Pessoais" << endl;
    cout << "Nome:\t" << elemento->idade << endl;
    cout << "idade:\t" << elemento->nome << endl;
}

bool insTail(){
    el *pnovo =  new (nothrow) el;
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

bool delhead(){
    el *pdel = phead;
    if(!phead) return false;
    phead = phead->next;
    delete pdel;
}
