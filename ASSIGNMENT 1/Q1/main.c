#include <stdio.h>

int main()
{   char number[100];
    int flag=0;
    int i=0;
    
    scanf("%s", number);
    while(number[i++]!='\0'){
       if(number[i] =='.'){
           flag++;
           continue;
       }
        
    }
    if(flag==1){
        printf("valid input");
    }else
    printf("invalid input");
    

    return 0;
}
