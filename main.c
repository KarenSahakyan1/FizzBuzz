//
//  main.c
//  FizzBuzz
//
//  Created by Karen on 2018-02-18.
//  Copyright © 2018 Karen. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i;
    for ( i = 1; i <=100; i++ ) {
        
        if ( i % 3 == 0  && i % 5 != 0 ) {
            printf("Fizz\n");
        }
        if ( i % 5 == 0 && i % 3 != 0 ) {
            printf("Buzz\n");
        }
        if ( i % 15 == 0 ) {
            printf("FizzBuzz\n");
        }
        if ( i % 3!= 0 && i % 5!= 0 && i % 5!= 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}
