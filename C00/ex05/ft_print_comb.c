#include <unistd.h>

void    print_comb(void)

{
    int numberOne; 
    int numberTwo; 
    int numberThree; 

    numberOne = '0';
    while(numberOne <= '7')
    {
        numberTwo = numberOne + 1;
        while (numberTwo <= '8')
        {
            numberThree = numberTwo + 1;
            while (numberThree <= '9')
            {
                write(1,&numberOne,1);
                write(1,&numberTwo,1);
                write(1,&numberThree,1);

                if ('7' != numberOne)
                    write(1, ", ", 2);

                numberThree++;
            }
            numberTwo++;
        }    
        numberOne++;
    }
}
