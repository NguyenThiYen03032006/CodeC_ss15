#include <stdio.h>
#include<string.h>
int main(void){
    char letter;
    char str1[]="Sap den tet roi";
    char str2[100];
    int count=0;
    printf("Moi ban nhap vao 1 ky tu: ");
    scanf("%c", &letter);
    for(int i=0; i<strlen(str1); i++){
        if( letter != str1[i]){
            str2[count]= str1[i];
            count++;
        }
    }
    strcpy(str1,str2);
    printf("%s \n", str1);
    return 0;
}
