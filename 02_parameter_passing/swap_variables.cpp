#include<iostream>
using namespace std;
int main(){
    int num1, num2;
    cout << "introduza 2 numeros" << endl;
    cin >> num1;
    cin >> num2;
    cout << "numero1\t" << num1 << endl;
    cout << "numero2\t" << num2 << endl;
    swap(num1,num2);
    cout << "numero1\t" << num1 <<endl;
    cout << "numero2\t" << num2 << endl;
}