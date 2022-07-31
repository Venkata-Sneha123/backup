/*
4.     A sequence must be made with the following constraint on its values.
Constraint: The number of consecutive same elements in the sequence should be same as the value.  
Example: 1 2 2 3 3 3 4 4 4 4 is valid (input1)              
1 2 3 3 3  is invalid. (input2) 
Write a program that checks whether a given input sequence is valid.
Input format is just a sequence of integers.
Output format should be one of the following:
input1  : sequence is valid
input2  : sequence is not valid
*/

#include<stdio.h>

int main()
{
        int arr[20],n,i;
        printf("enter no of elements: ");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
                scanf("%d",&arr[i]);
        }
        int cnt=0,no=1;
        for(i=0;i<n;i++)
        {
                if((arr[i]==no)&&(cnt<no))
                {
                        cnt++;
                        if(cnt>=no)
                        {
                                no++;
                         cnt=0;
                         continue;
			                  }
                }
                else
                {
                        printf("\ninvalid sequence\n");
                        return 0;
                }
	}
	printf("It is valid sequence\n");
return 0;
}
