#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Create a function named is anagram following your current language's style guide.
// It should take two strings and return a boolean value depending on whether its an anagram or not.

char is_anagram(char anagram_a[], char anagram_b[]);

int main()
{
    char anagram_a[] = "motherinlaw";
    char anagram_b[] = "womanhitler";

    if (is_anagram(anagram_a, anagram_b) == 1){
        printf("The two words are anagrams.\n");
    }
    else {
        printf("The two words are not anagrams.\n");
    }

    return 0;
}

char is_anagram(char anagram_a[], char anagram_b[])
{
    int n = strlen(anagram_a); // number of elements in array
    int i; // number of passes
    int j; // element to be swapped
    char temp[strlen(anagram_a)]; // swap array

    if (strlen(anagram_a) != strlen(anagram_b)){
        return 0;
    }
    for (i = 0; i < n; i++){
        for (j = 0; j < (n - i); j++){
            if (anagram_a[j] > anagram_a[j+1]){
                temp[strlen(anagram_a)] = anagram_a[j];
                anagram_a[j] = anagram_a[j+1];
                anagram_a[j+1] = temp;
            }
        }
    }

    for (i = 0; i < n; i++){
        for (j = 0; j < (n - i); j++){
            if (anagram_b[j] > anagram_b[j+1]){
                temp[strlen(anagram_a)] = anagram_b[j];
                anagram_b[j] = anagram_b[j+1];
                anagram_b[j+1] = temp;
            }
        }
    }

    int compare = (strcmp(anagram_a, anagram_b));


    if (compare != 0){
        return 0;
    }
    else return 1;
}
