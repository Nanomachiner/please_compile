#include <stdio.h>

int main(void)
{
    int i;
    int j;
    int feb;
    int janStart;
    int numberOfDays;
    int row;
    int monthCol;
    int year;

    do 
    {
        printf("What year is it?\n");
        scanf("%d",&year);
    } 
    while (year < 0);

// Jan, Mar, May, Jul, Aug, Oct, Dec have 31 days
// Apr, Jun, Sep, Nov have 30 days
// Feb has 28 days. 29 if leap year    
    
//Here, we will make Year 1 be a leap year, so any year entered that corresponds with this henceforth will be a leap year, with 29 days in feb
    if (year % 4 == 1)
    {
        feb = 29;
    }
    else
    {
        feb = 28;
    }
    
//Need to know what day January starts on, we'll prompt for it
    do 
    {
        printf("What day does January start with? Please enter a value of 1 to 7, on a week going from 1 for Sunday, and 7 for Saturday\n");
        scanf("%d",&janStart);
    } while (janStart < 1 || janStart > 7);
    
    janStart = janStart - 1;
    
//A variable for the starting day of each month after January is needed too...
    int febStart = (janStart + 31) % 7;
    int marStart = (febStart + feb) % 7;
    int aprStart = (marStart + 31) % 7;
    int mayStart = (aprStart + 30) % 7;
    int junStart = (mayStart + 31) % 7;
    int julStart = (junStart + 30) % 7;
    int augStart = (julStart + 31) % 7;
    int sepStart = (augStart + 31) % 7;
    int octStart = (sepStart + 30) % 7;
    int novStart = (octStart + 31) % 7;
    int decStart = (novStart + 30) % 7;

   
/*At this point we're trying to get this thing to print multiple months in one line
but that won't happen unless everything prints in one line from this point onward*/
   
   printf("January \t\t\t\t\t\t\t February \t\t\t\t\t\t\t March \t \n");
   
//we'll start with the first three. If this works, I'll be making a 3x4 month grid

   printf("Sun \t Mon \t Tue \t Wed \t Thu \t Fri \t Sat \t\t Sun \t Mon \t Tue \t Wed \t Thu \t Fri \t Sat \t\t Sun \t Mon \t Tue \t Wed \t Thu \t Fri \t Sat\n");

/*Okay, I tried a bunch of other options for this, but ultimately it looks like
I'm forced to pursue the rows and columns method for this calendar. I'll have to
programmatically create artificial rows and columns for numbers to be printed to*/

    for (row = 0; row < 6; row++)
    {
        for (monthCol = 0; monthCol < 23; monthCol++) //each loop of 23 columns prints a new line, or "row"
        {
            if(monthCol / 7 == 0)//This uses the result of integer division to pinpoint column sets
            {
                int i = monthCol % 7 + 7 * row - janStart + 1;
                /*the result of this formula represents the column the result will print to, 
                if you count each day + tab from 1 to 7 as one column
                then count beyond. So column "9" prints under sunday of the second month
                with "8" being the space between Jan and Feb, and so on*/
                if (i < 1 || i > 31)
                {
                    printf("\t");
                } //someone said this this is "more elegant" than a separate for loop for printing starting tabs
                else 
                {
                    printf("%d \t", i);
                } //regularly prints numbers escaped by one tab
            }
            
            if(monthCol / 7 == 1) //same stuff but for the next month
            {
                int i = monthCol % 7 + 7 * row - febStart + 1;
                
                if (i < 1 || i > feb) 
                {
                    printf("\t");
                } 
                else 
                {
                    printf("%d \t", i);
                }
            }
            
            if(monthCol/7 == 2) //Third
            {
                int i = monthCol % 7 + 7 * row - marStart + 1;
                
                if (i < 1 || i > 31)//just to be sure I'm being thorough, this is the number of days in the month
                {
                    printf("\t");
                } 
                else 
                {
                    printf("%d \t", i);
                }
            }
            
            if ((monthCol + 1) % 7 == 0 && monthCol > 0)
            {
                printf("\t");
            }
        }
        printf("\n");
    } //That section took 12 hours to figure out, but now it's perfect

    
    printf("April \t\t\t\t\t\t\t\t May \t\t\t\t\t\t\t\t June \t \n");
    printf("Sun \t Mon \t Tue \t Wed \t Thu \t Fri \t Sat \t\t Sun \t Mon \t Tue \t Wed \t Thu \t Fri \t Sat \t\t Sun \t Mon \t Tue \t Wed \t Thu \t Fri \t Sat\n");

    for (row = 0; row < 6; row++)
    {
        for (monthCol = 0; monthCol < 23; monthCol++) 
        {
            if(monthCol / 7 == 0)
            {
                int i = monthCol % 7 + 7 * row - aprStart + 1;
                
                if (i < 1 || i > 30)
                {
                    printf("\t");
                } 
                else 
                {
                    printf("%d \t", i);
                } 
            }
            
            if(monthCol / 7 == 1)
            {
                int i = monthCol % 7 + 7 * row - mayStart + 1;
                
                if (i < 1 || i > 31) 
                {
                    printf("\t");
                } 
                else 
                {
                    printf("%d \t", i);
                }
            }
            
            if(monthCol/7 == 2)
            {
                int i = monthCol % 7 + 7 * row - junStart + 1;
                
                if (i < 1 || i > 30) 
                {
                    printf("\t");
                } 
                else 
                {
                    printf("%d \t", i);
                }
            }
            
            if ((monthCol + 1) % 7 == 0 && monthCol > 0)
            {
                printf("\t");
            }
        }
        printf("\n");
    } //success, on to the rest. It's all the same except for changing the names and number of days
    
    printf("July \t\t\t\t\t\t\t\t August \t\t\t\t\t\t\t September \t \n");
    printf("Sun \t Mon \t Tue \t Wed \t Thu \t Fri \t Sat \t\t Sun \t Mon \t Tue \t Wed \t Thu \t Fri \t Sat \t\t Sun \t Mon \t Tue \t Wed \t Thu \t Fri \t Sat\n");
    
    for (row = 0; row < 6; row++)
    {
        for (monthCol = 0; monthCol < 23; monthCol++) 
        {
            if(monthCol / 7 == 0)
            {
                int i = monthCol % 7 + 7 * row - julStart + 1;
                
                if (i < 1 || i > 31)
                {
                    printf("\t");
                } 
                else 
                {
                    printf("%d \t", i);
                } 
            }
            
            if(monthCol / 7 == 1)
            {
                int i = monthCol % 7 + 7 * row - augStart + 1;
                
                if (i < 1 || i > 31) 
                {
                    printf("\t");
                } 
                else 
                {
                    printf("%d \t", i);
                }
            }
            
            if(monthCol/7 == 2)
            {
                int i = monthCol % 7 + 7 * row - sepStart + 1;
                
                if (i < 1 || i > 30) 
                {
                    printf("\t");
                } 
                else 
                {
                    printf("%d \t", i);
                }
            }
            
            if ((monthCol + 1) % 7 == 0 && monthCol > 0)
            {
                printf("\t");
            }
        }
        printf("\n");
    }
    
    printf("October \t\t\t\t\t\t\t November \t\t\t\t\t\t\t December \t \n");
    printf("Sun \t Mon \t Tue \t Wed \t Thu \t Fri \t Sat \t\t Sun \t Mon \t Tue \t Wed \t Thu \t Fri \t Sat \t\t Sun \t Mon \t Tue \t Wed \t Thu \t Fri \t Sat\n");
    
    for (row = 0; row < 6; row++)
    {
        for (monthCol = 0; monthCol < 23; monthCol++) 
        {
            if(monthCol / 7 == 0)
            {
                int i = monthCol % 7 + 7 * row - octStart + 1;
                
                if (i < 1 || i > 30)
                {
                    printf("\t");
                } 
                else 
                {
                    printf("%d \t", i);
                } 
            }
            
            if(monthCol / 7 == 1)
            {
                int i = monthCol % 7 + 7 * row - novStart + 1;
                
                if (i < 1 || i > 31) 
                {
                    printf("\t");
                } 
                else 
                {
                    printf("%d \t", i);
                }
            }
            
            if(monthCol/7 == 2)
            {
                int i = monthCol % 7 + 7 * row - decStart + 1;
                
                if (i < 1 || i > 30) 
                {
                    printf("\t");
                } 
                else 
                {
                    printf("%d \t", i);
                }
            }
            
            if ((monthCol + 1) % 7 == 0 && monthCol > 0)
            {
                printf("\t");
            }
        }
        printf("\n");
    }
    
//end calendar program
}