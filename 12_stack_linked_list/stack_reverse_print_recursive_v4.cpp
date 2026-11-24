#include<iostream>
#include<string>
using namespace std;
struct el{
    string nome;
    int idade;
    el *next;
};
el *phead = nullptr;

void getData(el *elemento){
    cout << "Dados Pessoais" << endl;
    cout << "Nome:";cin.ignore();getline(cin,elemento->nome);
    cout << "Idade:";cin >> elemento->idade;
}

void putData(el *elemento){
    cout << "Dados Pessoais" << endl;
    cout << "Nome:" << elemento->nome << endl;
    cout << "idade:" << elemento->idade << endl;
}

bool insHead(){
    el *pnovo = new (nothrow) el;
    if(!pnovo) return false;
    getData(pnovo);
    pnovo->next = phead;
    phead = pnovo;
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
    if(!phead){cout << "a lista esta vazia" << endl;}
    while(paux){
        putData(paux);
        paux = paux->next;
    }
}
void reverselist(el *paux){
    reverselist(paux->next);
    putData(paux);
}

int main(){
    int tot;
    cout << "introduza o total de elementos que pretende adicionar"<<endl;
    cin >> tot;
    for(size_t i=0;i<tot;i++){
        insHead();
    }
    cout << "separador" << endl;
    list();
     cout << "separador" << endl;
    delhead();
     cout << "separador" << endl;
    list();
     cout << "separador" << endl;
    reverselist(phead);
}