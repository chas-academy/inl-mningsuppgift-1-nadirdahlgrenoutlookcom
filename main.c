#include <stdio.h>
#include <stdlib.h>

int main()
{
    // The Line below must *NOT* be changed or test will fail!
    srand(1);
    int tärninglista[100]; // Array för tärningkast, 100st.
    int sum = 0; // Summan för alla kast. 
    float medelv = 0; // Medelvärdet av alla kast.
    int one = 0, two = 0, three = 0, four = 0, five = 0, six = 0; 

    for (int i = 0; i < 100; i++)
    {
        int dice_roll = (rand() % 6) + 1; 
        tärninglista[i] = dice_roll;
        
        if (dice_roll == 1) { one++; }
        else if (dice_roll == 2) { two++; }
        else if (dice_roll == 3) { three++; }
        else if (dice_roll == 4) { four++; }
        else if (dice_roll == 5) { five++; }
        else if (dice_roll == 6) { six++; }
        
        // Addera varje kast till summan för att få totalen (326)
        sum += dice_roll;
    }
    
    medelv = (float)sum / 100;

    printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%.1f\n", one, two, three, four, five, six, sum, medelv); 

    return 0;
}