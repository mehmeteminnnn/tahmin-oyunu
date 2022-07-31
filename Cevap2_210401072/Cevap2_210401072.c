#include <stdio.h>
#include <stdlib.h>

int main()
{ int sayi,tahmin,x;
sayi=rand()%100+1;
while(x!=-1)
{

do
{  printf("Tahmininizi giriniz:\n");
   scanf("%d",&tahmin);
    if(sayi<tahmin)
        printf("Daha kucuk tahminde bulununuz.\n");
    else if(sayi>tahmin)
        printf("Daha buyuk tahminde bulununuz.\n");
    else
        printf("Dogru tahmin\n");
}while(sayi!=tahmin);
printf("Devam etmek icin 1'e cikmak icin -1'e basiniz.");
scanf("%d",&x);
}
    return 0;
}
