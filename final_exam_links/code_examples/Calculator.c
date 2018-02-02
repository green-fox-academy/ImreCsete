#include <stdio.h>
#include <string.h>
#include <math.h>
#include <windows.h>
#include <ctype.h>

void startup();
void summation();
void subtraction();
void multiplication();
void division();
void division_with_remainder();
void squaring();
void square_root();
void logarithm();
void binto();
void hexto();
void decto();
void clear();
void help();
void set_cursor_pos(int x, int y);

COORD coord = {0, 0};

int main()
{
    char input[256] = "";
    int y_pos = 0;

    startup();

    while (strcmp(input, "exit") != 0) {
        gets(input);

        set_cursor_pos(strlen(input), y_pos);

        if (strcmp(input, "clear") == 0) {
            clear();
            y_pos = -1;
        }
        if (strcmp(input, "help") == 0) {
            help();
            y_pos = -1;
        }
        if (strstr(input, "+")) {
            summation(input);
        }
        if (strstr(input, "-")) {
            subtraction(input);
        }
        if (strstr(input, "*")) {
            multiplication(input);
        }
        if (strstr(input, "/")) {
            division(input);
        }
        if (strstr(input, "%")) {
            division_with_remainder(input);
        }
        if (strstr(input, "^")) {
            squaring(input);
        }
        if (strstr(input, "<")) {
            square_root(input);
        }
        if (strstr(input, "log")) {
            logarithm(input);
        }
        if (strstr(input, "binto")) {
            binto(input);
        }
        if (strstr(input, "hexto")) {
            hexto(input);
        }
        if (strstr(input, "decto")) {
            decto(input);
        }
        ++y_pos;
    }
    return 0;
}

void startup()
{
    printf("\tCLI Calculator\n");
    printf("====================================\n");
    printf("usage: [number] [operation] [number]\n");
    printf("Commands:\n\n");
    printf("+\tsummation\n");
    printf("-\tsubtraction\n");
    printf("*\tmultiplication\n");
    printf("/\tdivision\n");
    printf("%\tdivision with remainder\n");
    printf("^\tsquaring\n");
    printf("<\tsquare root\n");
    printf("log\tlogarithm\n");
    printf("binto\tbinary to hex or decimal\n");
    printf("hexto\thexadecimal to bin or dec\n");
    printf("decto\tdecimal to bin or hex\n");
    printf("====================================\n");
    printf("exit\texiting from the program\n");
    printf("clear\tclear the screen\n");
    printf("help\tprint usage\n");
    printf("====================================\n");
    printf("Hit enter to start!\n");
    printf("====================================");

    while (getchar() != '\n');

    clear();
}

void set_cursor_pos(int x, int y)
{
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void clear()
{
    system("cls");
}

void help()
{
    clear();
    startup();
}

void summation(char input[])
{
    float i;
    float i2;
    char check_arithmetic[] = "1234567890.-";

    char* token = strtok (input, "+");
    char* token2 = strtok ('\0', "+");

        i = atof (token);
        i2 = atof (token2);

   if (strspn(token, check_arithmetic) != strlen(token)) {
        printf(" = %f\n", i + i2);
   } else
        printf(" Invalid input\n");
}

void subtraction(char input[])
{
    float i;
    float i2;
    char check_arithmetic[] = "1234567890.";

    char* token = strtok (input, "-");
    char* token2 = strtok ('\0', "-");

    i = atof (token);
    i2 = atof (token2);

    if (strspn(token, check_arithmetic) != strlen(token)) {
        printf(" = %f\n", i - i2);
    }/*else
        printf(" Invalid input");*/
}

void multiplication(char input[])
{
    float i;
    float i2;
    char check_arithmetic[] = "1234567890.-";

    char* token = strtok (input, "*");
    char* token2 = strtok ('\0', "*");

    if (strspn(token, check_arithmetic) != strlen(token)) {
    i = atof (token);
    i2 = atof (token2);

        printf(" = %f\n", i * i2);
    }/*} else
        printf(" Invalid input");*/
}

void division(char input[])
{
    float i;
    float i2;
    char check_arithmetic[] = "1234567890.-";

    char* token = strtok (input, "/");
    char* token2 = strtok ('\0', "/");

    if (strspn(token, check_arithmetic) != strlen(token)) {
    i = atof (token);
    i2 = atof (token2);

        printf(" = %f\n", i / i2);
  }/*  } else
        printf(" Invalid input");*/
}

void division_with_remainder(char input[])
{
    float i;
    float i2;
    char check_arithmetic[] = "1234567890.-";

    char* token = strtok (input, "%");
    char* token2 = strtok ('\0', "%");

    if (strspn(token, check_arithmetic) != strlen(token)) {
    i = atof (token);
    i2 = atof (token2);

        printf(" = %f\n", fmod(i, i2));
    }/*} else
        printf(" Invalid input");*/
}

void squaring(char input[])
{
    float i;
    float i2;
    char check_arithmetic[] = "1234567890.-";

    char* token = strtok (input, "^");
    char* token2 = strtok ('\0', "^");

    if (strspn(token, check_arithmetic) != strlen(token)) {
    i = atof (token);
    i2 = atof (token2);

        printf(" = %f\n", powf(i, i2));
   }/* } else
        printf(" Invalid input");*/
}

void square_root(char input[])
{
    float i;
    //float i2;

    char* token = strtok (input, "<");
    //char* token2 = strtok ('\0', "<");

    i = atof (token);
    //i2 = atof (token2);

    printf(" = %f\n", sqrtf(i));
}

void logarithm(char input[])
{
    float i;
    float i2;

    char* token = strtok (input, "log");
    char* token2 = strtok ('\0', "log");

    i = atof (token);
    i2 = atof (token2);

    if (i == 0) {
        printf(" = %f\n", logf(i2));
    }
    if (i == 2) {
        printf(" = %f\n", log2f(i2));
    }
    if (i == 10) {
        printf(" = %f\n", log10f(i2));
    } else
        printf(" Invalid input for log.");
}

void binto(char input[])
{
    int i;
    int i2;
    int bin_to_check;

    char* token = strtok (input, "binto");
    char* token2 = strtok ('\0', "binto");

    bin_to_check = atoi (token);
    i = strtol (token, 0, 2);
    i2 = atoi (token2);

    if (bin_to_check % 10 == 0 || bin_to_check % 10 == 1) {
        if (i2 == 10) {
            printf(" = %s\n", ltoa (i, input, 10));
        }
        if (i2 == 16) {
            printf(" = %s\n", ltoa (i, input, 16));
        }
    } else
        printf(" Invalid input.");
}

void hexto(char input[])
{
    int i;
    int i2;

    char* token = strtok (input, "hexto");
    char* token2 = strtok ('\0', "hexto");

    i = strtol (token, 0, 16);
    i2 = atoi (token2);

    if (i2 != 2 || i2 != 10) {
        if (i2 == 2) {
            printf(" = %s\n", ltoa (i, input, 2));
        }
        if (i2 == 10) {
            printf(" = %s\n", ltoa (i, input, 10));
        }
    } else
        printf(" Invalid input.");
}

void decto(char input[])
{
    int i;
    int i2;

    char* token = strtok (input, "decto");
    char* token2 = strtok ('\0', "decto");

    i = atoi (token);
    i2 = atoi (token2);

    if (i2 != 2 || i2 != 16) {
        if (i2 == 2) {
            printf(" = %s\n", itoa (i, input, 2));
        }
        if (i2 == 16) {
            printf(" = %s\n", itoa (i, input, 16));
        }
    } else
        printf(" Invalid input.");
}
