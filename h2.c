/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
struct student
{
char name[50];
int roll;
float marks[5];
};
 void display(struct student s2[],int n);


int main()
{
int i,n;
struct student s[100];

printf("Enter total of students:\n");
scanf("%d",&n);

for(i=0;i<n;i++)
{
    int p=0;
printf("\n Enter information of student %d:\n",i+1);
printf("Enter name: ");
scanf("%s",s[i].name);

printf("Enter roll number: ");
scanf("%d",&s[i].roll);

printf("Enter marks of 1st subject: ");
scanf("%f", &s[i].marks[0]);
printf("Enter marks of 2nd subject: ");
scanf("%f", &s[i].marks[1]);
printf("Enter marks of 3rd subject: ");
scanf("%f", &s[i].marks[2]);
printf("Enter marks of 4th subject: ");
scanf("%f", &s[i].marks[3]);
printf("Enter marks of 5th subject: ");
scanf("%f", &s[i].marks[4]);
}
display(s,n);



return 0;
}
void display(struct student s[],int n)
{
    int i,p=0,j,m=0,r_n;
    int r;
    char n1[20];
    float max=0;
    float sum=0;
    for(i=0;i<n;i++)
    {

       sum=s[i].marks[0]+s[i].marks[1]+s[i].marks[2]+s[i].marks[3]+s[i].marks[4];
       printf("\nName= %s Roll no.= %d Total marks = %d", s[i].name,s[i].roll,sum);
       if(sum>max){
              max=sum;
              r=s[i].roll;
              //n1=s[i].name;
              strcpy(n1,s[i].name);
              //g=s[i].gender;

          }

    }
    printf("\n highest marks got by %s roll no. %d",n1,r);




}
