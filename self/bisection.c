#include <stdio.h>
#include <math.h>
float f(float x)
{
   return x*x*x-4*x+1;
}
int main(){
    float x0,x1,x2,f0,f1,f2;
    printf("Enter the value of x0 and x1");
    scanf("%f%f",&x0,&x1);
    int i=0;
    do{
        f0=f(x0);
        f1=f(x1);
        x2=(x0+x1)/2;
        f2=f(x2);
        if(f2*f0 <0){
            x1=x2;
        }
        else{
            x0=x2;
        }
        i++;
    printf("Iteration %d:root%f\n",i,x2);
    printf("value of function : %f\n",f2);
    }while(fabs(f2)>0.0001);
}