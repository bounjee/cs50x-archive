#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height; // yüksekliği int olarak tanımladık
    do
    {
        height = get_int("Height : "); // değer girmesini istiyoruz
    }
    // for height
    while (height < 1 || height > 8); // girilen değerin 1 ve 8 arasında olmasını istiyoruz
    // for row
    for (int row = 0; row < height; row++)  // sırayı tanımlayıp arttırma işlemini yapıyoruz
    {
        // for space
        for (int space = 0; space < height - row - 1; space++) // boşlukları ayarlıyoruz.
        {
            printf(" ");
        }
        // for coulmn
        for (int coulmn = 0; coulmn <= row; coulmn++) // sütunları ayarlıyoruz
        {
            printf("#");
        }
        printf("\n");
    }
}

// PROGRAM ÇIKTISI :

// Height : 4 // deger giriyoruz
//    #
//   ##
//  ###
// ####

// PROGRAMI BAŞLATMAK İÇİN :
// terminalde:
// cd
// cd mario-less
// make mario
// ./mario
