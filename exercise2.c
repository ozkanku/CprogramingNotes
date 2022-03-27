#include<stdio.h>
int main(){
/*
int a,b,c,d,e;
float ort;

printf("sinav notlarini giriniz");
scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

ort=(a+b+c+d+e)/5.0;

printf("ortalama:%.2f dir",ort);
*//*
int note;
printf("please write note:");
scanf("%d",&note);

if(note>60){
    printf("gectiniz");
}
else{
    printf("kaldınız");
}
*/
int vize1,vize2,final;
float ort;
printf("lutfen vize1 notunu gir");
scanf("%d",&vize1);

printf("lutfen vize2 notunu gir");
scanf("%d",&vize2);

printf("lutfen final notunu gir");
scanf("%d",&final);

ort=(vize1+vize2+final)/3.0;

if(ort<=100 && ort>=85){
    printf("supersin ortlaman %f",ort);
}
else if(ort<85 && ort>=50){
    printf("fena degilsin ortalaman %f",ort);
}
else{
    printf("üzgünüm kaldın ortalaman %f",ort);
}









    return 0;
}