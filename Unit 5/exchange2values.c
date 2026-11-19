#include <stdio.h>

void swap(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}

int main()
{
int num1, num2;

printf(&quot;Enter first number: &quot;);
scanf(&quot;%d&quot;, &amp;num1);

printf(&quot;Enter second number: &quot;);
scanf(&quot;%d&quot;, &amp;num2);

printf(&quot;\nBefore swapping:\n&quot;);
printf(&quot;First number = %d\n&quot;, num1);
printf(&quot;Second number = %d\n&quot;, num2);

swap(&amp;num1, &amp;num2);

printf(&quot;\nAfter swapping:\n&quot;);
printf(&quot;First number = %d\n&quot;, num1);
printf(&quot;Second number = %d\n&quot;, num2);

return 0;
}