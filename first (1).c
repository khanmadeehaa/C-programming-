
/*{                 [NESTED IF ELSE]
     int marks=205,attendence=25; 
    scanf("%d %d",&marks,&attendence);
    if(marks>=250)
    {
    if(attendence>=25)
   {
     printf("pass");
   }
   else
   printf("your atteattendence is low");
    }
    else 
    printf("fail");
    
    return 0;
    getch();
}    [ELSE IF ladder]

{
int marks;
scanf("%d",&marks);
if(marks>=250)
{ 
 printf("st");
 }
 else if(marks>=150) 
{
printf("2");
}
else if(marks>=100)
{
printf("3");
}
else
{
printf("fail");
}
return 0;
}                          [switch stat]
{
int e,h,m;
int sum,per,check;
/*e=90;
h=70;
m=60;*/ /*
scanf("%d%d%d",&e,&h,&m);
printf("enter the scores",e,h,m);
sum=e+h+m;
per=(sum*100)/300;
scanf("%d",&check);
switch(check)
{
case 1:
printf("tototal marks= %d",sum);
break;
case 2:
printf("percentage %d",per);
break;
default:
printf("wrong");
}
    return 0;
                        CONTINEOU and break STAT }
                        
                        //FOR LOOP//
 {
 int i;
            for (i=1; i<=10;i++ )            
    {
    if(i%5==0)
   continue ;//specific remove or breakbreak it removes all after;
    printf("%d \n",i);
    }
    return 0;
    }*/
    #include<stdio.h>
    #include<conio.h>
  /* int main()
    { 
    int x=7;
    printf("%d \n" ,x);
     printf ("%d  \n",x--);
     
     
    

    return 0;
    }
    int main() 
    {
    int a=4,b=3;
     a=a^b;
     b=a^b;
     a=a^b; 
      printf("After XOR, a=%d and b=%d",a,b);
       return 0; 
}          IT SWAP THE NO 
int main() {
 char result;
 int marks;
 
 printf("\n enter the marks= %d",marks);
 result=(marks>33?"p":"f");
 return 0;  }
 
 int main() 
 { int var=75,var2=56,num; 
  num = sizeof(var)?(var2>23?((var == 75) ? 'A' : 0) : 0) : 0; 
printf("%d", num); 
return 0;}*/
