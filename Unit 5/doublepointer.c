#include <stdio.h>

int main()
{
int num;
int *ptr;
int **dptr;

printf(&quot;Enter an integer: &quot;);
scanf(&quot;%d&quot;, &amp;num);

ptr = &amp;num;
dptr = &amp;ptr;

printf(&quot;\nValue of variable = %d\n&quot;, num);
printf(&quot;Value using pointer = %d\n&quot;, *ptr);
printf(&quot;Value using double pointer = %d\n&quot;, **dptr);

printf(&quot;\nAddress of variable = %p\n&quot;, (void *)&amp;num);
printf(&quot;Address stored in pointer = %p\n&quot;, (void *)ptr);
printf(&quot;Address stored in double pointer = %p\n&quot;, (void *)dptr);

return 0;
}