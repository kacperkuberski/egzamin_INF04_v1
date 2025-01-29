#include<bits/stdc++.h>
using namespace std;
/*
nazwa funkcji:  <los>
argumenty: <t[50]-tablica do której są losowane liczby>

typ zwracany: <>
opis: <funkcja losuje liczby do tablicy>
autor: <123456>
*/
void los(int t[50]){
	srand(time(NULL));
	for(int i=0;i<50;i++){
		t[i]=rand()%100+1;
	}
}
/*
nazwa funkcji:  <druk>
argumenty: <t[50]-tablica z której drukują sei liczby>

typ zwracany: <>
opis: <funkcja drukuje liczby do tablicy>
autor: <123456>
*/
void druk(int t[50]){
	for(int i=0;i<50;i++){
		cout<<t[i]<<" ";
	}
}
/*
nazwa funkcji:  <szuk>
argumenty: <t[], x>

typ zwracany: <i>
opis: <funkcja losuje szuka liczby w tablicy>
autor: <123456>
*/
int szuk(int t[], int x){
	for(int i=0;i<51;i++)
		if(t[i]==x)
			return i;
}
main()
{
	int t[51];
	int x;
	los(t);
	cout<<"tablica po wylosowaniu:\n";
	druk(t);
	cout<<"\npodaj szukana:\n";
	cin>>x;
	t[50]=x;
	if(szuk(t,x)==50){
		cout<<"nie";
	}
	else{
		cout<<"tak na pozycji "<<szuk(t,x)+1;
	}
}
