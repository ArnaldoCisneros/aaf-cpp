#include <stdlib.h>
#include <stdio.h>
#include <ac_estetica.h>
#include <ac_LPC.h>

#define LONG_MAX_STR 80
typedef char string[LONG_MAX_STR];

enum E_estados {est1,est2,est3};

struct Lfactura {
       unsigned int fecha;
       unsigned int cedula;
       string producto;
       unsigned int precio;
       lista *sig;
       };

struct Pproductos{
       unsigned int codigo;
       string nombre;
       unsigned int cantidad;
       unsigned int precio;
       pila *sig;
       };

struct Centro {
       unsigned int codigo;
       string nombre; //typedef char string[LONG_MAX_STR]; //#define LONG_MAX_STR 80
       string ciudad;
       E_estados estado; //enum E_estados {...};
       string direccion;
       unsigned int telefono;
       Pproductos disponibles;
       lista *Csig;
       Lfactura ventas;
       };
       
struct Cliente {
       string nombre;
       unsigned int cedula;
       string direccion;
       };

int main () {
    nl(1);rc('*',80);nl(1);
    e(36);printf("PROYECTO");nl(2);
    rc('*',80);nl(2);
    printf ("");
    system ("PAUSE");return 1;}
