#include <stdio.h> 
// #include <conio.h> 
main() 
{
  float x1,y1,x2,y2,x3,y3,x4,y4,slope1,slope2;
  // clrscr();
  
  scanf("\n %f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3);
  
  // scanf("\n %d%d",&x2,&y2);
  
  // scanf("\n %d%d",&x3,&y3);

  slope1=(y2-y1)/(x2-x1);
  slope2=(y3-y2)/(x3-x2);

  if(slope1==slope2)
{
  printf("Yes");
}
  else
{
  printf("No");
} 
  return (0);
}