/*
// Syntax
#include <stdio.h>

int main()
{
    printf("Hello World");

    return 0;
}

// And logical operator
#include <stdio.h>

int main()
{
    int isSunday;
    printf("If today is sunday press 1 else press 0 : ");
    scanf("%d",&isSunday);
    int isSnow;
    printf("If today snow is present outdoors press 1 else press 0 : ");
    scanf("%d",&isSnow);
    printf("%d",isSunday&&isSnow);
    return 0;
}
#include <stdio.h>

int main()
{
    int num;
    printf("Enter any number : ");
    scanf("%d",&num);
    printf("%d",num>9 && num<100);
    return 0;
}
*/

/*
// Check weaher the entered name has 1st letter capital or not
#include <stdio.h>

int main()
{
    char name;
    printf("Enter your name : ");
    scanf("%c",&name);
    if(name>='a' && name<='z'){
        printf("Not a capital letter at starting of the name");
    }
    else if(name>='A' && name<='Z'){
        printf("Yes capital letter is at starting of the name");
    }
    else{
        printf("Here not a letter it an Special Character ");
    }
    return 0;
}
*/

/*
// Table formation
#include <stdio.h>
int main()
{
    int num;
    printf("Enter any number whoes table you dont know : ");
    scanf("%d",&num);
    for(int i=1;i<=10;i++){
        printf("%d * %d = %d \n",num,i,num*i);
    }
    return 0;
}
*/
/*
// Printing abcde...
#include <stdio.h>
int main()
{
    for(char ch='a';ch<='z';ch++){
        printf("%c \n",ch);
    }
    return 0;

}
*/
/*
// Infinite loop
#include <stdio.h>
int main()
{
    for(int i=1; ;i++){
        printf("%d \n",i);
    }
    return 0;
}
*/
/*
// Finding sum of n numbers and its reversed values
#include <stdio.h>
int main()
{
    int sum=0,num;
    printf("Enter the number till which we have to add the numbers : ");
    scanf("%d",&num);
    for(int i=1,j=num; i<=num , j>0 ; i++,j--){
        sum+=i;
        printf("the reversed numbers are :- %d  \n",j);
    }
    printf("The sum of the natural number is : %d",sum);
    return 0;
}
*/
/*
// Enter number by user untill the type odd number
#include <stdio.h>
int main()
{
    int num;
    while(1){
        printf("Enter any number : ");
        scanf("%d",&num);
        if(num%2==0){
            printf("\n");
        }
        else{
            printf("You got it :>");
            break;
        }
    }
    return 0;
}
*/
/*
// Enter the number by user and break when they ebter the multiple of 7
#include <stdio.h>
int main(){
    int num;
    while(1){
        printf("Enter any number : ");
        scanf("%d",&num);
        if(num%7==0){
            printf("You got it :>");
            break;
        }
    }
    return 0;
}
*/

/*
// Print all numers from 1-10 except 6;
#include <stdio.h>
int main(){
    for(int i=1 ; i<=10 ; i++){
        if (i==6){
            continue;
        }
        else{
            printf("%d ",i);
        }
    }
    return 0;
}
*/
/*
// Print all odd numbers form a to b inputed by user
#include <stdio.h>
int main(){
    int stat_num,stop_num;
    printf("Enter number from where to start : ");
    scanf("%d",&stat_num);
    printf("Enter number at where we have to stop : ");
    scanf("%d",&stop_num);
    for(int i=stat_num ; i<=stop_num ; i++){
        if(stat_num>stop_num){
            printf("Invalid numbers");
            break;
        }
        else if(i%2!=0){
            printf("%d ",i);
        }
    }
    return 0;
}
*/
/*
// Factorial of n number
#include <stdio.h>
int main(){
    int n,fact=1;
    printf("Enter anu number : ");
    scanf("%d",&n);
    for(int i=1 ; i<=n ; i++){
        fact*=i;
    }
    printf("Factorial of %d is %d",n,fact);
}
*/
/*
// Printing the tables in reverse order of a number n
#include <stdio.h>
int main(){
    int num;
    printf("Enter any number : ");
    scanf("%d",&num);
    for(int i=10 ; i>=1 ; i--){
        printf("%d * %d = %d \n",num,i,num*i);
    }
    return 0;
}
*/

/*
// Functions (Q)If the user is Indian print Namaste and if he's French print Bonjour usnig functions
#include <stdio.h>
void india();
void french();
int main(){
    char ch;
    printf("If you are indian write 'i' and if you are french write 'f' : ");
    scanf("%c",&ch);
    if(ch=='i'){
        india();
    }
    else if(ch=='f'){
        french();
    }
    else{
        printf("Only enter 'i' or 'f'");
    }
    return 0;
}

void india(){
    printf("Namaste");
}
void french(){
    printf("Bonjour");
}
*/

/*
//Return the sum of two values using functions
#include <stdio.h>
int sum(int a,int b);
int main(){
    int num1,num2;
    printf("Enter 1st number to add : ");
    scanf("%d",&num1);
    printf("Enter 2nd number to add : ");
    scanf("%d",&num2);
    printf("The sum of %d and %d is : %d ",num1,num2,sum(num1,num2));
    return 0;
}
int sum(int a ,int b){
    int sum=a+b;
    return sum;
}
*/

/*
// WAP to print a table of  number enter by user using a functions
#include <stdio.h>
void tableOfN(int n);
int main(){
    int num;
    printf("Enter any number : ");
    scanf("%d",&num);
    tableOfN(num);
    return 0;
}
void tableOfN(int n){
    for(int i=1 ; i<=10 ; i++){
        printf("%d X %d = %d \n",n,i,n*i);
    }
}
*/

/*
// Enter a valur by user and then return the value by adding 18% GST
#include <stdio.h>
void gstreturn(int n);
int main(){
    int price;
    printf("Enter the amount of money you have : ");
    scanf("%d",&price);
    gstreturn(price);
    return 0;
}
void gstreturn(int n){
    printf("The amount of money remaing after applying GST : %d",n-(n*18/100));
}
*/

/*
// Ruccursion add n natural numbers
#include <stdio.h>
int sum(int n);
int main(){
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);
    printf("%d",sum(n));
    return 0;
}
int sum(int n){
    if(n==1){
        return 1;
    }
    int sumM1=sum(n-1);
    int totsum=sumM1+n;
    return totsum;
}

*/
/*
// Print factorial of n numbeer using Ruccursion
#include <stdio.h>
int fact(int n){
    if(n==1){
        return 1;
    }
    int sum1=fact(n-1);
    int tot=sum1*n;
    return tot;
}
int main(){
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);
    printf("%d",fact(n));
}
*/

/*
// WAP to print Fabonacci number n entered by user using functions and then using recurssions
#include <stdio.h>
int fib(int n);
int main(){
    int num;
    printf("Enter any number : ");
    scanf("%d",&num);
    printf("%d",fib(num));
    return 0;
}
int fib(int n){
    if (n==0 || n==1){
        if(n==0){
            return 0;
        }
        else{
            return 1;
        }
    }
    int fibNm1=fib(n-1);
    int fibNm2=fib(n-2);
    int fibN=fibNm1+fibNm2;
    return fibN;
}
*/

/*
// Homework questions

// Q1)Funtion to add two digits
#include <stdio.h>
int sum(int a,int b);
int main(){
    int num1,num2;
    printf("Enter 1st number : ");
    scanf("%d",&num1);
    printf("Enter 2nd number : ");
    scanf("%d",&num2);
    printf("Sum of the numbers you entered is : %d",sum(num1,num2));
}
int sum(int a,int b){
    int sum=a+b;
    return sum;
}

// Q2)Function to fint square root of a number

#include <stdio.h>
#include <math.h>
float root(float a);
int main(){
    float num;
    printf("Enter any number : ");
    scanf("%f",&num);
    printf("%.2f",root(num));
}
float root(float a){
    float ans=pow(a,0.5);
    return ans;
}
// Q3)Print cold or hot depenting upon the temperature entered by the user

#include <stdio.h>
void temp(float a,char c);
int main(){
    float t;
    char choice;
    printf("If you want to enter the temperature in Degrees press 'd' and if in fahrenheit then press 'f' : ");
    scanf("%c",&choice);
    temp(t,choice);
    return 0;
}
void temp(float t,char c){
    if (c=='d'){
        printf("Enter the temperature in Degrees : ");
        scanf("%f",&t);
        if(t>=30){
            printf("Entered temperature is really hot for you...");
        }
        else if(t>=20 && t<30){
            printf("Entered temperature is just warm...");
        }
        else if(t>10 && t<20){
            printf("Entered temperature is cool...");
        }
        else{
            printf("Entered temperature is cold...");
        }
    }
    else if (c=='f'){
        printf("Enter the temperature in Fahrenheit : ");
        scanf("%f",&t);
        if(t>=86){
            printf("Entered temperature is really hot for you...");
        }
        else if(t>=68 && t<86){
            printf("Entered temperature is just warm...");
        }
        else if(t>50 && t<68){
            printf("Entered temperature is cool...");
        }
        else{
            printf("Entered temperature is cold...");
        }
    }
    else{
        printf("Enter valid input ..!");
    }
}

// Q)Function of power
#include <stdio.h>
int power(int a,int b);
int main(){
    int num1,num2;
    printf("Enter the base number : ");
    scanf("%d",&num1);
    printf("Enter the number raise to the base number : ");
    scanf("%d",&num2);
    printf("%d",power(num1,num2));
    return 0;
}
int power(int a,int b){
    int p=1;
    for(int i=1 ; i<=b ;i++){
        p=p*a;
    }
    return p;
}
*/

/*
// Q) Find that the entered number is prime or not

#include <stdio.h>
int main(){
    int num,isPrime=1;
    printf("Enter any number : ");
    scanf("%d",&num);
    if(num<=1){
        printf("Not Prime..!");
        return 0;
    }
    for(int i=2 ; i<=num/2 ; i++){
        if(num%i==0){
            isPrime=0;
            break;
        }
    }
    if(isPrime){
        printf("Prime ..!");
    }
    else{
        printf("Not Prime ..!");
    }
}

// Q) Swap two numbers without using 3rd variable
#include <stdio.h>
int main(){
    int num1,num2;
    printf("Enter 1st number : ");
    scanf("%d",&num1);
    printf("Enter 2nd number : ");
    scanf("%d",&num2);
    printf("Befor swapping \n");
    printf("a:%d, b:%d \n",num1,num2);
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("After swapping \n");
    printf("a:%d, b:%d \n",num1,num2);
    return 0;
}

// Fibinacii series (#1)

#include <stdio.h>
int main(){
    int num,ft=0,st=1,nt;
    printf("Enter any number : ");
    scanf("%d",&num);
    printf("%d\t%d\t",ft,st);
    while(num-2){
        nt=ft+st;
        printf("%d\t",nt);
        ft=st;
        st=nt;
        num--;
    }
    return 0;
}


//Q)  WAP to store the student data in multidimentionsal array 1st row of roll no 2-4 enter marks of the
//    students and the last column should contain the average of the marks obtained by the students marks.
//    Also note that the marks should be grater than 35 and less then 85 .

#include <stdio.h>
#include <math.h>
int main(){
    int stu_data[60][5],mrk,topper_idx=-1;
    float avg,max_Avg=0.0;
    for(int i=0 ; i<60 ; i++){
        avg=0.0;
        for(int j=0 ; j<5 ; j++){
            if(j==0){
                stu_data[i][j]=i+1;
            }
            else if(j==1){
                printf("Enter maths marks of roll no. %d : ",i+1);
                scanf("%d",&mrk);
                if(mrk>=35 && mrk<=85){
                    printf("|");
                    stu_data[i][j]=mrk;
                }
                else{
                    printf("Marks should be between 35 and 85!");
                    return 0;
                }
                avg+=mrk;
            }
            else if(j==2){
                printf("Enter physics marks of roll no. %d : ",i+1);
                scanf("%d",&mrk);
                if(mrk>=35 && mrk<=85){
                    printf("|");
                    stu_data[i][j]=mrk;
                }
                else{
                    printf("Marks should be between 35 and 85!");
                    return 0;
                }
                avg+=mrk;
            }
            else if(j==3){
                printf("Enter electronics marks of roll no. %d : ",i+1);
                scanf("%d",&mrk);
                if(mrk>=35 && mrk<=85){
                    printf("|");
                    stu_data[i][j]=mrk;
                }
                else{
                    printf("Marks should be between 35 and 85!");
                    return 0;
                }
                avg+=mrk;
                if(avg>max_Avg){
                    max_Avg=avg;
                    topper_idx=i+1;
                }
            }
            else if(j==4){
                printf("|");
                stu_data[i][j]=(avg/3.0);
                printf("|");
            }

        }
    }
    for(int i=0 ; i<60 ; i++){
        for(int j=0 ; j<5 ; j++){
            if(j==4){
                printf("%.2f",(float)stu_data[i][j]);
            }
            else{
                printf("  %d  ",stu_data[i][j]);
            }
        }printf("\n");
    }printf("Roll_No %d scored maximum marks %.2f",topper_idx,(max_Avg/3));
    return 0;
}
*/

// Pointers

/*
//Basic Syntax

#include <stdio.h>
int main(){
    int age=17;
    int* ptr=&age;
    int _age=*ptr;
    printf("%d",_age);  // Printing of value at that perticular address.
    return 0;
}

#include <stdio.h>
int main(){
    int age=17;
    int* ptr=&age;
    printf("%p ,",&age);  // Printing the address
    printf("%u ,",ptr);
    printf("%u ,",&age);
    printf("%u ,",&ptr);
    return 0;
}

#include <stdio.h>
int main(){
    int age=17;
    int* ptr=&age;
    printf("%d ,",age);    //Printing the value at that address
    printf("%d ,",*ptr);
    printf("%d ",*(&age));
    return 0;
}

Q) Find the output of the following code

#include <stdio.h>
int main(){
    int *ptr;
    int x;
    ptr =&x;
    *ptr=0;
    printf("x = %d \n",x);
    printf("*ptr = %d \n",*ptr);

    *ptr+=5;
    printf("x = %d \n",x);
    printf("*ptr = %d \n",*ptr);

    (*ptr)++;
    printf("x = %d \n",x);
    printf("*ptr = %d \n",*ptr);

    return 0;
}                   // ans=0,0   5,5    6,6

//Pointer to pointer

#include <stdio.h>
int main(){
    int age=17;
    int *ptr=&age;
    int **pptr=&ptr;
    printf("%u ,",&age);
    printf("%u ,",&ptr);
    printf("%u ",&pptr);
    return 0;
}

Q) print the value of the 'i' from it's pointer to pointer.

#include <stdio.h>
int main(){
    int i;
    printf("Enter any number : ");
    scanf("%d",&i);
    int *ptr=&i;
    int **pptr=&ptr;
    printf("Answer : %d ",**pptr);
    return 0;
}

#include <stdio.h>
int main(){
    int i;
    printf("Enter any number : ");
    scanf("%d",&i);
    int *ptr=&i;
    int **pptr=&ptr;
    printf("Answer : %d ",*pptr);
    return 0;
}

Q) Swap two numbers by call by value and call by reference in the main function

#include <stdio.h>
//Call by value
void swap(int a , int b){
    int t=a;
    a=b;
    b=t;
    printf("After swapping num1: %d and num2 %d\n",a,b);
}
// Call by reference
void _swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
    printf("After swapping num1: %d and num2 %d\n",*a,*b);

}
int main(){
    int num1=10;
    int num2=20;
    printf("By the useage of function:::::::\n");
    printf("Before swapping num1: %d and num2 %d\n",num1,num2);
    swap(num1 ,num2);
    printf("Call by value the variables in the main function num1:%d and num2:%d\n",num1,num2);
    printf("\n-----------------------------------------------------------------------------------\n");
    printf("By the useage of function:::::::\n");
    printf("Before swapping num1: %d and num2 %d\n",num1,num2);
    _swap(&num1 ,&num2);
    printf("Call by reference the variables in the main function num1:%d and num2:%d",num1,num2);
    return 0;
}

Q)Tell that will the address of the both be same?If not write a new code to make them same.

#include <stdio.h>
void printaddress(int a){
    printf("%p\n",&a);
}
int main(){
    int n=4;
    printf("%p\n",&n);
    printaddress(n);
    return 0;
}

//Answer the output of the both addresses will be different as the method is call by value.

//Both address are same now
#include <stdio.h>
void printingAddress(int *a){
    printf("%p\n",a);
}
int main(){
    int n=5;
    printf("%p\n",&n);
    printingAddress(&n);
}

Q)Write a function to calculate the sum,product,average of two numbers .Print that average in the main function.

#include <stdio.h>
int calculate(int a,int b ,int *sum ,int *prod ,int *avg){
    *sum=a+b;
    *prod=a*b;
    *avg=(a+b)/2;
}
int main(){
    int num1=2,num2=10;
    int sum,prod,avg;
    calculate(num1,num2,&sum,&prod,&avg);
    printf("Sum : %d ,Product : %d ,Average : %d",sum,prod,avg);
    return 0;
}
*/
/*
// Q) WAP to print the GCD of the two numbers entered by the user

#include <stdio.h>
int main(){
    int num1,num2,rem;
    int ans=1;
    while(1){
        printf("Enter first number : ");
        scanf("%d",&num1);
        printf("Enter second number : ");
        scanf("%d",&num2);
        while(1){
            int rem=num1%num2;
            if(rem!=0){
                num1=num2;
                num2=rem;
            }
            else{
                break;
            }
        }
        printf("The GCD if : %d",num2);
        printf("\nPress '1' to enter another number else to exit press any number : ");
        scanf("%d",&ans);
        if(ans!=1){
            printf("\nThank You..!");
            break;
        }
    }
    return 0;
}

// Q) WAP to multiply two square matrics any print its product

#include <stdio.h>
int main(){
    int matA[2][2]={{1,2},{3,4}};
    int matB[2][2]={{9,5},{3,4}};
    int matC[2][2];
    for(int i=0 ; i<2 ; i++){
        for(int j=0 ; j<2 ;j++){
            for(int k=0; k<2 ; k++){
                matC[i][j]+=matA[i][k]*matB[k][j];
            }
        }
    }
    for(int i=0 ; i<2 ; i++){
        for(int j=0 ; j<2 ; j++){
            printf(" %d ",matC[i][j]);
        }printf("\n");
    }
    return 0;
}

// Q) WAP to multiply matrices of any order entered by the user and also the matrix value entered by the user print the product of entered matrics

#include <stdio.h>
int main(){
    int ord;
    printf("Enter the order of the squate matrix : ");
    scanf("%d",&ord);
    int matA[ord][ord];
    int matB[ord][ord];
    int matC[ord][ord];
    for(int i=0 ; i<ord ; i++){
            printf("Enter the matricsA value for row %d :",i+1);
        for(int j=0 ; j<ord ; j++){
            scanf("%d",&matA[i][j]);
        }printf("\n");
    }
    for(int i=0 ; i<ord ; i++){
            printf("Enter the matricsB value for row %d :",i+1);
        for(int j=0 ; j<ord ; j++){
            scanf("%d",&matB[i][j]);
        }printf("\n");
    }
    printf("Matrix A ---->\n");
    for(int i=0 ; i<ord ; i++){
        for(int j=0 ; j<ord ; j++){
            printf(" %d ",matA[i][j]);
        }printf("\n");
    }
    printf("Matrix B ---->\n");
    for(int i=0 ; i<ord ; i++){
        for(int j=0 ; j<ord ; j++){
            printf(" %d ",matB[i][j]);
        }printf("\n");
    }
    for(int i=0 ; i<ord ; i++){
        for(int j=0 ; j<ord ;j++){
            for(int k=0; k<ord ; k++){
                matC[i][j]+=matA[i][k]*matB[k][j];
            }
        }
    }
    printf("Matrix(A) X Matrix(B) ---->\n");
    for(int i=0 ; i<ord ; i++){
        for(int j=0 ; j<ord ; j++){
            printf(" %d ",matC[i][j]);
        }printf("\n");
    }
    return 0;
}

*/


//Arrays
/*
//Basic Syntax

#include <stdio.h>
int main(){
    int array[5];
    //or
    int arrays[]={1,2,3,4,5,6,7,8};
}

Q) WAP to print the amount entred by the user when gst is added and when its not added (use array).

#include <stdio.h>
int main(){
    int amt,sum=0;
    printf("Enter how many values you have : ");
    scanf("%d",&amt);
    int price[amt];
    for(int i=0 ; i<amt ; i++){
        printf("Enter the %d amount : ",i+1);
        scanf("%d",&price[i]);
    }
    for(int i=0 ; i<amt ; i++){
        sum+=price[i];
    }
    float gst=sum+(sum*0.18);
    printf("The amount without gst is : %d.00",sum);
    printf("\nThe amount with gst is : %.2f",gst);

    return 0;
}

//Pointer arithmetic

// (Case I)
#include <stdio.h>
int main(){
    int age=17;
    int *ptr=&age;
    printf("The orignal value of ptr : %u\n",ptr);
    ptr++;
    printf("The value of ptr after increment : %u\n",ptr);
    ptr--;
    printf("The value of ptr after decrement : %u",ptr);
    return 0;
}

// (Case II)

#include <stdio.h>
int main(){
    float price=17.00;
    float *ptr=&price;
    printf("The orignal value of ptr : %u\n",ptr);
    ptr++;
    printf("The value of ptr after increment : %u\n",ptr);
    ptr--;
    printf("The value of ptr after decrement : %u",ptr);
    return 0;
}

// (Case III)

#include <stdio.h>
int main(){
    char star='*';
    char *ptr=&star;
    printf("The orignal value of ptr : %u\n",ptr);
    ptr++;
    printf("The value of ptr after increment : %u\n",ptr);
    ptr--;
    printf("The value of ptr after decrement : %u",ptr);
    return 0;
}

// Q) WAP to print product of two squate matrix 

#include <stdio.h>
int main(){
    int matA[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int matB[3][3]={{4,5,6},{7,8,9},{1,2,3}};
    int matC[3][3]={0};
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            matC[i][j]=0;
            for(int k=0 ; k<3 ; k++){
                matC[i][j]+=matA[i][k]*matB[k][j];
            }
        printf("%d ",matC[i][j]);
        }printf("\n");
    }
}

// Q)WAP to multiply two matrices of order inputed by the user

#include <stdio.h>
int main(){
    //Order input
    int m1,m2,n1,n2;
    printf("Enter no. of rows in matrixA : ");
    scanf("%d",&m1);
    printf("Enter no. of column in matrixA : ");
    scanf("%d",&n1);
    printf("Enter no. of rows in matrixB : ");
    scanf("%d",&m2);
    printf("Enter no. of column in matrixB : ");
    scanf("%d",&n2);
    
    //initializing matrices
    int mata[m1][n1];
    int matb[m2][n2];
    
    //error condition
    if(n1!=m2){
        printf("Matric multiplication not possible..!");
        return 0;
    }
    // initializing it after checking the condition
    int matc[m1][n2];
    
    //Matric A input
    printf("Enter the elements of matrix A : ");
    for(int i=0 ; i<m1 ; i++){
        for(int j=0 ; j<n1 ; j++){
            scanf("%d",&mata[i][j]);
        }
    }
    //Matric B input
    printf("Enter the elements of matrix B : ");
    for(int i=0 ; i<m2 ; i++){
        for(int j=0 ; j<n2 ; j++){
            scanf("%d",&matb[i][j]);
        }
    }
    
    
    for(int i=0 ; i<m1 ; i++){
            for(int j=0 ; j<n2 ;j++){
                matc[i][j]=0;
                for(int k=0 ; k<n1 ; k++){
                    matc[i][j]+=mata[i][k]*matb[k][j];
                }
            }
        }
        printf("The product of MatA & MatB : \n");
        for(int i=0 ; i<m1 ; i++){
            for(int j=0 ; j<n2 ; j++){
                printf(" %d ",matc[i][j]);
            }printf("\n");
        }
    return 0;
}
*/

/*
// Strings

// Syntax
#include <stdio.h>
int main(){
    char name[]={'A','S','H','I','T','O','S','H','\0'};
    // OR
    char name[]="Ashitosh";
    for(int i=0 ; name[i]!='\0' ; i++){
        printf("%c",name[i]);
    }
    return 0;
}

// Q) WAP to print the first and last name of the user by using for loop

#include <stdio.h>
void printStr(char arr[]){
    for(int i=0 ; arr[i]!=0 ; i++){
        printf("%c",arr[i]);
    }printf(" ");
}
int main(){
    char firstName[]="Ashitosh";
    char lastName[]="Lavhate";
    printStr(firstName);
    printStr(lastName);
    return 0;
}

#include <stdio.h>
int main(){
    char name[]="Ashitosh";
    printf("%s",name);
    return 0;
}

#include <stdio.h>
int main(){
    char name[10];
    printf("Enter your name : ");
    scanf("%s",name);
    printf("In the sheet your name is : %s",name);
    return 0;
}

// Exception
#include <stdio.h>
int main(){
    char fullName[20];
    printf("Enter you null name : ");
    scanf("%s",fullName);
    printf("You full Name as per the sheet is : %s",fullName);
    return 0;
}

#include <stdio.h>
int main(){
    char name[100];
    gets(name);         //A dangerous function hackers might tract this so we'll use fgets.
    puts(name);
    return 0;
}

#include <stdio.h>
int main(){
    char name[100];
    fgets(name,20,stdin);         //A safe function fgets.
    puts(name);
    return 0;
}

#include <stdio.h>
int main(){
    char *changable="Ashutosh";
    puts(changable);
    changable="Ashitosh";
    puts(changable);
    char nonChangable[]="Ashitosh";
    puts(nonChangable);
    nonChangable="Ashutosh";        //An error will be there due to this
    puts(nonChangable);
    return 0;
}

// Print the length of the string
#include <stdio.h>
int countLength(char arr[]){
    int count=0;
    for(int i=0 ; arr[i]!='\0';i++){
        count++;
    }
    return count-1;     //This is because '\0' is been counted in the string which shouldn't be there..!
}
int main(){
    char usrName[];
    fgets(usrName,100,stdin);
    printf("The length of the user's name is : %d",countLength(usrName);
    return 0;
}

// String library

// 1.strlen(str) function
#include <stdio.h>
#include <string.h>
int main(){
    char name[]="Ashitosh";
    int len=strlen(name);
    printf("%d",len));
    return 0;
}
// 2.strcpy(newstr,oldstr) function

#include <stdio.h>
#include <string.h>
int main() {
	char oldstr[]="Ashutosh";
	char newstr[]="Ashitosh";
	strcpy(newstr,oldstr);          //This is used to copy oldstr value into newstr 
	printf("Old string : %s",oldstr);
    printf("New string : %s",newstr);
	return 0;
}

// 3.strcat(str1,str2) function
#include <stdio.h>
#include <string.h>
int main(){
    char str1[10]="Ashitosh";
    char str2[]="Lavhate";
    strcat(str1,str2);          //str1=str1+sr2
    printf("%s",str1);
    return 0;
}


// 4.strcmp(str1,str2);
#include <stdio.h>
#include <string.h>
int main(){
    char str1[]="Ashitosh";             
    char str2[]="Lavhate";
    printf("%d",strcmp(str1,str2));         //Doubt in this till not clear skip this part
    return 0;
}

// Q) Take a input string from a user using "%c";       IMP(QUE)

#include <stdio.h>
int main(){
    char name[30];
    char ch;
    int i=0;
    printf("Enter you name : ");
    while (ch!='\n'){
        scanf("%c",&ch);
        name[i]=ch;
        i++;
    }
    name[i]='\0';
    printf("Your name according to our server : ");
    puts(name);
}

// Q)WAp to take password from the user and add the salt="123" at thee end of the password

#include <stdio.h>
#include <string.h>
int main(){
    int n;
    printf("How many digits your password shuld contain : ");
    scanf("%d",&n);
    char password[n];
    char newpassword[n+4];
    char salt[]="123";
    printf("Enter your password : ");
    scanf("%s",password);
    printf("Your password without salting : %s",password);
    strcpy(newpassword,password);
    strcat(newpassword,salt);
    printf("\nYour password with salting : %s",newpassword);
}

// Q)WAP to make a function named slice that prints the string from m to n entered by the user

#include <stdio.h>
void slice(char arr[],int size ,int m , int n){
    for(int i=m-1 ; i<n ; i++){
        printf("%c",arr[i]);
    }
}
int  main(){
    int s,m,n;
    printf("How many digits your sytring should contain : ");
    scanf("%d",&s);
    char string[s];
    printf("Enter your string : ");
    scanf("%s",string);
    printf("From which position to which you want to slice your string\n Staring position:");
    scanf("%d",&m);
    printf("\n Ending position:");
    scanf("%d",&n);
    slice(string,s,m,n);
}

// Q)WAP to count the number of vowels in the string        (MY WAY)

#include <stdio.h>
int main(){
    int count=0;
    char string[8]="Ashitosh";
    for(int i=0 ; i<8 ; i++){
        if(string[i]=='a' || string[i]=='e' || string[i]=='i' || string[i]=='o' || string[i]=='o'){
            count++;
        }
        else if(string[i]=='A' || string[i]=='E' || string[i]=='I' || string[i]=='O' || string[i]=='U'){
            count++;
        }
    }
    printf("The total numbers of vowels in '%s' is :%d",string,count);
    
}

// Q)WAP to count the number of vowels in the string        (Effecient Way)


#include <stdio.h>
int main(){
    int count=0;
    char string[]="AAAaaaiouaIO";
    char vowel[]="aeiouAEIOU";
    for(int i=0 ; string[i]!='\0' ; i++){           
        for(int j=0 ; vowel[j]!='\0' ; j++){
            if(string[i]==vowel[j]){
                count++;
                break;          //Doubt here
            }
        }
    }
    printf("The total numbers of vowels in '%s' is :%d",string,count);
    return 0;
}

Q)WAP to check weather the Character 'A' is present inn the give string or not

#include <stdio.h>
#include <string.h>
int main(){
    int ans=0;
    char string[]="Ashitosh";
    char ch='A';
    for(int i=0 ; i<sizeof(string) ; i++){
        if(string[i]=='A'){
            ans=1;
            break;
        }
    }
    if(ans==0){
        printf("'A' is NOT there the string.");
    }
    else{
        printf("'A' IS there the string.");
    }
    return 0;
}

*/


/*
// Structures : A colection of values of different data types

//Synatax

#include <stdio.h>
#include <string.h>
int main(){
    struct student{
        char name[30];
        int roll;
        float CGPA;
    };
    struct student s1;
    strcpy(s1.name,"Ashitosh");
    s1.roll=18;
    s1.CGPA=9.90;
    printf("\n\nName : %s",s1.name);
    printf("\nRoll_No : %d".s1.roll);
    printf("\nCGPA :%.2f",s1.s1.CGPA);
}

// Q)WAP to take datas of 3 students

#include <stdio.h>
#include <string.h>
struct student{
    char name[30];
    int roll;
    float CGPA;
};
int main(){
    struct student s1;
    strcpy(s1.name,"Ashitosh");
    s1.roll=27;
    s1.CGPA=9.90;
    printf("\nName : %s",s1.name);
    printf("\nRoll_No : %d",s1.roll);
    printf("\nCGPA : %.2f",s1.CGPA);
    
    struct student s2;
    strcpy(s2.name,"Varun");
    s2.roll=36;
    s2.CGPA=9.00;
    printf("\n\nName : %s",s2.name);
    printf("\nRoll_No : %d",s2.roll);
    printf("\nCGPA : %.2f",s2.CGPA);
    
    struct student s3;
    strcpy(s3.name,"Sarthak");
    s3.roll=41;
    s3.CGPA=7.85;
    printf("\n\nName : %s",s3.name);
    printf("\nRoll_No : %d",s3.roll);
    printf("\nCGPA : %.2f",s3.CGPA);
    
    return 0;
}

// Array of Structures

#include <stdio.h>
#include <string.h>
struct student{
    char name[30];
    int roll;
    float cgpa;
};
int main(){
    
    struct student CSE[120];
    struct student ECE[120];
    struct student IT[120];
    strcpy(CSE[26].name,"Ashitosh");
    CSE[26].roll=27;
    CSE[26].cgpa=9.90;
    printf("\nName : %s",CSE[26].name);
    printf("\nRoll_No : %d",CSE[26].roll);
    printf("\nCGPA : %.2f",CSE[26].cgpa);
    return 0;
}

// Initializing of Structures       (shortcut form)

#include <stdio.h>
#include <string.h>
struct student{
  char name[30];
  int roll;
  float cgpa;
};
int main(){
    struct student s1={"Ashitosh",27,9.90};
    printf("\nName : %s",s1.name);
    printf("\nRoll_No : %d",s1.roll);
    printf("\nCGPA : %.2f",s1.cgpa);
    return 0;
}
*/

//WAP to multiply two matrix but multiply them like 1st row of matA and last column of matB and so on...
/*
#include <stdio.h>

int main() {
    int matA[100][100], matB[100][100], result[100][100];
    int m, n, p, q;
    
    printf("Enter the number of rows and columns for matrix A: ");
    scanf("%d %d", &m, &n);

    printf("Enter elements of matrix A:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matA[i][j]);
        }
    }

    printf("Enter the number of rows and columns for matrix B: ");
    scanf("%d %d", &p, &q);

    if (n != p) {
        printf("Matrix multiplication not possible.\n");
        return 0;
    }

    printf("Enter elements of matrix B:\n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            scanf("%d", &matB[i][j]);
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            result[i][j] = 0;
            for (int k = 0; k < n; k++) {
                result[i][j] += matA[i][k] * matB[k][q-j-1];
            }
        }
    }

    printf("Resultant Matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}


// matrix multiplication

#include <stdio.h>

int main() {
    int matA[100][100], matB[100][100], result[100][100];
    int m, n, p, q;

    // Input dimensions for matA
    printf("Enter the number of rows and columns for matrix A: ");
    scanf("%d %d", &m, &n);

    // Input elements for matA
    printf("Enter elements of matrix A:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matA[i][j]);
        }
    }

    // Input dimensions for matB
    printf("Enter the number of rows and columns for matrix B: ");
    scanf("%d %d", &p, &q);

    // Check if matrices can be multiplied (n == p is required)
    if (n != p) {
        printf("Matrix multiplication not possible.\n");
        return 0;
    }

    // Input elements for matB
    printf("Enter elements of matrix B:\n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            scanf("%d", &matB[i][j]);
        }
    }

    // Multiply matrix A's rows with matrix B's columns (special order, bottom-to-top)
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            result[i][j] = 0;
            for (int k = 0; k < n; k++) {
                // Multiply ith row of matA with (q-j-1)th column of matB but in reverse (bottom-to-top)
                result[i][j] += matA[i][k] * matB[p-k-1][q-j-1];
            }
        }
    }

    // Output the result matrix
    printf("Resultant Matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/


// 
// Binary to Decimal Converter
/*
#include <stdio.h>
#include <math.h>
int main() {
    int ans=0;
    int n;
    int m;
    printf("Enter the size of the number : ");
    scanf("%d",&n);
    int num[n];
    printf("Enter the 'Binary' number one by one : ");
    for(int i=0 ; i<n ; i++){
        scanf("%d",&m);
        if(m==0 || m==1){
            num[i]=m;
        }
        else{
            printf("Entered value is not Binary ..!");
            return 0;
        }
    }
    int a=n-1;
    for(int i=a ; i>=0 ; i--){
        ans+=num[i]*(int)pow(2,a-i);
    }
    printf("The Decimal value is : %d",ans);
    return 0;
}
*/

// Decimal to Binary Converter
/*
#include <stdio.h>
int main(){
    int num;
    printf("Enter a decimal number : ");
    scanf("%d",&num);
    int i=0;
    int ans[32];
    while(num>=2){
        ans[i]=num%2;
        num/=2;
        i++;
    }
    ans[i]=num;
    printf("Binary number : ");
    for(int j=i ; j>=0 ;j--){
        printf("%d",ans[j]);
    }printf(" ");
    return 0;
}
*/

/*
// Binary to Decimal (fraction)
#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    char binary[40];
    double decimal = 0.0;
    char choice;

    printf("Is the number in binary format with a decimal part? (y/n): ");
    scanf(" %c", &choice);

    if (choice == 'y' || choice == 'Y') {
        printf("Enter a binary number : ");
        scanf("%s", binary);

        char *integerPart = strtok(binary, ".");
        char *fractionalPart = strtok(NULL, ".");

        int length = strlen(integerPart);
        for (int i = 0; i < length; i++) {
            if (integerPart[length - 1 - i] == '1') {
                decimal += pow(2, i);
            }
        }

        if (fractionalPart) {
            length = strlen(fractionalPart);
            for (int i = 0; i < length; i++) {
                if (fractionalPart[i] == '1') {
                    decimal += pow(2, -(i + 1));
                }
            }
        }

        int decimalPlaces = (fractionalPart) ? strlen(fractionalPart) : 0;

        printf("%.*f\n", decimalPlaces, decimal);
    } else {
        printf("Enter a binary integer: ");
        scanf("%s", binary);

        decimal = 0;
        int length = strlen(binary);
        for (int i = 0; i < length; i++) {
            if (binary[length - 1 - i] == '1') {
                decimal += pow(2, i);
            }
        }

        printf("%d\nDecimal Number : ", (int)decimal);
    }

    return 0;
}
*/

// Pointrs to Structures

/*
#include <stdio.h>
#include <string.h>
struct  student {
        char name[30];
        int roll_no;
        float cgpa;
};
int main(){
    struct student a1 ={"Ashitosh",24,9.5};
    printf("Student's roll number : %d ",a1.roll_no);       //without pointer
    struct student *ptr = &a1;
    printf("\nStudent's roll number : %d",(*ptr).roll_no);      //with pointer
    return 0;
}
*/

// Arrow operator

/*
#include <stdio.h>
#include <string.h>
struct  student {
        char name[30];
        int roll_no;
        float cgpa;
};
int main(){
    struct student a1 ={"Ashitosh",24,9.5};
    printf("Student's roll number : %d ",a1.roll_no);       //without pointer
    struct student *ptr = &a1;
    printf("\nStudent's roll number : %d",(*ptr).roll_no);      //with pointer
    printf("\nStudent's roll number : %d",ptr->roll_no);      //with pointer and arrow operator
    return 0;
}
*/

// passing Structure to function

/*
#include <stdio.h>
#include <string.h>
struct student {
    char name[30];
    int roll_no;
    float cgpa;
};
void printInfo (struct student *ptr);
int main(){
    struct student s1={"Ashitosh",27,9.5};
    struct student s2={"Ashwini",06,9.9};
    struct student s3={"Vanita",01,9.99};
    struct student s4={"Ashok",05,10};

    struct student *ptr1=&s1;
    struct student *ptr2=&s2;
    struct student *ptr3=&s3;
    struct student *ptr4=&s4;

    printInfo(ptr3);
}
void printInfo (struct student *ptr){
    printf("\nStudent's Name : %s",ptr->name);
    printf("\nStudent's Roll Number : %d",ptr->roll_no);
    printf("\nStudent's CGPA : %0.2f",ptr->cgpa);
}
*/

//  typedef keyword

/*
#include <stdio.h>
#include <string.h>
typedef struct ComputerScienceEngineer  {
    char name[30];
    int roll_no;
}CSE;
int main(){
    CSE s1 = {"Ashitosh",27,9.5};       //because of typedef the struct ComputerScienceEngineer is replaced by only CSE
    printf("Roll number is theh student : %d",s1.roll_no);
    return 0;
}
*/

// Enter address (house no , block , city , state) of 5 people

/*
#include <stdio.h>
#include <string.h>

typedef struct addressOfFivePeople {
    int house_no;
    int block_no;
    char city[30];
    char state[30];
}address;

int main(){
    address people[5];
    for(int i=0 ; i<5 ; i++){
        printf("Enter house number of person %d : ",i+1);
        scanf("%d",&people[i].house_no);
        printf("\nEnter block number of person %d : ",i+1);
        scanf("%d",&people[i].block_no);
        printf("\nEnter city of person %d : ",i+1);
        scanf("%s",people[i].city);
        printf("\nEnter state of person %d : ",i+1);
        scanf("%s",people[i].state);
        printf("\n\n");
    }
    for(int i=0 ; i<5 ; i++){
        printf("Details of those 5 people :\nPerson %d \n\t\tHouse No : %d \n\t\tBlock No : %d \n\t\tCity : %s \n\t\tState : %s\n\n",i+1,people[i].house_no,people[i].block_no,people[i].city,people[i].state);
    }
}
*/

// Create a structure to store vectors.Then make a function to return sum of 2 vectors

/*
#include <stdio.h>

struct vector {
    int X;
    int Y;
};

int vectorSum(int x,int y){
    return (x+y);
}
int main(){
    struct vector allV[2];
    for(int i=0 ; i<2 ;i++){
        printf("Line %d --->\n\tX cordinate : ",i+1);
        scanf("%d",&allV[i].X);
        printf("\n\tY cordinate : ");
        scanf("%d",&allV[i].Y);
    }
    printf("\n\n");
    int xSum = vectorSum(allV[0].X,allV[1].X);
    int ySum = vectorSum(allV[0].Y,allV[1].Y);

    printf("The resultent of the line 1 & 2 is : (%dî+%dĵ).\n\n",xSum,ySum);
    return 0;
}
*/

// Create a structure to store complex numbers (use arrow operator)

/*
#include <stdio.h>
struct complex{
    int real;
    int complex;
};

int main(){
    struct complex complex1 = {5,8};
    struct complex complex2 = {10,9};
    struct complex *ptr1 = &complex1;
    struct complex *ptr2 = &complex2;
    printf("The complex number we have is : %d+%di",ptr1->real,ptr1->complex);
    printf("\nThe complex number we have is : %d+%di",ptr2->real,ptr1->complex);
    return 0;
}
*/

/*
#include <stdio.h>
#include <string.h>
typedef struct bankAccount {
    char accountHolder[30];
    int accountNumber ;
    int IFSCcode;
}acc;
int main(){
    acc p1={"Ashitosh",1021452144,1122006};
    acc p2={"Ashwini",1021245785,27072004};
    acc p3={"Vanita",1203325648,1051975};

    printf("The account holder name is %s",p1.accountHolder);
    printf("\nThe account numer is %d",p1.accountNumber);
    printf("\nThe account IFSC numer is %d",p1.IFSCcode);
    return 0;
}
*/

// File I\O

// open and close of a file

/*
#include <stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("openClose.exe","r");
    fclose(fptr);
    return 0;
}
*/

// reading a file (just a single character)

/*
#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("openClose.exe","r");
    char ch;
    fscanf(fptr,"%c",&ch);
    printf("Character = %c\n\n",ch);
    fclose(fptr);
}
*/

// writing into file (single char)

/*
#include <stdio.h>
int main(){
    FILE *fptr;
    char ch='A';
    fptr = fopen("openClose.exe","w");
    fprintf(fptr,"%c",ch);
    fclose(fptr);
    return 0;
}
*/

// writing into file (multiple char)

/*
#include <stdio.h>
#include <string.h>
int main(){
    FILE *fptr;
    char ch[50]="Ashitosh is a good boy..!";
    fptr = fopen("openClose.exe","w");
    fprintf(fptr,"%s",ch);
    fclose(fptr);
    return 0;
}
*/

// append mode

/*
#include <stdio.h>
#include <string.h>
int main(){
    FILE *fptr;
    char ch[50]=" and a has a net worth of 1Trillian * 1000";
    fptr = fopen("openClose.exe","a");
    fprintf(fptr,"%s",ch);
    fclose(fptr);
    return 0;
}
*/

// fgetc function

/*
#include <stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("openClose.exe","r");
    char ch = fgetc(fptr);
    printf("The character in the file is %c",ch);
    fclose(fptr);
    return 0;
}
*/

/*
#include <stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("openClose.exe","w");
    char ch=fputc('A',fptr);
    fclose(fptr);
    return 0;
}
*/

// reading entire file by EOF(end of file)

/*
#include <stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("openClose.exe","r");
    char ch;
    ch=fgetc(fptr);
    while(ch!=EOF){
        printf("%c",ch);
        ch=fgetc(fptr);
    }
    printf("\n");
    fclose(fptr);
    return 0;
}
*/

// WAP to read 5 intrgers from a file

/*
#include <stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("openClose.exe","r");
    int n;
    for(int i=0 ; i<5 ; i++){
        fscanf(fptr,"%d",&n);
        printf("%d ",n);
    }
    fclose(fptr);
}
*/

//WAP to input student information from user and enter it to a file

/*
#include <stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("studentInfo.exe","w");
    char name[50];
    int age;
    float cgpa;
    printf("Enter your name : ");
    scanf("%s",&name);
    fprintf(fptr,"%s\t",name);
    printf("\nEnter you age : ");
    scanf("%d",&age);
    fprintf(fptr,"%d\t",age);
    printf("\nEnter your CGPA : ");
    scanf("%f",&cgpa);
    fprintf(fptr,"%f\t",cgpa);
    fclose(fptr);
    return 0;
}
*/

// WAP to write all the odd numbers from 1 - n

/*
#include <stdio.h>
int main(){
    int n;
    printf("Enter till where you want numbers :");
    scanf("%d",&n);
    FILE *fptr;
    fptr = fopen("oddNnnumbers.exe","w");
    for(int i=0 ; i<n ; i++){
        if(i%2!=0){
            fprintf(fptr,"%d\t",i);
        }
    }
    fclose(fptr);
}
*/

// There 2 numbers a&b are writtten in a file , WAP to replace them with there sum

/*
#include <stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("twoNumberSum.exe","r");
    int ch,sum=0;
    fscanf(fptr,"%d",&ch);
    sum+=ch;
    fscanf(fptr,"%d",&ch);
    sum+=ch;
    fclose(fptr);
    fptr = fopen("twoNumberSum.exe","w");
    // printf("%d",sum);
    fprintf(fptr,"%d",sum);
    fclose(fptr);
    return 0;
}
*/

// Dynamic Memory Allocation

// malloc()

/*
#include <stdio.h>
#include <stdlib.h>
int main(){
    int *ptr;
    ptr = (int*) malloc(5 * sizeof(int));       //this memory is located while runtime
    ptr[0]=1;
    ptr[1]=2;
    ptr[2]=3;
    ptr[3]=4;
    ptr[4]=5;
    ptr[5]=6;
    for(int i=0 ; i <6 ; i++){
        printf("%d ",ptr[i]);
    }
    return 0;
}
*/

// Q) WAP to allocate memory to store 5 prices

/*
#include <stdio.h>
#include <stdlib.h>
int main(){
    float *ptr;
    ptr = (float*) malloc(5*sizeof(float));
    ptr[0]=1.02;
    ptr[1]=2.02;
    ptr[2]=3.02;
    ptr[3]=5.02;
    ptr[4]=7.02;

    for(int i=0 ; i <5 ; i++){
        printf("%f ",ptr[i]);
    }
    return 0;
}
*/

// calloc()

/*
#include <stdio.h>
#include <stdlib.h>
int main(){
    float *ptr;
    ptr = (float*) calloc(5 , sizeof(float));
    for(int i=0 ; i <5 ; i++){
        printf("%f ",ptr[i]);
    }
    return 0;
}
*/

// Q) WAP to allocate meomry of size n , where n is entered ny the user

/*
#include <stdio.h>
#include <stdlib.h>
int main(){
    float *ptr;
    int n;
    printf("Enter how may number you want in the memory :");
    scanf("%d",&n);
    ptr = (float*) calloc(n,sizeof(float));
    for(int i=0 ; i <n ; i++){
        printf("%f ",ptr[i]);
    }
    return 0;
}
*/

// free()

/*
#include <stdio.h>
#include <stdlib.h>
int main(){
    float *ptr;
    int n;
    printf("Enter how may number you want in the memory :");
    scanf("%d",&n);
    ptr = (float*) calloc(n,sizeof(float));
    for(int i=0 ; i <n ; i++){
        printf("%f ",ptr[i]);
    }
    free(ptr);
    ptr = (float*) calloc(3,sizeof(float));
    for(int i=0 ; i <3 ; i++){
        printf("\n%f",ptr[i]);
    }
    return 0;
}
*/

// realloc()

// Q) WAP to allocate memory for 5 numbers.Then dynamically increase it to 8 number

/*
#include <stdio.h>
#include <stdlib.h>
int main(){
    int *ptr;
    ptr = (int*) calloc(5 , sizeof(int));
    printf("Enter 5 numbers :\n ");
    for(int i=0 ; i<5 ; i++){
        scanf("%d",&ptr[i]);
    }

    ptr = realloc(ptr,8);
    printf("Enter 8 numbers now :\n ");
    for(int i=0 ; i <8 ; i++){
        scanf("%d",&ptr[i]);
    }

    for(int i=0 ; i<8 ; i++){
        printf("%d ",ptr[i]);
    }
    return 0;
}
*/

// Q) WAP create a array of size 5(using calloc) and enter its value from user

/*
include <stdio.h>
#include <stdlib.h>
int main(){
    int *arr;
    int size=5;
    arr = (int*) calloc(size,sizeof(int));
    for(int i=0 ; i<5 ; i++){
        printf("Enter element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0 ; i<5 ; i++){
        printf("%d ",arr[i]);
    }
    free(arr);
}
*/

// allocate memory to store 5 odd numbers , then reallocate it ot store first 6 even numbers

/*
#include <stdio.h>
#include <stdlib.h>
int main(){
    int *ptr;
    ptr = (int*) calloc(5,sizeof(int));
    ptr[0]=1;
    ptr[1]=3;
    ptr[2]=5;
    ptr[3]=7;
    ptr[4]=9;
    ptr = realloc(ptr , 6);
    for(int i=0 ; i<6; i++){
        ptr[i]=(i+1)*2;
    }
    for(int i=0 ; i<6 ; i++){
        printf("%d ",ptr[i]);
    }

    free(ptr);
}
*/


#include <stdio.h>
int main(){
    printf("Hello revision..!");
    return 0;
}