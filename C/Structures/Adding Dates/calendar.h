typedef enum{
    JAN = 1, FEB, MAR, 
    APR, MAY, JUN, 
    JUL, AUG, SEP, 
    OCT, NOV, DEC
} Month;

typedef struct{
  Month mon;
  int day;
  int year;
} Date;