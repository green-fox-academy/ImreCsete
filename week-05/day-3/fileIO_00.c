#include <stdio.h>

/*
 * Create a text file with You favorite poem in it. If You don't have one, just take one.
 *
 * Read the poem from the file and print it on the console.
 */

 int main()
 {
    FILE *fp;
    char buffer[1024];

    fp = fopen("C:\\Users\\Imre\\Desktop\\C code\\IO_files\\poem.txt", "w+");

    fputs("Hej de messze majomorsz�g,\n"
            "ott terem majomkeny�r,\n"
            "majomablak majomr�cs�n\n"
            "majomn�t�t r�z a sz�l.\n\n"
            "Majomt�ren, majomr�ten\n"
            "majomhos�k k�zdenek,\n"
            "majomszanat�riumban\n"
            "s�rnak majombetegek.\n\n"
            "Majomtan�rt�l majoml�ny\n"
            "majom�b�c�t tanul,\n"
            "gaz majom a majomb�rt�nt\n"
            "r�gja irgalmatlanul.\n\n"
            "Meg�p�l a majommalom,\n"
            "lesz sok majommajon�z,\n"
            "gyozve gyoz a gyozhetetlen\n"
            "gyozedelmes majom�sz.\n\n"
            "Majomp�zn�n majomkir�ly\n"
            "majomnyelven sz�nokol,\n"
            "egyik� majommennyorsz�g,\n"
            "m�sik� majompokol.\n\n"
            "Mak�k�, gorilla, csimp�nz,\n"
            "p�vi�n, or�ngut�n,\n"
            "mind majom�js�got olvas\n"
            "majomvacsora ut�n.\n\n"
            "Majomvacsoraeml�ktol\n"
            "z�g a majomreter�t,\n"
            "majombak�k menetelnek,\n"
            "jobbra �t �s balra �t.\n\n"
            "R�m�letes majomarcot\n"
            "v�gnak majomkaton�k,\n"
            "majomk�zben majomfegyver,\n"
            "a majmok� a vil�g.\n", fp);

    fclose(fp);

    fp = fopen("C:\\Users\\Imre\\Desktop\\C code\\IO_files\\poem.txt", "r");

    while (fgets(buffer, 1024, fp) != NULL) {
        puts(buffer);
    }

    fclose(fp);

    return 0;
}
