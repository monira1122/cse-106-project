#include <stdio.h>
#include<conio.h>

 void addstudent();

 struct student {

 char first_name[20];
 char last_name[20];
  int ID_NO;
  char Department[10];
  char Hometown[20];
  float Cgpa;

 };
 void main()
 {
     int choice;
     while(choice!=5)
      {

        printf("\t\t\t====STUDENT DATABASE MANAGEMENT SYSTEM====");
        printf("\n\n\n\t\t\t\t1.add student Record\n");
        printf("\t\t\t\t2.student Record\n");
        printf("\t\t\t\t3.search student\n");
        printf("\t\t\t\t4.Delete student\n");
        printf("\t\t\t\t5.Exit\n");
        printf("\t\t\t\t********************************************\n");
        printf("\t\t\t\t");
        scanf("%d",&choice);

        switch(choice){

        case 1:
        addstudent();
        break;
        }
}


 }
 void addstudent(){

 char another;
 FILE *fp;
 struct student info;
do{
    printf("\t\t\t\t====Add student info====\n\n");
   fp=fopen("student_info.txt","a");
    printf("\n\t\t\tEnter first_name:");
    scanf("%s",&info.first_name);
    printf("\n\t\t\tEnter last_name:");
    scanf("%s",&info.last_name);
    printf("\n\t\t\tEnter ID_NO:");
        scanf("%d",&info.ID_NO);

    printf("\n\t\t\tEnter Hometown:");
    scanf("%s",&info.Hometown);
    printf("\n\t\t\tEnter Department:");
    scanf("%s",&info.Department);
    printf("\n\t\t\tEnter Cgpa:");
    scanf("%f",&info.Cgpa);

     if(fp==NULL)
    {
            printf("\t\t\tfile not exit\n");


    }
 else

 {

     printf("\t\t\tfile is opened\n");

 }
fwrite(&info,sizeof(struct student),1,fp);
fclose(fp);
printf("\t\t\tDO YOU WANT TO ADD ANOTHER RECORD(Y/N):");
scanf("%s",&another);
}while(another=='y'||another=='y');

     }


















git commit -m "first commit"
git branch -M main
git remote add origin https://github.com/monira1122/cse-106-project.git
git push -u origin main