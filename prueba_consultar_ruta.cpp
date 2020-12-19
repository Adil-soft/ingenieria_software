#include <iostream>
#include <string>
#include <fstream>
#include <cstdio>

using namespace std;

void leerdatosruta( string nruta){

	string nvldiff;
	string fecha;
	string nrorutas;
	string ruta;
	
	ifstream Leer;
	Leer.open ("Registro_rutas.txt");
	Leer>>ruta;
	Leer>>nrorutas>>nvldiff>>fecha;
	bool encontrado=false;
	while(!Leer.eof())
	{
		
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


int main(){

	string nruta;
	cin >> nruta;
	leerdatosruta(nruta);
	return 0;
	system ("PAUSE");
	
}
