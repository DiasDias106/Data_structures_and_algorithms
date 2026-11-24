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
    cout << "Dados Pessoais" << endl;
    cout << "Nome:";cin.ignore();getline(cin,elemento->nome);
    cout << "idade";cin >> elemento->idade;
}

 void putData(el*elemento){
    cout << "Nome:" << elemento->nome << endl;
    cout << "idade:" << elemento->idade << endl;
 }

 bool insTail(){
  el *pnovo = new(nothrow) el;
  if(!pnovo) return false;
  getData(pnovo);
  pnovo->next = nullptr;
  if(!phead){
    phead = pnovo;
  }else{
     ptail->next =pnovo;
     ptail = pnovo;
  }
  return true;
 }

 void list(){
  el *paux = phead;
  if(!phead) cout << "lista vazia" << endl;
  if(phead == ptail) cout << "lista apenas com um elemento"<<endl;
  while(paux){
    putData(paux);
    paux = paux->next;
  }
 }

 bool delHead(){
  el *pdel = phead;
  if(!phead) return false;
  phead = phead->next;
  delete pdel;
 }