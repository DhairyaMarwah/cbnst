#include <stdio.h>
#include <math.h>
float f(float x)
{
   return x*x*x-4*x+1;
}
float df(float x){
    return 3*x*x-4;

}
int main(){
    float x0,x1;
    float f0,f1,df0;
    int i=0;
    printf("Enter the value of x0  \n");
    scanf("%f%f",&x0 );
    do{
        f0=f(x0);
        df0=df(x0) ;
        x1=x0-(f0/df0) ;
        f1=f(x1) ;
        x0=x1;  
        i++;
        printf("Iteration %d:root%f\n",i,x1);
    }while(fabs(f1)>0.0001);
     return 0;
}