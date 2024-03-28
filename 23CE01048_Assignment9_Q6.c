#include <stdio.h>
#include <string.h>
#include<stdlib.h>
typedef struct students{
    char name[100];
    int roll;
    float percent;
}stu;

int i=0;
stu insert(stu arr[]){
    char tem[100];
    printf("Enter the name of the student:");
    fgets(tem,sizeof(tem),stdin);
    fgets(arr[i].name,sizeof(arr[i].name),stdin);
    arr[i].name[strcspn(arr[i].name,"\n")]=0;
    printf("Enter the roll no of the student:");
    scanf("%d",&arr[i].roll);
    printf("Enter the percentage of marks obtained by the student:");
    scanf("%f",&arr[i].percent);
    i++;
    for(int k=0;k<i;k++){
        for(int l=0;l<(i-1)-k;l++){

        if(arr[l+1].roll<arr[l].roll){
            stu temp=arr[l];
            arr[l]=arr[l+1];
            arr[l+1]=temp;
        }
        }  
    }
    return arr[100];
}
stu sortName(stu arr[]){
    for(int k=0;k<i;k++){
        for(int l=0;l<(i-1)-k;l++){
            for(int m=0;m<strlen(arr[l].name);m++){
                if(arr[l].name[m]>arr[l+1].name[m]){
                    stu temp=arr[l];
                    arr[l]=arr[l+1];
                    arr[l+1]=temp;
                }
            }
        }
    }
    return arr[100];
}
int main (){
    stu arr[100];
    int ch;
    while(1){
        
        printf("Which function do you want to perform?\n");
        printf("1 for inserting a record and simultaneously sorting as per roll no\n");
        printf("2 for sorting the database as per name\n");
        printf("3 for returning a name from the database\n");
        printf("4 for displaying significant contents from the database\n");
        printf("5 for deleting a particular record\n");
        printf("0 for exiting from the databse\n");
        printf("**********************************************************\n");
        printf("YOUR CHOICE IS:");
        scanf("%d",&ch);
        switch (ch){
        case 0:
        exit(1);
        break;
        case 1:
        insert (arr);
        for(int j=0;j<i;j++){

            printf("The name of %dth person is %s\n",(j+1),arr[j].name);
            printf("The roll no of %dth person is %d\n",(j+1),arr[j].roll);
            printf("The percentage of marks obtained by %dth person is %f\n",(j+1),arr[j].percent);
        }
        break;
        case 2:
        sortName(arr);
        for(int j=0;j<i;j++){

            printf("The name of %dth person is %s\n",(j+1),arr[j].name);
            printf("The roll no of %dth person is %d\n",(j+1),arr[j].roll);
            printf("The percentage of marks obtained by %dth person is %f\n",(j+1),arr[j].percent);
        }
        break;
    }



    
}

    
    

return 0;

    
}