
#include <stdio.h>

/*
 * Potrfolio submission
 * Name: Joseph Butcher-Johns
 * ID:201948424
 */

 int main( void ) {

    // define and initialise variables for the problem data 
    float salary = 30000;
    float NIRate = 0.09;
    float TAXRate = 0.25;
    // calculate the deductions and final take-home salary
    float NIDeduction = salary * NIRate;
    float salaryAfterNI = salary - NIDeduction;
    float TAXDeduction = (salaryAfterNI - 12500) * TAXRate;
    float TakeHome = salaryAfterNI - TAXDeduction;
    // Use only these print statement with appropriate formatting and variable names
    printf("Salary £%.2f\n", salary);
    printf("NI contribution £%.2f\n", NIDeduction);
    printf("Tax contribution £%.2f\n", TAXDeduction);
    printf("Take home salary £%.2f\n", TakeHome);

   return 0;
 }