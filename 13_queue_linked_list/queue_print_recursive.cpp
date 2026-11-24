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
    cout << "Nome:" << elemento->nome << endl;
    cout << "Idade:" << elemento->idade << endl;
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
    return true;
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
        insTail();
    }

    //listar
    list();

    //listar recursivo
    list1(phead);

    //reverselist();
    revlist(phead);

    delhead();
    
}