#include<stdio.h>

int main()
{
    int i, num[5], sum=0;
    
    printf("Enter number\n");
    
    for(i=0; i<=4; i++){
    
       scanf("%d", &num[i]);
    
    }
    
    printf("\n\nAll eliment sum:- ");
    
    for(i=0; i<=4; i++){
    
       sum=sum+num[i];
    
    }
    
    printf("%d\n\n",sum);
    
    
    return 0;
}