#include <iostream>
#include <string>
#include <fstream>
#include <cstdio>

using namespace std;

struct fechas
	 {
	 	int dia;
	 	int mes;
	 	int anio;
	 };

struct visitantes
	 {
	 	string nombreV;
	 	string apellidosV1;
	 	string apellidosV2;
	 	string DNIV;
	 	fechas Fecha_nacimientoV;
	 	string mov_reducida;
	 };
	 


int main(){
	visitantes visitante;
	
	cout << "Nombre de visitante: " ; 
	cin >> visitante.nombreV;
	
	cout << "Apellidos: "; 
	cin >> visitante.apellidosV1;
	cin >> visitante.apellidosV2;
	
	cout << endl << "DNI del visitante: ";
	cin >> visitante.DNIV;
	
	cout << endl << "Fecha de nacimiento: ";
	cin >> visitante.Fecha_nacimientoV.dia;
	cin >> visitante.Fecha_nacimientoV.mes;
	cin >> visitante.Fecha_nacimientoV.anio;
	
	cout << endl << "Movilidad reducida (Responder Si o No)";
	cin >> visitante.mov_reducida;
	
	
	cout << "Nombre completo del visitante:	" << visitante.nombreV << " " << visitante.apellidosV1 << " " << visitante.apellidosV2 << endl;
	cout << "DNI:	" << visitante.DNIV << endl;
	cout << "Fecha de nacimiento	" << visitante.Fecha_nacimientoV.dia << "/" << visitante.Fecha_nacimientoV.mes << "/" << visitante.Fecha_nacimientoV.anio << endl;
	cout << "Movilidad reducida: " << visitante.mov_reducida;
	
	
	ofstream ficheroSalida;
	ficheroSalida.open ("Registro_visitantes.txt", ios::app);
	ficheroSalida << "Visitante:	" << visitante.nombreV << " " << visitante.apellidosV1 << " " << visitante.apellidosV2 <<  endl;
	ficheroSalida << "DNI:	" << visitante.DNIV << endl;
	ficheroSalida << "Fecha de nacimiento:	" << visitante.Fecha_nacimientoV.dia << "/" << visitante.Fecha_nacimientoV.mes << "/" << visitante.Fecha_nacimientoV.anio << endl;
	ficheroSalida << "Movilidad reducida: " << visitante.mov_reducida << endl << endl;
	ficheroSalida.close();





}

