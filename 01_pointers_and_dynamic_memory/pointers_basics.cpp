#include<iostream>
using namespace std;
int main(){
    int idade;
    int *pidade;
    cout << "introduza a idade:"<< endl;
    cin >> idade;
    pidade = &idade;
    cout << "idade" << *pidade << endl;
    }