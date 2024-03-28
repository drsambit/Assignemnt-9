#include <stdio.h>
#include <string.h>
#include <stdbool.h>
float average(int arr[]){
    int s=0;
    for(int i=0;i<3;i++){
        s=s+arr[i];

    }
    return (s/3.0);
}
bool check(float avg){
    if (avg>35){
        return true;
    }
    else{
        return false;
    }


}
int main (){
    struct CourseRecord{
        char fname[50];
        char lname[50];
        int roll;
        char dept[50];
        char ccode[20];
        int marks[3];
    }crecord;
    char temp[100];
    printf("Enter the person's first name:");
    fgets(crecord.fname,sizeof(crecord.fname),stdin);
    crecord.fname[strcspn(crecord.fname,"\n")]=0;

    printf("Enter the person's last name:");
    fgets(crecord.lname,sizeof(crecord.lname),stdin);
    crecord.lname[strcspn(crecord.lname,"\n")]=0;

    printf("Enter the person's roll no:");
    scanf("%d",&crecord.roll);

    printf("Enter the person's department:");
    fgets(temp,sizeof(temp),stdin);
    fgets(crecord.dept,sizeof(crecord.dept),stdin);
    crecord.dept[strcspn(crecord.dept,"\n")]=0;

    printf("Enter the person's course code:");
    fgets(temp,sizeof(temp),stdin);
    fgets(crecord.ccode,sizeof(crecord.ccode),stdin);
    crecord.ccode[strcspn(crecord.ccode,"\n")]=0;

    for(int i=0;i<3;i++){
        printf("Enter the marks of the %dth subject:",(i+1));
        scanf("%d",&crecord.marks[i]);
    }
    float avg=average(crecord.marks);
    bool b=check(avg);
    if (b){
        printf("PASS");
    }
    else{
        printf("FAIL");
    }


    return 0;








    
}