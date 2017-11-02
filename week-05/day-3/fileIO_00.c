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

    fputs("Hej de messze majomország,\n"
            "ott terem majomkenyér,\n"
            "majomablak majomrácsán\n"
            "majomnótát ráz a szél.\n\n"
            "Majomtéren, majomréten\n"
            "majomhosök küzdenek,\n"
            "majomszanatóriumban\n"
            "sírnak majombetegek.\n\n"
            "Majomtanártól majomlány\n"
            "majomábécét tanul,\n"
            "gaz majom a majombörtönt\n"
            "rúgja irgalmatlanul.\n\n"
            "Megépül a majommalom,\n"
            "lesz sok majommajonéz,\n"
            "gyozve gyoz a gyozhetetlen\n"
            "gyozedelmes majomész.\n\n"
            "Majompóznán majomkirály\n"
            "majomnyelven szónokol,\n"
            "egyiké majommennyország,\n"
            "másiké majompokol.\n\n"
            "Makákó, gorilla, csimpánz,\n"
            "pávián, orángután,\n"
            "mind majomújságot olvas\n"
            "majomvacsora után.\n\n"
            "Majomvacsoraemléktol\n"
            "zúg a majomreterát,\n"
            "majombakák menetelnek,\n"
            "jobbra át és balra át.\n\n"
            "Rémületes majomarcot\n"
            "vágnak majomkatonák,\n"
            "majomkézben majomfegyver,\n"
            "a majmoké a világ.\n", fp);

    fclose(fp);

    fp = fopen("C:\\Users\\Imre\\Desktop\\C code\\IO_files\\poem.txt", "r");

    while (fgets(buffer, 1024, fp) != NULL) {
        puts(buffer);
    }

    fclose(fp);

    return 0;
}
