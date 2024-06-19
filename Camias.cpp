/*
ASIGNATURA: Fundamentos de Programación
DOCENTE: MSc. Ing. Wilson César Callisaya Choquecota
ALUMNO: Jair Mark Mendoza Flores
CÓDIGO: 2024-119004
*/
#include <iostream>
#include <windows.h>
using namespace std;

double proc(double c, double m){
	if (c>=3){
		m=m*0.92;
	}else{
		m=m*0.91;
	}
	return m;
}

double vp(double n){
	while (n<1){
		cout<<"Ponga un precio entero positivo: ";
		cin>>n;
	}
	return n;
}

int vc(int n){
	while (n<0){
		cout<<"Ponga una cantidad entera positiva: ";
		cin>>n;
	}
	return n;
}

int main(){
	SetConsoleOutputCP(CP_UTF8);
	double cv, pv, cant, pcam, monto, final;
	// cv = camisas validadas
	// pv = precio validado
	// pcam es el precio por cada camisa
	// " final " es el precio total a pagar descontando el descuento
	// " cant " se refiere a la cantidad de camisas que está llevando
	cout<<"TOTAL A PAGAR POR CAMISAS"<<endl;
	cout<<"Introduzca la cantidad de camisas: ";
	cin>>cant;
	// Función para validar la cantidad de camisas
	cv=vc(cant);
	cout<<"Introduzca el precio de cada camisa: ";
	cin>>pcam;
	// Función para validar el precio de las camisas
	pv=vp(pcam);
	monto=pv*cv;
	final=proc(cv,monto);
	cout<<"El total a pagar es: "<<final;
	return 0;
}