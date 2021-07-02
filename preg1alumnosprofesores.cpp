#include <iostream>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <string.h>
#include <string>  
#include <vector>  


using namespace std;

class  CAlumno
{
public:
	CAlumno(string, string, int, int);
	CAlumno();
	void esMayorDe(CAlumno);
	~CAlumno();

	int getEdad() {
		return edad;
	}
	string getNombre() {
		return nombre;
	}


private:
	string nombre;
	string apellidos;
	int edad;
	int credito;

};

CAlumno::CAlumno(string _nombre, string _apellidos, int _edad, int _credito)

{
	nombre = _nombre;
	apellidos = _apellidos;
	edad = _edad;
	credito = _credito;
}

void CAlumno::esMayorDe(CAlumno alumno)
{

}
CAlumno::CAlumno()
{
	nombre = " ";
	apellidos = " ";
	edad = 4;
	credito = 0;
}
CAlumno::~CAlumno()
{
}



class CProfesor
{
public:
	CProfesor(string, string, int, int);
	void esMayorDe(vector<CProfesor>);
	~CProfesor();

	int getEdad() {
		return edad;
	}
	string getNombre() {
		return nombre;
	}



private:
	string nombre;
	string apellido;
	int edad;
	int horas_dictado;


};

CProfesor::CProfesor(string _nombre, string _apellidos, int _edad, int _horas_dictado)
{
	nombre = _nombre;
	apellido = _apellidos;
	edad = _edad;
	horas_dictado = _horas_dictado;

}


void CProfesor::esMayorDe(vector<CProfesor> arregloProfe)
{
	//int mayor = 0;
	//string NombMay = "";
	//for (int i = 0; i < arregloProfe.size(); i++)
	//{
	//	if (arregloProfe[i].edad > mayor)
	//		NombMay = arregloProfe[i].nombre;

	//}
	//cout << "el nombre del mayor es: " << endl;
}

CProfesor::~CProfesor()
{
}

int main() {

	CAlumno objAlumno1 = CAlumno("jose", "ramirez", 23, 4);
	CAlumno objAlumno2 = CAlumno("juan", "gonzales", 21, 4);
	CAlumno objAlumno3 = CAlumno("pedro", "castillo", 20, 4);

	cout << endl;
	vector <CAlumno> arrayAlumnos;

	arrayAlumnos.push_back(objAlumno1);
	arrayAlumnos.push_back(objAlumno2);
	arrayAlumnos.push_back(objAlumno3);

	

	string nombre = "";
	int edadmayoralum = 0;


	for (int i = 0; i < arrayAlumnos.size(); i++)
	{
		if (arrayAlumnos[i].getEdad() > edadmayoralum) {
			edadmayoralum = arrayAlumnos[i].getEdad();
			nombre = arrayAlumnos[i].getNombre();
		}


	}
	cout << "el nombre del mayor alumno es: " << nombre << " tiene " << edadmayoralum << endl;

	
	//===================================profesor==========================

	CProfesor objProfesor1 = CProfesor("jose", "ramirez", 43, 50);
	CProfesor objProfesor2 = CProfesor("juan", "gonzales", 51, 45);
	CProfesor objProfesor3 = CProfesor("pedro", "castillo", 70, 54);

	cout << endl;
	vector <CProfesor> arrayProfesores;

	arrayProfesores.push_back(objProfesor1);
	arrayProfesores.push_back(objProfesor2);
	arrayProfesores.push_back(objProfesor3);

	string nombreProfe = "";
	int edadmayorprofe = 0;


	for (int i = 0; i < arrayProfesores.size(); i++)
	{
		if (arrayProfesores[i].getEdad() > edadmayorprofe) {
			edadmayorprofe = arrayProfesores[i].getEdad();
			nombreProfe = arrayProfesores[i].getNombre();
		}


	}
	cout << "el nombre del mayor alumno es: " << nombreProfe << " tiene " << edadmayorprofe  << endl;


	return 0;
}