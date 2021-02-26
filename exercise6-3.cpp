#include <stdio.h>

char line [100];
int percentage;  
char modifier;   
char grade;                
        
int main() {

  printf("write the percentage of right answers: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d", &percentage);

	modifier = ' '; 

	  if (percentage >= 91) {
		grade = 'A';
		if (percentage >= 98) {
			modifier = '+';
		} else if (percentage <= 93) {
			modifier = '-';
		}

	} else if (percentage >= 81) {
		grade = 'B';
		if (percentage >= 88) {
			modifier = '+';
		} else if (percentage <= 83) {
			modifier = '-';
		}

	} else if (percentage >= 71) {
		grade = 'C';
		if (percentage >= 78) {
			modifier = '+';
		} else if (percentage <= 73) {
			modifier = '-';
		}

	} else if (percentage >= 61) {
		grade = 'D';
		if (percentage >= 68) {
			modifier = '+';
		} else if (percentage <= 63) {
			modifier = '-';
    } if (percentage <= 60) {
		grade = 'F';
    }

	
}

	printf("The grade is %c%c\n", grade, modifier);

	return(0);
}