#include <stdio.h> // header untuk C
#include <conio.h> // header untuk getch() atau getche()

int main() {
    char nama[50];
    int nim;
    char kom[2];
    float ip;

    printf("Hello World\n"); // fungsi keluaran pada C

    printf("Masukkan nama : ");
    gets(nama); // get string

    printf("Masukkan nim : ");
    scanf("%d", &nim); // fungsi masukan pada C

    getchar(); // perintah untuk memasukkan data char

    printf("Masukkan kom : ");
    gets(kom); 

    printf("Masukkan ip : ");
    scanf("%f", &ip); 

    /* Untuk Output */
    printf("Nama : ");
    puts(nama); // put string, digunakan untuk string dalam bentuk array char

    printf("NIM : %d\n", nim);

    printf("KOM : ");
    puts(kom); 
    printf("IP : %f\n", ip);

    printf("press any button to continue...");
    getch(); // perintah yang digunakan untuk memasukkan 1 karakter tanpa menekan enter dan karakter yang diketik tidak akan tampil di layar
}
