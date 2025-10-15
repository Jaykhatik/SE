/* write a program to identify vowel and consonant*/
#include<stdio.h>
void main(){
char alphabet;
printf("enter alphabet : ");
scanf("%c",&alphabet);
if(alphabet>='a'&&alphabet<='z'||alphabet>='A'&&alphabet<='Z'){
        if(alphabet=='a'||alphabet=='e'||alphabet=='i'||alphabet=='o'||alphabet=='u'&&alphabet=='A'||alphabet=='E'||alphabet=='I'||alphabet=='O'||alphabet=='U'){
            printf("The Alphabet is vowel!!");
        }
        else{
            printf("The Alphabet is Consonant!!");
        }
}
else{
        printf("please enter alphabet!!");
}
}
