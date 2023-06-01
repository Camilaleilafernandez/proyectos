/* a. Se desea calcular el valor de pi usando la serie de Liebniz, sin usar ninguna optimizacion.
   b.Debe iterar hasta que el valor de pi sea correcto en sus 6 primeros decimales 3,141592*/

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	double pi=0.0;
	double sum=0.0;
	int sign =1;
	int denominador=1;
	while (abs(pi-3.141592)>0.000001)//abs devuelve el valor absoluto de un numero
	{
	sum =sum + sign*(1.0/denominador);
	sign=sign*-1;
	denominador= denominador + 2;
		pi=4*sum;
		
		
	}

	cout<<"el valor aproximado de pi es :"<<fixed<<setprecision(6)<<pi<<endl;
	return 0;
} 
