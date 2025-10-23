

#include "stdio.h"

int multiply(int a,int b);
int add(int a,int b);

int main(){
   printf("%i",multiply(2,5));
   printf("%i" , add(2*5));

}

int multiply(int a,int b){
   return (a*b);
}

int add(int a,int b){
   return (a+b);
}
