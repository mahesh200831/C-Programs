#include <stdio.h>

union Data
{
int integer;

float decimal;
char character;
};

int main()
{
union Data data;

printf(&quot;Size of union = %lu bytes\n&quot;, sizeof(data));

data.integer = 100;

printf(&quot;\nAfter storing integer:\n&quot;);
printf(&quot;Integer = %d\n&quot;, data.integer);

data.decimal = 25.5;

printf(&quot;\nAfter storing float:\n&quot;);
printf(&quot;Float = %.2f\n&quot;, data.decimal);

data.character = &#39;A&#39;;

printf(&quot;\nAfter storing character:\n&quot;);
printf(&quot;Character = %c\n&quot;, data.character);

printf(&quot;\nMemory addresses of union members:\n&quot;);

printf(&quot;Address of integer = %p\n&quot;, (void *)&amp;data.integer);
printf(&quot;Address of float = %p\n&quot;, (void *)&amp;data.decimal);
printf(&quot;Address of character = %p\n&quot;, (void *)&amp;data.character);

return 0;
}