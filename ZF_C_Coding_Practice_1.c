/*
COP 2220 Assignment 3
Author: Zachary Firth
Date: 3/12/21
*/

//Prototypes

/*Function for Question 1 where the user enters an
input of watts and prints the brightness of a standard
bulb (lumens) in the format of a switch statement (Part a)*/
wattsLumensA(void);

/*Function for Question 1 with the same purpse, but in the format of a nested if statement (Part b)*/
wattsLumensB(void);

/*Function that has the user type in weight (lbs) and height (ins) and
uses the BMI equation to calculate the BMI and categorize the result*/
BMIFunction(void);

/*Function of the BMI equation/calculator*/
BMICalculator(int pounds, int inches);

/*Function that takes the x and y coordinates of a point on the
Cartesian plane and prints it location, whether it's on an axis,
in a quadrant, or on the origin*/
coordinateFunction(void);

/*Functions for each part of Question 4 to account for the setup
of brackets to print out each output the question asks for*/
bracketsPartA(void);
bracketsPartB(void);
bracketsPartC(void);
#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Function calls*/

    /*Question 1 functions*/
    wattsLumensA();
    wattsLumensB();
    /*Question 2 function*/
    BMIFunction();
    /*Question 3 function*/
    coordinateFunction();

    /*Question 4 functions*/
    bracketsPartA();
    bracketsPartB();
    bracketsPartC();


    return 0;
}

/*Function defintions*/

//Question 1 Part A
wattsLumensA(void){
/*Variable defintions*/
 int watts;
 int lumens;
    printf("Enter a measurement in watts: ");
    scanf("%d", &watts);
/*switch statement to account for inputs of watts*/
    switch (watts) {
    case 15:
        lumens = 125;
        printf("The brightness of the bulb in lumens is %d.\n", lumens);
        break;
    case 25:
        lumens = 215;
        printf("The brightness of the bulb in lumens is %d.\n", lumens);
        break;
    case 40:
        lumens = 500;
        printf("The brightness of the bulb in lumens is %d.\n", lumens);
        break;
    case 60:
        lumens = 880;
        printf("The brightness of the bulb in lumens is %d.\n", lumens);
        break;
    case 75:
        lumens = 1000;
        printf("The brightness of the bulb in lumens is %d.\n", lumens);
        break;
    case 100:
        lumens = 1675;
        printf("The brightness of the bulb in lumens is %d.\n", lumens);
        break;
    default:
        lumens = -1;
        printf("The brightness of the bulb in lumens is %d.\n", lumens);
    }
}
//Question 1 Part B
wattsLumensB(void){
    /*Variable defintions*/
    int watts;
    int lumens;
    /*User input*/
printf("Enter a measurement in watts: ");
    scanf("%d", &watts);
    /*Nested if statement to account for input in watts*/
    if (watts == 15){
        lumens = 125;
        printf("The brightness of the bulb in lumens is %d.\n", lumens);
    }
    else if (watts == 25){
        lumens = 215;
        printf("The brightness of the bulb in lumens is %d.\n", lumens);
    }
    else if (watts == 40){
        lumens = 500;
        printf("The brightness of the bulb in lumens is %d.\n", lumens);
    }
    else if (watts == 60){
        lumens = 880;
        printf("The brightness of the bulb in lumens is %d.\n", lumens);
    }
    else if (watts == 75){
        lumens = 1000;
        printf("The brightness of the bulb in lumens is %d.\n", lumens);
    }
    else if (watts == 100){
        lumens = 1675;
        printf("The brightness of the bulb in lumens is %d.\n", lumens);
    }
    else {
        lumens = -1;
        printf("The brightness of the bulb in lumens is %d.\n", lumens);

    }
}
//Question 2
BMIFunction(void){
    /*Variable defintions*/
    int inches;
    int pounds;
    /*User input*/
    printf("Enter your weight in pounds: ");
    scanf("%d", &pounds);
    printf("Enter your height in inches: ");
    scanf("%d", &inches);
    double BMI=  BMICalculator(pounds, inches);

    printf("Your BMI is %.1f.  ", BMI);
        if (BMI >= 30.0){
        printf("Based off that calculation, your weight status is obese.\n");
    }
    else if (BMI >= 25.0 && BMI < 30.0){
        printf("Based off that calculation, your weight status is overweight.\n");
    }
    else if (BMI >= 18.5 && BMI < 25.0){
        printf("Based off that calculation, your weight status is normal.\n");
    }
    else {
        printf("Based off that calculation, your weight status is underweight.\n");
    }
    }
//BMI Calculator for Question 2
BMICalculator(int pounds, int inches){


    return (703 * pounds / (inches * inches));
    }
//Question 3 function
coordinateFunction(void){
    /*Variable defintions*/
    int xCoordinate;
    int yCoordinate;
    /*User input*/
    printf("Enter the x coordinate of a point from the Cartesian plane: ");
    scanf("%d", &xCoordinate);
    printf("Enter the y coordinate of a point from the Cartesian plane: ");
    scanf("%d", &yCoordinate);

if (xCoordinate == 0 && yCoordinate == 0){
        printf("(%d,%d) is on the origin.\n\n", xCoordinate, yCoordinate);
    }
   else if (xCoordinate != 0.0 && yCoordinate == 0.0){
        printf("(%d,%d) is on the x-axis.\n\n", xCoordinate, yCoordinate);
   }
   else if (xCoordinate == 0 && yCoordinate != 0){
        printf("(%d,%d) is on the y-axis.\n\n", xCoordinate, yCoordinate);
   }
   else if (xCoordinate > 0.0 && yCoordinate > 0.0){
        printf("(%d,%d) is on the quadrant I.\n\n", xCoordinate, yCoordinate);
   }
   else if (xCoordinate < 0.0 && yCoordinate > 0.0){
        printf("(%d,%d) is on the quadrant II\.\n\n", xCoordinate, yCoordinate);
   }
   else if (xCoordinate < 0.0 && yCoordinate < 0.0){
        printf("(%d,%d) is on the quadrant III.\n\n", xCoordinate, yCoordinate);
   }
   else if (xCoordinate > 0.0 && yCoordinate < 0.0){
        printf("(%d,%d) is on the quadrant IV.\n\n", xCoordinate, yCoordinate);
   }


  }
//Question 4 Part A function
  bracketsPartA(void){
    int y = 8;
    int x = 5;
    if ( y == 8 )
    if ( x == 5 )
      printf( "@@@@@\n" );
    else{
           printf( "#####\n" );
        }
      printf( "$$$$$\n" );
      printf( "&&&&&\n" );
  }
//Question 4 Part B function
bracketsPartB(void){
    int y = 8;
    int x = 5;
    if ( y == 8 )
    if ( x == 5 )
           printf( "@@@@@\n" );
    else{
           printf( "#####\n" );
           printf( "$$$$$\n" );
        }
    printf( "&&&&&\n" );
}
//Question 4 Part C function
bracketsPartC(void){
    int y = 7;
    int x = 5;
    if ( y == 8 )
    {
      if ( x == 5 )
      {
        printf( "@@@@@\n" );
      }
    }
    else
      printf( "#####\n" );
      printf( "$$$$$\n" );
      printf( "&&&&&\n" );


}

