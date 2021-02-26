#include <stdio.h>

char line [100];
int percentage;   
char grade;                
        
int main() {

  printf("write the percentage of right answers: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d", &percentage); 

	  if (percentage >= 91) {
		grade = 'A';
		
	} else if (percentage >= 81) {
		grade = 'B';

	} else if (percentage >= 71) {
		grade = 'C';

	} else if (percentage >= 61) {
		grade = 'D';

  } else if (percentage >=1 ) {
		grade = 'F';
    }
    
	printf("The grade is %c\n", grade);

	return(0);
}