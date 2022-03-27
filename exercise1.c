#include<stdio.h>
int main(){
    //printf("Merhaba Yazilimci \nMerhaba\n");
    //printf("C Programlamaya Hoşgeldiniz");
 /*
    printf("%d\n",12/9);
    printf("%.2f",12/9.0);
 */
   //printf("%d",(int)3.2);
   int yaricap;
   float hacim;
   float pi=3.14;
   printf("kurenin yaricapini giriniz");
   scanf("%d",&yaricap);

   hacim=(4/3.0)*pi*yaricap*yaricap*yaricap;

   printf("hacim=%f",hacim);


    return 0;
}