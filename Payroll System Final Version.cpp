///Md Ansujjaman
///ID: 172-35-2203
///+8801718465928
///Anisujjaman35-2203@diu.edu.bd
///Password Is: 18465928

#include<stdio.h>
#include <time.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#include<ctype.h>
#include<bits/stdc++.h>

int chose;
struct employee
{
    char name[40];
    char idNnumber[20];
    int age;
    char address[50];
    char phoneNumber[15];
    char joiningDate[20];
    char grade[10];
    char skills[100];
    int bs;
    int houseAllowance;
} add,del,view,modify,check;

void wellcome();
void about();
void login();
void login2();
void login3();
void delay(int milliseconds);
void controllerFunction();
void close();
void addEmployee();
void deleteEmployee();
void searchEmployee();
void listEmployee();
void modifyEmployee();
void attendanceEmployee();
void giveAttendance();
void viewAttendance();
void Pay_Info();


int main()
{
    system("COLOR b0");
    wellcome();
    login();
}

void login()
{
    system("cls");
    char pass[20],password[20]="18465928",ch;
    printf("\n\n\t\tEnter the password to login (8 Character): ");

    for(int i=0; i<8; i++)
    {
        ch = getch();
        pass[i] = ch;
        ch = '*' ;
        printf("%c",ch);
    }
    ///getch();
    if (strcmp(pass,password)==0)
    {
        printf("\n\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Password Match \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n\n\n\t\tLoading");
        for(int i=0; i<8; i++)
        {
            printf(". ");
            delay(150);
        }
        controllerFunction();
    }
    else
    {
        printf("\n\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Wrong Password \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n\n\n\t\t");
        printf("\nEnter 1 to try again and 0 to exit:");
        scanf("%d",&chose);
        if (chose==1)
        {
            system("cls");
            login2();
        }

        else if (chose==0)
        {
            system("cls");
            close();
        }
        else
        {
            system("cls");
            printf("\n\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2Invalid Entry\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n\n\n\t\t");

            printf("\n\n\t\t\tPress Enter To Try Again");
            getch();
            login2();
        }
    }
}

void login2()
{
    system("cls");
    char pass[20],password[20]="18465928",ch;
    printf("\n\n\t\tEnter the password to login (8 Character): ");

    for(int i=0; i<8; i++)
    {
        ch = getch();
        pass[i] = ch;
        ch = '*' ;
        printf("%c",ch);
    }
    ///getch();
    if (strcmp(pass,password)==0)
    {
        printf("\n\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Password Match \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n\n\n\t\tLoading");
        for(int i=0; i<8; i++)
        {
            printf(". ");
            delay(150);
        }
        controllerFunction();
    }
    else
    {
        printf("\n\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Wrong Password \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n\n\n\t\t");
        printf("\nEnter 1 to try again and 0 to exit:");
        scanf("%d",&chose);
        if (chose==1)
        {
            system("cls");
            login3();
        }

        else if (chose==0)
        {
            system("cls");
            close();
        }
        else
        {
            system("cls");
            printf("\n\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2Invalid Entry\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n\n\n\t\t");

            printf("\n\n\t\t\tPress Enter To Try Again");
            getch();
            login3();
        }
    }
}


void login3()
{
    system("cls");
    char pass[20],password[20]="18465928",ch;
    printf("\n\n\t\tEnter the password to login (8 Character): ");

    for(int i=0; i<8; i++)
    {
        ch = getch();
        pass[i] = ch;
        ch = '*' ;
        printf("%c",ch);
    }
    ///getch();
    if (strcmp(pass,password)==0)
    {
        printf("\n\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Password Match \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n\n\n\t\tLoading");
        for(int i=0; i<8; i++)
        {
            printf(". ");
            delay(150);
        }
        controllerFunction();
    }
    else
    {
        system("cls");
        printf("\n\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Access denied \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n\n\n\t\t");
        printf("\n\n\n\t\t\tPassword Wrong 3 Times\n\n\t\t\tPress Enter To Close The Programme\n\n");
        getch();
        close();
    }
}
void wellcome()
{
    system("cls");
    printf("\n\n\n\t\t\t\t  |||||||||||||||||||||||||||||||||||");
    printf("\n\t\t\t\t  |||                             |||");
    printf("\n\t\t\t\t  |||    Payroll Software         |||");
    printf("\n\t\t\t\t  |||                             |||");
    printf("\n\t\t\t\t  |||    Name: Md Anisujjaman     |||");
    printf("\n\t\t\t\t  |||                             |||");
    printf("\n\t\t\t\t  |||    Id: 172-35-2203          |||");
    printf("\n\t\t\t\t  |||                             |||");
    printf("\n\t\t\t\t  |||    Time: %s           |||",__TIME__);
    printf("\n\t\t\t\t  |||                             |||");
    printf("\n\t\t\t\t  |||    Date: %s        |||",__DATE__);
    printf("\n\t\t\t\t  |||                             |||");
    printf("\n\t\t\t\t  |||||||||||||||||||||||||||||||||||");


    printf("\n\n\n\n\n\n\n\n\n\t\t\t\t  Press Any Key to login");
    getch();
    for(int i=0; i<8; i++)
    {
        printf(". ");
        delay(250);
    }
}

void close()

{
    system("cls");

    printf("\n\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Thanks !! \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");

}

void delay(int milliseconds)
{
    long pause;
    clock_t now,then;
    pause = milliseconds*(CLOCKS_PER_SEC/1000);
    now = then = clock();
    while( (now-then) < pause )
        now = clock();
}
void controllerFunction()
{
    system("cls");
    printf("\n\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 MAIN MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    printf("\n\t\t\t1: Add Employee \n\t\t\t2: Delete Employee \n\t\t\t3: Search Employee \n\t\t\t4: Employee List\n\t\t\t5: Modify Employee Detail\n\t\t\t6: Employee Attendance\n\t\t\t7: Pay Info\n\t\t\t8: About Software\n\t\t\t9: Logout\n\n\n");
    printf("\t\t\tPlease Enter Your Choice: ");
    int si=0;
    scanf("%d",&si);
    switch(si)
    {
    case 1:
        addEmployee();
        break;
    case 2:
        deleteEmployee();
        break;
    case 3:
        searchEmployee();
        break;
    case 4:
        listEmployee();
        break;
    case 5:
        modifyEmployee();
        break;
    case 6:
        attendanceEmployee();
        break;
    case 7:
        Pay_Info();
        break;
    case 8:
        about();
        break;
    case 9:
        close();
        break;
    default:
        system("cls");
        printf("\n\n\n\t\t\tWrong Input\n\n\n\n\n\n\t\t\tPress Enter To Try Again");
        getch();
        controllerFunction();
    }
}
void addEmployee()
{
    system("cls");
    FILE *fp;
    fp = fopen("Employee.txt","a+");

    printf("\n\n\n\n\t\tPlease Provide All The Information");
    printf("\n\n\t\tName: ");
    scanf("%s",add.name);

    printf("\n\t\tID: ");
    scanf("%s",add.idNnumber);

    printf("\n\t\tAge: ");
    scanf("%d",&add.age);

    printf("\n\t\tAddress: ");
    scanf("%s",add.address);

    printf("\n\t\tPhone Number: ");
    scanf("%s",add.phoneNumber);

    printf("\n\t\tJoining Date: ");
    scanf("%s",add.joiningDate);

    printf("\n\t\tGrade: ");
    scanf("%s",add.grade);

    printf("\n\t\tSkills: ");
    scanf("%s",add.skills);

    printf("\n\t\tBasic Salary: ");
    scanf("%d",&add.bs);

    printf("\n\t\tHouse Allowance: ");
    scanf("%d",&add.houseAllowance);

    fprintf(fp,"%s\t%s\t%d\t%s\t%s\t%s\t%s\t%s\t%d\t%d\n",add.name, add.idNnumber, add.age, add.address, add.phoneNumber, add.joiningDate, add.grade, add.skills, add.bs, add.houseAllowance);
    fflush(stdin);
    fclose(fp);

    system("cls");
    printf("\n\n\n\n\n\t\t\t\tSave Successful\n\n\n\n\n");
    printf("\nEnter 1 to Add Another and 0 to Main Menu:");
    scanf("%d",&chose);
    if (chose==1)
    {

        system("cls");
        addEmployee();
    }

    else if (chose==0)
    {
        system("cls");
        controllerFunction();
    }
    else
    {
        printf("\nInvalid Entry!");
    }

}
void deleteEmployee()
{

    system("cls");
    FILE *old,*newrec;
    int test=0;
    old=fopen("Employee.txt","r");
    newrec=fopen("new.txt","w");
    printf("Enter the ID you want to delete:");
    scanf("%d",&del.idNnumber);
    while (fscanf(old,"%s%s%d%s%s%s%s%s%d%d",&add.name, &add.idNnumber, &add.age, &add.address, &add.phoneNumber, &add.joiningDate, &add.grade, &add.skills, &add.bs, &add.houseAllowance)!=EOF)
    {
        if(strcmpi(add.idNnumber,del.idNnumber)!=0)
        {
            fprintf(newrec,"\n%s\t%s\t%d\t%s\t%s\t%s\t%s\t%s\t%d\t%d",add.name, add.idNnumber, add.age, add.address, add.phoneNumber, add.joiningDate, add.grade, add.skills, add.bs, add.houseAllowance);
        }

        else
        {
            test++;
            printf("\nRecord deleted successfully!\n");
        }
    }

    remove("Employee.txt");
    rename("new.txt","Employee.txt");
    fclose(old);
    fclose(newrec);


    printf("\nEnter 1 to Delete Another and 0 to Main Menu");
    scanf("%d",&chose);
    if (chose==1)
    {

        system("cls");
        searchEmployee();
    }

    else if (chose==0)
    {
        system("cls");
        controllerFunction();
    }
    else
    {
        printf("\nInvalid Entry!");
    }

}
void searchEmployee()
{

    system("cls");
    FILE *ptr;
    int test=0;
    ptr=fopen("Employee.txt","r");
    printf("Do you want to check by\n1.Name\n2.Id\n\nEnter your choice:");
    scanf("%d",&chose);

    if (chose==1)

    {
        system("cls");
        printf("Enter the Name To Search:");
        scanf("%s",&check.name);
        while(fscanf(ptr,"%s%s%d%s%s%s%s%s%d%d",&add.name, &add.idNnumber, &add.age, &add.address, &add.phoneNumber, &add.joiningDate, &add.grade, &add.skills, &add.bs, &add.houseAllowance)!=EOF)
        {
            if(strcmp(add.name,check.name)==0)
            {
                system("cls");
                test=1;
                printf("\n\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Detail\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
                printf("\n\tName: %s\n\tId Number: %s\n\tAge: %d\n\tAddress: %s\n\tPhone No:%s\n\tJoining Date: %s\n\tGrade: %s\n\tSkill: %s",add.name,add.idNnumber,add.age,add.address,add.phoneNumber,add.joiningDate,add.grade,add.skills);
                printf("\t\n\n\nPress Enter To Main Menu:");
                getch();
                controllerFunction();
            }
        }
    }

    else if (chose==2)

    {
        system("cls");
        printf("Enter the ID To Search:");
        scanf("%s",&check.idNnumber);
        while(fscanf(ptr,"%s%s%d%s%s%s%s%s%d%d",&add.name, &add.idNnumber, &add.age, &add.address, &add.phoneNumber, &add.joiningDate, &add.grade, &add.skills, &add.bs, &add.houseAllowance)!=EOF)
        {
            if(strcmp(add.idNnumber,check.idNnumber)==0)
            {
                system("cls");
                test=1;
                printf("\n\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Detail \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
                printf("\n\tName: %s\n\tId Nnumber: %s\n\tAge: %d\n\tAddress: %s\n\tPhone No:%s\n\tJoining Date: %s\n\tGrade: %s\n\tSkill: %s\n\tSalary: %d\n\tHouse Allowance: %d",add.name,add.idNnumber,add.age,add.address,add.phoneNumber,add.joiningDate,add.grade,add.skills,add.bs,add.houseAllowance);;
                printf("\t\n\n\nPress Enter To Main Menu:");
                getch();
                controllerFunction();

            }
        }
    }

    fclose(ptr);
    if(test!=1)
    {
        system("cls");
        printf("\nRecord not found!!\a\a\a");

        printf("\nEnter 1 to Search Another and 0 to Main Menu:");
        scanf("%d",&chose);
        if (chose==1)
        {

            system("cls");
            searchEmployee();
        }

        else if (chose==0)
        {
            system("cls");
            controllerFunction();
        }
        else
        {
            printf("\nInvalid Entry!");
        }
    }
}
void listEmployee()
{
    FILE *view;
    view=fopen("Employee.txt","rb+");
    system("cls");

    printf("\n\tName\tID\t\tAge\tAddress\t\tPhone No\tGrade\tSkill\n");

    while(fscanf(view,"%s%s%d%s%s%s%s%s%d%d",add.name, add.idNnumber,&add.age,add.address,add.phoneNumber,add.joiningDate,add.grade,add.skills, &add.bs, &add.houseAllowance)!=EOF)

    {
        printf("\n\t%s\t%s\t%d\t%s\t%s\t%s\t%s\n",add.name,add.idNnumber,add.age,add.address,add.phoneNumber,add.grade,add.skills);
    }
    fclose(view);
    printf("\n\n\n\tPress Enter To Try Again");
    getch();
    controllerFunction();
}
void modifyEmployee()
{
    system("cls");
    int test=0;
    FILE *old,*newrec;
    old=fopen("Employee.txt","r");
    newrec=fopen("new.txt","w");
    printf("\nEnter the ID of Employee whose info you want to change:");
    fflush(stdin);
    scanf("%d",&modify.idNnumber);
    while(fscanf(old,"%s%s%d%s%s%s%s%s%d%d",&add.name, &add.idNnumber, &add.age, &add.address, &add.phoneNumber, &add.joiningDate, &add.grade, &add.skills, &add.bs, &add.houseAllowance)!=EOF)
    {
        if(strcmpi(add.idNnumber,modify.idNnumber)!=0)
        {
            test=1;
            printf("\nWhich information do you want to change?\n1.Address\n2.Phone\n3.Salary\n\nEnter your choice");
            scanf("%d",&chose);
            system("cls");
            if(chose==1)
            {
                printf("Enter the new address:");
                scanf("%s",modify.address);
                fprintf(newrec,"\n%s\t%s\t%d\t%s\t%s\t%s\t%s\t%s\t%d\t%d",add.name, add.idNnumber, add.age, modify.address, add.phoneNumber, add.joiningDate, add.grade, add.skills, add.bs, add.houseAllowance);
                system("cls");
                printf("Changes saved!");
                printf("\t\n\n\nPress Enter To Main Menu:");
                getch();
                controllerFunction();

            }
            else if(chose==2)
            {
                printf("Enter the new phone number:");
                scanf("%s",modify.phoneNumber);
                fprintf(newrec,"\n%s\t%s\t%d\t%s\t%s\t%s\t%s\t%s\t%d\t%d",add.name, add.idNnumber, add.age, add.address, modify.phoneNumber, add.joiningDate, add.grade, add.skills, add.bs, add.houseAllowance);
                system("cls");
                printf("Changes saved!");
                printf("\t\n\n\nPress Enter To Main Menu:");
                getch();
                controllerFunction();
            }

            else if(chose==3)
            {
                printf("Enter the new Salary:");
                scanf("%s",modify.bs);
                fprintf(newrec,"\n%s\t%s\t%d\t%s\t%s\t%s\t%s\t%s\t%d\t%d",add.name, add.idNnumber, add.age, add.address, add.phoneNumber, add.joiningDate, add.grade, add.skills, modify.bs, add.houseAllowance);
                system("cls");
                printf("Changes saved!");
                printf("\t\n\n\nPress Enter To Main Menu:");
                getch();
                controllerFunction();
            }

        }

        else
        {
            fprintf(newrec,"\n%s\t%s\t%d\t%s\t%s\t%s\t%s\t%s\t%d\t%d",add.name, add.idNnumber, add.age, add.address, add.phoneNumber, add.joiningDate, add.grade, add.skills, add.bs, add.houseAllowance);
        }
    }

    remove("Employee.txt");
    rename("new.txt","Employee.txt");
    fclose(old);
    fclose(newrec);

    if(test!=1)
    {
        system("cls");
        printf("\nRecord not found!!\a\a\a");
    }


    printf("\nEnter 1 to Modify Another and 0 to Main Menu:");
    scanf("%d",&chose);
    if (chose==1)
    {

        system("cls");
        modifyEmployee();
    }

    else if (chose==0)
    {
        system("cls");
        controllerFunction();
    }
    else
    {
        printf("\nInvalid Entry!");
    }
}

void attendanceEmployee()
{
    system("cls");
    printf("\n\n\t\t\t\tAttendance\n\n");
    printf("\n\t\t\t1: Give Attendance \n\t\t\t2: ViewAttendance \n\t\t\t3: Main Menu\n\n\n");
    printf("\t\t\tPlease Enter Your Choice: ");
    int si=0;
    scanf("%d",&si);
    switch(si)
    {
    case 1:
        giveAttendance();
        break;
    case 2:
        viewAttendance();
        break;
    case 3:
        controllerFunction();
        break;
    default:
        system("cls");
        printf("\n\n\t\t\tWrong Input\n\n\n\n\n\n\n\t\t\tPress Enter Try Again");
        getch();
        attendanceEmployee();

    }
}
void giveAttendance()
{
    FILE*fpa;
    system("cls");
    fpa = fopen("Attendance.txt","a+");
    char attendance[20];
    printf("\n\n\t\t\t\tGive Attendance\n\n\n");
    printf("\t\t\t\tPlease Enter Id: ");
    scanf("%s",attendance);

    system("cls");
    FILE *ptr;
    int test=0;
    ptr=fopen("Employee.txt","r");

    while(fscanf(ptr,"%s%s%d%s%s%s%s%s%d%d",&add.name, &add.idNnumber, &add.age, &add.address, &add.phoneNumber, &add.joiningDate, &add.grade, &add.skills, &add.bs, &add.houseAllowance)!=EOF)
    {
        if(strcmpi(add.idNnumber,attendance)==0)
        {
            test=1;
            fprintf(fpa,"ID: %s\t Time: %s\t Date: %s \t\n",attendance,__TIME__,__DATE__);
            fclose(fpa);

            system("cls");
            printf("\nEnter 1 to Input Another Attendance and 0 to Main Menu:");
            scanf("%d",&chose);
            if (chose==1)
            {

                system("cls");
                giveAttendance();
            }

            else if (chose==0)
            {
                system("cls");
                controllerFunction();
            }
            else
            {
                printf("\nInvalid Entry!");
            }

        }
    }


    if(test!=1)
    {
        system("cls");
        printf("\n\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2Record not found!!\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n");

        system("cls");
            printf("\nEnter 1 to Try Again and 0 to Main Menu:");
            scanf("%d",&chose);
            if (chose==1)
            {

                system("cls");
                giveAttendance();
            }

            else if (chose==0)
            {
                system("cls");
                controllerFunction();
            }
            else
            {
                printf("\nInvalid Entry!");
            }
    }

}

void viewAttendance()
{
    int test=0;
    FILE*fpa;
    system("cls");
    char a[50],b[50];

    char attendance[20];

    fpa=fopen("Attendance.txt","rb+");
    printf("\n\n\n\t\t\tAttendance List Is\n\n\n");

    while(fscanf(fpa,"%s",attendance,a,b)!=EOF)
    {
        test++;
        printf("%s  ",attendance);
    }


    printf("\n\n\nEnter 0 For Back 1 For Main Menu and 9 to exit:");
    scanf("%d",&chose);
    if (chose==1)
    {

        system("cls");
        controllerFunction();
    }

    else if (chose==0)
    {
        system("cls");
        attendanceEmployee();
    }
    else if (chose==9)
    {
        system("cls");
        close();
    }
    else
    {
        printf("\nInvalid Entry!");
    }


}

void about()
{
    system("cls");
    printf("\n\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 About Software \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n");
    printf("Line Of Code :%d\n\n", __LINE__ );
    printf("Payroll management system project in C is a console application without the use of graphics.\nThe project has multiple classes and sub-classes with numerous features within them. \nBasic operations users can perform via this program project that are based on file handling \nare adding new employee record, modifying employee record and deleting record, displaying one or all employees record. ");
    printf("\n\n\nPress Any Key To Go Main Menu");
    getch();
    controllerFunction();

}
void Pay_Info()
{

    float tcost=0,pcost=0,bsalary,ts=0,salary=0,ocost;
    int i,n;
    int year;
    FILE *view;
    view=fopen("Employee.txt","rb+");
    system("cls");
    printf("\n\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2Yearly Cost\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n");
    printf("\n\n\n\t\t\tEnter Year ");
    scanf("%d",&year);
    while(fscanf(view,"%s%s%d%s%s%s%s%s%d%d",add.name, add.idNnumber,&add.age,add.address,add.phoneNumber,add.joiningDate,add.grade,add.skills, &add.bs, &add.houseAllowance)!=EOF)
    {
        ts=add.bs+add.houseAllowance;
        pcost=(ts*12);
        tcost=tcost+pcost;
        salary=0;
        pcost=0;
    }
    fclose(view);
    printf("\n\t\t\tEnter Other Cost: ");
    scanf("%d",&ocost);

    tcost=tcost+ocost;
    system("cls");
    printf("\n\n\n\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2Total Cost Of %d Is %.2f Tk Only\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2",year,tcost);
    printf("\n\n\n\t\t\tPress Enter To Main Menu");
    getch();
    controllerFunction();
}
