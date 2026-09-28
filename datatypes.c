# include<stdio.h>

int main() {
int a;
float b;
double c;
char ch;
char name[50];
//Input section
printf("Enter a number:");
scanf("%d", &a);
printf("Enter a float value:");
scanf("%f", &b);
printf("Enter a double value:");
scanf("%lf",&c);
printf("Enter a character:");
scanf("%c",&ch);
printf("Enter a string (name):");
scanf("%s",name);

//Output scetion
printf("\n---Output---");
printf("Integer entered:%d\n",a);
printf("Float entered:%.3f\n",b);
printf("Double entered:%.2lf\n",c);
printf("Character entered:%c\n",ch);
printf("String entered:%s\n",name);




    return 0;
}