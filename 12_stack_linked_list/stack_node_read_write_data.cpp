#include<iostream>
#include<string>
using namespace std;
struct el
{
    string nomes;
    int numero;
    el *next;
};
el *pHead=nullptr;
void getData(el *elemento){
    cout << "dados pessoais"<<endl;
    cout << "nome";cin.ignore(); getline(cin,elemento->nomes);
    cout << "numero";cin >> elemento->numero;
}
void setData(el *elemento){
    cout << "nome:\t" << elemento->nomes<<endl;
    cout << "numero\t" << elemento->numero<< endl;
}
int main(){

}