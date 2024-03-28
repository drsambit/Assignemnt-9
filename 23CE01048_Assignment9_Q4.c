#include <stdio.h>
#include <string.h>
int main (){
    struct Person{
        char name[100];
        struct Address{
            char street[50];
            char city[50];
            int zipcd;
        }addrs;
    }Person;
    char temp[100];
    printf("Enter the person's name:");
    
    fgets(Person.name,sizeof(Person.name),stdin);
    Person.name[strcspn(Person.name,"\n")]=0;

    printf("Enter the person's street location:");
   
    fgets(Person.addrs.street,sizeof(Person.addrs.street),stdin);
    Person.addrs.street[strcspn(Person.addrs.street,"\n")]=0;

    printf("Enter the person's city location:");
    
    fgets(Person.addrs.city,sizeof(Person.addrs.city),stdin);
    Person.addrs.city[strcspn(Person.addrs.city,"\n")]=0;

    printf("Enter the zipcode of the person's location:");
    scanf("%d",&Person.addrs.zipcd);

    printf("The name of the person is:-%s\n",Person.name);
    printf("The street of the person is:-%s\n",Person.addrs.street);
    printf("The city of the person is:-%s\n",Person.addrs.city);
    printf("The zip code of the person is:-%d\n",Person.addrs.zipcd);

    return 0;

}