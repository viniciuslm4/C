#include <stdio.h>
#include <math.h>
#include <unistd.h>

int main() {
    float x, y, a;
    
    while(1) {
        for(y = 1.5; y > -1.5; y -= 0.1) {
            for(x = -1.5; x < 1.5; x += 0.05) {
                
                float formula = pow(x*x + y*y - 1, 3) - x*x*y*y*y;

                if(formula <= 0)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
        usleep(150);
        system("cls"); 
    }

    return 0;
}