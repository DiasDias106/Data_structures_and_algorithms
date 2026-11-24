#include<iostream>
#include<string>
using namespace std;
struct El
{
    string nome;
    El *next;
}*phead=nullptr;

bool inshead(){
 El *pnovo = new (nothrow) El;
 if(!pnovo) return false;
  cout << "nome:";
 cin >> pnovo->nome; 
}
