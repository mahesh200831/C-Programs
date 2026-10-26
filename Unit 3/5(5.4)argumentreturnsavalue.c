#include<stdio.h>

float area(float base, float height)
{
float result;

result = 0.5 * base * height;

return result;
}

int main()
{
float base, height;
float result;

printf(&quot;Enter base: &quot;);
scanf(&quot;%f&quot;, &amp;base);

printf(&quot;Enter height: &quot;);
scanf(&quot;%f&quot;, &amp;height);

result = area(base, height);

printf(&quot;Area of triangle = %.2f\n&quot;, result);

return 0;
}
