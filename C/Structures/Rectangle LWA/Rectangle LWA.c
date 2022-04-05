/*Problem Description:
Notice that a rectangle can be represented in a cartesian plane by only having two points.
Using only the upper-right point and the lower-left point, 
we can plot a rectangle, easy-peasy.

With these two points -- each with an x- and y-coordinate -- 
we can calculate for a rectangle's length, width, and area!*/

#include<stdio.h>
#include"point.h"
int getLength(Rectangle*);
int getWidth(Rectangle*);
int main() {
  int ur_x, ur_y, ll_x, ll_y;
  printf("Upper Right Coordinates\nEnter x: ");
  scanf("%d", &ur_x);
  printf("Enter y: ");
  scanf("%d", &ur_y);
  
  printf("\nLower Left Coordinates\n");
  while(1){
    printf("Enter x: ");
    scanf("%d", &ll_x);
    if(ll_x<ur_x)
      break;
    else
      continue;
  }
  while(1){
    printf("Enter y: ");
    scanf("%d", &ll_y);
    if(ll_y<ur_y)
      break;
    else
      continue;
  }
  
  Point UR = { ur_x, ur_y };
  Point LL = { ll_x, ll_y };
  
  Rectangle r = { UR, LL };
  
  int length=getLength(&r), width=getWidth(&r);
  printf("\nRectangle\nLength: %d\nWidth: %d\nArea: %d",length,width,length*width);
  
  return 0;
}

int getLength(Rectangle *rect) {
  return rect->upper_right.x-rect->lower_left.x;
}
int getWidth(Rectangle *rect){
  return rect->upper_right.y-rect->lower_left.y;
}