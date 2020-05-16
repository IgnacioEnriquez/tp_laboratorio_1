#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArrayEmployees.h"
#include "Funciones.h"
#include "dataWarehouse.h"
#include "ABM.h"

#define TAM 999
#define TAMP 10

void harcodearEmpleados(Employee* list,int cant);
int main()
{
   Employee empleados[TAMP];
   char seguir = 's';
   int flag;
   int id = 0;

   initEmployees(empleados,TAMP);

   do
    {
      switch(menu())
      {
    case 1:
        altaEmpleado(empleados,&flag,TAMP,id);
        if(flag == 1)
        {
            id++;
        }
        break;
    case 2:
        if(flag == 1)
        {
        modificarEmpleado(empleados,TAMP);
        break;
        }
        else
        {
            printf("----------------------------------------------------\n");
            printf("Debe dar de alta un empleado para usar esta opcion\n");
            printf("----------------------------------------------------\n");
            system("pause");
            break;
        }
    case 3:
        if(flag == 1)
        {
        bajaEmpleado(empleados,TAMP);
        break;
        }
        else
        {
        printf("----------------------------------------------------\n");
        printf("Debe dar de alta un empleado para usar esta opcion\n");
        printf("----------------------------------------------------\n");
        system("pause");
        break;
        }
    case 4:
        if(flag == 1)
        {
        informes(empleados,TAMP);
        break;
        }
        else
        {
        printf("----------------------------------------------------\n");
        printf("Debe dar de alta un empleado para usar esta opcion\n");
        printf("----------------------------------------------------\n");
        system("pause");
        break;
        }

    case 5:
        seguir = 'n';
        break;

    default:
        printf("----------------------------------------------------\n");
        printf("Opcion elegida incorrecta\n");
        printf("----------------------------------------------------\n");
        system("pause");
      }


    system("cls");
    }while(seguir == 's');





    return 0;
}
void harcodearEmpleados(Employee* list,int cant)
{

    for(int i = 0; i< cant; i++)
    {

        list[i].id = ids[i];
        strcpy(list[i].name, nombres[i]);
        strcpy(list[i].lastName, apellidos[i]);
        list[i].salary = sueldos[i];
        list[i].isEmpty = 0;
        list[i].sector = idsSector[i];

    }

}

