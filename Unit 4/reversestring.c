#include <stdio.h>

int main()
{
char str[100];
int length = 0;
int i;

printf(&quot;Enter a string: &quot;);
scanf(&quot; %[^\n]&quot;, str);

while (str[length] != &#39;\0&#39;)
{
length++;
}

printf(&quot;\nLength of the string = %d\n&quot;, length);

printf(&quot;Reverse of the string = &quot;);

for (i = length - 1; i &gt;= 0; i--)
{
printf(&quot;%c&quot;, str[i]);
}

printf(&quot;\n&quot;);

return 0;
}