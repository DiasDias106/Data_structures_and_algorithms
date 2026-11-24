#include<iostream>
#include<string>
using namespace std;
struct el{
  string nome;
  int idade;
  el *Next;
};
el *pHead =  nullptr;

void getData(el *elemento){
    cout << "Dados pessoais"<<endl;
    cout << "Nome";cin.ignore();getline(cin,elemento->nome);
    cout << "idade";cin >> elemento->idade;
}
void putData(el *elemento){
    cout << "nome" << elemento->nome << endl;
    cout << "idade" << elemento->idade << endl;
}

bool inshead(){
  el *pnovo = new(nothrow) el;
  if(!pnovo) return false;
  pnovo->Next = pHead;
  pHead = pnovo;
  return true;
}
void list(){
  el *paux = pHead;
  if(!pHead){cout << "lista vazia"<<endl;}
  while(paux){
    putData(paux);
    paux = paux->Next;
  }
}
void delhead(){
  el *pdel = pHead;
  if(!pHead){cout << "lista vazia"<<endl;}
  pHead->Next = pHead;
  delete pdel; 
}
void reverselist(el*paux){
 if(!paux){cout << "lista acabou"<<endl;}
 reverselist(paux->Next);
 putData(paux);
  }

int main(){
  int tot;
  cout << "introduza numero de elementos"<<endl;
  for(int i=0;i<tot;i++){
    inshead();
  }
  cout << "listar normalmente"<<endl;
  list();

  cout << "listar invertido"<<endl;
  reverselist(pHead);

  cout << "remover a cabeça" << endl;
  delhead();


  cout << "adicionar elemento" << endl;
  
}
