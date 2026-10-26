#include &lt;stdio.h&gt;

int main()
{
int arr[100];
int n;
int i;
int sum = 0;

printf(&quot;Enter the number of elements: &quot;);
scanf(&quot;%d&quot;, &amp;n);

printf(&quot;Enter %d elements:\n&quot;, n);

for (i = 0; i &lt; n; i++)
{
scanf(&quot;%d&quot;, &amp;arr[i]);
sum = sum + arr[i];
}

printf(&quot;Sum of array elements = %d\n&quot;, sum);

return 0;
}
