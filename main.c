

#include "stdio.h"

int divide(int a,int b)
int multiply(int a,int b);
int add(int a,int b);
int sub(int a,int b);

int main(){
   printf("%i",multiply(2,5));
   printf("%i" , add(2*5));
   printf("%i",sub(2,5));
   printf("%i",divide(2/5));
}

int multiply(int a,int b){
   return (a*b);
}

int add(int a,int b){
   return (a+b);
}

int sub(int a,int b){
   return(a-b);

int divide(int a,int b){
   return (a/b);
}
