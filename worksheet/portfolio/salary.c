
#include <stdio.h>

/*
 * Potrfolio submission
 * Name: Joseph Butcher-Johns
 * ID:201948424
 */

 int main( void ) {

    // define and initialise variables for the problem data 
   float salary = 36250.00;
   float NIRate = 0.08;
   float TAXRate = 0.15;
    // calculate the deductions and final take-home salary
   float NIDeduction = salary*NIRate;
   float TAXDeduction = salary - 12500;
   TAXDeduction = TAXDeduction * TAXRate;
   float TakeHome = salary - (TAXDeduction + NIDeduction);
    // Use only these print statement with appropriate formatting and variable names
    printf("Salary £%.2f\n", salary);
    printf("NI contribution £%.2f\n", NIDeduction);
    printf("Tax contribution £%.2f\n", TAXDeduction);
    printf("Take home salary £%.2f\n", TakeHome);

    return 0;
 }