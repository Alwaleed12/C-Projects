// include header file
#include "./headers/Decisions.h"

// write the code for the functions
// defined in the header file

// this function will use the comparison operators,
// and the if, if-else, if-else-if statements
void decisions1(void){
    // declare a variable of tyoe float
    // initialize it using constant defined in header file
    float num = NUM;

    // use if statement
    if (num < 40000.0) {
        printf("Num (%.2f) is less than 40000.0.\n", num);
    }

    num += num;

    // use if-else statement
    if (num < 40000.0) {
        printf("Num (%.2f) is less than 40000.0.\n", num);
    } else {
        printf("num (%.2f) is not less than 40000.0.\n", num);
    }

    num = 0.0;

    // use if-else-if statement
    if (num == 0.0) {
        printf("Num (%.2f) is equal to 0.0.\n", num);
    } else if (num < 40000.0) {
        printf("num (%.2f) is not less than 40000.0.\n", num);
    } else {
        printf("num (%.2f) is not less than 40000.0 and is not equal to 0.0.\n", num);
    }

}

/* this function will use the logical operators (&&, ||, !) */
void decisions2(void){
    // declare a variable of tyoe float
    // initialize it using constant defined in header file
    float num = NUM;

    // use the logical AND operator
    // both conditions must be true
    if (num > 0.0 && num < 40000.0){
        printf("Num (%.2f) is between 0.00 and 40000.0.\n");
    }

    // use the logical OR operator
    // only one condition must be true
    if (num > 0.0 || num < 40000.0){
        printf("Num (%.2f) is between 0.00 or less than 40000.0.\n");
    }

    // use the logical NOT operator
    // it inverses the bool value
    if (!(num > 0.0 && num < 40000.0)){
        printf("Num (%.2f) is not between 0.00 and 40000.0.\n");
    }

}

/* This function will use a bool variable */
void decisions3(void){
    // declare a variable of tyoe float
    // initialize it using constant defined in header file
    float num = NUM;

    // declare a variable of type bool and initialize it
    bool isNotBetween = !(num > 0.0 && num < 40000.0); 

    // use bool variable in an if-else statement
    if (isNotBetween){
        printf("Num (%.2f) is not between 0.0 and 40000.0.\n",num);
    } else {
        printf("Num (%.2f) is  between 0.0 and 40000.0.\n",num);
    }
}

/* this function will use the ternary operator */
void decisions4(void){
    // declare a variable of tyoe float
    // initialize it using constant defined in header file
    float num = NUM;

    // declare a variable of type bool and initialize it
    bool isNotBetween = !(num > 0.0 && num < 40000.0); 

    // declare a variable of type float and initialzie it
    // using the ternary operator
    // the ternary operator is the only operator that has
    // three operands
    float extra = isNotBetween ? (num - 40000.0) : 0.0;

    // display the value in extra
    printf("Extra is %.2f\n", extra);
}

/* this function will use a switch statement */
void decisions5(void){
    // declare variables
    char operation;
    int num1;
    int num2;

    // input operation
    printf("Enter operation to be performed (+, -, *, /): ");
    scanf("%c", &operation);

    // input numbers
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // use switch statemnt to evalute operation
    switch (operation)
    {
    case '+':
        printf("%d + %d = %d\n", num1, num2, num1 + num2);
        break;

    case '-':
        printf("%d - %d = %d\n", num1, num2, num1 - num2);
        break;

    case '*':
        printf("%d * %d = %d\n", num1, num2, num1 * num2);
        break;

    case '/':
        printf("%d / %d = %d\n", num1, num2, num1 / num2);
        break;
    
    default:
        printf("Invalid operation!\n");
        break;
    }

}

/* this function will examine short circuit evaluation -
* the compiler skups the evaluation of sub-expressions
* in a logical expression */
void decisions6(void){
    // decalre variables that will be used in logical expression
    int x = 1;
    bool y = true;

    // since x == 1 is true, the second expression is evaulated
    // short circuit will bot take place
    if (x == 1 && y){
        printf("If block executed.\n");
    } else {
        printf("Else block executed.\n");
    }

    // since x == 2 is false, the second expression is not evaluated
    // short circuit evaluation will take place
    if (x == 2 && y){
        printf("If block executed.\n");
    } else {
        printf("Else block executed.\n");
    }

    y = false;

    // since x != 1 is false, the second expression is evaluted
    // short circuit evaluation will not take place
    if (x != 1 || y){
         printf("If block executed.\n");
    } else {
        printf("Else block executed.\n");
    }

    // since x == 1 is true, the second expression is not ecaluted
    // short circuit evaluation will take place
    if (x == 1 || y){
         printf("If block executed.\n");
    } else {
        printf("Else block executed.\n");
    }
}