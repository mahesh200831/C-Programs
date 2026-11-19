#include <stdio.h>

struct Employee
{
int id;
char name[50];
float salary;
};

int main()
{
struct Employee emp[100];
int n;
int i;

printf(&quot;Enter number of employees: &quot;);
scanf(&quot;%d&quot;, &amp;n);

for (i = 0; i &lt; n; i++)
{
printf(&quot;\nEnter details of Employee %d:\n&quot;, i + 1);

printf(&quot;Enter Employee ID: &quot;);
scanf(&quot;%d&quot;, &amp;emp[i].id);

printf(&quot;Enter Employee Name: &quot;);
scanf(&quot; %[^\n]&quot;, emp[i].name);

printf(&quot;Enter Employee Salary: &quot;);
scanf(&quot;%f&quot;, &amp;emp[i].salary);
}

printf(&quot;\n----- Employee Information -----\n&quot;);

for (i = 0; i &lt; n; i++)
{
printf(&quot;\nEmployee %d\n&quot;, i + 1);
printf(&quot;Employee ID = %d\n&quot;, emp[i].id);
printf(&quot;Employee Name = %s\n&quot;, emp[i].name);
printf(&quot;Employee Salary = %.2f\n&quot;, emp[i].salary);
}

return 0;
}