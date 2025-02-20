//when including a header of our own, we use "" quotes and not <> brackets.
#include "helloworld.h"

int main() {

    //we included our own header. It points to the C code that has the function hello()
    //so we just call it

    hello();

}

//  TO COMPILE THIS CODE

/*

You have to compile this "all together" like this. Since this is a header of our own, we treat it different than the system headers like stdio or stdlib

gcc useofheaders.c helloworld.c -o headerprogram

*/