#include <stdio.h>
int main(void)
{
    int num;   // Here is the program for encryption
    printf("Enter a number to encrypt: ");
    scanf("%d",&num);
    int d1 = num / 1000;
    int d2 = num % 1000 / 100;
    int d3 = num % 100 / 10;
    int d4 = num % 10;
    // Encrepting
    int d11 = (d1 + 7) % 10; 
    int d22 = (d2 + 7) % 10; 
    int d33 = (d3 + 7) % 10; 
    int d44 = (d4 + 7) % 10;
    int enc_num = d33 * 1000 + d44 * 100 + d11 * 10 + d22;
    printf("Here is your encrypted number: %d \n",enc_num);
    // Here is the program for decryption
    int num2;
    printf("Enter a number to decrypt: ");
    scanf("%d",&num2);
    int n1 = num2 / 1000;
    int n2 = num2 % 1000 / 100;
    int n3 = num2 % 100 / 10;
    int n4 = num2 % 10;
    // Decrypting
    int n11 = ((n1 - 7) + 10) % 10; 
    int n22 = ((n2 - 7) + 10) % 10; 
    int n33 = ((n3 - 7) + 10) % 10; 
    int n44 = ((n4 - 7) + 10) % 10;
    int dec_num = n33 * 1000 + n44 * 100 + n11 * 10 + n22;
    printf("Here is your decrypted number: %d \n",dec_num);
}