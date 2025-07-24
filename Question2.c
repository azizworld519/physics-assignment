#include<stdio.h>
#include<math.h>
#define PI 3.14159
int main(){
    double lambda1 = 530;
    double lambda2 = 700;
    int m1 =3;
    int m2=2;
    double theta1deg = 65.0;
    double theta1rad = theta1deg * PI/180;
    double sintheta2 = (m2 * lambda2 * sin(theta1rad))/(m1 * lambda1);
    if(sintheta2>1){
        printf("Invaild sin(theta2)>1,doesn't exist.\n");

    }else{
        double theta2rad = asin(sintheta2);
        double theta2deg = theta2rad * 180/PI;
        printf("The angle for red light(2nd order) is: %.2f degrees\n", theta2deg);

    }
    return 0;

}