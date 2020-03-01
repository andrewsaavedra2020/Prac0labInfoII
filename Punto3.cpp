#include<iostream>
using namespace std;
void inforMatic(int num)
{
	int num1=0;
	cout<<"Ingrese un numero entero: ";
	cin>>num1;
	
	if (num1%3==0 && num1%5==0)
	{
    cout<<"InforMatic";
    }
    else if (num1%3==0)
	{
    cout<<"Infor";
    }
    else if (num1%5==0)
	{
    cout<<"Matic";
    }
    else
	{
    cout<<num1;
    }	
}

int main()
{
    int num1=0;
    inforMatic(num1);
}
