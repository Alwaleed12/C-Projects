#include <stdio.h>
#include <stdlib.h>
// include header file
#include "./headers/BasicIO.h"
#include "./headers/Decisions.h"
#include "./headers/Loops.h"
#include "./headers/Functions.h"
#include "./headers/Pointers.h"

int main (void){
    // puts("Hello World!!!");
    // testing Basic IO functionality
    // output();
    // input ();
    // testing Decisions functionality
    // decisions1();
    // decisions2();
    // decisions3();
    // decisions4();
    // decisions5();
    // decisions6();
    // testing Loops functionality
    // loops1();
    // loops2();
    // loops3();
    // loops4();
    // loops5();
    // testing Functions functionality
    // declare three character arrays and initialize them
    // char student[] = "Alwaleed";
    // char course[] = "Ruby";
    //char programmer[] = "Yikihiro Mastumoto";
    // congratulate1(student, course, programmer);
    // congratulate2(student, course, programmer);
    // printf("%.2f degree celsius = %.2f degrees fahrenheit\n", 0.0, 
    //     fahrenheit(0.0));
    // printf("%.2f degree celsius = %.2f degrees fahrenheit\n", 100.0, 
    //    fahrenheit(100.0));
    // testing Pointers functionality
    printAddress();
    printf("The global variable i stores its value at %p\n", getAddress());
    printf("The global static variable i stores %d\n", getDataAtAddress());
}