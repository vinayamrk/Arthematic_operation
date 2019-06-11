
#include <stdio.h>
#include <stdlib.h>

int ADD(int x,int y);
int SUB(int x,int y);
int MULT(int x,int y);
float DIVI(int x,int y);
void DISP(float ans);
void READ(int *x,int *y);


int main()
{
    void(*f1)(int *,int *);
       f1=&READ;
    int(*f3)(int,int);
    float(*f2)(int,int);
    void(*f4)(float);

    int a,b;
    float ans;
    char c;

    do
    {
        printf("Enter arithmetic operation(+,-,*,/) and e to exit : ");
        scanf(" %c",&c);
        switch(c)
        {
            case '+':  (*f1)(&a,&b);
                            f3=&ADD;
                            break;
            case '-':   (*f1)(&a,&b);
                         f3=&SUB;
                        break;
            case '*': (*f1)(&a,&b);
                         f3=&MULT;
                        break;
            case '/': (*f1)(&a,&b);
                         f2=&DIVI;
                        break;
            case 'e': exit(0);

        }
        ans=(*f3)(a,b);
        (*f4)(ans);

    }while(c!='e');

    return 0;
}

void READ(int *x,int *y)
{
    printf("Enter two values : ");
    scanf("%d%d",x,y);

}

int ADD(int x,int y)
{
    return(x+y);

}


int SUB(int x,int y)
{
    return(x-y);

}


int MULT(int x,int y)
{
    return(x*y);

}


float DIVI(int x,int y)
{
    return(x/y);

}


void DISP(float ans)
{
    printf("The result is %0.2f\n",ans);
}




