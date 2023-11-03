//This is a calculator program for arithetic operation
//here user will enter the operator of their choice
//output would be the result
#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter the first number : ";
    cin>>num1;
    cout<<"Enter the second number : ";
    cin>>num2;

    char operation;
    cout<<"Enter the operator of your choice (+,*,-,/,%): ";
    cin>>operation;

    switch(operation)
    {
        case '+':
        {
        cout<<"The sum is : "<<num1<<"+"<<num2<<"="<<num1+num2<<endl;
        break;
        }

        case '-':
        {
        cout<<"The differnce is : "<<num1<<"-"<<num2<<"="<<num1-num2<<endl;
        break;
        }

        case '*':
        {
        cout<<"The product is : "<<num1<<"*"<<num2<<"="<<num1*num2<<endl;
        break;
        }

        case '/':
        {
        cout<<"The division is : "<<num1<<"/"<<num2<<"="<<num1/num2<<endl;
        break;
        }

        case '%':
        {
        cout<<"The modulous is : "<<num1<<"%"<<num2<<"="<<num1%num2<<endl;
        break;
        }

        default:
        cout<<"INVALID OPEARTION !"<<endl;
    }


} 
