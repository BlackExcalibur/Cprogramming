#include<stdio.h>
#include<math.h>
int rootQuadraticFinder(float a, float b, float c);

int main(){
    float q,o,f;
    printf("\n\na: ");
    scanf("%f",&q);
    printf("b: ");
    scanf("%f",&f);
    printf("c: ");
    scanf("%f",&o);
    rootQuadraticFinder(q,f,o);
}

int rootQuadraticFinder(float a, float b, float c){
    float t,x,y;
    t=(float)pow(b,2)-4*(a*c);
    if(t<0){
        printf("This quadratic equation will return complex roots\n");
    }else if(t>0){
        printf("This quadratic equation will return real distinct roots\n");
        x=(float)(-b+pow(t,0.5))/(2*a);
        y = (float)(-b-pow(t,0.5))/(2*a);
        printf("The roots of the quadratic equation is %.1f and %.1f\n",x,y);
    }else if(t==0){
        printf("This quadratic equation will return real equal roots\n");
        x=(float)(-b+pow(t,0.5))/(2*a);
        printf("The root of the quadratic equation is %.1f\n",x);
    }
    return 0;
}