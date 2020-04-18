
#include <fstream>
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <sstream>
#include <iomanip>
#define NOM_ARCHIVO "inmobiliaria.txt"
using namespace std;

int LOOP(int mpp)
{int y;
    if (mpp==1)
    {y=1;}
    else{y=0;}
    return y;}
   


int categoria()
{
int seleccioncategoria;
cout<<"Seleccione alguna de las siguientes categorias. \n 1. Comercial. \n 2. Residencial. \n ";
cin>>seleccioncategoria;
return seleccioncategoria;
}
int stipo()
{
int seleccionotipo;
cout<<"Seleccione el tipo   \n 1. Terreno A \n 2. Casa \n 3. Departamento \n ";
cin>>seleccionotipo;

return seleccionotipo ;
}


int szona()
{
int seleccionzona;
cout<<"Seleccione la zona  \n 1. Zona A \n 2. Zona B \n ";
cin>>seleccionzona;

return seleccionzona;
}

int szona2()
{
int seleccionzona;
cout<<"Seleccione la zona  \n 1. Zona A \n 2. Zona B \n 3. Zona C \n ";
cin>>seleccionzona;

return seleccionzona;
}
int main()
{
float hectarias,parcial,parcial1,parcial2,parcial3,total;
int servicios1,regreso;
int x=1,opcion;
int categoria1,zona,zona1,tipo;
float subtotal,totalfinal,metros;

//se crea un ciclo repetitivo para dar seguimiento a las solicitudes y validar si es necesario volver al menu PP//

while (x==1)

{cout<<"Bienvenido, eliga una de las siguientes opciones \n 1.Realizar venta.   \n 2.Ver Historico de servico. \n ";cin>>opcion;
if (opcion==1)
{
categoria1=categoria();
switch (categoria1)
{

case 1:


zona=szona();

switch (zona)
{
case 1:
tipo=stipo();
if (tipo==1)
{
subtotal=2200;
 }
 else {
  if(tipo==2){
 
  subtotal=2500;
 }else{
  subtotal=2100;

 }
 }
break;
case 2:
tipo=stipo();
if (tipo==1)
{
subtotal=2200;
 }
 else {
  if(tipo==2){
 
  subtotal=2500;
 }else{
  subtotal=2100;

 }
 }
break;
}



break;

case 2:
zona1=szona2();


 switch (zona1)
{
case 1:
tipo=stipo();
 if (tipo==1)
{
subtotal=2200;
 }
 else {
  if(tipo==2){
 
  subtotal=2500;
 }else{
  subtotal=2100;

 }
 } break;
case 2:
tipo=stipo();
if (tipo==1)
{
subtotal=2200;
 }
 else {
  if(tipo==2){
 
  subtotal=2500;
 }else{
  subtotal=2100;

 }
 }
break;
case 3:
  tipo=stipo();
  if (tipo==1)
{
subtotal=2200;
 }
 else {
  if(tipo==2){
 
  subtotal=2500;
 }else{
  subtotal=2100;

 }
 }
break;
}

break;


}


cout<<"Ingrese la cantidad en metros cuadrados sobre la seleccion anterior"<<endl;
cin>>metros;
totalfinal=subtotal*metros;















ofstream entradaventas;

try {
entradaventas.open(NOM_ARCHIVO,ios::app);
entradaventas<<categoria1<<"\n"<<zona<<"\n"<<tipo<<"\n"<<subtotal<<"\n"<<metros<<"\n"<<totalfinal<<"\n";
entradaventas.close();

}
catch(exception X){
cout<<"Error en la manipulacion del archivo"<<endl;
}

cout<<"Si desea regresar al menu oprima 1, si no presione 2 "<<endl;
cin>>regreso;
x=LOOP(regreso);
 system("cls");
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
   
   
   //En las siguientes lineas se dividen esos valores para categorizarlos //
   string categoriaservicio[numerolineas],zonaservicio[numerolineas],tiposervicio[numerolineas],subtotal1[numerolineas],metros1[numerolineas],total1[numerolineas];
   int aumento=0,aumento2=0, aumento1=0,aumentos2=0,aumento3=0,aumento4=0,aumento5=0,aumento6=0;
       int   cantidadservicio1=0,cantidadservicio2=0,cantidadservicio3=0,cantidadservicio4=0,cantidadservicio5=0,cantidadservicio6=0,suma=0;
         int validacion,validacion1,validacion2;
   for(int indicador1=0;indicador1<numerolineas;)
{categoriaservicio[aumento]=datos1[indicador1];
aumento++;
indicador1=indicador1+6;
}
 for(int indicador2=1;indicador2<numerolineas;)
{zonaservicio[aumento1]=datos1[indicador2];

aumento1++;
indicador2=indicador2+6;
}
 for(int indicador3=2;indicador3<=numerolineas;)
{tiposervicio[aumentos2]=(datos1[indicador3]);

aumentos2++;
indicador3=indicador3+6;
}


for(int indicador4=3;indicador4<=numerolineas;)
{subtotal1[aumento3]=	(datos1[indicador4]);

aumento3++;
indicador4=indicador4+6;
}

for(int indicador5=4;indicador5<=numerolineas;)
{metros1[aumento4]=	(datos1[indicador5]);

aumento4++;
indicador5=indicador5+6;
}

for(int indicador6=5;indicador6<=numerolineas;)
{total1[aumento5]=datos1[indicador6];

aumento5++;
indicador6=indicador6+6;
}

int totalxcategoria=0,totalxcategoria1=0,totalcomercioa=0,totalcomerciob=0;

int comercialterrenoa=0,comercialcasaa=0,comercialdepaa=0;
int comercialterrenob=0,comercialcasab=0,comercialdepab=0;
int resiterrenoa=0,resicasaa=0,residepaa=0;
int resiterrenob=0,resicasab=0,residepab=0;
int resiterrenoc=0,resicasac=0,residepac=0;

int res1=0,res2=0,res3=0;





for (int indicador7=0;indicador7<=numerolineas;)
{
	
	
	
	if (categoriaservicio[indicador7]=="1")
	{
totalxcategoria=totalxcategoria+atoi(total1[indicador7].c_str())	;	

             if(zonaservicio[indicador7]=="1")
             {
             	totalcomercioa=totalcomercioa+atoi(total1[indicador7].c_str());
             	
             	
             																   if (tiposervicio[indicador7]=="1")
             																   {
             																   	comercialterrenoa=comercialterrenoa+atoi(total1[indicador7].c_str());
																				}
																				else 
																				{
																					  if (tiposervicio[indicador7]=="2")
             																   {
             																   	comercialcasaa=comercialcasaa+atoi(total1[indicador7].c_str());
																				}
																				else{
																					  if (tiposervicio[indicador7]=="3")
             																   {
             																   	comercialdepaa=comercialdepaa+atoi(total1[indicador7].c_str());
																				}
																				}
																					
																				}
             	
			 }
			 else
			 {
			 	if(zonaservicio[indicador7]=="2")
             {
             	totalcomerciob=totalcomerciob+atoi(total1[indicador7].c_str());
             																    if (tiposervicio[indicador7]=="1")
             																   {
             																   	comercialterrenob=comercialterrenob+atoi(total1[indicador7].c_str());
																				}
																				else 
																				{
																					  if (tiposervicio[indicador7]=="2")
             																   {
             																   	comercialcasab=comercialcasab+atoi(total1[indicador7].c_str());
																				}
																				else{
																					  if (tiposervicio[indicador7]=="3")
             																   {
             																   	comercialdepab=comercialdepab+atoi(total1[indicador7].c_str());
																				}
																				}
																					
																				}
			 }
			 }

	}
	else
	
	
	
	
	{
		
		if (categoriaservicio[indicador7]=="2")
	{
totalxcategoria1=totalxcategoria1+atoi(total1[indicador7].c_str())	;

    if(zonaservicio[indicador7]=="1")
             {
             	res1=res1+atoi(total1[indicador7].c_str());
             	
             	
             																   if (tiposervicio[indicador7]=="1")
             																   {
             																   	resiterrenoa=resiterrenoa+atoi(total1[indicador7].c_str());
																				}
																				else 
																				{
																					  if (tiposervicio[indicador7]=="2")
             																   {
             																   	resicasaa=resicasaa+atoi(total1[indicador7].c_str());
																				}
																				else{
																					  if (tiposervicio[indicador7]=="3")
             																   {
             																   	residepaa=residepaa+atoi(total1[indicador7].c_str());
																				}
																				}
																					
																				}
             	
			 }
			 else
			 {
			 	if(zonaservicio[indicador7]=="2")
             {
             res2=res2+atoi(total1[indicador7].c_str());
             	 if (tiposervicio[indicador7]=="1")
             																   {
             																   	resiterrenob=resiterrenob+atoi(total1[indicador7].c_str());
																				}
																				else 
																				{
																					  if (tiposervicio[indicador7]=="2")
             																   {
             																   	resicasab=resicasab+atoi(total1[indicador7].c_str());
																				}
																				else{
																					  if (tiposervicio[indicador7]=="3")
             																   {
             																   	residepab=comercialdepab+atoi(total1[indicador7].c_str());
																				}
																				
	 															   
																				}
																					
																				}
																				 
			 }
			 else{
			 		if(zonaservicio[indicador7]=="3"){
					              res3=res3+atoi(total1[indicador7].c_str());

			 	
			 	if (tiposervicio[indicador7]=="1")
             																   {
             																   	resiterrenoc=resiterrenoc+atoi(total1[indicador7].c_str());
																				}
																				else 
																				{
																					  if (tiposervicio[indicador7]=="2")
             																   {
             																   	resicasac=resicasac+atoi(total1[indicador7].c_str());
																				}
																				else{
																					  if (tiposervicio[indicador7]=="3")
             																   {
             																   	residepac=residepac+atoi(total1[indicador7].c_str());
																				}
																				
	 															   
																				}
																					
																				}
																			}
			 	
			 }
			 }

	
	}
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	  aumento6++;
indicador7=indicador7+1;  
}




cout<<"El total por categoria comercio es de           "<<totalxcategoria<<endl;
cout<<"\n"<<endl;
cout<<"El total por categoria comercio y zona A es de  "<<totalcomercioa<<endl;
cout<<"El total por categoria comercio, zona A y terreno es de   "<<comercialterrenoa<<endl;
cout<<"El total por categoria comercio, zona A y Casa es de   "<<comercialcasaa<<endl;
cout<<"El total por categoria comercio, zona A y Departamento es de   "<<comercialdepaa<<endl;
cout<<"\n"<<endl;
cout<<"El total por categoria comercio y zona b es de  "<<totalcomerciob<<endl;
cout<<"El total por categoria comercio, zona B y terreno es de   "<<comercialterrenob<<endl;
cout<<"El total por categoria comercio, zona B y Casa es de   "<<comercialcasab<<endl;
cout<<"El total por categoria comercio, zona B y Departamento es de   "<<comercialdepab<<endl;

cout<<"\n"<<endl;
cout<<"\n"<<endl;

cout<<" El total por categoria residencial  es de  "<<totalxcategoria1<<endl;
cout<<"\n"<<endl;

cout<<"El total por categoria residencial y zona A es de  "<<res1<<endl;
cout<<"El total por categoria residencial, zona A y terreno es de   "<<resiterrenoa<<endl;
cout<<"El total por categoria residencial, zona A y Casa es de   "<<resicasaa<<endl;
cout<<"El total por categoria residencial, zona A y Departamento es de   "<<residepaa<<endl;

cout<<"\n"<<endl;

cout<<"El total por categoria residencial y zona B es de  "<<res2<<endl;

cout<<"El total por categoria residencial, zona B y terreno es de   "<<resiterrenob<<endl;
cout<<"El total por categoria residencial, zona B y Casa es de   "<<resicasab<<endl;
cout<<"El total por categoria residencial, zona B y Departamento es de   "<<residepab<<endl;

cout<<"\n"<<endl;

cout<<"El total por categoria residencial y zona C es de  "<<res3<<endl;

cout<<"El total por categoria residencial, zona C y terreno es de   "<<resiterrenoc<<endl;
cout<<"El total por categoria residencial, zona C y Casa es de   "<<resicasac<<endl;
cout<<"El total por categoria residencial, zona C y Departamento es de   "<<residepac<<endl;




cout<<"Si desea regresar al menu oprima 1, si no presione 2 "<<endl;
cin>>regreso;
x=LOOP(regreso);
 system("cls");

}
}


}

