#include <iostream>
using namespace std;

int main(){
	double cant, pcam, monto, final;
	cout<<"Introduzca la cantidad de camisas: ";
	cin>>cant;
	cout<<"Introduzca el precio de cada camisa: ";
	cin>>pcam;
	monto=pcam*cant;
	if (cant>=3){
		final=monto*0.8;
	}else{
		final=monto*0.9;
	}
	cout<<"El total a pagar es: "<<final;
	
	return 0;
}