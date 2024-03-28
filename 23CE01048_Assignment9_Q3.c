#include <stdio.h>
struct Date{
        int day;
        int month;
        int year;
    }Date1,Date2;

int compare(struct Date Date1,struct Date Date2){
    if(Date1.year==Date2.year){
        if(Date1.month==Date2.month){
            if(Date1.day==Date2.day){
                return 0;
                
            }
            else if(Date1.day>Date1.day){
                return 1;
            }
            else{
                return -1;
            }
        }
        else if(Date1.month>Date2.month){
            return 1;
        }
        else{
            return -1;
        }
    }
    else if(Date1.year>Date2.year){
        return 1;
    }
    else{
        return -1;
    }
    

}

int main(){
    struct Date Date1,Date2;
    printf("Enter day 1:");
    scanf("%d",&Date1.day);
    printf("Enter month 1:");
    scanf("%d",&Date1.month);
    printf("Enter year 1:");
    scanf("%d",&Date1.year);
    printf("Enter day 2:");
    scanf("%d",&Date2.day);
    printf("Enter month 2:");
    scanf("%d",&Date2.month);
    printf("Enter year 2:");
    scanf("%d",&Date2.year);
    int n=compare(Date1,Date2);
    printf("%d",n);
    return 0;
}