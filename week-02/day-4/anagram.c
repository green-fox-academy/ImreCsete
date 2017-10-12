#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Create a function named is anagram following your current language's style guide.
// It should take two strings and return a boolean value depending on whether its an anagram or not.

int is_anagram(anagram_a, anagram_b);

int main()
{
    char anagram_a[] = "dog";
    char anagram_b[] = "god";

    if (is_anagram(anagram_a, anagram_b) == 1){
        printf("The two words are anagrams.\n");
    }
    else {
        printf("The two words are not anagrams.\n");
    }
    return 0;
}

int is_anagram(anagram_a, anagram_b)
{
   if (strlen(anagram_a) != strlen(anagram_b)){
        return 0;
   } else
        return 1;
}
