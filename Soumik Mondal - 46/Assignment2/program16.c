// Program 16: Write a menu driven program, consisting of following functions (on string), without 
// using any library functions:--
// Strlen()
// Strcpy()
// Strcat()
// Strrev()
// Strcmp()

#include<stdio.h>
int Strlen(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}
void Strcpy(char dest[], char source[]) {
    int i = 0;
    while (source[i] != '\0') {
        dest[i] = source[i];
        i++;
    }
    dest[i] = '\0';
}
void Strrev(char str[]) {
    int length = Strlen(str);
    int start = 0;
    int end = length - 1;

    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

int Strcmp(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i];
        }
        i++;
    }

    return str1[i] - str2[i];
}

void Strcat(char dest[], char source[]) {
    int i = 0, j = 0;
    while (dest[i] != '\0') {
        i++;
    }

    while (source[j] != '\0') {
        dest[i] = source[j];
        i++;
        j++;
    }
    dest[i] = '\0';
}



int main() {
    char str1[100], str2[100],ch;
    int choice;

    printf("Enter String 1: ");
    scanf("%s", str1);

    printf("Enter String 2: ");
    scanf("%s", str2);
    do{
        printf("\nMenu:\n");
        printf("1. Strlen\n");
        printf("2. Strcpy\n");
        printf("3. Strcat\n");
        printf("4. Strrev\n");
        printf("5. Strcmp\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Length of String 1: %d\n", Strlen(str1));
                printf("Length of String 2: %d\n", Strlen(str2));
                break;

            case 2:
                Strcpy(str1, str2);
                printf("String 1 after copying String 2: %s\n", str1);
                break;

            case 3:
                Strcat(str1, str2);
                printf("Concatenated String: %s\n", str1);
                break;

            case 4:
                Strrev(str1);
                Strrev(str2);
                printf("Reversed String 1: %s\n", str1);
                printf("Reversed String 2: %s\n", str2);
                break;

            case 5:
                printf("String Comparison Result: %d\n", Strcmp(str1, str2));
                break;

            default:
                printf("Invalid choice\n");
        }
        printf("Do you want to continue..?\n");
        fflush(stdin);
        scanf("%c",&ch);
    }while(ch=='y'|| ch=='Y');
        
    return 0;
}