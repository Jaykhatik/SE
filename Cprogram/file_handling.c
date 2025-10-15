//for file reading

/*#include<stdio.h>
int main(){

FILE *fp;
char ch;
fp=fopen("structor.c","r");
while(1)
{
    ch=fgetc(fp);
    if(ch==EOF)
        break;
printf("%c",ch);
}
fclose(fp);
return 0;
}
*/


//file writing
/*#include<stdio.h>
int main(){
FILE *fp1;
fp1 =fopen("file.txt","w");
fprintf(fp1,"jay");
printf("file written");
fclose(fp1);
return 0;
}*/


//for reading the data one to one word from file

/*#include<stdio.h>
int main(){
FILE *fp;
char buff[255];//creating char array to store data of file
fp=fopen("file.txt","r");
while(fscanf(fp,"%s",buff)!=EOF){
    printf("%s",buff);
}
fclose(fp);
return 0;
}*/


//for append the data into file

#include<stdio.h>
#include<string.h>
int main(){
FILE *fptr;
int id;
char name[30];
float salary;
fptr=fopen("file.txt","a");//open for appending
if(fptr==NULL){
    printf("file doesnt exists\n");
    return 0;
}
printf("enter the id :");
scanf("%d",&id);
fprintf(fptr,"ID=%d\n",id);
printf("enter the name :");
scanf("%s",&name);
fprintf(fptr,"Name=%s\n",name);
printf("enter the salary :");
scanf("%f",&salary);
fprintf(fptr,"Salary=%f\n",salary);

fclose(fptr);
return 0;
}
