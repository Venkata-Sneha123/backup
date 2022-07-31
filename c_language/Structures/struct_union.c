/*
difference between structures and unions
STRUCTURE:
1.The struct keyword is used to define a structure.	
2.When the variables are declared in a structure, the compiler allocates memory to each variables member. 
The size of a structure is equal or greater to the sum of the sizes of each data member.
3.Each variable member occupied a unique memory space.
4.Changing the value of a member will not affect other variables members.
	
5.Each variable member will be assessed at a time.
 
6.We can initialize multiple variables of a structure at a time.	
7.All variable members store some value at any point in the program.
8.The structure allows initializing multiple variable members at once.
9.It is used to store different data type values.	
10.It allows accessing and retrieving any data member at a time.	
UNION:
1.The union keyword is used to define union.
	
2.When the variable is declared in the union, the compiler allocates memory to the largest size variable member. 
The size of a union is equal to the size of its largest data member size.
3. Variables members share the memory space of the largest size variable.
4. Changing the value of one member will also affect other variables members.
5.Only one variable member will be assessed at a time.
6.In union, only the first data member can be initialized.
7. Exactly only one data member stores a value at any particular instance in the program.
8. Union allows initializing only one variable member at once.
9. It is used for storing one at a time from different data type values.
10. It allows accessing and retrieving any one data member at a time.
*/


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

/*
output:
structure data:
i = 34
f = 56.00
name = sneha
union data:
i = 20
f = 0.00
name = 
sizeof structure : 28
sizeof union : 20
 Accessing all members at a time:structure data:
i = 183
f = 90.00
name = sneha
union data:
i = 1751477875
f = 4333837412194284665307136.00
 name: sneha
 Accessing one member at time:
structure data:
i = 240
f = 120.000000
name: C programming
 union data:
i = 240
f = 120.000000
name: C programming
Altering a member value:
structure data:
i = 1218
f = 120.00
name = C programming
union data:
i = 1218
f = 0.00
name = �
*/
