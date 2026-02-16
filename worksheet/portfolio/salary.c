
#include <stdio.h>

/*
 * Potrfolio submission
 * Name: Joseph Butcher-Johns
 * ID:201948424
 */

 int main( void ) {

    // define and initialise variables for the problem data 
   float salary = 36250;
   float NIRate = 0.08;
   float TAXRate = 0.15;
    // calculate the deductions and final take-home salary
   float NIDeduction = salary*NIRate;
   float TAXDeduction = salary - 12500;
   TAXDeduction = TAXDeduction * TAXRate;
   float TakeHome = salary - (TAXDeduction + NIDeduction);
    // Use only these print statement with appropriate formatting and variable names
    printf("Salary £...",salary);
    printf("NI contribution £...",NIDeduction);
    printf("Tax contribution £...",TAXDeduction);
    printf("Take home salary £...",TakeHome);

 }