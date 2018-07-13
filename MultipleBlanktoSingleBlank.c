// C-Programming
//
// This program prints the input onto the output, while removing extra spaces
// at the same time.
//
//  Exercise_1-9
//
//  Created by Louie Shi on 6/29/18.
//  Copyright © 2018 Louie Shi. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    char c;
    char prevChar = ' ';
    
    printf("Please enter a string: \n");
    
    while((c = getchar()) != EOF)
    {
        if(prevChar == ' ')
        {
            if(c != ' ')
            {
                putchar(c);
            }
        }
        else
        {
            putchar(c);
        }
        
        prevChar = c;
        
    }
    
    return 0;
}
