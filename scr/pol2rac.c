#include "pol2rac.h"
/***********************************************************
*                   Funcines locales                       *
***********************************************************/

/*Resuelve el polinomio de segundo grado con coeficientes
  racionales. En caso de no tener soluci�n se coloca la
  variable estado con el valor correspondiente*/
void resuelve(ecseg* e){
  return;
}
/**********************************************************/
/*                      Funciones                         */
/**********************************************************/

/**************- Inicializa una ecuaci�n -*****************/
/* Inicializa una ecuaci�n
Recibe un apuntador de tipo ecseg y tres coeficientes racio-
  nales.
Regresa:
  OK, en caso de inicializar la ecuaci�n.
  APINV, si recibe un apuntador nulo
  DENCER, en casode recibir un cero como el tercer par�metro
Observaciones:
  Siempre debe utilizar esta funci�n para inicializar las
  ecuaciones con coeficientes racionales. No modificar 
  directamente los campos de la estructura.
*/
int ini_ec2r(ecseg* e, const racional* a, const racional* b, const racional* c){
  if(!(APVAL(e)&&APVAL(a)&&APVAL(b)&&APVAL(c)))
    return APINV;
  copia_rac(&(e->a),a);
  copia_rac(&(e->b),b);
  copia_rac(&(e->c),c);
  resuelve(e);
  return OK;
}

/* Convierte una ecuaci�n a cadena
Recibe Un apuntador a cadena de caracteres que debe tener 
  espacio suficiente para almacerna la ecuaci�n.
Regresa:
  Un apuntador a la misma cadena que recibe. En caso de te-
  ner un error regresa alguna de las siguientes cadenas:
  "NULL":   Recibe un apuntador nulo
  En caso contrario regresa una cadena que represetnta la 
  ecuaci�n de segundo grado. Por ejemplo
  (-3/4)x^2+(-5/3)x+(3)=0
Observaciones:
  Imprime la ecuaci�n tal y como est� no hace verificaciones
  No verifica que el tama�o del arreglo destino ni el auxi-
  liar, que utiliza de racional.h
*/
char* tostr_ec2r(char* sal ,const ecseg* e){
   char aux[TAMCADAUX];
   if(!(APVAL(sal) && APVAL(e)))
     strcpy(sal,"NULL");
   else{
     strcpy(sal,"");
	 tostr_rac(aux,&(e->a));
	 strcat(sal,aux);
	 strcat(sal,"x^2+");
	 tostr_rac(aux,&(e->b));
	 strcat(sal,aux);
	 strcat(sal,"x+");
	 tostr_rac(aux,&(e->c));
	 strcat(sal,aux);
	 strcat(sal,"=0");
   }
   return sal;
}
