#include<iostream>
#include<string>
using namespace std;
int fatorial(int num);
int main(){
    int op;
    int num;
    int ret;
    cout << "introduza um numero:"<<endl;
    cin >> num;
    ret = fatorial(num);
    cout <<"o fatorial do numero e:" << ret << endl;
    cout << "deseja continuar?, incira 1 se sim ou 0 se nao" << endl;
    cin>> op;
    while(op){
        cout << "introduza numero:" <<endl;
        cin >> num;
        ret = fatorial(num);
        cout <<"o fatorial do numero e:" << ret << endl;
        cout <<"o fatorial do numero e:" << ret << endl;
        cout << "deseja continuar?, incira 1 se sim ou 0 se nao" << endl;
        cin>> op;
    }
}
int fatorial(int num){
    if(num == 0){
        return 1;
    }
    return num * (fatorial(num-1));
}

