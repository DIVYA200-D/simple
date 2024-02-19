#include<iostream>
using namespace std;

int main(){
    int p,q;
    char op;
    cout <<"Enter the value of first operand:";
    cin >> p;

    cout <<" Enter the value of second operand:";
    cin >> q;

    cout <<" Enter the operation you want to perform:";
    cin >> op;

    switch (op){
        case '+': cout<< "addition of two operand is : " << (p+q) <<endl;
        break;

        case '-': cout<< "subtraction of two operand is : " << (p-q) <<endl;
        break;

        case'*': cout<< "multiplication of two operand is : " << (p*q) <<endl;
        break;

        case'/': cout<< "division of two operand is : " << (p/q) <<endl;
        break;
    }
}

