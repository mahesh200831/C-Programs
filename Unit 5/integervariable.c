#include <stdio.h>

int main()
{
int num;
int *ptr;

printf(&quot;Enter an integer: &quot;);
scanf(&quot;%d&quot;, &amp;num);

ptr = &amp;num;

printf(&quot;\nUsing Variable:\n&quot;);
printf(&quot;Value of variable = %d\n&quot;, num);
printf(&quot;Address of variable = %p\n&quot;, (void *)&amp;num);

printf(&quot;\nUsing Pointer:\n&quot;);
printf(&quot;Value using pointer = %d\n&quot;, *ptr);
printf(&quot;Address using pointer = %p\n&quot;, (void *)ptr);

return 0;
}