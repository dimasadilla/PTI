#include <stdio.h>

/*
    Nama : Abc Abc
    NIM : 0000001234
    Kelas : (isi kelas anda)
    Nilai : (kosongkan)
*/
void displayMenu() {
    printf("========================================\n");
    printf(" Sistem Manajemen Perpustakaan\n");
    printf("========================================\n");
    printf("1. Tampilkan Semua Buku\n");
    printf("2. Tambah Buku\n");
    printf("3. Hapus Buku\n");
    printf("4. Cari Buku\n");
    printf("5. Keluar\n");
    printf("========================================\n");
    printf("Pilih (anda) : ");
}

int main() {
    int choice;

    do {
        printf("=======================================\n");
        printf("Judul buku : C Programming Language\n");
        printf("Penulis buku : Brian W. Kernighan\n");
        printf("Tahun terbit : 1978\n");
        printf("Penerbit : Pearson\n");
        printf("Genre : Reference\n");
        printf("=======================================\n");
        printf("1. Selanjutnya\n");
        printf("2. Sebelumnya\n");
        printf("3. Keluar\n");
        printf("Pilih menu (1/2/3): ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Anda telah memilih menu Selanjutnya.\n");
                // Kode untuk menampilkan buku ke-2
                break;
            case 2:
                printf("Anda telah memilih menu Sebelumnya.\n");
                // Kembali ke menu sebelumnya jika ada
                break;
            case 3:
                printf("Anda telah memilih menu Keluar.\n");
                break;
            default:
                printf("Pilihan yang Anda masukkan tidak valid. Silakan coba lagi.\n");
        }
    } while (choice != 3);

    printf("Terima kasih telah menggunakan program ini!\n");
    return 0;
}


