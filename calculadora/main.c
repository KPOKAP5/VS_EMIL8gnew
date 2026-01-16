#include <stdio.h>
int main(){
printf("This is a basic calculator with the four main operations.\n 1=+ 2=- 3=* 4=/\n");
double pr1;
printf("Enter first number:");
scanf("%lf",&pr1);
int r;
printf("Enter operation:");
scanf("%d",&r);
double pr2;
printf("Enter second number:");
scanf("%lf",&pr2);
double res;
switch(r){
case 1 :res=pr1+pr2;printf("Result is:%lf\n",res);break;
case 2 :res=pr1-pr2;printf("Result is:%lf\n",res);break;
case 3 :res=pr1*pr2;printf("Result is:%lf\n",res);break;
case 4 :res=pr1/pr2;printf("Result is:%lf\n",res);break;
default:printf("NO SUCH OPERATION");break;
}
return 0;
}
