#include <stdio.h>

int main()
{
    int date;
    int mon;
    int year;
    //--------
    printf("To get a valid date.\n");
    printf("Enter a date:- ");
    scanf("%d", &date);
    getchar();
    
    if(date == 31)
    {
        printf("\nValid Date\n");
        printf("Enter a Valid month:- ");
        scanf("%d", &mon);
        if (mon == 1 || mon == 3 || mon == 5 || mon == 7 || mon == 8 || mon == 10 || mon == 12 )
        {
            printf("\nValid Month.\n");
        }
        else
        {
            goto invalidmon;
        }
    }
    else if (date == 30)
    {
        printf("\nValid Date\n");
        printf("Enter a Valid month:- ");
        scanf("%d", &mon);
        if (mon == 2)
        {
            goto invalidmon;
        }
        else
        {
            printf("\nValid Month.\n");
        }  
    }
    else if (date == 29 )
    {
        printf("\nValid Date\n");
        printf("Enter a Valid month:- ");
        scanf("%d", &mon);
        if (mon == 2)
        {
            printf("\nValid Month.\n");
            goto leapif;
        }
        else
        {
            goto invalidmon;
        }
    }
    else if(date == 28)
    {
        printf("\nValid Date\n");
        printf("Enter a Valid month:- ");
        scanf("%d", &mon);
        if (mon == 2)
        {
            printf("\nValid Month.\n");
        }
        else
        {
            goto invalidmon;
        }
    }
    else if (date < 28 && date > 0)
    {
        printf("\nValid Date\n");
        printf("Enter a Valid month:- ");
        scanf("%d", &mon);
        getchar();
        if (mon < 13 && mon > 0)
        {
            printf("\nValid Month.\n");
        }
        else
        {
            goto invalidmon;
        }
    }
    /*else if(mon > 0 && mon < 28)
    {
        
    }*/
    else
    {
        goto invalidate;
    }
    //--------
    printf("Enter a year:- ");
    scanf("%d", &year);
    getchar();
    if(year <= 2021 && year >= 0000)
    {
        goto allcorrect;
    }
    else
    {
        goto invalidyear;
    }
    //--------
invalidate:
    printf("\ninvalid date. doesn't exists\n");
    goto thankyou;
    //--------
invalidmon:
    printf("\ninvalid month. doesn't exist\n");
    goto thankyou;
    //--------
invalidyear:
    printf("\ninvalid year. hasn't come yet\n");
    goto thankyou;
    
leapif:
    printf("Enter a year:- ");
    scanf("%d", &year);
    getchar();
    if(year % 4 == 0)
    {
        goto allcorrect;
    }
    else
    {
        goto linvalidyear;
    }
linvalidyear:
printf("\nInvalid Year\n");
goto thankyou;

allcorrect:
    printf("\nYou have entered %d/%d/%d\n", date, mon, year);
    goto thankyou;
    
thankyou:
    printf("Thank You\n");
    getchar();
}