/*
1.录入学生的姓名、学号和成绩。
2.根据姓名查询学号和成绩，
3.把成绩从小到大排序。
4.求成绩的平均值和方差。
*/
#include <stdio.h>
#include<string.h>
#include<math.h>
#define MAXNAME 20
#define MAXGRADE 10
#define MAXID 10

struct system{
char name[MAXNAME];
int grade[MAXGRADE];
long id[MAXID]
};
void sort(int a[],int n);

int main(void)
{
    char search[MAXNAME];
    struct system student[100];
    int n,i,que;

    printf("Please enter the name, ID number and grade of the students.\n"
           "eg. ruoqing 517111910194 100.(Enter \"v 0 0\" to quit. Press enter after a student.)\n");

for(n=0;n<100;n++)
{
    scanf("%s %ld %d",student[n].name,student[n].id,student[n].grade);
    if(*student[n].name=='v') break;
}

printf("Congrats! Now you've entered %d students' information!\n",n);

printf("Please enter the name to find his/her ID number and grade!(q to quit)\n");

for(que=0;que<100;que++)
{
scanf("%s",search);
if (*search!='q')
{
    for(i=0;i<100;i++)
{
    if (strcmp(search,student[i].name) == 0)
    printf("The ID number of the student is %ld, and grade of this student is %d.\n",*student[i].id,*student[i].grade);

}

}
else
    break;
}

printf("*******************************************");

printf("\nRank students' grades from smallest to largest.\n");

int tem[n-1];
int wrq;
for(wrq=0;wrq<n;wrq++) tem[wrq]=*student[wrq].grade;
sort(tem,n);

printf("\n*******************************************\n");
int sum=0,average,tay,var,count;
for(int zxy=0;zxy<n;zxy++)
    sum+=tem[zxy];
average=sum/n;

count=0;
for(tay=0;tay<n;tay++)
    count+=pow((tem[tay]-average),2);
var=count/n;
printf("The average of grades is %d, and variance of grades is %d.\n",average,var);

printf("*******************************************");
    return 0;
}

void sort(int a[],int n)
{
    int temp,i,j,num;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {temp=a[i];a[i]=a[j];a[j]=temp;}
        }
    }
    for(num=0;num<n;num++)
        printf("%d ",a[num]);
}
