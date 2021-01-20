#include<stdio.h>
int main()
{
    int denomination;
    int number;
    long long int value;
    int i;

    printf("Feeding the Cash in ATM: ");
    for(i=0;i<4;i++)
    {

        printf("\nEnter the denomination: ");
        scanf("%d",&denomination);
        printf("\nEnter the number of notes: ");
        scanf("%d",&number);
        value=denomination*number;
        printf("\nThe value of the above is:%lld ", value);


    }
    return 1;
}
