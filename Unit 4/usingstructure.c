#include <stdio.h>

struct Student
{
int rollNo;
char name[50];
float marks1;
float marks2;
float marks3;
float total;
float average;
};

int main()
{
struct Student s;

printf(&quot;Enter Roll Number: &quot;);
scanf(&quot;%d&quot;, &amp;s.rollNo);

printf(&quot;Enter Name: &quot;);
scanf(&quot; %[^\n]&quot;, s.name);

printf(&quot;Enter marks in Subject 1: &quot;);
scanf(&quot;%f&quot;, &amp;s.marks1);

printf(&quot;Enter marks in Subject 2: &quot;);
scanf(&quot;%f&quot;, &amp;s.marks2);

printf(&quot;Enter marks in Subject 3: &quot;);
scanf(&quot;%f&quot;, &amp;s.marks3);

s.total = s.marks1 + s.marks2 + s.marks3;
s.average = s.total / 3;

printf(&quot;\n----- Student Details -----\n&quot;);
printf(&quot;Roll Number = %d\n&quot;, s.rollNo);
printf(&quot;Name = %s\n&quot;, s.name);
printf(&quot;Subject 1 Marks = %.2f\n&quot;, s.marks1);
printf(&quot;Subject 2 Marks = %.2f\n&quot;, s.marks2);
printf(&quot;Subject 3 Marks = %.2f\n&quot;, s.marks3);
printf(&quot;Total Marks = %.2f\n&quot;, s.total);
printf(&quot;Average Marks = %.2f\n&quot;, s.average);

return 0;
}
