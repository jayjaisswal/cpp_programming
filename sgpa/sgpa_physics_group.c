#include <stdio.h>
int main()
{
    printf("Note that please enter your MARKS respertevly:\n1.PHYSICS:\n2.MATH\n3.BEE:\n4.EGD:\n5.PEEM:\n6.PHYSICS LAB:\n7.BEE LAB\n8.Mentoring\n");
    int n, c, m1 = 4, PHY= 4, BEE= 4, EGD = 3, PEEM = 3, PHYSICSLAB= 1, BEELAB = 1,Mentoring=1;
    int c1 = m1 +PHY + BEE + EGD + PEEM + PHYSICSLAB  + BEELAB + Mentoring ;
    float arr[8],o,o1,o2,o3,o4,o5,o6,o7,o8;
    for (n = 0; n <= 7; n++)
    {
        printf("Enter your marks of each subject:");
        scanf("%f", &arr[n]);
    }
    
        o=arr[0]/100*100;
        o1=arr[1]/100*100;
        o2=arr[2]/100*100;
        o3=arr[3]/100*100;
         o4=arr[4]/100*100;
          o5=arr[5]/50*100;
           o6=arr[6]/50*100;
           o7=arr[7]/100*100;
    int p =o  / 10 + 1;
    int p1 = (o1 / 10) + 1;
    int p2 = (o2  / 10) + 1;
    int p3 = (o3  / 10) + 1;
    int p4 = (o4  / 10) + 1;
    int p5 = (o5  / 10) + 1;
    int p6 = (o6/ 10) + 1;
    int p7 = (o7/ 10) + 1;
    float res = p * m1;
    float res1 = p1 * PHY;
    float res2 = p2 * BEE;
    float res3 = p3 * EGD;
    float res4 = p4 * PEEM;
    float res5 = p5 * PHYSICSLAB;
    float res6 = p6 * BEELAB;
    float res7 = p7 * Mentoring;
    float dum = res + res1 + res2 + res3 + res4 + res5 + res6 + res7;
    float sgpa = dum / c1;
    printf("%.2f SGPA\n",sgpa);
}