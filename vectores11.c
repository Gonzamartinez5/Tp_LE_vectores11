#include <stdio.h>

int main(void) {
  int vect[10],mientras,indice;
  printf("Ingrese los 10 numeros\n");
  for (int i=0; i<10; i++){
    scanf("%d",&mientras);
    if (mientras>=0&&mientras<=10){
      vect[i]=mientras;
    }
  }
  printf("Ingrese el indice a borrar\n");
  scanf("%d",&indice);
  if (indice>=0&&indice<=9){
    for (int u=indice;u<9;u++){
      vect[u]=vect[u+1];
    }
    vect[9]=0;
  }
  for (int y=0;y<10;y++)printf("%d ",vect[y]);
}