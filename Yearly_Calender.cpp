#include<bits/stdc++.h>
using namespace std;
void solve(int year,int month)
{
    int a, y, m, result,day=1,k=0,p;
    a = (14 - month) / 12;
    y = year - a;
    m = month + (12 * a) - 2;
    result = (day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
    //printing the month name and year
    if(month==1)
    {
        printf("----------January-%d",year);
        printf("-----------");
    }
    else if(month==2)
    {
        printf("----------February-%d",year);
        printf("----------");
    }
    else if(month==3)
    {
        printf("-----------March-%d",year);
        printf("------------");
    }
    else if(month==4)
    {
        printf("-----------April-%d",year);
        printf("------------");
    }
    else if(month==5)
    {
        printf("------------May-%d",year);
        printf("-------------");
    }
    else if(month==6)
    {
        printf("------------June-%d",year);
        printf("------------");
    }
    else if(month==7)
    {
        printf("------------July-%d",year);
        printf("------------");
    }
    else if(month==8)
    {
        printf("-----------August-%d",year);
        printf("-----------");
    }
    else if(month==9)
    {
        printf("---------September-%d",year);
        printf("----------");
    }
    else if(month==10)
    {
        printf("----------October-%d",year);
        printf("-----------");
    }
    else if(month==11)
    {
        printf("----------November-%d",year);
        printf("----------");
    }
    else if(month==12)
    {
        printf("----------December-%d",year);
        printf("----------");
    }
    cout<<endl;
    printf("Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
    while(result--)// getting the number of spaces needed before the day 1
    {
        printf("     ");
        k++;
    }
    //total number of days in that month
    if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        p=31;
    }
    else if(month != 2)
    {
        p=30;
    }
    else if((year%4==0 && year%100 != 0) || year%400==0)
    {
        p=29;
    }
    else
    {
        p=28;
    }
    for(int i = 1; i<=p; i++)
    {
        if(i<10)
        {
            printf("  ");//spaces before date 1-9
        }
        else
        {
            printf(" ");//spaces before the date 10 - end
        }
        printf("%d",i);//printing date
        k++;
        printf("  ");//space between two days
        if(k%7==0)
        {
            printf("\n");//new line after a week
        }
    }
    cout<<endl<<endl;
}
int main()
{
    int month,year;
    printf("Enter the year : ");
    scanf("%d",&year);
    printf("\n\n");
    for(month=1;month<=12;month++)
    {
        solve(year,month);
    }

    return 0;
}
