#include &lt;stdio.h&gt;

int main()
{
int intArray[3];
float floatArray[3];
char charArray[3];
int i;

printf(&quot;Enter 3 integer elements:\n&quot;);
for (i = 0; i &lt; 3; i++)
{
scanf(&quot;%d&quot;, &amp;intArray[i]);
}

printf(&quot;\nEnter 3 float elements:\n&quot;);
for (i = 0; i &lt; 3; i++)
{
scanf(&quot;%f&quot;, &amp;floatArray[i]);
}

printf(&quot;\nEnter 3 character elements:\n&quot;);
for (i = 0; i &lt; 3; i++)
{
scanf(&quot; %c&quot;, &amp;charArray[i]);
}

printf(&quot;\nInteger Array:\n&quot;);
for (i = 0; i &lt; 3; i++)
{
printf(&quot;Value = %d, Address = %p\n&quot;,
intArray[i], (void *)&amp;intArray[i]);
}

printf(&quot;\nFloat Array:\n&quot;);
for (i = 0; i &lt; 3; i++)
{
printf(&quot;Value = %.2f, Address = %p\n&quot;,
floatArray[i], (void *)&amp;floatArray[i]);
}

printf(&quot;\nCharacter Array:\n&quot;);
for (i = 0; i &lt; 3; i++)
{
printf(&quot;Value = %c, Address = %p\n&quot;,
charArray[i], (void *)&amp;charArray[i]);

}

return 0;
}
