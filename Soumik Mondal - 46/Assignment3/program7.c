#include <stdio.h>
#include<string.h>
int main() {
    FILE *file;
    char line[100]; // Assuming a maximum line length of 99 characters
int arr[20][40],b=0,i=0,c,j,l;
    // Open the file for reading
    file = fopen("bin.txt", "r");

    // Check if the file was opened successfully
    if (file == NULL) {
        perror("Error opening file");
        return 1; // Exit the program with an error code
    }

    // Read the file line by line
    while (fgets(line, sizeof(line), file) != NULL) {
        // Process the line here
        c=strlen(line);
        i=0;
        for(j=0;j<c;j++){
        	if(line[j]!=' '){
        	if((int)line[j]==48)
        	arr[b][i]=0;
        	if((int)line[j]==49)
        	arr[b][i]=1;
        	i++;
		}
		b++;
    }
}
    printf("The Matrix is:\n");
    for(j=0;j<b;j++){
    	for(l=0;l<i;l++){
    		printf("%d ",arr[j][l]);
		}
		printf("\n");
	}

    // Close the file
    fclose(file);

    return 0; // Exit the program successfully
}
