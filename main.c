#include <stdio.h>
#include <stdlib.h>

// Program utama untuk berbagai operasi aritmatika dan input/output dasar
int main() {
    // Informasi identitas
    printf("Rizal Maulana Airlangga\nKelas 1 IT B\nNRP: 3124600033\n\n");

    // Operasi penjumlahan tetap (1024 + 4096)
    printf("1024 + 4096 = %d\n\n", 1024 + 4096);

    // Bagian pertama: Penjumlahan dua bilangan bulat
    printf("Program berikut akan menjumlahkan dua bilangan bulat.\n\n");
    int nom1, nom2, sum;

    printf("bilangan satu: ");
    scanf("%d", &nom1);

    printf("bilangan dua: ");
    scanf("%d", &nom2);

    sum = nom1 + nom2; // Menghitung jumlah dua bilangan
    printf("Hasil: %d\n\n", sum);

    printf("---------------------------------------------------\n");
    printf("---------------------------------------------------\n\n");

    // Bagian kedua: Perkalian bilangan pecahan dengan angka tetap (50)
    printf("Program berikut akan mengalikan bilangan pecahan dengan angka 50.\n\n");
    float pecahan1, result;

    printf("pecahan satu: ");
    scanf("%f", &pecahan1);

    result = pecahan1 * 50; // Mengalikan input dengan 50
    printf("hasil: %.2f\n\n", result);

    printf("---------------------------------------------------\n");
    printf("---------------------------------------------------\n\n");

    // Bagian ketiga: Menampilkan kembali bilangan pecahan yang dimasukkan
    printf("Program berikut akan menampilkan kembali bilangan pecahan yang Anda masukkan.\n\n");
    float contohpecahan;

    printf("isi pecahan: ");
    scanf("%f", &contohpecahan);

    printf("hasil: %.2f\n\n", contohpecahan);

    printf("---------------------------------------------------\n");
    printf("---------------------------------------------------\n\n");

    // Bagian keempat: Input angka dan simbol, kemudian menampilkannya kembali
    printf("Program berikut akan menerima angka dan simbol, lalu menampilkannya kembali.\n\n");
    int angka;
    char simbol;

    // Menggunakan scanf dengan cara yang benar untuk membaca angka dan simbol
    printf("isi angka dan simbol random (sebanyak mungkin untuk angka [tanpa spasi] dan satu simbol bebas [tanpa spasi]): ");
    scanf("%d", &angka); // Membaca angka
    getchar(); // Menangkap karakter newline yang tersisa setelah pembacaan angka
    scanf("%c", &simbol); // Membaca simbol

    printf("angka = %d\n", angka);
    printf("simbol = %c\n", simbol);

    return 0; // Mengakhiri program
}
