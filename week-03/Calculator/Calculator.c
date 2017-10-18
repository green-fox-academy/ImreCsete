#include <stdio.h>
#include <string.h>
#include <math.h>
#include <windows.h>

void startup();
int summation();
int subtraction();
int multiplication();
int division();
int division_with_remainder();
int squaring();
int square_root();
int logarithm();
int bin_to();
int hex_to();
int dec_to();
void clear();
void help();
void set_cursor_pos(int x, int y);

COORD coord = {0,0};

int main()
{
    char input[40] = "";

    startup();

    while (strcmp(input, "exit") != 0) {
        gets(input);
        if (strcmp(input, "clear") == 0) {
            clear();
        }
        if (strcmp(input, "help") == 0) {
        startup();
        }
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

