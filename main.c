#include <stdio.h>
#include <stdlib.h>

int main()
{
    // The Line below must *NOT* be changed or test will fail!
    srand(1);
    int tärninglista[100]; // Array för tärningkast, 100st.
    int sum = 0; // Summan för alla kast. 
    float medelv = 0; // Medelvärdet av alla kast.
    int one = 0, two = 0, three = 0, four = 0, five = 0, six = 0; // Integers för tärningarna. 

    for (int i = 0; i < 100; i++) // Loop för kasten. 
    {
        int dice_roll = (rand() % 6) + 1; // Randomkast med tärning +1. 
        tärninglista[i] = dice_roll; // Lagrar varje kast i en vektor/array inom varje loop. 
        
        if (dice_roll == 1) { one++; } // Om random är ett, lägg i ett. 
        else if (dice_roll == 2) { two++; } // Om random är två, lägg i två. 
        else if (dice_roll == 3) { three++; } // Om random är tre, lägg i tre. 
        else if (dice_roll == 4) { four++; } // Om random är fyra, lägg i fyra. 
        else if (dice_roll == 5) { five++; } // Om random är fem, lägg i fem. 
        else if (dice_roll == 6) { six++; } // Om random är sex, lägg i sex. 

        sum += dice_roll; // Addera varje kast till sum för att få totalen. 
    }
    
    medelv = (float)sum / 100; // Float för medelvärde, decimal. Dividera på 100 då det är hundra kast. 

    printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%.1f\n", one, two, three, four, five, six, sum, medelv); // Skriv ut allt. 

    return 0;
}