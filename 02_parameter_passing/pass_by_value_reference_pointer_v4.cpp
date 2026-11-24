#include<iostream>
using namespace std;
int somaum(int num);
void somaoutro(int &num);
void somamaisum(int *n);
int main(){
    int num;
    cout << "introduza um numero" << endl;
    cin >> num;
    somaum(num);
    cout << "Numero:" << num << endl;
    somaoutro(num);
    somamaisum(&num);
}
int somaum(int num){
    num ++;
    return num;
}
void somaoutro(int &num){
    num = num + 1;
    cout << "numero:" << num << endl;
}
void somamaisum(int *n){
    *n = *n + 1;
    cout << "numero:" << *n << endl;
}
