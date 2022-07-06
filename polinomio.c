#include <stdio.h>
#include <math.h>
int main(){
float a,b,c,x1,x2,delta;
printf("digite a:\n");scanf("%d%",&a);
printf("digite b:\n");scanf("%d%",&b);
printf("digite c:\n");scanf("%d%",&c);

delta=(b*b)-(4*a*c);
	if(delta>0){
      printf("são duas raizes reais:\n");
x1=(-b+sqrt(delta))/(2*a);
x2=(-b-sqrt(delta))/(2*a);
      printf("x1= %d\n",x1);
      printf("x2= %d\n",x2);
}
if (delta==0){
printf ("\n so possui uma raiz real:\n");
x1=(-b)/(2*a);
      printf("\n x=%d",x1);}
if (delta < 0)
      printf("\n não tem raizes reais");
return 0;
}
