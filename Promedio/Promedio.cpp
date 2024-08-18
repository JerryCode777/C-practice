#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
    //declaracion de variables
   int nAlumnos;
   double suma = 0, promedio;

   cout<<"Ingrese el numero de alumnos:";
   cin>>nAlumnos;

   for(int i = 1; i <= nAlumnos; i=i+1){
    float calificacion;
    do{
        cout<<"Ingrese la calificacion del alumno "<<i<<": ";
        cin>>calificacion;
        if(calificacion == 0 || calificacion > 20){
            cout<<"\n Error, calificacion no valida, ingrese valor de 0 a 20";
        }
    }while(calificacion < 0 || calificacion >20);

    suma += calificacion;
   }
   promedio = suma/nAlumnos;
   
   if(promedio > 10.5){
    cout<<"El promedio de la clase es aprobatorio";
   }else{
    cout<<"El promedio de la clase es desaprobatorio";
   }
   return 0;
}

