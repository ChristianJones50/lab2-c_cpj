// Author: Christian Jones cpj5199@psu.edu 
// Collaborator:
// Collaborator:
// Collaborator: 
// Section: 
// Breakout: 

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  char* grade = readline("Enter your CMPSC 131 grade: ");
  double gradeDub = atof(grade);
  // Finds the corresponding letter to the grade point
  if (gradeDub >= 93.0) {
    char* letter = "A";
    printf("Your letter grade for CMPSC 131 is %s", letter);
  } else if (gradeDub >= 90.0) {
    char* letter = "A-";
    printf("Your letter grade for CMPSC 131 is %s", letter);
  } else if (gradeDub >= 87.0) {
    char* letter = "B+";
    printf("Your letter grade for CMPSC 131 is %s", letter);
  } else if (gradeDub >= 83.0) {
    char* letter = "B";
    printf("Your letter grade for CMPSC 131 is %s", letter);
  } else if (gradeDub >=  80.0) {
    char* letter = "B-";
    printf("Your letter grade for CMPSC 131 is %s", letter);
  } else if (gradeDub >= 77.0) {
    char* letter = "C+";
    printf("Your letter grade for CMPSC 131 is %s", letter);
  } else if (gradeDub >= 73) {
    char* letter = "C";
    printf("Your letter grade for CMPSC 131 is %s", letter);
  } else if (gradeDub >= 70) {
    char* letter = "C-";
    printf("Your letter grade for CMPSC 131 is %s", letter);
  } else if (gradeDub >= 60) {
    char* letter = "D";
    printf("Your letter grade for CMPSC 131 is %s", letter);
  } else if (gradeDub < 60) {
    char* letter = "F";
    printf("Your letter grade for CMPSC 131 is %s", letter);
  } else {
    printf("Error Calculating Grade");
  }
  
  

}
