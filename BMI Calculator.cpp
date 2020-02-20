#include <stdio.h>

/* Body Mass Index Calculator */

int main()

{ float height,weight,BMI;
  printf("Enter Height (in meters) and Weight (in Kg)\n");
  scanf("%f %f",&height,&weight);
  BMI=weight/(height*height);
  printf("From the Department of Health and Human Service/National Institutes of Health\nBMI = %f kg/m.square",BMI);
  return 0;
}
