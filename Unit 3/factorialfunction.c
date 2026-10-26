#include &lt;stdio.h&gt;

long int factorial(int n)
{
int i;
long int fact = 1;

for (i = 1; i &lt;= n; i++)
{
fact = fact * i;
}

return fact;
}

int main()
{
int num;
long int result;

printf(&quot;Enter a number: &quot;);
scanf(&quot;%d&quot;, &amp;num);

result = factorial(num);

printf(&quot;Factorial of %d = %ld\n&quot;, num, result);

return 0;
}
