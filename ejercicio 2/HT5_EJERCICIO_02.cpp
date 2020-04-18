#include <fstream>
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <sstream>
#include <iomanip>
#define NOM_ARCHIVO "HT5_EJERCICIO_02.txt"
using namespace std;

int LOOP(int mpp)
{int y;
    if (mpp==1)
    {y=1;}
    else{y=0;}
    return y;}
   


int socio()
{
int membresia;
cout<<"Cuenta con membresia? \n 1.Si. \n 2.No. "<<endl;
cin>>membresia;
return membresia;
}
int zona()
{
int ticket;
cout<<"Seleccione el tipo de zona     \n 1. VIP  \n 2. PLATEA \n 3. POPULAR \n ";
cin>>ticket;

return ticket ;
}



int main()
{
int vip,entrada,precioparcial,x=1,opcion,cantidad,parcial,descuentosocio,descuentoentradas,totalfinal,regreso;

//se crea un ciclo repetitivo para dar seguimiento a las solicitudes y validar si es necesario volver al menu PP//

while (x==1)


{cout<<"Bienvenido, eliga una de las siguientes opciones \n 1.Realizar venta de entrada.   \n 2.Ver estadisticas. \n ";cin>>opcion;
if (opcion==1)
{	vip=socio();
	entrada=zona();	
	switch (entrada)
	{
		case 1:
			precioparcial=350;
			break;
			
			case 2:
				precioparcial=130;
			break;
			case 3:
				precioparcial=50;
			break;
	}
cout<<"Seleccione la cantidad de entradas"<<endl;
cin>>cantidad;
parcial=cantidad*precioparcial;

if (cantidad>=3 && cantidad<=6)
{
	descuentoentradas=parcial*0.05;
}
else {
	if ( cantidad>=7 && cantidad<=9)
	{
			descuentoentradas=parcial*0.075;
			
			
	}
	else{
		if (cantidad>9)
		{
				descuentoentradas=parcial*0.1;
				

		}
		else{
			descuentoentradas=0;
		}
	}
}

cout<<descuentoentradas<<endl;


switch (vip)
{
	case 1:
		descuentosocio=parcial*0.08;
		break;
		case 2:
			descuentosocio=0;
			break;
}

totalfinal=parcial-descuentoentradas-descuentosocio;

ofstream ventas;

try {
ventas.open(NOM_ARCHIVO,ios::app);
ventas<<entrada<<"\n"<<cantidad<<"\n"<<totalfinal<<"\n";
ventas.close();

}
catch(exception X){
cout<<"Error en la manipulacion del archivo"<<endl;
}

cout<<"Si desea regresar al menu oprima 1, si no presione 2 "<<endl;
cin>>regreso;
x=LOOP(regreso);


}





else if (opcion==2)
{    FILE *entrada;
   int ch, num_lineas;
   if ((entrada = fopen(NOM_ARCHIVO, "r")) == NULL){
      perror(NOM_ARCHIVO);
      return 1;
   }
   num_lineas = 0;
   while ((ch = fgetc(entrada)) != EOF)
      if (ch == '\n')
         num_lineas++;
   fclose(entrada);
     ifstream servicios;
string texto;
int numerolineas;
string datos1[num_lineas];
servicios.open(NOM_ARCHIVO,ios::in);
  numerolineas=num_lineas-1;
 
  //En la siguientes lineas se obtiene los valores del archivo txt. //
   for(int i=0;i<=numerolineas;i++){
  fflush(stdin);
getline(servicios,texto);
datos1[i]=texto;
   }
   
   
   string tipoentrada[numerolineas],cantidadentrada[numerolineas],totalporventa[numerolineas];
   int aumento=0,aumento2=0, aumento1=0,aumentos2=0,aumento3=0,aumento4=0,valores=0;
         int validacion,validacion1,validacion2;
         
         
         
   for(int indicador1=0;indicador1<numerolineas;)
{tipoentrada[aumento]=datos1[indicador1];
aumento++;
indicador1=indicador1+3;
}
 for(int indicador2=1;indicador2<numerolineas;)
{cantidadentrada[aumento1]=atoi(datos1[indicador2].c_str());
aumento1++;
indicador2=indicador2+3;
}
 for(int indicador3=2;indicador3<=numerolineas;)
{totalporventa[aumentos2]=datos1[indicador3];
valores=valores+atoi(totalporventa[aumentos2].c_str());
aumentos2++;
indicador3=indicador3+3;
}

int cantv=0,cantp=0,cante=0;
int sumav=0,sumap=0,sumae=0;
float porcentaje1,porcentaje2,porcentaje3,porcentajeparcial=0;


for (int indicador4=0;indicador4<numerolineas;)
{
	
	if (tipoentrada[indicador4]=="1")
	{
		sumav=sumav+atoi(totalporventa[indicador4].c_str());
		cantv=cantv+1;	}
		else
		{
			if (tipoentrada[indicador4]=="2")
	{
		sumap=sumap+atoi(totalporventa[indicador4].c_str());
		cantp=cantp+1;	}
		else
		{
			if (tipoentrada[indicador4]=="3")
	{
		sumae=sumae+atoi(totalporventa[indicador4].c_str());
		cante=cante+1;	}
		}
		}
	
	indicador4=indicador4+1;
}


porcentajeparcial=100/(cantv+cantp+cante);
cout<<porcentajeparcial<<endl;
porcentaje1=porcentajeparcial*cantv;
porcentaje2=porcentajeparcial*cantp;
porcentaje3=porcentajeparcial*cante;


cout<<"--------ESTADISTICAS------------"<<endl;
cout<<"El monto total es de "<<valores<<endl;
cout<<"\n"<<"La suma de los boletos VIP es de  "<<sumav<<endl;
cout<<"Con un porcentaje de "<<porcentaje1<<"%"<<endl;

cout<<"\n"<<"La suma de los boletos PLATEA es de  "<<sumap<<endl;
cout<<"Con un porcentaje de "<<porcentaje2<<"%"<<endl;
cout<<"\n"<<"La suma de los boletos POPULAR  es de  "<<sumae<<endl;
cout<<"Con un porcentaje de "<<porcentaje3<<"%"<<endl;
cout<<"------------------------------------------------"<<endl;








cout<<"Si desea regresar al menu oprima 1, si no presione 2 "<<endl;
cin>>regreso;
x=LOOP(regreso);
 system("cls");

}
}


}

