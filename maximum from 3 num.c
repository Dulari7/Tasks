#include <stdio.h>
int main(){
    int num1,num2,num3;
    printf("Enter the first num:");
    scanf("%d",&num1);
    printf("Enter the second num:");
    scanf("%d",&num2);
    printf("Enter the third num:");
    scanf("%d",&num3);
    
    if (num1>num2 && num1>num3){
        printf("Num1 is max");
    }
    
    else if(num2>num1 && num2>num3){
        printf("Num2 is max");
    }
    
    else{
        printf("Num3 is max");
    }
    return 0;
}