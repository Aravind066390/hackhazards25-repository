#include<stdio.h>
#include<string.h>
struct student{
    int b,c;
    char a[77];
    float d;
};
int main()
{
    struct student struc[256];
    int srs,ir,n,i,s,rest,sss,sr,srsts,class,rank,error=0,keyr_code=0;
    float avg,sum=0;
    char primary_input[22],storage[200][200]={"94493abc","098poiuy"},secoundary_password[200][200]={"08072001","12121999"},master_keye[44]={"m3n767bh47ru@"},secoundary[77],masters[44];
    start:
    if(error>5)
    {
        printf("too many attempts..................");
        return 0;
    }
    printf("enter 1 if a student and 2 if  a faculty=");
    scanf("%d",&srsts);
    if(srsts==2)
    { printf("enter your teachers class and rank no.=");
    scanf("%d%d",&class,&rank);
    printf("enter your primary pass word=");
    scanf("%s",primary_input);
    if(strcmp(primary_input,storage[class])!=0)
    {
        printf("do you have master key and want to enter it(if yes enter 1 if no 0)=");
        scanf("%d",&keyr_code);
        if(keyr_code==1)
        {
            printf("enter master-key=");
            scanf("%s",masters);
            if(strcmp(master_keye,masters)==0)
            {
            printf("successful\n");
            printf("enter new primary password=");
            printf("%s\n",primary_input);
            }
            else
            {
                error++;
                goto start;
                
            }
            
        }
    goto start;
    }
    printf("enter secoundary password=");
    scanf("%s",secoundary);
    if(strcmp(secoundary_password[class],secoundary)!=0)
    goto start;
       printf("1.for marks of each student\n2.for average marks of all students\n3.entering marks of every student or adding a new student\n4.edit details or update\n");
       scanf("%d",&rest);
       switch(rest)
       {
           case 1:printf("enter last number result among totl number of students=");
           scanf("%d",&n);
           for(i=100;i<n;i++)
           {
               printf("\n%d=%f",n,struc[n].d);
           }
           break;
           case 2:printf("for average marks of all enter total number of students=");
           scanf("%d",&n);
           for(i=0;i<n;i++)
           {
               sum=sum+struc[n].d;
               avg=sum/n;
           }
           printf("%f is the average of results of all the students",avg);
           break;
           case 3:printf("do you want to enter amrks of every student or just particular student.");
           printf("\nenter 1 if you want to re-enter from start\nenter 2 if you want to reenter from particular point ");
           scanf("%d",&sss);
           if(sss==1)
           {
               printf("enter the last rool number whihc is 100+number of students");
               scanf("%d",&n);
               for(i=100;i<n;i++)
               {
                   printf("enter student name=");
                   scanf("%s",struc[i].a);
                   printf("enter class of the student=");
                   scanf("%d",&struc[i].b);
                   printf("enter the year=");
                   scanf("%d",&struc[i].c);
                   printf("enter percentage marks of student or SGPA/CGPA=");
                   scanf("%f",&struc[i].d);
               }
           }break;
           case 4:
           printf("to edit student details enter last three digit of student rool number=");
           scanf("%d",&n);
           printf("enter student name=");
                   scanf("%s",struc[n].a);
                   printf("enter class of the student=");
                   scanf("%d",&struc[n].b);
                   printf("enter the year=");
                   scanf("%d",&struc[n].c);
                   printf("enter percentage marks of student or SGPA/CGPA=");
                   scanf("%f",&struc[n].d);
                   break;
                   default: printf("entered value is invalid");
           
       }
    }
    else if(srsts==1)
    {
        printf("enter rool numbers last three digits of the student=");
        scanf("%d",&ir);
        printf("NAME\t\tCLASS\tYEAR\tMARKS\t");
        printf("\n%s\t%d\t%d\t%f\t",struc[ir].a,struc[ir].b,struc[ir].c,struc[ir].d);
    }
    else
    {
        printf("entered value is invalid");
    }
}
