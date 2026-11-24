#include<iostream>
using namespace std;
void multiplica1(int numero);
void multiplica2(int &numero);
void multiplica3(int *pnum);
int main(){
    int num;
    cout << "introduza numero:\t";
    cin >> num;
    cout << endl;
    multiplica1(num);
    multiplica2(num);
    multiplica3(&num);
}

void multiplica1(int numero){
    numero = numero * 1;
    cout << "numero" << endl;
}

void multiplica2(int &numero){
    numero = numero * 2;
    cout << "numero" << numero << endl;
}

void multiplica3(int *pnum){
    int x=2,y=3;
    *pnum *= (x+y);
    cout << "numero:\t" << *pnum << endl;
}