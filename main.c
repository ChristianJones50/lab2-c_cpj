// Author: Christian Jones cpj5199@psu.edu 
// Collaborator: Ivy Qi ijq5005@psu.edu
// Collaborator: Dongsheng Zhang dkz5086@psu.edu
// Section: 5
// Breakout: 14

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  char* grade = readline("Enter your CMPSC 131 grade: ");
  double gradeDub = atof(grade);
  // Finds the corresponding letter to the grade point
  if (gradeDub >= 93.0) {
    printf("Your letter grade for CMPSC 131 is A.\n");
  } else if (gradeDub >= 90.0) {
    printf("Your letter grade for CMPSC 131 is A-.\n");
  } else if (gradeDub >= 87.0) {
    printf("Your letter grade for CMPSC 131 is B+.\n");
  } else if (gradeDub >= 83.0) {
    printf("Your letter grade for CMPSC 131 is B.\n");
  } else if (gradeDub >=  80.0) {
    printf("Your letter grade for CMPSC 131 is B-.\n");
  } else if (gradeDub >= 77.0) {
    printf("Your letter grade for CMPSC 131 is C+.\n");
  } else if (gradeDub >= 70.0) {
    printf("Your letter grade for CMPSC 131 is C.\n");
  } else if (gradeDub >= 60.0) {
    printf("Your letter grade for CMPSC 131 is D.\n");
  } else if (gradeDub < 60.0) {
    printf("Your letter grade for CMPSC 131 is F.\n");
  } else {
    printf("Error Calculating Grade");
  }
}
