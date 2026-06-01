#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

// Created functions ask and answer each questions
int question7() 
{
    char answer; 
    printf("Question #6: \n");
    printf("The computer-generated information that is displayed to the user in some discernible form such as a screen display, printed, page, or sound; component that gets info out?: \n (Type a, b, c, or d) \n");
    printf(" \n a)storage \n b)process \n c)memory \n d)output \n");
    scanf(" %c", &answer);
    
// output for the correct answer
    if (answer =='d') {
        printf("Bravo, 'd' is correct \n", &answer);
    }
    else {
        printf("Incorrect, the correct answer is 'd' \n");
    }
}
// Created functions ask and answer each questions
int question6() 
{
    char answer;
    printf("Question #6: \n");
    printf("Central Processing Unit; the 'brain' of the computer that performs most computing tasks. In microcomputers, the entire Central Processing Unit is on a single chip; also called a processor?: \n (Type a, b, c, or d) \n");
    printf(" \n a)GPU \n b)Ram \n c)CPU \n d)Cache \n");
    scanf(" %c", &answer);

 // output for the correct answer   
    if (answer =='c') {
        printf("Bravo, 'c' is correct \n", &answer);
    }
    else {
        printf("Incorrect, the correct answer is 'c' \n");
    }    
}
// Created functions ask and answer each questions
int question5() 
{
    char answer;
    printf("Question #5: \n");
    printf("Contains central Processing Unit; control unit; ALU; goes to and receives memory unit; receives input device; gives output device?: \n (Type a, b, c, or d) \n");
    printf(" \n a)Charles Babbage \n b)CPU \n c)Ram \n d)Von Nueman Model \n");
    scanf(" %c", &answer);

// output for the correct answer    
    if (answer =='d') {
        printf("Bravo, 'd' is correct \n", &answer);
    }
    else {
        printf("Incorrect, the correct answer is 'd' \n");
    }
}
// Created functions ask and answer each questions
int question4() 
{
    char answer;
    printf("Question #4: \n");
    printf("In computing, any device in which (or on which) information is held; data, info, files, codes?: \n (Type a, b, c, or d) \n");
    printf(" \n a)security \n b)software \n c)storage \n d)input \n");
    scanf(" %c", &answer);

 // output for the correct answer   
    if (answer =='c') {
        printf("Bravo, 'c' is correct \n", &answer);
    }
    else {
        printf("Incorrect, the correct answer is 'c' \n");
    }  
}
// Created functions ask and answer each questions
int question3() 
{
    char answer;
    printf("Question #3: \n");
    printf("The program that makes computer hardware functions?: \n (Type a, b, c, or d) \n");
    printf(" \n a)proccessor \n b)software \n c)database \n d)storage \n");
    scanf(" %c", &answer);

// output for the correct answer    
    if (answer =='b') {
        printf("Bravo, 'b' is correct \n", &answer);
    }
    else {
        printf("Incorrect, the correct answer is 'b' \n");
    }
}
// Created functions ask and answer each questions
int question2() 
{
    char answer;
    printf("Question #2: \n");
    printf("The manipulation of data by a microprocessor or embedded processor according to instructions given to it by a program or embedded in the chip itself?: \n (Type a, b, c, or d) \n");
    printf(" \n a)processing \n b)design \n c)collection \n d)casting \n");
    scanf(" %c", &answer);

// output for the correct answer    
    if (answer =='a') {
        printf("Bravo, 'a' is correct \n", &answer);
    }
    else {
        printf("Incorrect, the correct answer is 'a' \n");
    }
}
// Created functions ask and answer each questions
int startQuiz() 
{   
    char answer;
    printf("Question #1: \n");
    printf("Arithmetic/Logic Unit; capable of adding, subtracting, multiplying, and dividing two numbers?: \n (Type a, b, c, or d) \n");
    printf(" \n a)GPU \n b)Lan \n c)Ram \n d)ALU \n");
    scanf(" %c", &answer);

// output for the correct answer
    if (answer =='d') {
        printf("Bravo, 'd' is correct \n", &answer);
    }
    else {
        printf("Incorrect, the correct answer is 'd' \n");
    }
}
// Created start function to begin your quiz
char welcomeGreeting() 
{

     char userSelect; 
    printf("Ready to take C quiz?: press y or n \n");
    scanf(" %c", &userSelect);

// user type either 'y' or 'n' to begin; if char does not meet requirements - the loop re-prompts until correct char is inputed
    while (userSelect != 'y' && userSelect != 'n') {
         printf("Invalid character, please select (y or n):\n");
        scanf(" %c", &userSelect);
    } 

   if (userSelect == 'y' ) {
    printf("Lets continue \n");
   }
  else  {
      printf("Maybe Next Time!\n"); 
    }

}

int main() 
{
// Created to run sequence of functions only if 'y' is selected initally
   char choice = welcomeGreeting();
  if (choice == 'y' ) {
   startQuiz();
   question2(); 
   question3();
   question4();
   question5();
   question6();
   question7();
  } 
  else {
    return 0;
  }

   return 0;
}

