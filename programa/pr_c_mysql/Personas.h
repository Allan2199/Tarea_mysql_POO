#pragma once
#include <iostream>
using namespace std;
class Personas{
		// atributos
protected: string nombres, apellidos, direccion, fecha_nacimiento;
			 int telefono=0;
			 // costructor
	protected:
		Personas() {
		}
		Personas(string nom, string ape, string dir, int tel,string fn) {
			nombres = nom;
			apellidos = ape;
			direccion = dir;
			telefono = tel;
			fecha_nacimiento = fn; 
		}

		// metodos
		void mostrar();

	};

