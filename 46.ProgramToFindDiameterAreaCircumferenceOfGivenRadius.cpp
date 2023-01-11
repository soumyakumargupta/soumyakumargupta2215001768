//Program To Find Diameter,Area&Circumference Of A Circle Given Radius
#include <stdio.h>
#include <math.h> // Used for constant PI referred as M_PI
double getDiameter(double radius);		 //Function declaration
double getCircumference(double radius);
double getArea(double radius);
int main() {
    float radius, dia, circ, area;
    printf("Enter radius of circle: ");	//Taking Radius Of A Circle
    scanf("%f", &radius);  
    dia  = getDiameter(radius);       // Call getDiameter function
    circ = getCircumference(radius);  // Call getCircumference function
    area = getArea(radius);           // Call getArea function  
    printf("Diameter of the circle = %.2f units\n", dia);
    printf("Circumference of the circle = %.2f units\n", circ);
    printf("Area of the circle = %.2f sq. units", area); 
}
double getDiameter(double radius){
    return (2 * radius);
}
double getCircumference(double radius) {
    return (2 * M_PI * radius); 
}
double getArea(double radius){
    return (M_PI * radius * radius);
}
