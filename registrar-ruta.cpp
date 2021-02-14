#include <iostream>
#include <string>
#include <fstream>
#include <cstdio>

using namespace std;


struct fechas
	 {
	 	int dia;
	 	int mes;
	 	int hora;
	 	int min;
	 };
struct rutas
{
	 int nruta;
	 int senderos;
	 string dificultad;
	 fechas fecha;
	 
};

int main(){
	rutas ruta;
	
	cout << "Nombre de ruta: " ; 
	cin >> ruta.nruta;
	
	cout << "Nº de senderos: "; 
	cin >> ruta.senderos;
	
	cout << endl << "Seleccione dificultad de ruta: ";
	cin >> ruta.dificultad;
	
	cout << endl << "Seleccione dia, mes, fecha y hora en que tendrá lugar la ruta: ";
	cin >> ruta.fecha.dia;
	cin >> ruta.fecha.mes;
	cin >> ruta.fecha.hora;
	cin >> ruta.fecha.min;
	
	cout << "Nombre de ruta:	" << ruta.nruta << endl;
	cout << "Nº Rutas:	" << ruta.senderos << endl;
	cout << "Nvl Dif.	" << ruta.dificultad << endl;
	cout << "Fecha 	" << ruta.fecha.dia << "/" << ruta.fecha.mes << "  " <<  ruta.fecha.hora << ":" << ruta.fecha.min << endl;
	
	
	ofstream ficheroSalida;
	ficheroSalida.open ("Registro_rutas.txt", ios::app);
	ficheroSalida << "Número de ruta:	" << ruta.nruta << endl;
	ficheroSalida << "Nº Rutas:	" << ruta.senderos << endl;
	ficheroSalida << "Nvl Dif.	" << ruta.dificultad << endl;
	ficheroSalida << "Fecha 	" << ruta.fecha.dia << "/" << ruta.fecha.mes << "  " <<  ruta.fecha.hora << ":" << ruta.fecha.min << endl << endl;
	ficheroSalida.close();





}
	
