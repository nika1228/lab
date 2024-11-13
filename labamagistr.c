
#include <stdio.h>
#include <string.h>


#define MAX_LENGTH 100 
#define MAX_NUMBERS 5
#define MAX_LETTERS 6

int numbers[MAX_NUMBERS] = { 2, 3, 5, 7, 8 }; 
char letters[MAX_LETTERS] = { 'h', 'e', 'l', 'p', 'm', 'i' }; 
int count = 0; 
char input[MAX_LENGTH]; 
int i, j;
void test() {
    printf("FORBIDDEN NUMBERS: ");
    for (i = 0; i < MAX_NUMBERS; i++) {
        printf("%d ", numbers[i]); 
    }
    printf("\n");

    printf("FORBIDDEN LETTERS: ");
    for (i = 0; i < MAX_LETTERS; i++) {
        printf("%c ", letters[i]);
    }
    printf("\n");
    printf("Enter:\n");
    fgets(input, MAX_LENGTH, stdin); 
   
  
    for (i = 0; i < MAX_LENGTH - 1; i++) {
        for (j = 0; j < MAX_NUMBERS; j++) {
            if (input[i] == numbers[j] + '0') { 
                input[i] = '\0'; 
                count++;
               
                    printf("Enter another symbol\n");
                    system("PAUSE");
                    system("cls");
                    break;
                
               
            }
        }
        for (j = 0; j < MAX_LETTERS; j++) {
            if (input[i] == letters[j]) {
                input[i] = '\0';
                count++;
                    printf("Enter another symbol\n");
                    system("PAUSE");
                    system("cls");
                    break;
            }
        }
    }
    
}
void rezult() {
        printf("Rezult: %s\n", input);
    }
    

int main() {
    do {
        count = 0;
        test();
    } while (count != 0);
      
    rezult();
   
    return 0;
}
