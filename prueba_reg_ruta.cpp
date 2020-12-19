#include <iostream>
#include <string>
#include <fstream>
#include <cstdio>

using namespace std;

void datosenfichero(int dato1, int dato2, int dato3, int dato4, int dato5, int dato6, string dato7){
	
	ofstream ficheroSalida;
	ficheroSalida.open ("Prueba_registro_rutas.txt", ios::app);
	ficheroSalida <<  dato1 << endl;
	ficheroSalida <<  dato2 << endl;
	ficheroSalida <<  dato7 << endl;
	ficheroSalida << dato3 << "/" << dato4 << "-" <<  dato5 << ":" << dato6 << endl << endl;
	ficheroSalida.close();
}

int main(){
	int dato1=3213;
	int dato2=5;
	int dato3=12;
	int dato4=3;
	int dato5=5;
	int dato6=30;
	string dato7="Dificil";
	datosenfichero(dato1, dato2, dato3, dato4, dato5, dato6, dato7);
	
	return 0;
	system ("PAUSE");
	
}
	


