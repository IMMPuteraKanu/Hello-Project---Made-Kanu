#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//I Made Mahadika Putera Kanu - 1301204179
void guessNumber(int guess) {
    if (guess == 555){
        printf("Your answer is correct! \n");
    }else if (guess < 555) {
        printf("Your answer is too low! \n");
    }else {
        printf("Your answer is too high! \n");
    }
}



int main() {
	//I Made Mahadika Putera Kanu - 1301204179
	// Hello, World!
  	printf("Hello, World!");

	// Variabel and Types
	int a = 3;
  	float b = 4.5;
  	double c = 5.25;
  	float sum;

  	sum = a*b-c;

  	printf("The sum of a, b, and c is %f.", sum);
	
	//Arrays
	int grades[3];
  	int average;

  	grades[0] = 80;
  	grades[1] = 85;
  	grades[2] = 90;

  	average = (grades[0] + grades[1] + grades[2]) / 3;
  	printf("The average of the 3 grades is: %d", average);

	//Multidimensional Arrays
	int grades[2][5];
	float average;
	int i;
	int j;

	grades[0][0] = 80;
	grades[0][1] = 70;
	grades[0][2] = 65;
	grades[0][3] = 89;
	grades[0][4] = 90;

	grades[1][0] = 85;
	grades[1][1] = 80;
	grades[1][2] = 80;
	grades[1][3] = 82;
	grades[1][4] = 87;
 
	for (i = 0; i < 2 ; i++) {
	average = 0;
	for (j = 0; j < 5 ; j++) {
		average += grades[i][j];
	}

	average = average / 5;
	printf("The average marks obtained in subject %d is: %.2f\n", i, average);
	}
	
	//Conditions
    	guessNumber(500);
    	guessNumber(600);
    	guessNumber(555);
	
	//Strings
  	char *first_name = "John";
  	char last_name[] = "Boe";
  	char name[100];

 	last_name[0] = 'B';
 	sprintf(name, "%s %s", first_name, last_name);
  	if (strncmp(name, "John Boe", 100) == 0) {
		printf("Done!\n");
  	}
  	name[0]='\0';
  	strncat(name,first_name,4);
  	strncat(name,last_name,20);
  	printf("%s\n",name);
	
	//For Loop
	int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
  	int factorial = 1;
  	int i;

    	for(i = 0; i < 10; i++){
        	factorial = factorial * array[i];
   	}

  	printf("10! is %d.\n", factorial);

  	return 0;
}