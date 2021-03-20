
 #include <stdio.h>

int main()
{
    double feet, inch ,cm ,d , e , y;

   printf("do you know your height in feet \n 1.yes or 2.no \n");
   scanf("%lf",&e);
   if(e == 1){
    printf("enter your height in feet \n");
    scanf("%lf",&feet);
    inch = feet*12;
    cm = inch*2.54;
    printf("your height in cm is %lf \n",cm);
    inch = cm/2.54;
    printf("your height in inch is %lf \n",inch);
   }else{



    printf("what would you like to convert \n 1.inches to cm \n or \n 2.cm to inches \n");
    scanf("%lf",&d);
    if(d == 1){
            printf("enter your height in inch \n");
            scanf("%lf",&inch);
            cm = inch*2.54;
        printf("your height in centimeter is %lf",cm);
    }else if(d == 2){
        printf("enter your height in cm \n");
            scanf("%lf",&cm);
            inch = cm/2.54;
         printf("your height in inch is %lf",inch);
    }

   }


return 0;

}