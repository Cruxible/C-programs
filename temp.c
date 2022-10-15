#include <stdio.h>
#include <ctype.h>

int main(){

	char unit;
	float temp;

	printf("\nIs the temprature in (F) or (C)?: ");
	scanf("%c", &unit);

	unit = toupper(unit);

	if(unit == 'C'){
		printf("Enter the temp in C: ");
		scanf("%f", &temp);
		temp = (temp * 9 / 5) + 32;
		printf("\nThe temp in F is: %.1f", temp);
	}
	else if(unit == 'F'){
		printf("Enter the temp in F: ");
		scanf("%f", &temp);
		temp = ((temp - 32) * 5) / 9;
		printf("\nThe temp in C is: %.1f", temp);
	}
	else{
		printf("\n %c is not vailad unit.", unit);
	}

	return 0;
}