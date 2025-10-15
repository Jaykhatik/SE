#include<stdio.h>
void main()
{
    int maths,sci,hindi;
    printf("enter maths marks : ");
    scanf("%d",&maths);
    printf("enter sci marks : ");
    scanf("%d",&sci);
    printf("enter hindi marks : ");
    scanf("%d",&hindi);
    if(maths<100&&sci<100&&hindi<100)
    {
        if(maths>=40&&sci>=40&&hindi>=40)
        {
            int total=maths+sci+hindi;
            printf("%d\n",total);
            int per=total/3;
            printf("percentage of three subjects is : %d",per);
            if(per>=90&&per<99)
            {
                printf("your Grade is A+");
            }
            else if(per>=80&&per<90)
            {
                printf("Grade is A");
            }
            else if(per>=70&&per<80)
            {
                printf("Grade is B+");
            }
            else if(per>=60&&per<70)
            {
                printf("Grade is B");
            }
            else if(per>=40&&per<60)
            {
                printf("Grade is C");
            }
            else
            {
                printf("YOU ARE FAIL!!!!!");
            }
        }
        else
        {
            printf("each subject marks should be greater than 40");
        }
    }
    else
    {
        printf("each subject marks should be less than 100");
    }
}
