#include<stdio.h>

void area()
{
float base, height, result;

printf(&quot;Enter base: &quot;);
scanf(&quot;%f&quot;, &amp;base);

printf(&quot;Enter height: &quot;);
scanf(&quot;%f&quot;, &amp;height);

result = 0.5 * base * height;

printf(&quot;Area of triangle = %.2f\n&quot;, result);
}

int main()
{
area();

return 0;
}
