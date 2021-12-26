#include <stdio.h>
#include<string.h>
#include <math.h>
struct Student
{
     char ID[100];
     char Name[100];
     char Sex[100];
     int  Birth;
     int Class;
     double grade1;
     double grade2;
     double grade3;
     double  grade4;
     double  grade5;
     double Average;
};
struct Student students[3000];
int num=0;
double Avg(struct Student stu)
{
     return (stu.grade1+stu.grade2+stu.grade3+stu.grade4+stu.grade5)/5;
}
int Student_xunnumber(char id[])
{
     int i;
     for (i=0;i<num;i++)
     {
         if (strcmp(students[i].ID,id)==0)
         {
              return i;
         }
     }
     return -1;
}
int Student_xunname(char name[])
{
     int i;
     for (i=0;i<num;i++)
     {
         if (strcmp(students[i].Name,name)==0)
         {
              return i;
         }
     }
     return -1;
}
void Student_jilu(int index)
{
     printf("%10s%10s%10s%10s%10s   %8s   %8s   %8s   %8s   %8s   %10s\n","学号","姓名","性别","出生年月","班级","高等数学成绩","大学英语成绩","计算机基础成绩","军事理论成绩","体育成绩","平均成绩");
     printf("-----------------------------------------------------------------------------------------------------------------------------------------\n");
    printf(" %10s%8s%10s    %d      %d  %8.2lf       %8.2lf       %8.2lf        %8.2lf      %8.2lf      %8.2lf\n",students[index].ID,students[index].Name,students[index].Sex,students[index].Birth,students[index].Class,
              students[index].grade1,students[index].grade2,students[index].grade3, students[index].grade4,students[index].grade5,students[index].Average);

}
void Student_charu()
{
     while(1)
     {
         printf("请输入学号:");
         scanf("%s",&students[num].ID);
         getchar();
         printf("请输入姓名:");
         scanf("%s",&students[num].Name);
         getchar();
          printf("请输入性别:");
         scanf("%s",&students[num].Sex);
         getchar();
          printf("请输入出生年月:");
          scanf("%d",&students[num].Birth);
          getchar();
          printf("请输入班级:");
        scanf("%d",&students[num].Class);
         getchar();
         printf("请输入高等数学成绩:");
         scanf("%lf",&students[num].grade1);
         getchar();
         printf("请输入大学英语成绩:");
         scanf("%lf",&students[num].grade2);
         getchar();
         printf("请输入计算机基础成绩:");
         scanf("%lf",&students[num].grade3);
         getchar();
         printf("请输入军事理论成绩:");
         scanf("%lf",&students[num].grade4);
         getchar();
         printf("请输入体育成绩:");
         scanf("%lf",&students[num].grade5);
         getchar();
         students[num].Average=Avg(students[num]);
         num++;
         printf("是否继续?(y/n)");
         if (getchar()=='n')
         {
              break;
         }
     }
}
void Student_xiugai()
{
     while(1)
     {
         char id[20];
         int index;
         printf("请输入要修改的学生的学号:");
         scanf("%s",&id);
         getchar();
         index=Student_xunnumber(id);
         if (index==-1)
         {
              printf("学生不存在!\n");
         }
         else
         {
            printf("你要修改的学生信息为:\n");
              Student_jilu(index);
              printf("-- 请输入新值--\n");
              printf("请输入学号:");
              scanf("%s",&students[index].ID);
              getchar();
              printf("请输入姓名:");
              scanf("%s",&students[index].Name);
              getchar();
                printf("请输入性别:");
              scanf("%s",&students[index].Sex);
              getchar();
               printf("请输入出生年月:");
              scanf("%d",&students[index].Birth);
              getchar();
               printf("请输入班级:");
              scanf("%d",&students[index].Class);
              getchar();
  printf("请输入高等数学成绩:");
         scanf("%lf",&students[num].grade1);
         getchar();
         printf("请输入大学英语成绩:");
         scanf("%lf",&students[num].grade2);
         getchar();
         printf("请输入计算机基础成绩:");
         scanf("%lf",&students[num].grade3);
         getchar();
         printf("请输入军事理论成绩:");
         scanf("%lf",&students[num].grade4);
         getchar();
         printf("请输入体育成绩:");
         scanf("%lf",&students[num].grade5);
         getchar();
              students[index].Average=Avg(students[index]);
         }
         printf("是否继续?(y/n)");
         if (getchar()=='n')
         {
              break;
         }
     }
}
void Student_shanchu()
{
    int i;
     while(1)
     {
         char id[20];
         int index;
         printf("请输入要删除的学生的学号:");
         scanf("%s",&id);
         getchar();
         index=Student_xunnumber(id);
         if (index==-1)
         {
              printf("学生不存在!\n");
         }
         else
         {
              printf("你要删除的学生信息为:\n");
              Student_jilu(index);
              printf("是否真的要删除?(y/n)");
              if (getchar()=='y')
              {
                   for (i=index;i<num-1;i++)
                   {
                       students[i]=students[i+1];
                   }
                   num--;
              }
              getchar();
         }
         printf("是否继续?(y/n)");
         if (getchar()=='n')
         {
            break;
         }
     }
}
void Student_byname()
{
while(1)
     {
         char name[20];
         int index;
         printf("请输入要查询的学生的姓名:");
         scanf("%s",&name);
         getchar();
         index=Student_xunname(name);
         if (index==-1)
         {
              printf("学生不存在!\n");
         }
         else
         {
              printf("你要查询的学生信息为:\n");
              Student_jilu(index);
         }
         printf("是否继续?(y/n)");
         if (getchar()=='n')
         {
            break;
         }
     }
}
void Student_bynumber()
{
    while(1)
     {
         char id[20];
         int index;
         printf("请输入要查询的学生的学号:");
         scanf("%s",id);
         getchar();
         index=Student_xunnumber(id);
         if (index==-1)
         {
            printf("学生不存在!\n");
         }
         else
         {
              printf("你要查询的学生信息为:\n");
              Student_jilu(index);
         }
         printf("是否继续?(y/n)");
         if (getchar()=='n')
         {
            break;
}
         }
     }
void Student_Display()
{
     printf("%5s%10s%10s%10s%10s%10s   %8s   %8s   %8s   %8s   %8s   %10s\n","排名","学号","姓名","性别","出生年月","班级","高等数学成绩","大学英语成绩","计算机基础成绩","军事理论成绩","体育成绩","平均成绩");
     printf("---------------------------------------------------------------------------------------------------------------------------------------------\n");
}
void read()
{
     FILE *fp;
     int i;
     if ((fp=fopen("xinxi.txt","rb"))==NULL)
     {
                  printf("不能打开文件!\n");
return;
     }
     if (fread(&num,sizeof(int),1,fp)!=1)
     {
         num=-1;
     }
     else
     {
         for(i=0;i<num;i++)
         {
              fread(&students[i],sizeof(struct Student),1,fp);
         }
     }
     fclose(fp);
}
void write()
{
     FILE *fp;
     int i;
     if ((fp=fopen("xinxi.txt","wb"))==NULL)
     {
         printf("不能打开文件!\n");
         return;
     }
     if (fwrite(&num,sizeof(int),1,fp)!=1)
     {
         printf("写入文件错误!\n");
     }
     for (i=0;i<num;i++)
     {
if (fwrite(&students[i],sizeof(struct Student),1,fp)!=1)
         {
              printf("写入文件错误!\n");
         }
     }
     fclose(fp);
}
void main()
{
     int x;
     read();
     while(1)
     {
         printf("\n学生成绩管理系统\n");
         printf("1. 增加学生记录\n");
         printf("2. 修改学生记录\n");
         printf("3. 删除学生记录\n");
         printf("4. 按姓名查询学生记录\n");
         printf("5. 按学号查询学生记录\n");
         printf("6. 成绩统计\n");
         printf("7. 退出\n");
         printf("请选择(1到7):");
         scanf("%d",&x);
        getchar();
         switch(x)
         {
         case 1:
              Student_charu();
              break;
         case 2:
              Student_xiugai();
              break;
         case 3:
              Student_shanchu();
              break;
         case 4:
              Student_byname();
              break;
         case 6:
              tongji();
              break;
         case 7:
              exit(0);
              break;
         case 5:
            Student_bynumber();
            break;
         }
         write();
     }
}
void tongji()
{
    int n;
    printf("1：平均成绩排名。\n");
    printf("2：统计各分数段人数。\n");
    printf("3：统计不及格学生。\n");
    printf("4：统计班级平均分。\n");
    printf("5：按性别统计平均成绩。\n");
    printf("0：返回\n");
    printf("请输入（0-5）：");
    scanf("%d",&n);
    switch(n)
         {
         case 1:
              tongji1();
              break;
         case 2:
              tongji2();
              break;
         case 3:
              tongji3();
              break;
         case 4:
              tongji4();
              break;
         case 5:
              tongji5();
              break;
         case 0:
              main();
              break;
         }
}
void tongji1()
{
    int i,j;
    char k;
     struct Student t;
     for (i=0;i<num;i++)
     {
        for (j=1;j<num-i;j++)
         {
            if (students[j-1].Average<students[j].Average)
              {
                t=students[j-1];
                students[j-1]=students[j];
                students[j]=t;
              }
         }
     }
     Student_Display();
     for (i=0;i<num;i++)
     {
         if(students[i-1].Average==students[i].Average)
       {
           printf("%3d   %10s %8s %8s   %d       %d      %.2lf         %.2lf           %.2lf           %.2lf         %.2lf        %.2lf\n",i,students[i].ID,students[i].Name,students[i].Sex,students[i].Birth,students[i].Class,
              students[i].grade1,students[i].grade2,students[i].grade3,students[i].grade4,students[i].grade5,students[i].Average);
       }
       else{
        printf("%3d   %10s %8s %8s   %d       %d      %.2lf         %.2lf           %.2lf           %.2lf         %.2lf        %.2lf\n",i+1,students[i].ID,students[i].Name,students[i].Sex,students[i].Birth,students[i].Class,
              students[i].grade1,students[i].grade2,students[i].grade3,students[i].grade4,students[i].grade5,students[i].Average);
       }
    }
        tongji();
}
void tongji2()
{
    int a=0,b=0,c=0,d=0,e=0,i;
    char k;
    for(i=0;i<num;i++)
    {
        if(students[i].Average<60)
        {
            a++;
        }
        else if(students[i].Average>=60&&students[i].Average<70)
        {
            b++;
        }
        else if(students[i].Average>=70&&students[i].Average<80)
        {
            c++;
        }
        else if(students[i].Average>=80&&students[i].Average<90)
        {
            d++;
        }
        else if(students[i].Average>=90)
        {
            e++;
        }
    }
    printf("60以下：%d人。\n",a);
    printf("60-70：%d人。\n",b);
    printf("70-80：%d人。\n",c);
    printf("80-90：%d人。\n",d);
    printf("90以上：%d人。\n",e);
    tongji();

}
void tongji3()
{
    int a=0,b=0,c=0,d=0,e=0,n=0,i;
    char k;
    for(i=0;i<num;i++)
    {
        int t=0;
        if(students[i].grade1<60)
        {
            printf("%s 高等数学 %.2lf ",students[i].ID,students[i].grade1);
            t=1;
            a++;
        }
        if(students[i].grade2<60)
        {
            if(t==0)
            {
                printf("%s 大学英语 %.2lf ",students[i].ID,students[i].grade2);
                t=1;
            }
            if(t==1)
            {
                printf("大学英语 %.2lf ",students[i].grade2);
            }
            b++;
        }
        if(students[i].grade3<60)
        {
            if(t==0)
            {
                printf("%s 计算机基础 %.2lf ",students[i].ID,students[i].grade3);
                t=1;
            }
            if(t==1)
            {
                printf("计算机基础 %.2lf ",students[i].grade3);
            }
            c++;
        }
        if(students[i].grade4<60)
        {
            if(t==0)
            {
                printf("%s 军事理论 %.2lf ",students[i].ID,students[i].grade4);
                t=1;
            }
            if(t==1)
            {
                printf("军事理论 %.2lf ",students[i].grade4);
            }
            d++;
        }
        if(students[i].grade5<60)
        {
            if(t==0)
            {
                printf("%s 体育 %.2lf ",students[i].ID,students[i].grade5);
                t=1;
            }
            if(t==1)
            {
                printf("体育 %.2lf ",students[i].grade5);
            }
            e++;
        }
        if(t==1)
        {
            n++;
            printf("\n");
        }

    }
    printf("高等数学不及格人数：%d\n",a);
    printf("大学英语不及格人数：%d\n",b);
    printf("计算机基础不及格人数：%d\n",c);
    printf("军事理论不及格人数：%d\n",d);
    printf("体育不及格人数：%d\n",e);
    printf("不及格学生人数：%d\n",n);
    tongji();
}
void tongji4()
{
    int a;
    printf("请选择科目：\n");
    printf("1：高等数学\n");
    printf("2：大学英语\n");
    printf("3：计算机基础\n");
    printf("4：军事理论\n");
    printf("5：体育\n");
    printf("6：平均分\n");
    printf("请输入：");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
              tongji4a();
              break;
         case 2:
              tongji4b();
              break;
         case 3:
              tongji4c();
              break;
         case 4:
              tongji4d();
              break;
         case 5:
              tongji4e();
              break;
         case 6:
              tongji4f();
              break;
    }
}
void BubbleSort(struct Student cl[],int n)
{
    struct Student k;
	int i;
		for(i=0;i<n;i++)
		{
			if(cl[i].Average<cl[i+1].Average)
			{
				k=cl[i];
				cl[i]=cl[i+1];
				cl[i+1]=k;
			}
		}
}
void tongji4a()
{
    struct Student cl[1000];
    int a[1000],i,j=0,n=0,k,m;
    double sum=0,ave;
    for(i=0;i<num;i++)
    {
        k=0;
        while(1)
        {
            if(students[i].Class==a[k])break;
            if(k==n)
            {
                a[n]=students[j].Class;
                n++;
                break;
            }
            k++;
        }
    }
    j=n;
    while(1)
    {
        m=0;
        n--;
        for(i=0;i<num;i++)
        {
            if(students[i].Class==a[n])
            {
                sum=sum+students[i].grade1;
                m=m+1;
            }
        }
        ave=sum/m;
        cl[n].Average=ave;
        cl[n].Class=a[n];
        if(n==0)break;
    }
    BubbleSort(cl,n);
    for(i=0;i<j;i++)
    {
        printf("%d    %.2lf\n",cl[i].Class,cl[i].Average);
    }
}
void tongji4b()
{
    struct Student cl[1000];
    int a[1000],i,j=0,n=0,k,m;
    double sum=0,ave;
    for(i=0;i<num;i++)
    {
        k=0;
        while(1)
        {
            if(students[i].Class==a[k])break;
            if(k==n)
            {
                a[n]=students[j].Class;
                n++;
                break;
            }
            k++;
        }
    }
    j=n;
    while(1)
    {
        m=0;
        n--;
        for(i=0;i<num;i++)
        {
            if(students[i].Class==a[n])
            {
                sum=sum+students[i].grade2;
                m=m+1;
            }
        }
        ave=sum/m;
        cl[n].Average=ave;
        cl[n].Class=a[n];
        if(n==0)break;
    }
    BubbleSort(cl,n);
    for(i=0;i<j;i++)
    {
        printf("%d    %.2lf\n",cl[i].Class,cl[i].Average);
    }
}
void tongji4c()
{
    struct Student cl[1000];
    int a[1000],i,j=0,n=0,k,m;
    double sum=0,ave;
    for(i=0;i<num;i++)
    {
        k=0;
        while(1)
        {
            if(students[i].Class==a[k])break;
            if(k==n)
            {
                a[n]=students[j].Class;
                n++;
                break;
            }
            k++;
        }
    }
    j=n;
    while(1)
    {
        m=0;
        n--;
        for(i=0;i<num;i++)
        {
            if(students[i].Class==a[n])
            {
                sum=sum+students[i].grade3;
                m=m+1;
            }
        }
        ave=sum/m;
        cl[n].Average=ave;
        cl[n].Class=a[n];
        if(n==0)break;
    }
    BubbleSort(cl,n);
    for(i=0;i<j;i++)
    {
        printf("%d    %.2lf\n",cl[i].Class,cl[i].Average);
    }
}
void tongji4d()
{
    struct Student cl[1000];
    int a[1000],i,j=0,n=0,k,m;
    double sum=0,ave;
    for(i=0;i<num;i++)
    {
        k=0;
        while(1)
        {
            if(students[i].Class==a[k])break;
            if(k==n)
            {
                a[n]=students[j].Class;
                n++;
                break;
            }
            k++;
        }
    }
    j=n;
    while(1)
    {
        m=0;
        n--;
        for(i=0;i<num;i++)
        {
            if(students[i].Class==a[n])
            {
                sum=sum+students[i].grade4;
                m=m+1;
            }
        }
        ave=sum/m;
        cl[n].Average=ave;
        cl[n].Class=a[n];
        if(n==0)break;
    }
    BubbleSort(cl,n);
    for(i=0;i<j;i++)
    {
        printf("%d    %.2lf\n",cl[i].Class,cl[i].Average);
    }
}
void tongji4e()
{
    struct Student cl[1000];
    int a[1000],i,j=0,n=0,k,m;
    double sum=0,ave;
    for(i=0;i<num;i++)
    {
        k=0;
        while(1)
        {
            if(students[i].Class==a[k])break;
            if(k==n)
            {
                a[n]=students[j].Class;
                n++;
                break;
            }
            k++;
        }
    }
    j=n;
    while(1)
    {
        m=0;
        n--;
        for(i=0;i<num;i++)
        {
            if(students[i].Class==a[n])
            {
                sum=sum+students[i].grade5;
                m=m+1;
            }
        }
        ave=sum/m;
        cl[n].Average=ave;
        cl[n].Class=a[n];
        if(n==0)break;
    }
    BubbleSort(cl,n);
    for(i=0;i<j;i++)
    {
        printf("%d    %.2lf\n",cl[i].Class,cl[i].Average);
    }
}
void tongji4f()
{
    struct Student cl[1000];
    int a[1000],i,j=0,n=0,k,m;
    double sum=0,ave;
    for(i=0;i<num;i++)
    {
        k=0;
        while(1)
        {
            if(students[i].Class==a[k])break;
            if(k==n)
            {
                a[n]=students[j].Class;
                n++;
                break;
            }
            k++;
        }
    }
    j=n;
    while(1)
    {
        m=0;
        n--;
        for(i=0;i<num;i++)
        {
            if(students[i].Class==a[n])
            {
                sum=sum+students[i].Average;
                m=m+1;
            }
        }
        ave=sum/m;
        cl[n].Average=ave;
        cl[n].Class=a[n];
        if(n==0)break;
    }
    BubbleSort(cl,n);
    for(i=0;i<j;i++)
    {
        printf("%d    %.2lf\n",cl[i].Class,cl[i].Average);
    }
}
void tongji5()
{
    int k=0;
    double suma1=0,suma2=0,suma3=0,suma4=0,suma5=0,sumb1=0,sumb2=0,sumb3=0,sumb4=0,sumb5=0,a=0,b=0;
    for(k=0;k<num;k++)
    {
       if(students[k].Sex==4227368){
           suma1=suma1+students[k].grade1;
           suma2=suma2+students[k].grade2;
           suma3=suma3+students[k].grade3;
           suma4=suma4+students[k].grade4;
           suma5=suma5+students[k].grade5;
           a++;
         }
         else{
           sumb1=sumb1+students[k].grade1;
           sumb2=sumb2+students[k].grade2;
           sumb3=sumb3+students[k].grade3;
           sumb4=sumb4+students[k].grade4;
           sumb5=sumb5+students[k].grade5;
           b++;
         }
     }
     if(a==0)
     {
     suma1=0;
     suma2=0;
     suma3=0;
     suma4=0;
     suma5=0;
     }
     else{
     suma1=suma1/a;
     suma2=suma2/a;
     suma3=suma3/a;
     suma4=suma4/a;
     suma5=suma5/a;
     }
     if(b==0){
     sumb1=0;
     sumb2=0;
     sumb3=0;
     sumb4=0;
     sumb5=0;
     }
     else{
     sumb1=sumb1/b;
     sumb2=sumb2/b;
     sumb3=sumb3/b;
     sumb4=sumb4/b;
     sumb5=sumb5/b;
     }
     printf("高等数学平均分：男生：%.2lf 女生：%.2lf\n",suma1,sumb1);
     printf("大学英语平均分：男生：%.2lf 女生：%.2lf\n",suma2,sumb2);
     printf("计算机基础平均分：男生：%.2lf 女生：%.2lf\n",suma3,sumb3);
     printf("军事理论平均分：男生：%.2lf 女生：%.2lf\n",suma4,sumb4);
     printf("体育平均分：男生：%.2lf 女生：%.2lf\n",suma5,sumb5);
     tongji();
}
