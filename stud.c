#include<stdio.h>
  int pos[50];

  typedef union deta
  {
  	char hostel[200];
  	char home[100];
  }stay;

  typedef struct dob
  {	int date;
  	int mon;
  	int year; 
  	
  }day;
  typedef struct stud
  {
	     int roll;
         int usn;
         char name[20];
         day d;
         stay y;
     }pico;
     void print(pico a[],int t,int p[] )
    {
    	 for(int i=0;i<t;i++)
        {
                printf("  the student%d details\n",(i+1));
                printf("  the usn %d and rollno %d",a[i].usn,a[i].roll);
                printf(" the name is %s",a[i].name);
                printf(" date of birth is %d-%d-%d",a[i].d.date,a[i].d.mon,a[i].d.year);
                if(p[i])
                {	
                	printf(" hostel addhress is %s",a[i].y.hostel);
                }
                else
                {
                	printf(" home addhress is %s",a[i].y.home);
                }
            }
    }
    void search(pico a[],int x,int t,int p[])
	{    int i;
		for(i=0;i<t;i++)
		{

			if(a[i].roll==x)
			{ printf("  the student%d details\n",(i+1));
                printf("  the usn %d and rollno %d",a[i].usn,a[i].roll);
                printf(" the name is %s",a[i].name);
                printf(" date of birth is %d-%d-%d",a[i].d.date,a[i].d.mon,a[i].d.year);
                if(p[i])
                {
                        printf(" hostel addhress is %s",a[i].y.hostel);
                }
                else
                {
                        printf(" home addhress is %s",a[i].y.home);
                }
			}
		}
	}


    void read(pico s[],int n)
    {
    	
     	int c;
     	for(int i=0;i<n;i++)
     	{

        printf(" enter the student%d details\n",(i+1));
        printf(" enter the usn and rollno \n");
        scanf("%d%d",&s[i].usn,&s[i].roll);
        printf(" enter the name \n");
        scanf("%s",s[i].name);
     	printf(" enter the  dob %d \n",i+1);
     	scanf("%d",&s[i].d.date);
     	scanf("%d",&s[i].d.mon);
     	scanf("%d",&s[i].d.year);
     	printf(" enter the choice 1. hostel\n 2.home\n");
     	scanf("%d",&c);
     	if(c==1)
     	{
     		printf(" enter the hostel addhress\n");
     		scanf("%s",s[i].y.hostel);
     		pos[i]=1;
     	}
     	else
     	{
     		printf(" enter the home addhress\n");
     		scanf("%s",s[i].y.home);
     		pos[i]=0;
     	}}
     	
     	print(s,n,pos);
    }

     void main(){
     	int m,h;
	pico v[50];

     	printf(" enter the number of students\n");
     	scanf("%d",&m);
     	read(v,m);
	printf("\n enter the element to be searched\n");
	scanf("%d",&h);
	search(v,h,m,pos);

     }

