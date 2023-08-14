#include <stdio.h>
//#include <cs50.h>// to get_string, string data type.
#include <ctype.h>// to check whether a string is which type
#include <stdlib.h>// to convert string to int (atoi)

//bool digit(char a);
void jumble(char txt[100], int key);

int main(/*int argc, char argv[]*/)
{
	int k;
	printf("Key: "); scanf("%d", &k);
//    string s = argv[1]; // here s is the key in string
    if (digit(k))
    {
        int k = atoi(s);
        string text = get_string("plaintext: ");

        printf("ciphertext: ");
        jumble(text, k);
    }
    else
//    {
//        printf("Usage: ./caesar key\n");
//    }
//    }
//    else
//    {
//        printf("Usage: ./caesar key\n");
//    }

    return 0;
}





bool digit(string a)
{
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (! isdigit(a[i])) // isdigit works for char only not string
        {
            return 0;
        }
    }
    return 1;
}


void jumble(string txt, int key)
{
    for (int x = 0; txt[x] != '\0'; x++)
    {
        char a = txt[x];

        if (isupper(a)) // I can now print chiper text of uppercase
        {
            a = ((a - 65) + key) % 26 + 65; // (int)a == a; c doesn't know which data type it is.
            printf("%c", a);
        }

        else if (islower(a))
        {
            a = (((int)a - 97) + key) % 26 + 97; // char are (ASCII) numbers under the hood.
            printf("%c", a);
        }

        else
        {
            printf("%c", a);
        }
    }
    printf("\n");
}

