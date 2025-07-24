#include<stdio.h>
#include<math.h>
#define PI 3.14159
int main()
{
    double lambda;
    int m;
    double a1, a2, a3;
    double theta1, theta2, theta3;
    printf("Enter wavelength (in nm): ");
    scanf("%lf", &lambda);
    if(lambda < 380 || lambda > 750)
    {
        printf("Out of the range. please enter a valid number.\n");
        return 0;
    }
    printf("Enter order of diffraction (m): ");
    scanf("%d", &m);
    printf("Enter slit width a1 (in µm): ");
    scanf("%lf", &a1);
    printf("Enter slit width a2 (in µm): ");
    scanf("%lf", &a2);
    printf("Enter slit width a3 (in µm): ");
    scanf("%lf", &a3);
    a1 *= 1000;
    a2 *= 1000;
    a3 *= 1000;
    theta1 = asin ((m * lambda) /a1) * 180 / M_PI;
    theta2 = asin ((m * lambda) /a2) * 180 / M_PI;
    theta3 = asin ((m * lambda) /a3) * 180 / M_PI;
    printf("\nAngle for a1: %.2lf degrees\n", theta1);
    printf("\nAngle for a2: %.2lf degrees\n", theta2);
    printf("\nAngle for a3: %.2lf degrees\n", theta3);
    if(theta1 > theta2 && theta1 > theta3){
        printf("Slit a1 bent the light most.\n");
    } else if(theta2>theta1 && theta2>theta3){
        printf("Slit a2 bent the light most.\n");
    } else if(theta3>theta1 && theta3>theta2){
       printf("Slit a3 bent the light most.\n"); 
    }else{
        printf("Two or more slits bent the light equally.\n");
    }
    return 0;


}