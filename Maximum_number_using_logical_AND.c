#include <stdio.h>

int main() {
    // Write C code here
 int a,b,c;
        printf("Enter First Number\n");
        scanf("%d",&a);
        
        printf("Enter Second Number\n");
        scanf("%d",&b);
        
        printf("Enter Third Number\n");
        scanf("%d",&c);
        
        if(a>b && a>c)
        {
            printf("%d is greater\n",a);
        }
        if(b>a && b>c)
        {
            printf("%d is greater\n",b);
        }
        if(c>a && c>b)
        {
            printf("%d is greater",c);
        }
    return 0;
}