#include <stdio.h>
#include <string.h>

int main() {
    typedef struct students {
        int roll;
        char name[50];
        char address[100];
        int age;
        float avg;
    } stu;
    char temp[100];
    
    stu arr[6];
    
    for (int i = 0; i < 6; i++) {
        printf("Enter the roll no of %dth student: ", (i + 1));
        scanf("%d", &arr[i].roll);
        printf("Enter the name of %dth student",(i+1));
        fgets(temp,sizeof(temp),stdin);
        fgets(arr[i].name,sizeof(arr[i].name),stdin);
        arr[i].name[strcspn(arr[i].name,"\n")]=0;
        printf("Enter the address of %dth student",(i+1));
        fgets(temp,sizeof(temp),stdin);
        fgets(arr[i].address,sizeof(arr[i].address),stdin);
        arr[i].name[strcspn(arr[i].name,"\n")]=0;
        printf("Enter the age of %dth student: ", (i + 1));
        scanf("%d", &arr[i].age);
        printf("Enter the average marks of %dth student: ", (i + 1));
        scanf("%f", &arr[i].avg);


       
    }

    for (int i = 0; i < 6; i++) {
        printf("The roll no of %d student is %d\n", (i + 1), arr[i].roll);
        printf("The name of %d student is %s\n", (i + 1), arr[i].name);
        printf("The address of %d student is %s\n", (i + 1), arr[i].address);
        printf("The age of %d student is %d\n", (i + 1), arr[i].age);
        printf("The average of %d student is %f\n", (i + 1), arr[i].avg);
    }
    return 0;
}