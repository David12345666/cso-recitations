#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

void printb(void *p);

int main(int argc, char **argv)
{
    assert(argc == 2);
    int is_int = (strstr(argv[1], ".") == NULL);
    if (is_int) {
        int v = atoi(argv[1]);
        printb((void*)&v);
    } else {
        float v = atof(argv[1]);
        printb((void*)&v);
    }
    return 0;
}

void printb(void* p)
{
    // FIXME: Complete this function so that it will print out the binary
    //        representation (preceded by "0b") of the content pointed by ptr.
    //        After you finish it, please test it. Some examples:
    //        $./e2 1
    //        0b00000000000000000000000000000001 or 0b1
    //        $./e2 2
    //        0b00000000000000000000000000000010 or 0b10
    //        $./e2 0.75
    //        0b00111111010000000000000000000000 or 0b111111010000000000000000000000


    // Leading characters.
    printf("0b");

    // Add your code here. You need to print out the binary representation of
    // the input number. Read the code in main function to better understand
    // what is the input.
    // DO NOT print out a new line because there is already one at the end.


    // Print out a newline.
    printf("\n");
}
