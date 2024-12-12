#include <stdio.h>
#include<string.h>
int main(void){
    char str[]="My gmail is 12345@gmail.com";
    int count =0, flag=0, temp=0;
    for(int i=0; i<strlen(str); i++){
        if((65<=str[i] && str[i]<=90) ||( 97<=str[i] && str[i]<=122)){
            // canh 2 ktra chu: if(isalpha(str[i])){
            count++;
        }else if(48<=str[i] && str[i]<=57){
            // cach 2 ktra so :if(isdigit(str[i])){
            flag++;
        }else{
            // cach 2 ktra ky tu dac biet : temp = strlen(str) - count-flag;
            temp++;
        }
    }
    printf("So ky tu la chu: %d \n", count);
    printf("So ky tu la so: %d \n", flag);
    printf("So ky tu dac biet: %d \n", temp);
    return 0;
}
