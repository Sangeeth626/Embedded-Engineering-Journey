// 1. Second largest of array

#include<stdio.h>
int main()
{
    int arr[]={1, 5, 3, 12, 43, 6};
    int largest, second_largest, temp; 

    largest = arr[1] ;
    second_largest = arr[0] ;

    for(int i=0 ; i<=5; i++)
    {       
        if(arr[i] > largest)
        {
            second_largest = largest ;
            largest = arr[i];
        }
    }

    printf("Largest        = %d\n", largest);
    printf("Second Largest = %d\n", second_largest);
    
    return 0 ;
}



// 2. Bit manipulation 

/*#include<stdio.h>

void print_binary(unsigned char reg);

int set_bit(unsigned char reg);
int clear_bit(unsigned char reg);
int toggle_bit(unsigned char reg);

int main()
{
    unsigned char reg = 5 ;

    printf("Initial Register\n");
    print_binary(reg) ;

    printf("Register after set\n");
    reg = set_bit(reg);
    print_binary(reg);


    printf("Register after clear\n");
    reg = clear_bit(reg);
    print_binary(reg);

    printf("Register after toggle\n");
    reg = toggle_bit(reg);
    print_binary(reg);

    return 0 ;
}

void print_binary(unsigned char reg)
{
    printf("Binary : ");
    for(int i=7 ; i>=0 ; i--)
    {
        printf("%d", (reg>>i)&1);
    }
    printf("\n\n");
}

int set_bit(unsigned char reg)
{
    reg |= (1U<<3);
    return reg ;
}

int clear_bit(unsigned char reg)
{
    reg &= ~(1U<<6);
    return reg ;
}

int toggle_bit(unsigned char reg)
{
    reg ^= (1U<<1);
    return reg ;
}*/