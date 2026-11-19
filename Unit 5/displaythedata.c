#include <stdio.h>

struct Student
{
int rollNo;
char name[50];
float marks;
};

int main()
{
struct Student s;
FILE *file;

printf(&quot;Enter Roll Number: &quot;);
scanf(&quot;%d&quot;, &amp;s.rollNo);

printf(&quot;Enter Name: &quot;);
scanf(&quot; %[^\n]&quot;, s.name);

printf(&quot;Enter Marks: &quot;);
scanf(&quot;%f&quot;, &amp;s.marks);

file = fopen(&quot;student.txt&quot;, &quot;w&quot;);

if (file == NULL)
{
printf(&quot;Unable to create the file.\n&quot;);
return 1;
}

fprintf(file, &quot;Roll Number: %d\n&quot;, s.rollNo);
fprintf(file, &quot;Name: %s\n&quot;, s.name);
fprintf(file, &quot;Marks: %.2f\n&quot;, s.marks);

fclose(file);

file = fopen(&quot;student.txt&quot;, &quot;r&quot;);

if (file == NULL)
{
printf(&quot;Unable to open the file.\n&quot;);

return 1;
}

printf(&quot;\n----- Student Details Stored in File -----\n&quot;);

char ch;

while ((ch = fgetc(file)) != EOF)
{
printf(&quot;%c&quot;, ch);
}

fclose(file);

return 0;
}