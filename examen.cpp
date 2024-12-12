#include <iostream>
#include <iomanip>
using namespace std;
main()
{
	int n,n8,n9,i;
	float n1,n2,n3,n4,resultado;
	string nombre;
	do
	{
			cout<<"buenas tardes, ingrese una opciones: \n";
			cout<<"1. Ingresar las calificaciones de los aprendices. \n";
			cout<<"2. Calcular el promedio de las calificaiones ingresadas \n";
			cout<<"3. Determinar las calificaciones que estan por encima del promedio \n";
			cout<<"4. salir \n";
			cin>>n;
		switch (n)
		{
				case 1:
						cout<<"ingrese el nombre del estudiante \n";
						cin>>nombre;
						cout<<"ingrese las 4 notas del estudiante: \n";
						cout<<"nota 1";
						cin>>n1;
						cout<<"nota 2";
						cin>>n2;
						cout<<"nota 3";
						cin>>n3;
						cout<<"nota 4";
						cin>>n4;
						resultado=n1+n2+n3+n4;
				break;
				case 2:
					cout<<"El promedio del estudiante "<<nombre <<" es: "<<resultado/4<<endl;
				break;
				case 3:
					cout<<"Las calificaiones del estudiante "<<nombre <<" son \n";
					if(resultado>=7.5)
					{
						cout<<" Arriba del promedio. \n";
					}
					else 
					{
						if(resultado<7.5)
						{
							cout<<" Debajo del promedio. \n";
						}
					}
				break;
				case 4:	
					cout<<"saliendo \n";
				break;
				default:
						cout<<"ERROR \n";
						break;
		}
	}while(n!=4);
	return 0;
	
}
