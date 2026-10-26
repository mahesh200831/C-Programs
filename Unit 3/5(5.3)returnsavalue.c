#include<stdio.h>

float area()
{
float base, height;
float result;

printf(&quot;Enter base: &quot;);
scanf(&quot;%f&quot;, &amp;base);

printf(&quot;Enter height: &quot;);
scanf(&quot;%f&quot;, &amp;height);

result = 0.5 * base * height;

return result;
}

int main()
{
float result;

result = area();

printf(&quot;Area of triangle = %.2f\n&quot;, result);

return 0;
}
