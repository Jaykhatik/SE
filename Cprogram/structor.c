#include<stdio.h>
#include<string.h>
struct employee{
int id;
char name[10];
float salary;
};
void main(){
struct employee e[5];
printf("%d",sizeof(e));
e[0].id=101;
strcpy(e[0].name,"krunal");
e[0].salary=10000;

printf("Emp id=%d\n",e[0].id);
printf("Emp name=%s\n",e[0].name);
printf("Emp salary=%.2f\n",e[0].salary);
e[1].id=101;
strcpy(e[1].name,"krunal");
e[1].salary=10000;

printf("Emp id=%d\n",e[1].id);
printf("Emp name=%s\n",e[1].name);
printf("Emp salary=%.2f\n",e[1].salary);
e[2].id=101;
strcpy(e[2].name,"krunal");
e[2].salary=10000;

printf("Emp id=%d\n",e[2].id);
printf("Emp name=%s\n",e[2].name);
printf("Emp salary=%.2f\n",e[2].salary);
e[3].id=101;
strcpy(e[3].name,"krunal");
e[3].salary=10000;

printf("Emp id=%d\n",e[3].id);
printf("Emp name=%s\n",e[3].name);
printf("Emp salary=%.2f\n",e[3].salary);
}
