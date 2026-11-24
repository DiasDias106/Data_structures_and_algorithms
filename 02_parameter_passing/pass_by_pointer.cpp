#include<iostream>
using namespace std;
void somaum(int *p){
    *p = *p+1;
    cout << *p << endl;
}
int main(){
    int num;
    int *ptr;
    cout << "introduza um numero" << endl;
    cin >> num ;
    ptr = &num;
    cout << *ptr << endl;
    somaum(&num);
}