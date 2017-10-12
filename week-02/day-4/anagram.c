#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Create a function named is anagram following your current language's style guide.
// It should take two strings and return a boolean value depending on whether its an anagram or not.

char is_anagram(anagram_a, anagram_b);

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

    for (int a = 0; a < strlen(anagram_a); a++){ // dogdogdog
        for (int b = a + 1; b < strlen(anagram_a); b++) { //dog
            if (anagram_a[a] > anagram_a[b]){
            int sort = anagram_a[a]; // god
            anagram_a[a] = anagram_a[b]; //dgg
            anagram_a[b] = sort; //dgo
         }
      }
   }

   int anagram = strcmp(anagram_a, anagram_b);

   printf("%s\n%s", anagram_a, anagram_b);
   printf("\n%d", anagram);

   printf("%s", anagram_a);

    return 0;
}

char is_anagram(anagram_a, anagram_b)
{
   if (strlen(anagram_a) != strlen(anagram_b)){
        return 0;
    for (int a = 0; strlen(anagram_a); a++){

    }
   } else
        return 1;

}
