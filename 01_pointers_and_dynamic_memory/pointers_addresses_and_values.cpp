#include<iostream>
using namespace std;
int main(){
    int num;
    int *pnum = &num;
    int **pnumr = &pnum;

    cout << "introduza o valor de num" << endl;
    cin >> num;
    cout << "enderesso de num" << pnum << endl;
    cout << "valor apontado pelo apontador" << endl;
    cout << *pnum <<endl;
    cout << "valor apontado pelo segundo pointer" << endl;
    cout << *pnumr << endl;
    cout << "valor apontado pelo apontado" << endl;
    cout << **pnumr << endl;



}