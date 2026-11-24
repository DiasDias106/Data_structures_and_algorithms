#include<iostream>
using namespace std;
void somaum(int num);
void somaoutro(int &num);
void somau(int *pnum);
int main(){
    int num;
    cout << "introduza um numero" << endl;
    cin >> num;
    somaum(num);
    somaoutro(num);
    somau(&num);
}

void somaum(int num){
    num ++;
    cout << num << endl;
}

void somaoutro(int &num){
    num ++;
    cout << num << endl;
}

void somau(int *pnum){
    *pnum = *pnum + 1;
    cout << *pnum << endl;
}