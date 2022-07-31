#include<stdio.h>

int main()
{

int a=5,b=3;

/* pointer to constant  ptr1 = &b (allowed) but *ptr1 = 10(not allowed)    */
int const *ptr_to_const = &a;// const int *ptr;

/* constant pointer  ptr2 = &a (not allowed) but *ptr2 = 20(allowed)    */
int * const const_ptr = &b;

printf("a = %d b = %d\n",a,b);
printf("*ptr_to_const = %d *const_ptr = %d\n",*ptr_to_const,*const_ptr);

printf("*ptr_to_const = %p\n",ptr_to_const);
ptr_to_const = &b;// it is allowed
printf("*ptr_to_const = %d\n",*ptr_to_const);

//*ptr_to_const = 10; // not allowed
printf("*ptr_to_const = %d\n",*ptr_to_const);

*const_ptr = 20; // allowed
printf("*const_ptr = %d\n",*const_ptr);

//const_ptr = &a;//not allowed
printf("*const_ptr = %d\n",*const_ptr);


/* constant pointer to constant ptr3 = &b(not allowed) *ptr3 = 10(not allowed)  */
const int * const const_ptr_to_const = &a;

printf("const_ptr_to_const = %d\n",*const_ptr_to_const);

const_ptr_to_const = &b;//not allowed
printf("const_ptr_to_const = %d\n",*const_ptr_to_const);

*const_ptr_to_const = 20;//not allowed
printf("const_ptr_to_const = %d\n",*const_ptr_to_const);

return 0;
}
