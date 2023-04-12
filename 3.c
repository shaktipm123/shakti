#include<stdio.h>
int main(){
    int a,b,c,d;
    float ratio;
    printf("Enter four integer values \n");
    scanf("%d\n%d\n%d\n%d", &a,&b,&c,&d);

    if(c-d != 0)/* Execute statement block*/
    {
        ratio=(a+b)/(c-d);
        printf("ratio = %f \n", ratio);
    }
    return 0;
}

