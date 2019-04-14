#include <stdio.h>

/*Program to print days in a year*/


int main (void)
{   
    int i;
    int j;
    int jan;
    int feb;
    int apr;
    int firstDayOfMonth;
    int numberOfDays;
    int year;

// Jan, Mar, May, Jul, Aug, Oct, Dec have 31 days
// Apr, Jun, Sep, Nov have 30 days
// Feb has 28 days. 29 if leap year

    jan = 31;
    feb = 28;
    apr = 30;
    
//for now, I'll use these three assignments to define the months, and create an exception for leap years later after the calendar prints correctly

    do 
    {
        printf("What day does January start with? Please enter a value of 1 to 7, on a week going from 1 for Sunday, and 7 for Saturday\n");
        scanf("%d",&firstDayOfMonth);
    } while (firstDayOfMonth < 1 || firstDayOfMonth > 7);
    
    do 
    {
        printf("What year is it?\n");
        scanf("%d",&year);
    } 
    while (year < 0);
    
    //Here, we will make Year 1 be a leap year, so any year entered that corresponds with this henceforth will be a leap year, with 29 days in feb
    if (year % 4 == 1)
    {
        feb = 29;
    }
    else
    {
        feb = 28;
    }
    
    numberOfDays = jan;
   
   printf("January \n Sun \t Mon \t Tue \t Wed \t Thu \t Fri \t Sat \t \n"); 
   
   for (i = 1; i < firstDayOfMonth; i++)
   {
       printf("\t");
   }
   
   //Here, the program finds where to start its calendar via indentation
   
   for (j = 1; j <= numberOfDays; j++)
   {
       printf("%d \t", j); //print days in month
       
       if ((firstDayOfMonth) % 7 == 0)
       {
           printf("\n");
       }
      firstDayOfMonth = ((firstDayOfMonth) % 7) + 1;
       //save somewhere to start for the following month
   }
   printf("\n");
   
   numberOfDays = feb;
   
   printf("February \n Sun \t Mon \t Tue \t Wed \t Thu \t Fri \t Sat \t \n");
   
   for (i = 1; i < firstDayOfMonth; i++)
   {
       printf("\t");
   }
   
   
   for (j = 1; j <= numberOfDays; j++)
   {
       printf("%d \t", j);
       
       if ((firstDayOfMonth) % 7 == 0)
       {
           printf("\n");
       }
       firstDayOfMonth = ((firstDayOfMonth) % 7) + 1;
       //save somewhere to start for the following month
   }
   printf("\n");
   
   numberOfDays = jan; //mar has same number of days as jan, saves space to use this over defining explicitly
   
   printf("March \n Sun \t Mon \t Tue \t Wed \t Thu \t Fri \t Sat \t \n");
   
   for (i = 1; i < firstDayOfMonth; i++)
   {
       printf("\t");
   }
   
   
   for (j = 1; j <= numberOfDays; j++)
   {
       printf("%d \t", j);
       
       if ((firstDayOfMonth) % 7 == 0)
       {
           printf("\n");
       }
       firstDayOfMonth = ((firstDayOfMonth) % 7) + 1;
       //save somewhere to start for the following month
   }
   printf("\n");
   
    numberOfDays = apr;
   
   printf("April \n Sun \t Mon \t Tue \t Wed \t Thu \t Fri \t Sat \t \n");
   
   for (i = 1; i < firstDayOfMonth; i++)
   {
       printf("\t");
   }
   
   
   for (j = 1; j <= numberOfDays; j++)
   {
       printf("%d \t", j);
       
       if ((firstDayOfMonth) % 7 == 0)
       {
           printf("\n");
       }
       firstDayOfMonth = ((firstDayOfMonth) % 7) + 1;
       //save somewhere to start for the following month
   }
   printf("\n");
   
   numberOfDays = jan;
   
   printf("May \n Sun \t Mon \t Tue \t Wed \t Thu \t Fri \t Sat \t \n");
   
   for (i = 1; i < firstDayOfMonth; i++)
   {
       printf("\t");
   }
   
   
   for (j = 1; j <= numberOfDays; j++)
   {
       printf("%d \t", j);
       
       if ((firstDayOfMonth) % 7 == 0)
       {
           printf("\n");
       }
       firstDayOfMonth = ((firstDayOfMonth) % 7) + 1;
       //save somewhere to start for the following month
   }
   printf("\n");
   
   numberOfDays = apr;
   
   printf("June \n Sun \t Mon \t Tue \t Wed \t Thu \t Fri \t Sat \t \n");
   
   for (i = 1; i < firstDayOfMonth; i++)
   {
       printf("\t");
   }
   
   
   for (j = 1; j <= numberOfDays; j++)
   {
       printf("%d \t", j);
       
       if ((firstDayOfMonth) % 7 == 0)
       {
           printf("\n");
       }
       firstDayOfMonth = ((firstDayOfMonth) % 7) + 1;
       //save somewhere to start for the following month
   }
   printf("\n");
   
   numberOfDays = jan;
   
   printf("July \n Sun \t Mon \t Tue \t Wed \t Thu \t Fri \t Sat \t \n");
   
   for (i = 1; i < firstDayOfMonth; i++)
   {
       printf("\t");
   }
   
   
   for (j = 1; j <= numberOfDays; j++)
   {
       printf("%d \t", j);
       
       if ((firstDayOfMonth) % 7 == 0)
       {
           printf("\n");
       }
       firstDayOfMonth = ((firstDayOfMonth) % 7) + 1;
       //save somewhere to start for the following month
   }
   printf("\n");
   
   numberOfDays = jan;
   
   printf("August \n Sun \t Mon \t Tue \t Wed \t Thu \t Fri \t Sat \t \n");
   
   for (i = 1; i < firstDayOfMonth; i++)
   {
       printf("\t");
   }
   
   
   for (j = 1; j <= numberOfDays; j++)
   {
       printf("%d \t", j);
       
       if ((firstDayOfMonth) % 7 == 0)
       {
           printf("\n");
       }
       firstDayOfMonth = ((firstDayOfMonth) % 7) + 1;
       //save somewhere to start for the following month
   }
   printf("\n");
   
   numberOfDays = apr;
   
   printf("September \n Sun \t Mon \t Tue \t Wed \t Thu \t Fri \t Sat \t \n");
   
   for (i = 1; i < firstDayOfMonth; i++)
   {
       printf("\t");
   }
   
   
   for (j = 1; j <= numberOfDays; j++)
   {
       printf("%d \t", j);
       
       if ((firstDayOfMonth) % 7 == 0)
       {
           printf("\n");
       }
       firstDayOfMonth = ((firstDayOfMonth) % 7) + 1;
       //save somewhere to start for the following month
   }
   printf("\n");
   
   numberOfDays = jan;
   
   printf("October \n Sun \t Mon \t Tue \t Wed \t Thu \t Fri \t Sat \t \n");
   
   for (i = 1; i < firstDayOfMonth; i++)
   {
       printf("\t");
   }
   
   
   for (j = 1; j <= numberOfDays; j++)
   {
       printf("%d \t", j);
       
       if ((firstDayOfMonth) % 7 == 0)
       {
           printf("\n");
       }
       firstDayOfMonth = ((firstDayOfMonth) % 7) + 1;
       //save somewhere to start for the following month
   }
   printf("\n");
   
   numberOfDays = apr;
   
   printf("November \n Sun \t Mon \t Tue \t Wed \t Thu \t Fri \t Sat \t \n");
   
   for (i = 1; i < firstDayOfMonth; i++)
   {
       printf("\t");
   }
   
   
   for (j = 1; j <= numberOfDays; j++)
   {
       printf("%d \t", j);
       
       if ((firstDayOfMonth) % 7 == 0)
       {
           printf("\n");
       }
       firstDayOfMonth = ((firstDayOfMonth) % 7) + 1;
       //save somewhere to start for the following month
   }
   printf("\n");
   
   numberOfDays = jan;
   
   printf("December \n Sun \t Mon \t Tue \t Wed \t Thu \t Fri \t Sat \t \n");
   
   for (i = 1; i < firstDayOfMonth; i++)
   {
       printf("\t");
   }
   
   
   for (j = 1; j <= numberOfDays; j++)
   {
       printf("%d \t", j);
       
       if ((firstDayOfMonth) % 7 == 0)
       {
           printf("\n");
       }
       firstDayOfMonth = ((firstDayOfMonth) % 7) + 1;
       //save somewhere to start for the following month
   }
   printf("\n");
   
}