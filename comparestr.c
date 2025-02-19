#include<stdio.h>
#include<string.h>
int main(){
char str1[50], str2[50];
printf("Enter the first string:");
fgets(str1,sizeof(str1),stdin);
printf("Enter the second string:"); 
fgets(str2,sizeof(str2),stdin);
if (strcmp(str1,str2)==0){
printf("\n The strings are equal");
}
else{
printf("\n the strings are not equal");
}
return 0;
}

