
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct day{
char*dayName;
int date;
char*activity;
};
int numDays=2;
int i;
struct day*calender;
void read()
{
char *dn;
char *da;
int dd;
for(i=0; i<numDays; i++)
{
printf ("enter the day name:");
scanf ("%s",dn);
(calender+i)->dayName=strdup(dn);
 printf("enter the date:");
scanf ("%d",&dd);
(calender+i)->date=dd;
printf ("enter the activity:");
scanf ("%s",da);
(calender+i)->activity=strdup(da);
}
}
void display()
{
for(i=0; i<numDays;i++)
printf ("Day %d(%s):%s\n", (calender+i)->date,(calender+i)->dayName,(calender+i)->activity);
}
void create()
{
struct day*calendar=(struct day*)malloc(numDays*sizeof (struct day));
if (calendar==NULL)
{
printf("memory allocation falled\n");
}
}
void main()
{
create();
read();
display();
for(i=0;i<numDays;i++)
{
}
free(calender);
getch();
}
