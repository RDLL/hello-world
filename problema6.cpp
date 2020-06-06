#include <iostream>
#include <ctime>

using namespace std;

void generar(int mat[4][4]);
void imprimir(int mat[4][4]);

int main(){
    int mat[4][4];
    srand(time(NULL));
    generar(mat);
    imprimir(mat);
}

void generar(int mat[4][4]){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            mat[i][j]=rand()%50+1;
            if(i%2==0){
                while(mat[i][j]%2!=0)
                    mat[i][j]=rand()%50+1;
            }
             else{
                while(mat[i][j]%2==0)
                    mat[i][j]=rand()%50+1;
            }
        }
    }
}

void imprimir(int mat[4][4]){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++)
            cout<<mat[i][j]<<"\t";
        cout<<endl;
    }
}
