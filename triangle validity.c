#include<stdio.h>
int main()
{
int a,b,c;
printf("enter 3 sides of triangle:");
scanf("%d,%d,%d",&a,&b,&c);
if(a+b<=c || b+c<=a || a+c<=b){
    printf("this triangle is not valid");}
else{
printf("this triangle is valid\n");
if (a==b==c){
    printf("the triangle is equilateral");}
else if(a==b || b==c || a==c){
    printf("the triangle is isosceles");}
else{
    printf("the triangle is scalar");}
}
}
