#include <stdio.h>
#include <string.h>
#include <math.h>
#include <windows.h>

void startup();
float summation(char input[]);
float subtraction();
float multiplication();
float division();
float division_with_remainder();
float squaring();
float square_root();
float logarithm();
int bin_to();
int hex_to();
int dec_to();
void clear();
void help();
void set_cursor_pos(int x, int y);

COORD coord = {0, 0};

int main()
{
    char input[200] = "";
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
            printf(" = %f\n", summation(input));
        }
        if (strstr(input, "-")) {
            printf(" = %f\n", subtraction(input));
        }
        if (strstr(input, "*")) {
            printf(" = %f\n", multiplication(input));
        }
        if (strstr(input, "/")) {
            printf(" = %f\n", division(input));
        }
        if (strstr(input, "%")) {
            printf(" = %f\n", division_with_remainder(input));
        }
        if (strstr(input, "^")) {
            printf(" = %f\n", squaring(input));
        }
        if (strstr(input, "<")) {
            printf(" = %f\n", square_root(input));
        }
        if (strstr(input, "log")) {
            printf(" = %f\n", logarithm(input));
        }
        ++y_pos;
    }

    return 0;
}

void startup()
{
    printf("\tCLI Calculator\n====================================\n");
    printf("usage: [number] [operation] [number]\nCommands:\n\n");
    printf("+\tsummation\n-\tsubtraction\n*\tmultiplication\n/\tdivision\n%\tdivision with remainder\n");
    printf("^\tsquaring\n<\tsquare root\nlog\tlogarithm\nbinto\tbinary to hex or decimal\nhexto\thexadecimal to bin or dec\ndecto\tdecimal to bin or hex\n");
    printf("====================================\nexit\texiting from the program\nclear\tclear the screen\nhelp\tprint usage\n");
    printf("====================================\nHit enter to start!\n====================================");

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

float summation(char input[])
{
    float i;
    float i2;

    char* token = strtok (input, "+");
    char* token2 = strtok ('\0', "+");

    i = atof (token);
    i2 = atof (token2);

    return i + i2;
}

float subtraction(char input[])
{
    float i;
    float i2;

    char* token = strtok (input, "-");
    char* token2 = strtok ('\0', "-");

    i = atof (token);
    i2 = atof (token2);

    return i - i2;
}

float multiplication(char input[])
{
    float i;
    float i2;

    char* token = strtok (input, "*");
    char* token2 = strtok ('\0', "*");

    i = atof (token);
    i2 = atof (token2);

    return i * i2;
}

float division(char input[])
{
    float i;
    float i2;

    char* token = strtok (input, "/");
    char* token2 = strtok ('\0', "/");

    i = atof (token);
    i2 = atof (token2);

    return i / i2;
}

float division_with_remainder(char input[])
{
    float i;
    float i2;

    char* token = strtok (input, "%");
    char* token2 = strtok ('\0', "%");

    i = atof (token);
    i2 = atof (token2);

    return fmod(i, i2);
}

float squaring(char input[])
{
    float i;
    float i2;

    char* token = strtok (input, "^");
    char* token2 = strtok ('\0', "^");

    i = atof (token);
    i2 = atof (token2);

    return powf(i, i2);
}

float square_root(char input[])
{
    float i;
    //float i2;

    char* token = strtok (input, "<");
    //char* token2 = strtok ('\0', "<");

    i = atof (token);
    //i2 = atof (token2);

    return sqrtf(i);
}

float logarithm(char input[])
{
    float i;
    float i2;

    char* token = strtok (input, "log");
    char* token2 = strtok ('\0', "log");

    i = atof (token);
    i2 = atof (token2);

    if (i == 0) {
        return logf(i2);
    }
    if (i == 2) {
        return log2f(i2);
    }
    if (i == 10) {
        return log10(i2);
    } else
        printf("Invalid input for log.");
}

/*int dec_to()
{
    int i;
    int i2;

    char* token = strtok (input, "%");
    char* token2 = strtok ('\0', "%");

    i = atof (token);
    i2 = atof (token2);

    return fmod(i, i2);
}*/
