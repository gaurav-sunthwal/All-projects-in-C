#include<stdio.h>


int main(int argc, char const *argv[])
{
    int a=3;
    int b=10;
    int c=5;


    

    if (a>b && a>c)
    {
       printf("a is greater");
    }else if(b>c && b>a){
        printf("b is greater");
    }else{
        printf("c is greater");
    }
    
    return 0;
}
