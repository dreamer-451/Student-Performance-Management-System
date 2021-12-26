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
     printf("%10s%10s%10s%10s%10s   %8s   %8s   %8s   %8s   %8s   %10s\n","ѧ��","����","�Ա�","��������","�༶","�ߵ���ѧ�ɼ�","��ѧӢ��ɼ�","����������ɼ�","�������۳ɼ�","�����ɼ�","ƽ���ɼ�");
     printf("-----------------------------------------------------------------------------------------------------------------------------------------\n");
    printf(" %10s%8s%10s    %d      %d  %8.2lf       %8.2lf       %8.2lf        %8.2lf      %8.2lf      %8.2lf\n",students[index].ID,students[index].Name,students[index].Sex,students[index].Birth,students[index].Class,
              students[index].grade1,students[index].grade2,students[index].grade3, students[index].grade4,students[index].grade5,students[index].Average);

}
void Student_charu()
{
     while(1)
     {
         printf("������ѧ��:");
         scanf("%s",&students[num].ID);
         getchar();
         printf("����������:");
         scanf("%s",&students[num].Name);
         getchar();
          printf("�������Ա�:");
         scanf("%s",&students[num].Sex);
         getchar();
          printf("�������������:");
          scanf("%d",&students[num].Birth);
          getchar();
          printf("������༶:");
        scanf("%d",&students[num].Class);
         getchar();
         printf("������ߵ���ѧ�ɼ�:");
         scanf("%lf",&students[num].grade1);
         getchar();
         printf("�������ѧӢ��ɼ�:");
         scanf("%lf",&students[num].grade2);
         getchar();
         printf("���������������ɼ�:");
         scanf("%lf",&students[num].grade3);
         getchar();
         printf("������������۳ɼ�:");
         scanf("%lf",&students[num].grade4);
         getchar();
         printf("�����������ɼ�:");
         scanf("%lf",&students[num].grade5);
         getchar();
         students[num].Average=Avg(students[num]);
         num++;
         printf("�Ƿ����?(y/n)");
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
         printf("������Ҫ�޸ĵ�ѧ����ѧ��:");
         scanf("%s",&id);
         getchar();
         index=Student_xunnumber(id);
         if (index==-1)
         {
              printf("ѧ��������!\n");
         }
         else
         {
            printf("��Ҫ�޸ĵ�ѧ����ϢΪ:\n");
              Student_jilu(index);
              printf("-- ��������ֵ--\n");
              printf("������ѧ��:");
              scanf("%s",&students[index].ID);
              getchar();
              printf("����������:");
              scanf("%s",&students[index].Name);
              getchar();
                printf("�������Ա�:");
              scanf("%s",&students[index].Sex);
              getchar();
               printf("�������������:");
              scanf("%d",&students[index].Birth);
              getchar();
               printf("������༶:");
              scanf("%d",&students[index].Class);
              getchar();
  printf("������ߵ���ѧ�ɼ�:");
         scanf("%lf",&students[num].grade1);
         getchar();
         printf("�������ѧӢ��ɼ�:");
         scanf("%lf",&students[num].grade2);
         getchar();
         printf("���������������ɼ�:");
         scanf("%lf",&students[num].grade3);
         getchar();
         printf("������������۳ɼ�:");
         scanf("%lf",&students[num].grade4);
         getchar();
         printf("�����������ɼ�:");
         scanf("%lf",&students[num].grade5);
         getchar();
              students[index].Average=Avg(students[index]);
         }
         printf("�Ƿ����?(y/n)");
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
         printf("������Ҫɾ����ѧ����ѧ��:");
         scanf("%s",&id);
         getchar();
         index=Student_xunnumber(id);
         if (index==-1)
         {
              printf("ѧ��������!\n");
         }
         else
         {
              printf("��Ҫɾ����ѧ����ϢΪ:\n");
              Student_jilu(index);
              printf("�Ƿ����Ҫɾ��?(y/n)");
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
         printf("�Ƿ����?(y/n)");
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
         printf("������Ҫ��ѯ��ѧ��������:");
         scanf("%s",&name);
         getchar();
         index=Student_xunname(name);
         if (index==-1)
         {
              printf("ѧ��������!\n");
         }
         else
         {
              printf("��Ҫ��ѯ��ѧ����ϢΪ:\n");
              Student_jilu(index);
         }
         printf("�Ƿ����?(y/n)");
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
         printf("������Ҫ��ѯ��ѧ����ѧ��:");
         scanf("%s",id);
         getchar();
         index=Student_xunnumber(id);
         if (index==-1)
         {
            printf("ѧ��������!\n");
         }
         else
         {
              printf("��Ҫ��ѯ��ѧ����ϢΪ:\n");
              Student_jilu(index);
         }
         printf("�Ƿ����?(y/n)");
         if (getchar()=='n')
         {
            break;
}
         }
     }
void Student_Display()
{
     printf("%5s%10s%10s%10s%10s%10s   %8s   %8s   %8s   %8s   %8s   %10s\n","����","ѧ��","����","�Ա�","��������","�༶","�ߵ���ѧ�ɼ�","��ѧӢ��ɼ�","����������ɼ�","�������۳ɼ�","�����ɼ�","ƽ���ɼ�");
     printf("---------------------------------------------------------------------------------------------------------------------------------------------\n");
}
void read()
{
     FILE *fp;
     int i;
     if ((fp=fopen("xinxi.txt","rb"))==NULL)
     {
                  printf("���ܴ��ļ�!\n");
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
         printf("���ܴ��ļ�!\n");
         return;
     }
     if (fwrite(&num,sizeof(int),1,fp)!=1)
     {
         printf("д���ļ�����!\n");
     }
     for (i=0;i<num;i++)
     {
if (fwrite(&students[i],sizeof(struct Student),1,fp)!=1)
         {
              printf("д���ļ�����!\n");
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
         printf("\nѧ���ɼ�����ϵͳ\n");
         printf("1. ����ѧ����¼\n");
         printf("2. �޸�ѧ����¼\n");
         printf("3. ɾ��ѧ����¼\n");
         printf("4. ��������ѯѧ����¼\n");
         printf("5. ��ѧ�Ų�ѯѧ����¼\n");
         printf("6. �ɼ�ͳ��\n");
         printf("7. �˳�\n");
         printf("��ѡ��(1��7):");
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
    printf("1��ƽ���ɼ�������\n");
    printf("2��ͳ�Ƹ�������������\n");
    printf("3��ͳ�Ʋ�����ѧ����\n");
    printf("4��ͳ�ư༶ƽ���֡�\n");
    printf("5�����Ա�ͳ��ƽ���ɼ���\n");
    printf("0������\n");
    printf("�����루0-5����");
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
    printf("60���£�%d�ˡ�\n",a);
    printf("60-70��%d�ˡ�\n",b);
    printf("70-80��%d�ˡ�\n",c);
    printf("80-90��%d�ˡ�\n",d);
    printf("90���ϣ�%d�ˡ�\n",e);
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
            printf("%s �ߵ���ѧ %.2lf ",students[i].ID,students[i].grade1);
            t=1;
            a++;
        }
        if(students[i].grade2<60)
        {
            if(t==0)
            {
                printf("%s ��ѧӢ�� %.2lf ",students[i].ID,students[i].grade2);
                t=1;
            }
            if(t==1)
            {
                printf("��ѧӢ�� %.2lf ",students[i].grade2);
            }
            b++;
        }
        if(students[i].grade3<60)
        {
            if(t==0)
            {
                printf("%s ��������� %.2lf ",students[i].ID,students[i].grade3);
                t=1;
            }
            if(t==1)
            {
                printf("��������� %.2lf ",students[i].grade3);
            }
            c++;
        }
        if(students[i].grade4<60)
        {
            if(t==0)
            {
                printf("%s �������� %.2lf ",students[i].ID,students[i].grade4);
                t=1;
            }
            if(t==1)
            {
                printf("�������� %.2lf ",students[i].grade4);
            }
            d++;
        }
        if(students[i].grade5<60)
        {
            if(t==0)
            {
                printf("%s ���� %.2lf ",students[i].ID,students[i].grade5);
                t=1;
            }
            if(t==1)
            {
                printf("���� %.2lf ",students[i].grade5);
            }
            e++;
        }
        if(t==1)
        {
            n++;
            printf("\n");
        }

    }
    printf("�ߵ���ѧ������������%d\n",a);
    printf("��ѧӢ�ﲻ����������%d\n",b);
    printf("���������������������%d\n",c);
    printf("�������۲�����������%d\n",d);
    printf("����������������%d\n",e);
    printf("������ѧ��������%d\n",n);
    tongji();
}
void tongji4()
{
    int a;
    printf("��ѡ���Ŀ��\n");
    printf("1���ߵ���ѧ\n");
    printf("2����ѧӢ��\n");
    printf("3�����������\n");
    printf("4����������\n");
    printf("5������\n");
    printf("6��ƽ����\n");
    printf("�����룺");
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
     printf("�ߵ���ѧƽ���֣�������%.2lf Ů����%.2lf\n",suma1,sumb1);
     printf("��ѧӢ��ƽ���֣�������%.2lf Ů����%.2lf\n",suma2,sumb2);
     printf("���������ƽ���֣�������%.2lf Ů����%.2lf\n",suma3,sumb3);
     printf("��������ƽ���֣�������%.2lf Ů����%.2lf\n",suma4,sumb4);
     printf("����ƽ���֣�������%.2lf Ů����%.2lf\n",suma5,sumb5);
     tongji();
}
