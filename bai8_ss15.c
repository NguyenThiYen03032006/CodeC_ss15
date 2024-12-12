#include <stdio.h>
#include<string.h>
int main(void){
    char str[]="sap den tet roi";
    for(int i=0; i<strlen(str); i++){
        if(str[i]==' ' && (97<=str[i+1] && str[i+1]<=122)){
           // printf("%d  ", str[i+1]);
            str[i+1] -= 32;
        }
        if((97<=str[0] && str[0]<=122)){
            //printf("%d  ", str[0]);
            str[0] -= 32;
        }
    }
    printf(" \n %s \n", str);
    return 0;
}
