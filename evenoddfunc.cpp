#include<iostream>
using namespace std;
void f1(){
	int a;cout<<"Enter number : ";
	cin>>a;
	if(a%2==0)
	cout<<"Even";
	else
	cout<<"odd";
	cout<<endl;
}

char f2(){
	int a;cout<<"Enter number : ";
	cin>>a;
	if(a%2==0)
	return 'e';
	else
	return 'o';
	cout<<endl;
}

void f3(int a){
	if(a%2==0)
	cout<<"Even";
	else
	cout<<"Odd";
	cout<<endl;
}

char f4(int a){
	if(a%2==0)
	return 'e';
	else
	return 'o';
	cout<<endl;
}


int main()
{
	f1();
	char c=f2();
	cout<<c<<endl;
	f3(4);
	
	char b=f4(9);
	cout<<b;
}
