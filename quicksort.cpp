#include <iostream>
#include <ctime>

using namespace std;

void quicksort(int arr[],int primero,int ultimo);
void generar(int arr[],int n);
void imprimir(int arr[],int n);

int main(){
    int arr[20];
    srand(time(NULL));
    generar(arr,20);
    cout<<"Arreglo original"<<endl;
    imprimir(arr,20);
    quicksort(arr,0,19);
    cout<<endl<<"Quicksort"<<endl;
    imprimir(arr,20);
}

void quicksort(int arr[],int primero,int ultimo){
    int i,j,centro,pivote;
    centro=(primero+ultimo)/2;
    pivote=arr[centro];
    i=primero;
    j=ultimo;
    do{
        while(arr[i]<pivote) i++;
        while(arr[j]>pivote) j--;
        if(i<=j){
            int tmp;
            tmp=arr[i];
            arr[i]=arr[j];
            arr[j]=tmp;
            i++;
            j--;
        }
    }while(i<=j);
    if(primero<j)
        quicksort(arr,primero,j);
    if(i<ultimo)
        quicksort(arr,i,ultimo);

}

void generar(int arr[],int n){
    for(int i=0;i<n;i++)
        arr[i]=rand()%30+1;
}

void imprimir(int arr[],int n){
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
