#include <iostream>

using namespace std;
//14 Sumando los valores de un array recursivamente
int sum(int arr[], int cont, int suma, int tam){
	if( cont == tam)
		return suma;
	else{
		suma += arr[cont];
		cont+= 1;
		return sum(arr, cont, suma, tam);
	}
}
//Imprimir array opcional
void impri_arr(int arr[], int tam){
	for( int i = 0; i < tam; i++){
		cout << arr[i] << endl;
	}
}
//Formar un array opcional
void formar(int arr[],int tam){
	cout << "Ingrese los valores de tu array: "<< endl;
	for(int i = 0; i < tam; i++){
	cin >> arr[i];
	}
}
int main()
{
    int tama;
    cout << "Ingrese el tamanio de su array: "<< endl;
	cin >> tama;
	int ararb[tama];
	formar(ararb, tama);
	int suma = 0;
	int cont = 0;
	suma = sum(ararb, cont , suma, tama);
	cout << suma;

    return 0;
}
