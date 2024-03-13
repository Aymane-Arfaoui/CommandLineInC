// the following line is what we call file inclusion 
// We are telling the C-preprocessor to include the standard 
// input/output library. We need to do that in order to use 
// important functionalities such as the printf function that
// that allows us to print something to the string
#include <stdio.h>

//The following part of the code is the main function that is where the 
// the program starts. We now need to create a function that tells us 
// how many arguments were passed in the command line and which index 
// (starting from 0) corresponds to which argument. So the goal here 
// is to take an array of strings and associate each index with the 
// corresponding argument 
int main(int argc, char *argv[]){
    printf("There were %d arguments on the command line.\n",argc);
//We are iterating through that "array" in order to show each argument and 
//its index. We then print the results (remember the stdio.h, (file inclusion)).
    for (int i = 0; i<argc; i++){
        printf("Argument %d : %s\n",i, argv[i]);
    }
    // We return 0 as a convention in C in order to show that the program ran 
    //succesfully and without errors 
    return 0;

}