/*Problem Description:
Any day consists of the following values: Month, Day, and Year. 
Using this logic, we can group these data into a single structure.
With this, you can now perform calculations using dates. 
For this problem, you will be adding days into a date.*/

#include<stdio.h>
#include "calendar.h"
Date addDate(Date mdy, int add);
int leapYear(int year);
int main(){
  Month m;
  int d,y,add;

  while(1){
    printf("Enter month(1-12): ");
    scanf("%d", &m);
    if(m>0 && m<=12)
      break;
    else
      continue;
  }
  while(1){
    printf("Enter day: ");
    scanf("%d", &d);
    if(d>0 && d<=31)
      break;
    else
      continue;
  }
  while(1){
    printf("Enter year: ");
    scanf("%d", &y);
    if(y>=0)
      break;
    else
      continue;
  }
  
  Date mdy = {m, d, y};
  
  while(1){
    printf("Enter how many days after: ");
    scanf("%d", &add);
    if(add>=0)
      break;
    else
      continue;
  }
  Date result = addDate(mdy, add);
  printf("\nResult(mm/dd/yyyy): %02d/%02d/%d", result.mon, result.day, result.year);

  return 0;
}
Date addDate(Date date, int days){
  date.day = date.day + days;
  if(date.day>28 && date.mon==FEB && leapYear(date.year)==0){
    date.day-=28;
    date.mon++;
  }
  else if(date.day>29 && date.mon==FEB && leapYear(date.year)==1){
    date.day-=29;
    date.mon++;
  }
  else if(date.day>30 && (date.mon==APR || date.mon==JUN || date.mon==SEP || date.mon==NOV)){
    date.day-=30;
    date.mon++;
  }
  else if(date.day>31){
    date.day-=31;
    date.mon++;
  }

  if(date.mon==13){
    date.mon=1;
    date.year++;
  }
  return date;
}
int leapYear(int year){
  if(year%4 != 0)
    return 0;
  if(year%100 != 0)
    return 1;
  if(year%400 != 0)
    return 0;

  return 1;
}