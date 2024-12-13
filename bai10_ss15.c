#include<stdio.h>
#include<string.h>
int main(){
	char text[50]="hello world";
	unsigned long size=strlen(text); 
	char word[50]; 
	int a=0; 
	int number[50]={0}; 
	word[a]=text[0] ; 
	for(int i=1;i<size;i++){
		int flag=-1; 
		for(int j=0;j<=a;j++){
			if(word[j]==text[i]){
				flag=1; 
				break; 
			} 
		} 
		if(flag!=1){
				a++; 
				word[a]=text[i];
			} 
	} 
	for (int i = 0; i < size; i++) {
        for (int j = 0; j <= a; j++) {
            if (text[i] == word[j]) {
                number[j]++;
                break;
            }
        }
    }
    for (int i = 0; i <= a; i++) {
        printf("ki tu '%c' xuat hien %d lan\n", word[i], number[i]);
    }
	return 0; 
} 
