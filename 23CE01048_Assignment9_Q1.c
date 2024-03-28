#include <stdio.h>
#include <string.h>
int main(){
        struct company{
        char name[100];
        char address[500];
        long phone;
        int ne;
    }comp;
    printf("Enter the name of the company");
    gets(comp.name);
    printf("Enter the address of the company");
    gets(comp.address);
    printf("Enter the phone number");
    scanf("%ld",&comp.phone);
    printf("Enter the no of employees");
    scanf("%d",&comp.ne);
    printf("The name of the company is %s\n",comp.name);
    printf("The address of the company is %s\n",comp.address);
    printf("The phone no of the company is %ld\n",comp.phone);
    printf("The number of employees the company is %d\n",comp.ne);
    return 0;

}