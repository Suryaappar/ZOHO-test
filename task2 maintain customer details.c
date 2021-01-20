//TASK 2: Maintain customer details
#include <stdio.h>
struct customer {
char accountholder[100];
int accno;
int pinnumber;
long long int accoutbalance;
} s[];
int main()
{
    int i;
    printf("enter info of customer:\n");
    for(i=0;i<5;i++)
    {
        s[i].accno=i+1;
        printf("\n For account number %d,\n",s[i].accno);
        printf("Enter accountholder:");
        scanf("%s,s[i].accountholder");
        printf("Enter pinnumber:");
        scanf("%d",&s[i].pinnumber);
        printf("Enter accountbalance");
        scanf("%lld,&s[i].accountbalance");

    }
    printf("Display information :\n\n");
    //display information
    for(i=0;i<5;i++)
    {
        printf("\n accno : %d\n",i+1);
        printf("accountholder :");
        puts(s[i].accountholder);
        printf("pinnumber :%d",s[i].pinnumber);
        printf("accountbalance :%d",s[i].accountholder);
        printf("\n");
    }
    }
