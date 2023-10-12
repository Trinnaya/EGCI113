
#include <stdio.h>
#include <math.h>

int main()
{
    //finding roots of polynomials
    int a,b,c;
    //switchcase doesn't work with double
    printf("Input a b c: ");
    scanf("%d %d %d",&a,&b,&c);
    puts("roots of the equation");
    
    switch(a) {
        case 1: printf("x^2"); break;
        case 0: break;
        case -1: printf("-x^2"); break;
        default: printf("%dx^2",a);
    }
    
    if(a!=0 && b>0) printf("+");
    
    switch(b) {
        case 1: printf("x"); break;
        case 0: break;
        case -1: printf("-x"); break;
        default: printf("%dx",b);
    }
    
    if(c>0 && (b!=0 || a!=0)) printf("+");
    if(c!=0) printf("%d=0\n",c);
    
    
    float sq=b*b-4*a*c;
    if(a==0) {
        if(b!=0)
            printf("The answer is %.2f\n",-(float)c/b);
        else printf("No solutions\n");
    }
    else {
        if(sq==0){
        printf("The answer is %.2f\n",-(float)b/(2*a));
        }
        else if(sq<0) printf("No solutions\n");
        else {
        printf("The answers are %.2f",(-b+sqrt(sq))/(2*a));
        printf("and %.2f\n",(-b-sqrt(sq))/(2*a));
        }
    }
    

    

    
    

}