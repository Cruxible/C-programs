//Calling functions

#include <stdio.h>
#include <stdlib.h>

//create function
void sayhi(char name[], int age) {
	printf("Hello %s, you are %d\n!!", name, age);
}

int main(){

	//call the function
	sayhi("Mike", 40);

	return 0;
}

//output: Hello Mike, you are 40

/* 
//Calling functions

#include <stdio.h>
#include <stdlib.h>

//create function
void sayhi(char name[]) {
	printf("Hello User!!");
}

int main(){

	//call the function
	sayhi();

	return 0;
}

//output: Hello User!!

*/