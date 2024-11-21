// #include <stdio.h>


//Comments
//A comment is some text that is ignored by the compiler that is used as an explanation, decription or a note for someone who is reading my code

// int main(){
//     //This is a comment
//     /*
//     This 
//     is 
//     a
//      Multiline 
//      comment

//     */
//     printf("I like pizza and yoghurt!\n");
//     printf("It's really good\n");
//     return 0;
// }


// #include <stdio.h>

// int main(){
//     printf("Hello World\n");
//     printf("Hi am a software engineer\n");


//     return 0;
// }

//Escape sequence
/*An escape sequence is a combination of a backslash \ 
 followed by a letter or combination of digits. 
 They specify actions within a line or string of text.
\n = newline
\t = tab
*/


// #include <stdio.h>

//  int main(){

//     printf("1\t2\t3\n4\t5\t6\n7\t8\t9");
//     return 0;
//  }


// #include <stdio.h>
//     int main(){

//         printf("\"I like pizza\" - Abraham lincoln");
//         return 0;
//     }


#include <stdio.h>

 int main(){

//    Variable is allocated space memory to store a value
//        we reffer to a variable's name to access the store value.
//     That variable now behaves as if it was the value it contains.
//     But we need to declare what type of data we are storing

    int x; //declaration
    x = 22; //initialization

    int y = 221; //declaration and initialization

    int age = 21; //integer
    float gpa = 2.06; //floating point number
    char grade = 'B'; //single character
    char name[] = "Bro"; //Array of characters

    printf("hello %s\n",name);
    printf("You are %d years old\n", age);
    printf("Your average grade is %c",grade);
    printf("Your gpa is %f\n",gpa);

    return 0;
 }