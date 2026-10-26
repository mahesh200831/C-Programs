#include &lt;stdio.h&gt;

int main()
{
int a[10][10];
int b[10][10];
int sum[10][10];
int rows, columns;
int i, j;

printf(&quot;Enter number of rows: &quot;);
scanf(&quot;%d&quot;, &amp;rows);

printf(&quot;Enter number of columns: &quot;);
scanf(&quot;%d&quot;, &amp;columns);

printf(&quot;\nEnter elements of first matrix:\n&quot;);

for (i = 0; i &lt; rows; i++)
{
for (j = 0; j &lt; columns; j++)
{
scanf(&quot;%d&quot;, &amp;a[i][j]);

}
}

printf(&quot;\nEnter elements of second matrix:\n&quot;);

for (i = 0; i &lt; rows; i++)
{
for (j = 0; j &lt; columns; j++)
{
scanf(&quot;%d&quot;, &amp;b[i][j]);
}
}

for (i = 0; i &lt; rows; i++)
{
for (j = 0; j &lt; columns; j++)
{
sum[i][j] = a[i][j] + b[i][j];
}
}

printf(&quot;\nResultant Matrix after Addition:\n&quot;);

for (i = 0; i &lt; rows; i++)
{
for (j = 0; j &lt; columns; j++)

{
printf(&quot;%d\t&quot;, sum[i][j]);
}

printf(&quot;\n&quot;);
}

return 0;
}
