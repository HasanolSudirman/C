#include <stdio.h>
#include<math.h>
#define Mexican_Pesos_rate 0.20;         //Mexican Peso rate/
#define British_Pounds_rate 5.36;        //British Pound rate/
#define Japanese_Yen_rate 0.039;         //Japanese Yen rate/
#define Canadian_Dollar_rate 3.17;      //Canadian Dollar rate/
#define Euros_rate 4.91;                //Euro rate

int main ()

{
    //declare variables
int menu_choice,ch,choice1,choice;
float local_amount, remote_amount,a;
LOOP:do                             //start of loop
{
printf("WELCOME TO THE EXCHANGE MONEY SYSTEM\n\n\n");
printf("----------------------------------------------------------------------------\n");
printf("\nWould you like to convert auto or manually?(1 for auto , 2 for manual)\n");
scanf("%d",&choice1);
if(choice1==1)                  //Program for Auto convert
{
   printf("1. Mexican Pesos\n");
   printf("2. Canadian Dollar\n");
   printf("3. EURO\n");
   printf("4. Japanese Yen\n");
   printf("5. British Pound\n");
   printf("6. Exit Program\n\n");
   printf("Please Enter Your Country money Selection From The Menu: \t");
   scanf("%d",&menu_choice);
   if(menu_choice == 1)
   {
      printf("\n\nThis choice will convert your money from Mexican Pesos :\n\n");
      printf("1.YES\n");
      printf("2.NO\n");
      printf("\nPlease Enter Your Choice From The Menu: \t");
      scanf("%d",&ch);

           if (ch == 1)
           {
           printf("\n\nConvert from Mexican Pesos:\n\n");

           printf("Please Enter  Amount to be Converted: \t");
           scanf("%f",&local_amount);

           remote_amount = local_amount *Mexican_Pesos_rate;    //formula of converted value

           printf("\n%.2f Mexican Pesos equal to %.2f RINGGIT\n",local_amount, remote_amount);
       int a = 0;

     if(remote_amount>=50)                                                                      //CONVERT TO RM50
            {
                do
                {
                    remote_amount=remote_amount-50;
                    a=a+1;
                }
                    while (remote_amount>=50);
                    float total = a * 50;
                    printf("\n  %d X RM 50  = RM %.2f",a,total);
                }
                    else
                        {
                            float total = a * 50;
                            printf("\n %d X RM 50 = RM %.2f",a,total);
                        }
                    int b = 0;
                    if(remote_amount>=20)               //convert to RM20
                        {
                            do
                        {
                            remote_amount=remote_amount-20;
                            b=b+1;
                        }
                            while (remote_amount>=20);
                            float total = b * 20;
                            printf("\n %d X RM 20  = RM %.2f",b,total);
                        }
                else
                    {
                        float total = b * 20;
                        printf("\n %d X RM 20  = RM %.2f",b,total);
                    }
             int c = 0;

          if(remote_amount>=10)                         //Convert to RM10
        {
        do
        {
            remote_amount=remote_amount-10;
            c=c+1;
        }
            while (remote_amount>=10);
            float total = c * 10;
            printf("\n %d X RM 10 = RM %.2f",c,total);
        }
           else
            {
                float total = c * 10;
                printf("\n %d X RM 10 = RM %.2f",c,total);
            }
         int d = 0;
        if(remote_amount>=5)                    //Convert to RM5
        {
            do
        {
            remote_amount=remote_amount-5;
            d=d+1;
        }
            while (remote_amount>=5);
            float total = d * 5;
            printf("\n %d X RM 5 = RM %.2f",d,total);
        }
                else
                    {
                        float total = d * 5;
                        printf("\n %d X RM 5 = RM %.2f",d,total);
                    }
                int e = 0;
             if(remote_amount>=1)                   //Convert to RM1
        {
            do
        {
            remote_amount=remote_amount-1;
            e=e+1;
        }
            while (remote_amount>=1);
            float total = e * 1;
            printf("\n %d X RM 1  = RM %.2f",e,total);
        }
            else
                {
                    float total = e * 1;
                    printf("\n %d X RM 1 = RM %.2f",e,total);
                }
            int f = 0;
            if(remote_amount>=0.1)                     //Convert to RM0.10
            {
                do
            {
                remote_amount=remote_amount-0.1;
                f=f+1;
              }
                while (remote_amount>=0.1);
                float total = f * 0.1;
                printf("\n %d X RM 0.1  = RM %.2f",f,total);
            }
               else
                {
                    float total = f * 0.1;
                    printf("\n %d X RM 0.1 X RM %.2f",f,total);
                }
                int g = 0;
            if(remote_amount>=0.01)                             //Convert to RM0.01
                {
                   do
                {
                    remote_amount=remote_amount-0.01;
                    g=g+1;
                }
                while (remote_amount>=0.01);
                float total = g * 0.01;
                printf("\n %d X RM 0.01  = RM %.2f",g,total);
                }
                  else
                    {
                        float total = g * 0.01;
                        printf("\n %d X RM 0.01  = RM %.2f",g,total);
                    }
                        break;
                        menu_choice = 0;
                }
        if (menu_choice == 2)
               {
                printf("Thanks You for your attempt");
               }
        else{
                   printf("You have entered wrong input options");
                   printf("\nPlease Enter option again\n");
                   goto LOOP;
            }
   }
if(menu_choice == 2)
     {
      printf("\n\nThis choice will convert your money from Canadian Dollar :\n\n");
      printf("1.YES\n");
      printf("2.NO\n");
      printf("\nPlease Enter Your Choice From The Menu: \t");
      scanf("%d",&menu_choice);

           if (menu_choice == 1)
           {
           printf("\n\nConvert from Canadian Dollar:\n\n");

           printf("Please Enter Canadian Dollar Amount Amount to be Converted: \t");
           scanf("%f",&local_amount);

           remote_amount = local_amount *Canadian_Dollar_rate;               //formula of converted value

           printf("\n%.2f Canadian Dollar equal to %.2f RINGGIT\n",local_amount, remote_amount);
       int a = 0;
if(remote_amount>=50)
        {
        do
        {
      remote_amount=remote_amount-50;
      a=a+1;
        }while (remote_amount>=50);

        float total = a * 50;
        printf("\n %d X  RM 50 = RM %.2f",a,total);
}
else{
      float total = a * 50;
        printf("\n %d X RM 50  = RM %.2f",a,total);
}
int b = 0;
if(remote_amount>=20)
        {
        do
        {
      remote_amount=remote_amount-20;
      b=b+1;
        }while (remote_amount>=20);

         float total = b * 20;
        printf("\n %d X RM 20  = RM %.2f",b,total);
}
else{
     float total = b * 20;
        printf("\n %d X RM 20  = RM %.2f",b,total);
}

int c = 0;
if(remote_amount>=10)
        {
        do
        {
      remote_amount=remote_amount-10;
      c=c+1;
        }while (remote_amount>=10);
        float total = c * 10;
        printf("\n %d X RM 10  = RM %.2f",c,total);
}
else{
      float total = c * 10;
        printf("\n %d X RM 10 = RM %.2f",c,total);
}
int d = 0;
if(remote_amount>=5)
        {
        do
        {
      remote_amount=remote_amount-5;
      d=d+1;
        }while (remote_amount>=5);

        float total = d * 5;
        printf("\n %d X RM 5  = RM %.2f",d,total);
}
else{
     float total = d * 5;
        printf("\n %d X RM 5  = RM %.2f",d,total);
}

int e = 0;
             if(remote_amount>=1)
        {
        do
        {
      remote_amount=remote_amount-1;
      e=e+1;
        }while (remote_amount>=1);
        float total = e * 1;
        printf("\n %d X RM 1  = RM %.2f",e,total);
               }
            else{
               float total = e * 1;
               printf("\n %d X RM 1 = RM %.2f",e,total);
                }
int f = 0;
if(remote_amount>=0.1)
        {
        do
        {
      remote_amount=remote_amount-0.1;
      f=f+1;
        }while (remote_amount>=0.1);
        float total = f * 0.1;
        printf("\n %d X RM 0.1  = RM %.2f",f,total);
}

else{
     float total = f * 0.1;
        printf("\n %d X RM 0.1 = RM %.2f",f,total);
}
int g = 0;
if(remote_amount>=0.01)
        {
        do
        {
      remote_amount=remote_amount-0.01;
      g=g+1;
        }while (remote_amount>=0.01);
         float total = g * 0.01;
        printf("\n %d X RM 0.01  = RM %.2f",g,total);
}
else{
     float total = g * 0.01;
        printf("\n %d X RM 0.01  = RM %.2f",g,total);
}
           break;
           menu_choice = 0;
           }
         if (menu_choice == 2)
          {
          printf("Thanks You for your attempt");
         break;
          }
    else{
        printf("You have entered missing wrong input options");
        break;
            }
    }
     if (menu_choice == 3)
    {
      printf("\n\nThis choice will convert your money from  EURO :\n\n");
      printf("1.YES\n");
      printf("2.NO\n");
      printf("\nPlease Enter Your Choice From The Menu: \t");
      scanf("%d",&menu_choice);
          if (menu_choice == 1)
          {
          printf("\n\nConvert from EURO:\n\n");

          printf("Please Enter  EURO Amount to be Converted: \t");
          scanf("%f",&local_amount);

          remote_amount = local_amount / 0.21;                   //formula of converted value

          printf("\n%.2f EURO equal to %.2f RINGGIT",local_amount, remote_amount);
                 int a = 0;
if(remote_amount>=50)
        {
        do
        {
      remote_amount=remote_amount-50;
      a=a+1;
        }while (remote_amount>=50);

        float total = a * 50;
        printf("\n %d X RM 50  = RM %.2f",a,total);
}
else{
      float total = a * 50;
        printf("\n %d X RM 50  = RM %.2f",a,total);
}
int b = 0;
if(remote_amount>=20)
        {
        do
        {
      remote_amount=remote_amount-20;
      b=b+1;
        }while (remote_amount>=20);

         float total = b * 20;
        printf("\n %d X RM 20  = RM %.2f",b,total);
}
else{
     float total = b * 20;
        printf("\n %d X RM 20  = RM %.2f",b,total);
}
int c = 0;
if(remote_amount>=10)
        {
        do
        {
      remote_amount=remote_amount-10;
      c=c+1;
        }while (remote_amount>=10);
        float total = c * 10;
        printf("\n %d X RM 10 X  = RM %.2f",c,total);
}
else{
      float total = c * 10;
        printf("\n %d X RM 10  = RM %.2f",c,total);
}
int d = 0;

if(remote_amount>=5)
        {
        do
        {
      remote_amount=remote_amount-5;
      d=d+1;
        }while (remote_amount>=5);

        float total = d * 5;
        printf("\n %d X RM 5  = RM %.2f",d,total);


}
else{
     float total = d * 5;
        printf("\n %d X RM 5  = RM %.2f",d,total);
}


int e = 0;

if(remote_amount>=1)
        {
        do
        {
      remote_amount=remote_amount-1;
      e=e+1;
        }while (remote_amount>=1);
        float total = e * 1;
        printf("\n %d X RM 1  = RM %.2f",e,total);


}

else{
     float total = e * 1;
        printf("\n %d X RM 1 = RM %.2f",e,total);
}



int f = 0;

if(remote_amount>=0.1)
        {
        do
        {
      remote_amount=remote_amount-0.1;
      f=f+1;
        }while (remote_amount>=0.1);
        float total = f * 0.1;
        printf("\n /%d X RM 0.1  = RM %.2f",f,total);


}

else{
     float total = f * 0.1;
        printf("\n %d X RM 0.1 = RM %.2f",f,total);
}

int g = 0;

if(remote_amount>=0.01)
        {
        do
        {
      remote_amount=remote_amount-0.01;
      g=g+1;
        }while (remote_amount>=0.01);
         float total = g * 0.01;
        printf("\n %d X RM 0.01  = RM %.2f",g,total);


}
else{
     float total = g * 0.01;
        printf("\n %d X RM 0.01  = RM %.2f",g,total);
}

           break;
           menu_choice = 0;
           }

         if (menu_choice == 2)
          {
          printf("Thanks You for your attempt");
           break;
          }


        else
            {
                   printf("You have entered missing wrong input options");
                   break;
            }
    }


       if(menu_choice == 4)
       {
        printf("\n\nThis choice will convert your money from Japanese Yen :\n\n");
        printf("1.YES\n");
        printf("2.NO\n");
        printf("\nPlease Enter Your Choice From The Menu: \t");
        scanf("%d",&menu_choice);

             if (menu_choice == 1)
             {
             printf("\n\nConvert from Japanese Yen:\n\n");

             printf("Please Enter Japanese Yen Amount to be Converted: \t");
             scanf("%f",&local_amount);

             remote_amount = local_amount *Japanese_Yen_rate;                    //formula of converted value

             printf("\n%.2f Japanese Yen equal to %.2f RINGGIT",local_amount, remote_amount);
                    int a = 0;

if(remote_amount>=50)
        {
        do
        {
      remote_amount=remote_amount-50;
      a=a+1;
        }while (remote_amount>=50);

        float total = a * 50;
        printf("\n %d X RM 50  = RM %.2f",a,total);
}
else{
      float total = a * 50;
        printf("\n %d X RM 50 = RM %.2f",a,total);
}


int b = 0;

if(remote_amount>=20)
        {
        do
        {
      remote_amount=remote_amount-20;
      b=b+1;
        }while (remote_amount>=20);

         float total = b * 20;
        printf("\n %d X RM 20  = RM %.2f",b,total);


}
else{
     float total = b * 20;
        printf("\n %d X RM 20  = RM %.2f",b,total);
}

int c = 0;

if(remote_amount>=10)
        {
        do
        {
      remote_amount=remote_amount-10;
      c=c+1;
        }while (remote_amount>=10);
        float total = c * 10;
        printf("\n %d X RM 10  = RM %.2f",c,total);


}
else{
      float total = c * 10;
        printf("\n %d X RM 10  = RM %.2f",c,total);
}


int d = 0;

if(remote_amount>=5)
        {
        do
        {
      remote_amount=remote_amount-5;
      d=d+1;
        }while (remote_amount>=5);

        float total = d * 5;
        printf("\n %d X RM 5  = RM %.2f",d,total);


}
else{
     float total = d * 5;
        printf("\n %d X RM 5  = RM %.2f",d,total);
}


int e = 0;

if(remote_amount>=1)
        {
        do
        {
      remote_amount=remote_amount-1;
      e=e+1;
        }while (remote_amount>=1);
        float total = e * 1;
        printf("\n %d X RM 1  = RM %.2f",e,total);


}

else{
     float total = e * 1;
        printf("\n %d X RM 1  = RM %.2f",e,total);
}



int f = 0;

if(remote_amount>=0.1)
        {
        do
        {
      remote_amount=remote_amount-0.1;
      f=f+1;
        }while (remote_amount>=0.1);
        float total = f * 0.1;
        printf("\n %d X RM 0.1  = RM %.2f",f,total);


}

else{
     float total = f * 0.1;
        printf("\n %d X RM 0.1  = RM %.2f",f,total);
}

int g = 0;

if(remote_amount>=0.01)
        {
        do
        {
      remote_amount=remote_amount-0.01;
      g=g+1;
        }while (remote_amount>=0.01);
         float total = g * 0.01;
        printf("\n %d X RM 0.01  = RM %.2f",g,total);


}
else{
     float total = g * 0.01;
        printf("\n %d X RM 0.01  = RM %.2f",g,total);
}

            break;
           menu_choice = 0;
           }

             if (menu_choice == 2)
             {
             printf("Thanks You for your attempt");
             break;
             }

             else
            {
                   printf("You have entered missing wrong input options");
                   break;
            }
        }



      if (menu_choice == 5)
            {
             printf("\n\nThis choice will convert your money from British Pound :\n\n");
             printf("1.YES\n");
             printf("2.NO\n");
             printf("\nPlease Enter Your Choice From The Menu: \t");
             scanf("%d",&menu_choice);

                if (menu_choice == 1)
                {
                printf("\n\nConvert from British Pound:\n\n");

                printf("Please Enter British Pound Amount to be Converted: \t");
                scanf("%f",&local_amount);

                remote_amount = local_amount *British_Pounds_rate;                   //formula of converted value

                printf("\n%.2f British Pound equal to %.2f RINGGIT",local_amount, remote_amount);
                       int a = 0;

if(remote_amount>=50)
        {
        do
        {
      remote_amount=remote_amount-50;
      a=a+1;
        }while (remote_amount>=50);

        float total = a * 50;
        printf("\n %d X RM 50  = RM %.2f",a,total);
}
else{
      float total = a * 50;
        printf("\n %d X RM 50  = RM %.2f",a,total);
}


int b = 0;

if(remote_amount>=20)
        {
        do
        {
      remote_amount=remote_amount-20;
      b=b+1;
        }while (remote_amount>=20);

         float total = b * 20;
        printf("\n %d X RM 20 = RM %.2f",b,total);


}
else{
     float total = b * 20;
        printf("\n %d X RM 20  = RM %.2f",b,total);
}

int c = 0;

if(remote_amount>=10)
        {
        do
        {
      remote_amount=remote_amount-10;
      c=c+1;
        }while (remote_amount>=10);
        float total = c * 10;
        printf("\n %d X RM 10  = RM %.2f",c,total);


}
else{
      float total = c * 10;
        printf("\n %d X RM 10  = RM %.2f",c,total);
}


int d = 0;

if(remote_amount>=5)
        {
        do
        {
      remote_amount=remote_amount-5;
      d=d+1;
        }while (remote_amount>=5);

        float total = d * 5;
        printf("\n %d X RM 5  = RM %.2f",d,total);


}
else{
     float total = d * 5;
        printf("\n %d X RM 5  = RM %.2f",d,total);
}


int e = 0;

if(remote_amount>=1)
        {
        do
        {
      remote_amount=remote_amount-1;
      e=e+1;
        }while (remote_amount>=1);
        float total = e * 1;
        printf("\n %d X RM 1  = RM %.2f",e,total);


}

else{
     float total = e * 1;
        printf("\n %d X RM 1  = RM %.2f",e,total);
}



int f = 0;

if(remote_amount>=0.1)
        {
        do
        {
      remote_amount=remote_amount-0.1;
      f=f+1;
        }while (remote_amount>=0.1);
        float total = f * 0.1;
        printf("\n %d X RM 0.1  = RM %.2f",f,total);


}

else{
     float total = f * 0.1;
        printf("\n %d X RM 0.1 = RM %.2f",f,total);
}

int g = 0;

if(remote_amount>=0.01)
        {
        do
        {
      remote_amount=remote_amount-0.01;
      g=g+1;
        }while (remote_amount>=0.01);
         float total = g * 0.01;
        printf("\n %d X RM 0.01  = RM %.2f",g,total);


}
else{
     float total = g * 0.01;
        printf("\n %d X RM 0.01  = RM %.2f",g,total);
}

           break;
           menu_choice = 0;
           }

                if (menu_choice == 2)
                {
                printf("Thanks You for your attempt");
                 break;
                }


                else
            {
                   printf("You have entered missing wrong input options");
                   break;
            }
                }

   if (menu_choice == 6)

               {
                 printf("Thanks You for your attempt");
               }
             printf("\n\n\n\nAre U sure want to end this application? \n");
             printf("1.YES\n");
             printf("2.NO\n");
             printf("\n\nPlease Enter Your Choice From The Menu: \t\n\n");
             scanf("%d",&menu_choice);

                if (menu_choice == 1)
                {
                printf("\n\nApplication Ended\n\n");
                return 0;
                }
                if(menu_choice == 2);
                {
                goto LOOP;
                }
}
if(choice1==2)                  //Program for manual
{
printf("This is a program of a money changer system from foreign currency to Malaysia Ringgit (MYR).\n\n\n");
   printf("==============================================================================================\n");
   printf("1. Mexican Pesos\n");
   printf("2. Canadian Dollar\n");
   printf("3. EURO\n");
   printf("4. Japanese Yen\n");
   printf("5. British Pound\n");
   printf("6. Exit Program\n\n");
   printf("Please Enter Your Country money Selection From The Menu: \t");
   scanf("%d",&menu_choice);



if(menu_choice==1)
{
    printf("Please enter mexican peso to convert to RM=\n");
    scanf("%f",&local_amount);
    remote_amount=local_amount*Mexican_Pesos_rate;
    printf("The converted value is %.2f",remote_amount);
       printf("\nPlease pick size\n");
    printf("1)RM50,RM10,RM5,RM1,RM0.50,RM0.10,RM0.01\n");
    printf("2)RM10,RM5,RM1,,RM0.50,RM0.10,RM0.01\n");
    printf("Your choice ~~>\t");
    scanf("%d",&choice);

}
if(menu_choice==2)
{
   printf("Please enter Canadian dollar to convert to RM=\n");
    scanf("%f",&local_amount);
    remote_amount=local_amount*Canadian_Dollar_rate;
    printf("The converted value is %.2f",remote_amount);
       printf("\nPlease pick size\n");
    printf("1)RM50,RM10,RM5,RM1,RM0.50,RM0.10,RM0.01\n");
    printf("2)RM10,RM5,RM1,,RM0.50,RM0.10,RM0.01\n");
    printf("Your choice ~~>\t");
    scanf("%d",&choice);


}
if(menu_choice==3)
{
    printf("Please enter Euro to convert to RM=\n");
    scanf("%f",&local_amount);
    remote_amount=local_amount*Euros_rate;
    printf("The converted value is %.2f",remote_amount);
       printf("\nPlease pick size\n");
    printf("1)RM50,RM10,RM5,RM1,RM0.50,RM0.10,RM0.01\n");
    printf("2)RM10,RM5,RM1,,RM0.50,RM0.10,RM0.01\n");
    printf("Your choice ~~>\t");
    scanf("%d",&choice);
}
if(menu_choice==4)
{
    printf("Please enter Japenese Yen to convert to RM=\n");
    scanf("%f",&local_amount);
    remote_amount=local_amount*Japanese_Yen_rate;
    printf("The converted value is %.2f\n",remote_amount);
     printf("1)RM50,RM10,RM5,RM1,RM0.50,RM0.10,RM0.01\n");
    printf("2)RM10,RM5,RM1,,RM0.50,RM0.10,RM0.01\n");
    printf("Your choice ~~>\t");
    scanf("%d",&choice);
}
if(menu_choice==5)
{
    printf("Please enter british Pound to convert to RM=\n");
    scanf("%f",&local_amount);
    remote_amount=local_amount*British_Pounds_rate;
    printf("The converted value is %.2f\n",remote_amount);
     printf("1)RM50,RM10,RM5,RM1,RM0.50,RM0.10,RM0.01\n");
    printf("2)RM10,RM5,RM1,,RM0.50,RM0.10,RM0.01\n");
    printf("Your choice ~~>\t");
    scanf("%d",&choice);
}
if(menu_choice==6)
{
    printf("Thank you");
    return 0;
}

    switch (choice)
    {
        case 1:


            if(remote_amount>=50)
                                     {
                                        int a= 0;
                                        do
                                       {

                                        remote_amount=remote_amount-50;
                                        a=a+1;
                                       }
                                        while (remote_amount>=50);
                                        float total = a * 50;
                                        printf("\n  %d X RM 50  = RM %.2f",a,total);
                                      }
                                      else
                                      {
                                        float total = a * 50;
                                        printf("\n %d X RM 50 = RM %.2f",a,total);

                                      }

             int c = 0;

          if(remote_amount>=10)
        {
        do
        {
      remote_amount=remote_amount-10;
      c=c+1;
        }while (remote_amount>=10);
        float total = c * 10;
        printf("\n %d X RM 10 = RM %.2f",c,total);
           }
           else{
           float total = c * 10;
             printf("\n %d X RM 10 = RM %.2f",c,total);

               }
         int d = 0;
        if(remote_amount>=5)
        {
        do
        {
      remote_amount=remote_amount-5;
      d=d+1;
        }while (remote_amount>=5);
        float total = d * 5;
        printf("\n %d X RM 5 = RM %.2f",d,total);
                 }
                else{
              float total = d * 5;
                   printf("\n %d X RM 5 = RM %.2f",d,total);

              }
                int e = 0;
             if(remote_amount>=1)
        {
        do
        {
      remote_amount=remote_amount-1;
      e=e+1;
        }while (remote_amount>=1);
        float total = e * 1;
        printf("\n %d X RM 1  = RM %.2f",e,total);
               }
            else{
               float total = e * 1;
               printf("\n %d X RM 1 = RM %.2f",e,total);

                }
                        if(remote_amount>=0.1)
            {
            int f = 0;
            do
              {
             remote_amount=remote_amount-0.1;
            f=f+1;
              }while (remote_amount>=0.1);
             float total = f * 0.1;
             printf("\n %d X RM 0.1  = RM %.2f",f,total);
               }
               else{
                    int f=0;
              float total = f * 0.1;
             printf("\n %d X RM 0.1 X RM %.2f",f,total);
             break;
                  }

                int g = 0;
            if(remote_amount>=0.01)
                     {
                   do
                    {
      remote_amount=remote_amount-0.01;
      g=g+1;
        }while (remote_amount>=0.01);
         float total = g * 0.01;
        printf("\n %d X RM 0.01  = RM %.2f",g,total);
                     }
                  else{
                  float total = g * 0.01;
                 printf("\n %d X RM 0.01  = RM %.2f",g,total);

                       }
break;
        case 2:

if(remote_amount>=10)
        {
         int c = 0;
         do
        {
      remote_amount=remote_amount-10;
      c=c+1;
        }while (remote_amount>=10);
        float total = c * 10;
        printf("\n %d X RM 10 X  = RM %.2f",c,total);
}
else
    {
      float total = c * 10;
        printf("\n %d X RM 10  = RM %.2f",c,total);
}


if(remote_amount>=5)
        {
        int d = 0;
        do
        {
      remote_amount=remote_amount-5;
      d=d+1;
        }while (remote_amount>=5);

        float total = d * 5;
        printf("\n %d X RM 5  = RM %.2f",d,total);


}
else{
     float total = d * 5;
        printf("\n %d X RM 5  = RM %.2f",d,total);
}


if(remote_amount>=1)
        {
        int e = 0;
        do
        {
      remote_amount=remote_amount-1;
      e=e+1;
        }while (remote_amount>=1);
        float total = e * 1;
        printf("\n %d X RM 1  = RM %.2f",e,total);


}

else{
     float total = e * 1;
        printf("\n %d X RM 1 = RM %.2f",e,total);
}
                   if(remote_amount>=0.1)
            {
            int f = 0;
            do
              {
             remote_amount=remote_amount-0.1;
            f=f+1;
              }while (remote_amount>=0.1);
             float total = f * 0.1;
             printf("\n %d X RM 0.1  = RM %.2f",f,total);
               }
               else{
                    int f=0;
              float total = f * 0.1;
             printf("\n %d X RM 0.1 X RM %.2f",f,total);
                  }
break;
            if(remote_amount>=0.01)
                     {
                   do
                    {
      int g = 0;
      remote_amount=remote_amount-0.01;
      g=g+1;
        }while (remote_amount>=0.01);
         float total = g * 0.01;
        printf("\n %d X RM 0.01  = RM %.2f",g,total);
                     }
                  else{
                  float total = g * 0.01;
                 printf("\n %d X RM 0.01  = RM %.2f",g,total);
                 break;
                       }

}
}
}
while(choice1<=2);
goto LOOP;
}
