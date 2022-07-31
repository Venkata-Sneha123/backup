#include <stdio.h>
enum State {Working = -3, Failed, Freezed=-3};

int main()
{
printf("%d, %d, %d", Working, Failed, Freezed);
return 0;
}

/*
output:
-3, -2, -3
*/
