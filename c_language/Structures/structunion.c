#include <stdio.h>
#include <string.h>

// declaring structure
struct st
{
	int i;
	float f;
	char name[20];
};

// declaring union
union un
{
	int i;
	float f;
	char name[20];
};

void main()
{
struct st s={34,56,"sneha"};//creating variable for structure and initializing values
union un u={20,45,"sneha"};//creating variable for union and initializing values
		
printf("structure data:\ni = %d\nf = %.2f\nname = %s\n",s.i, s.f, s.name);
printf("\nunion data:\ni = %d\nf = %.2f\nname = %s\n",u.i, u.f, u.name);

printf("\nsizeof structure : %ld\n", sizeof(s));
printf("sizeof union : %ld\n", sizeof(u));
	
printf("\n Accessing all members at a time:");
s.i = 183;
s.f = 90;
strcpy(s.name, "sneha");
printf("structure data:\ni = %d\nf = %.2f\nname = %s\n",s.i, s.f, s.name);
	
u.i = 183;
u.f = 90;
strcpy(u.name, "sneha");	
printf("\nunion data:\ni = %d\nf = %.2f\n name: %s\n",u.i, u.f, u.name);

printf("\n Accessing one member at time:");
printf("\nstructure data:");
s.i = 240;
	printf("\ni = %d", s.i);
s.f = 120;
	printf("\nf = %f", s.f);
strcpy(s.name, "C programming");
	printf("\nname: %s\n", s.name);
	
printf("\n union data:");
u.i = 240;
	printf("\ni = %d", u.i);
u.f = 120;
	printf("\nf = %f", u.f);
strcpy(u.name, "C programming");
	printf("\nname: %s\n", u.name);
	
printf("\nAltering a member value:\n");
s.i = 1218;
	printf("structure data:\ni = %d\nf = %.2f\nname = %s\n",s.i, s.f, s.name);
u.i = 1218;
	printf("union data:\ni = %d\nf = %.2f\nname = %s\n",u.i, u.f, u.name);
}

