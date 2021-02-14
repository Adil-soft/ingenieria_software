#include <iostream>
#include <string>
#include <fstream>
#include <cstdio>

using namespace std;

int main(){


	string nruta;
	string nvldiff;
	string fecha;
	string nrorutas;
	string ruta;

	ifstream Leer;
	Leer.open ("Registro_rutas.txt");
	Leer>>ruta;
	Leer>>nrorutas>>nvldiff>>fecha;
	bool encontrado=false;
	cout<<"Ingrese su numero de ruta para buscar"<<endl;
	cin>>nruta;
	while(!Leer.eof())
	{
		
		cout << ruta <<endl;
		if(ruta==nruta)
		
		{
			encontrado=true;
			cout<<"----------------------------"<<endl;
			cout<<"identificador de ruta:    "<<nruta<<endl;
			cout<<"Nº de rutas:  "<<nrorutas<<endl;
			cout<<"nvldiff:      "<<nvldiff<<endl;
			cout<<"Fecha:  "<<fecha<<endl;
			cout<<"----------------------------"<<endl;
			cout<<endl;
		}
		Leer>>ruta;
		Leer>>nrorutas>>nvldiff>>fecha;
		
	}
	if(encontrado==false)
	{
		cout<<"Identificador no encontrado"<<endl;
	}
	Leer.close();
}
