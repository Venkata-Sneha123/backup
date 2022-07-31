#include<stdio.h>
  int main()
  {
  int i=5;
  char ch='s';
  float f=12.34;
  double d=34.75324;
  short int s=23;
  long int l=44;
  short signed int ss=-87;
  short unsigned int su=56;
  long signed int ls=567845;
  long unsigned int lu=678933;
  signed char sc='r';
  unsigned char uc='f';
  long double lf=23.35665;

  printf("int                 i = %d\t\tsizeof int                 = %lu\n",i,sizeof(int));
  printf("char               ch = %c\t\tsizeof char                = %lu\n",ch,sizeof(char));
  printf("float               f = %f\tsizeof float                 = %lu\n",f,sizeof(float));
  printf("double              d = %lf\tsizeof double               = %lu\n",d,sizeof(double));
  printf("short int           s = %hd\t\tsizeof short int          = %lu\n",s,sizeof(short int));
  printf("long int            l = %ld\t\tsizeof long int           = %lu\n",l,sizeof(long int));
  printf("short signed int   ss = %hd\t\tsizeof short signed int   = %lu\n",ss,sizeof(short signed int));
  printf("short unsigned int su = %hu\t\tsizeof short unsigned int = %lu\n",su,sizeof(short unsigned int));
  printf("long signed int    ls = %ld\t\tsizeof long signed int    = %lu\n",ls,sizeof(long signed int));
  printf("long unsigned int  lu = %lu\t\tsizeof long unsigned int  = %lu\n",lu,sizeof(long unsigned int));
  printf("signed char        sc = %c\t\tsizeof signed char         = %lu\n",sc,sizeof(signed char));
  printf("unsigned char      uc = %c\t\tsizeof unsigned char       = %lu\n",uc,sizeof(unsigned char));
  printf("long double        lf = %Lf\tsizeof long double          = %lu\n",lf,sizeof(long double));
  return 0;
  }
