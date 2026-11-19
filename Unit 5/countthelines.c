#include <stdio.h>

int main()
{
FILE *file;
char ch;
int lines = 0;

file = fopen(&quot;text.txt&quot;, &quot;r&quot;);

if (file == NULL)
{
printf(&quot;Unable to open the file.\n&quot;);
return 1;
}

while ((ch = fgetc(file)) != EOF)
{
if (ch == &#39;\n&#39;)
{
lines++;

}
}

fclose(file);

printf(&quot;Number of lines in the file = %d\n&quot;, lines);

return 0;
}