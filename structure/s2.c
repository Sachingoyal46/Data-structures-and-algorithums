#include <stdio.h>

struct time{
int hr;
int min;
int sec;
};

int main()
{
  struct time t1={7,31,54};
  struct time t2={2,55,36};
  struct time t;

  int x,y;
  t.sec=(t1.sec + t2.sec)%60;
  x=(t1.sec + t2.sec)/60;

  t.min=(t1.min + t2.min + x)%60;
   int v=(t1.min + t2.min + x)/60;


  t.hr=(t1.hr + t2.hr + v);

  

  printf("%d %d %d ",t.hr,t.min,t.sec);
  
  


  return 0;
}

