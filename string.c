#include<stdio.h>
#include<string.h>

//Fonksiyona parametre olara karakter dizisi gönderme.(strlen fonksiyonu)
//Sending a string to the function as a parameter.(strlen function)

int return_lenght(char array2[]);

int main(){
	
	char array[]="Seyda";

	
	printf("Lenght of array:%d",return_lenght(array));
	

	return 0;
}

int return_lenght(char array2[]){
	
	int i;
	int lenght=0;
	for(i=0;array2[i]!='\0';i++){
		lenght++;
	}
	
	return lenght;
	
}

