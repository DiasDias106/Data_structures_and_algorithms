#include<iostream>
#include<string>
using namespace std;
struct el{
    string nome;
    int idade;
    el *next;
};
el *phead= nullptr;

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
    el *pnovo = new(nothrow) el;
    if(!pnovo) return false;
    getData(pnovo);
    pnovo->next = phead;
    phead = pnovo;
}

bool delHead(){
    el *pdel = phead;
    if(!phead) return false;
    phead= phead->next;
    delete pdel;
}

void list(){
    el *paux = phead;
    if(!phead) cout << "lista vazia" <<endl;
    while(paux){
        putData(paux);
        paux =  paux->next;
    }
}

void revlist(el *paux){
     if(!phead) cout << "lista vazia" << endl;
     revlist(paux->next);
     putData(paux);
}

void revlist1(){
    el *plisted = nullptr;
    el *paux ;
    if(!phead) cout << "lista vazia" << endl;
    paux= phead;
    while(paux->next != plisted) paux = paux->next;
    putData(paux);
    plisted = paux;
}

void list1(el *paux){
    if(!phead) cout << "lista vazia" << endl;
    putData(paux);
    list1(paux->next);
}

int main(){
    int tot;
    cout << "introduza n" << endl;
    cin >> tot;

    for(size_t i=0;i<tot;i++){
        insHead();
    }

    //listar
    list();

    //listar recursivo
    list1(phead);

    //reverselist();
    revlist(phead);

    delHead();
    
}