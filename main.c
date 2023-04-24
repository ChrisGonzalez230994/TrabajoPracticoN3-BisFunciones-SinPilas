#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define ESC 27

int valorRandom (int * i);
void cargaDeValores(int * i);
void mayorMenor(int * nro1, int * nro2, int * nro3);
int sumaValores (int * p);
void tablaMultiplicar (int  nro);
int valorNegativo (int  i);
int operacionSuma(int num1, int num2);
int operacionSuma(int num1, int num2);
int operacionResta(int num1, int num2);
int operacionMultiplicacion(int num1, int num2);
float operacionDivision(int num1, int num2);
void calculadora(int num1, int num2);
void menuTrabajoPractico();
void muestraOpcionesTrabajoPractico();


int main()
{
    menuTrabajoPractico();

    return 0;
}



void menuTrabajoPractico()
{
    int valor;
    int num1=0;
    int num2=0;
    int num3=0;
    int suma=0;
    int negativo=0;
    int resta=0;
    int multiplicacion=0;
    int division=0;

    char opcion;
    do
    {
        system("cls");
        muestraOpcionesTrabajoPractico();

        opcion = getch();

        switch(opcion)
        {
        case '1':
            valor = valorRandom(&valor);
            printf("\nEl valor aleatorio es: %d", valor);
            break;

        case '2':
            cargaDeValores(&num1);
            cargaDeValores(&num2);
            cargaDeValores(&num3);

            printf("\nDATO 1: %d", num1);
            printf("\nDATO 2: %d", num2);
            printf("\nDATO 3: %d", num3);

            puts("\n");
            system ("pause");
            puts("\n");
            mayorMenor(num1,num2,num3);
            break;

        case'3':
            printf("\nEl valor aleatorio es: %d", valor);
            suma = sumaValores(valor);
            printf("\nLa suma de todos los inferiores a %d es %d", valor, suma);
            break;

        case '4':
            cargaDeValores(&num1);
            printf("\nLa tabla de multiplicar del nro %d es:", num1);
            tablaMultiplicar(num1);
            break;

        case'5':
            cargaDeValores(&num1);
            cargaDeValores(&num2);

            printf("\nDATO 1: %d", num1);
            printf("\nDATO 2: %d", num2);

            calculadora(num1, num2);
            break;

        case'6':
            cargaDeValores(&num1);
            negativo = valorNegativo(num1);
            printf("\nEl valor negativo de %d es %d", num1, negativo);
            break;

        case'7':

            break;


        }
        getch();
    }
    while(opcion != ESC);

}



void muestraOpcionesTrabajoPractico()
{
    printf("\n\t\t\t <<<<<<< EJERECICIOS TP 3 - FUNCIONES BIS >>>>>>>>");
    printf("\n");
    printf("\n");
    printf("\n Ejercicio 1 - Valor Random");
    printf("\n Ejercicio 2 - Mayor y Menor de 3 numeros");
    printf("\n Ejercicio 3 - Suma de los inferiores");
    printf("\n Ejercicio 4 - Tabla de multiplicar");
    printf("\n Ejercicio 5 - Calculadora");
    printf("\n Ejercicio 6 - Negativo por Positivo");
    printf("\n");
    printf(" ESC para salir...");
}



int valorRandom (int * i) //FUNCION DE CARGAR VALOR RANDOM
{
    srand (time(NULL));
    int num= rand() %12;

    return num;
}




void cargaDeValores(int * i) //FUNCION CARGA DE DATO POR USUARIO
{
    printf("\nIngrese dato: ");
    scanf("%d", i);
}





void mayorMenor(int * nro1, int * nro2, int * nro3) //FUNCION DE MAYOR Y MENOR
{
    if(nro1>nro2 && nro1 > nro3)
    {
        printf("\nEl mayor es %d", nro1);
    }
    else if (nro2 > nro1 && nro2 > nro3)
    {
        printf("\nEl mayor es %d", nro2);
    }
    else
    {
        printf("\nEl mayor es %d", nro3);
    }


    if(nro1<nro2 && nro1 < nro3)
    {
        printf("\nEl Menor es %d", nro1);
    }
    else if (nro2 < nro1 && nro2 < nro3)
    {
        printf("\nEl Menor es %d", nro2);
    }
    else
    {
        printf("\nEl Menor es %d", nro3);
    }

}



int sumaValores (int * nro) // FUNCION SUMAR VALOR INFERIORES AL INGRESADO EN LA PRIMERA FUNCION
{
    int dato=0;
    for (int i=0; i <nro; i++)
    {
        dato= dato + i;
    }

    return dato;
}


void tablaMultiplicar (int nro) // FUNCION TABLA DE MULTIPLICAR
{
    int producto=0;
    for(int i=0; i<=10; i++)
    {
        producto = nro * i;
        printf("\n%d x %-3d = %3d", nro,i,producto);
    }

}


int valorNegativo (int  i) //FUNCION DE VALOR NEGATIVO
{

    int negativo=0;

    negativo = i * -1;

    return negativo;
}



int operacionSuma(int num1, int num2)
{
    int suma=0;
    suma= num1 + num2;

    return suma;
}


int operacionResta(int num1, int num2)
{
    int resta=0;
    resta= num1 - num2;

    return resta;
}


int operacionMultiplicacion(int num1, int num2)
{
    int multiplicacion=0;
    multiplicacion = num1 * num2;

    return multiplicacion;
}

float operacionDivision(int num1, int num2)
{
    float division=0;
    division = (float) num1 / num2;

    return division;
}


void calculadora(int num1, int num2)
{
    char opcion;
    int suma=0;
    int resta=0;
    int multiplicacion=0;
    float division=0;
    do
    {
        system ("cls");
        operacionesCalculadora();
        opcion = getch();

        switch (opcion)
        {
        case '1':
            suma = operacionSuma(num1, num2);
            printf("\nLA SUMA ENTRE %d Y %d ES %d", num1,num2,suma);
            break;

        case '2':
            resta = operacionResta(num1, num2);
            printf("\nLA RESTA ENTRE %d Y %d ES %d", num1,num2,resta);
            break;

        case '3':
            multiplicacion = operacionMultiplicacion(num1, num2);
            printf("\nLA MULTIPLICACION ENTRE %d Y %d ES %d", num1,num2,multiplicacion);
            break;


        case '4':
            division = operacionDivision(num1, num2);
            printf("\nLA DIVISION ENTRE %d Y %d ES %.2f", num1,num2,division);
            break;
        }
        getch();
    }
    while(opcion != ESC);
}

void operacionesCalculadora()
{
    printf("\n\t\t\t <<<<<<< CALCULADORA >>>>>>>>");
    printf("\n");
    printf("\n 1. SUMA");
    printf("\n 2. RESTA");
    printf("\n 3. MULTIPLICACION");
    printf("\n 4. DIVISION");
    printf("\n");
    printf("\n ESC para salir...");
}
