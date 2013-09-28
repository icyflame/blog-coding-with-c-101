//HelloWorld Example

Code:

#include <stdio.h>

int main()
{
	
	printf("Hello, World!");

	return 0;

}

Output:

Hello, World!

//Explanation of the format

#include <stdio.h>

int main()
{
	//all your code goes here

	return 0;
}

//Variables

int number;

int number = 4;

//Types of Variables

int
float
double
char

//Operations on Variables

int number;
int n = 4;

float t;
float u = 4.653;

double p;
double g = 4.6589758963; //this can be very long.

char a = 'T'; // notice how I have put the character in
			  // single quotes.

//More on Variables and Arrays

//Boolean type

bool flag;
bool flag = true;
bool flag = false;

//Arrays
int A[10];
char G[10];
float H[20];
double locations[60];

//Array of marks of student

float marks[50];

//Character arrays or strings

char G[25] = "Siddharth Kannan";


//Input/Output Constructs

//General syntax

scanf("Format string", Address of variables)

//Format strings

%d -- for an integer;
%f -- for a floating point value;
%lf -- for a double precision floating;
		point value;

%c -- for accepting one single character;
%s -- for accepting a string;

//some examples

int roll;
scanf("%d", &roll);

float marks
scanf("%f", &marks);

double location;
scanf("%lf", &location);

char grade;
scanf("%c", &grade);

char name[25];
scanf("%s", name); //notice that the ampersand must not be there
					//when accepting strings.

scanf("%d %f", &roll, &marks); //the format string can contain
								//syntax for multiple variables.


//printf

printf("Your roll number is %d", roll);
printf("Hi, %s", name);
printf("You have obtained grade %c", grade);
printf("Your marks are %f", marks);

//Branching

if statements ;

if(grade == 'a')

	printf("Well done!");

if(class == 12)

	printf("You need to study a lot!")

if(class == 10)

	printf("Have fun!");

if else statements ;

if(x > y)

	printf("%d", x);

else

	printf("%d", y);

if(f == 4)

	printf("Your degree is 4");

else

	printf("You have failed this course.");


switch case ;

switch(grade)
{

	case 'A': printf("Well done!");
			  break;

	case 'B': printf("Good. You can do better")	;
			  break;

	case 'C': printf("You just passed! Do well next time.")	;
			  break;

	case 'D': printf("You failed this course! Sorry! Try again!");
			  break;

}

//Switch case fallthrough

switch(class)
{

	case 1:
	case 2:
	case 3:
	case 4:
	case 5: printf("Have fun!");
			break;

	case 6:
	case 7:
	case 8:
	case 9:
			printf("have a lot of fun!!");
			break;

	case 10:
	case 11:
	case 12:

			printf("Study!");
			break;

	default:

			printf("Enter a valid value!");

}

// Once the condition for switch case matches after that the condition is not
// checked. All the cases after that are executed until it encounters a 
// break statement or the switch case block ( { /* block */ } ) comes to an end.

// As in above example. The first message is printed if the value of class is
// from 1 to 5. The second message for if the value is from 6 to 9. and the third
// message if the value is 10, 11 or 12. And if the value of class is not from 1
// to 12 then the default message will be printed. Whenever there is no case 
// matching the value of the variable then the default case will be executed.

//Looping

for loop;

for(init ; condition ; update)

	..... ;

In the for loop, the order of execution is as so:

	1. init
	2. check condition
	3. complete body
	4. update
	5. go to step 2.

This will be more clear from the flow chart below:

--- Flow Chart

for(i = 0; i < 10; ++i)
{
	.... ;
}
 
for(i = 10; i > 0; --i)
{
	... ;
}

//Both the above loops will execute 10 times.

while loop;


while(condition)
{
	body ;;
}

i = 0;
while(i < 10)
{
	.... ;
	.... ;
	.... ;
	.... ;

	++i;

}


do while loop;


do{

	body ;;

}while(condition);


i = 0;
do{

	... ;
	... ;
	... ;

	++i;
}while(i < 10)


// note that the do while loop will always execute once, no matter what the
// condition is. This is not the case for the other two looping constructs.


//Operators

+ - * / ;
% -> Modulo; (gives the remainder when the first operand is
				divided by the second.);