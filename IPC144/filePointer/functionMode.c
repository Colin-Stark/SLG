#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void addNumbersToFile(FILE* fp, int sku, double price) {
    // Write 5 records to the file
    for (int i = 0; i < 5; i++) {
        fprintf(fp, "%d %.2lf\n", sku, price);  // Write sku and price to the file
        sku++;  // Increment sku for the next record
        price += 0.50;  // Increment price for the next record
    }
}

void readNumbersFromFile(FILE* fp) {
    int sku;
    double price;

    //// Read the data from the file and display it
    //while (fscanf(fp, "%d %lf", &sku, &price) == 2) {  // Keep reading until end of file
    //    printf("SKU: %d, Price: %.2lf\n", sku, price);
    //}


    // Read the data from the file and display it with fgetc
	char c;

	while ((c = fgetc(fp)) != EOF) {
		printf("%c", c);
	}

}

int main(void) {

    FILE* fp = fopen("slg.txt", "w+");  // Open the file for both reading and writing
    if (fp == NULL) {  // Check if the file was opened successfully
        printf("Failed to open file\n");
        return 1;  // Return error code if file opening failed
    }

    int sku = 4664;
    double price = 1.49;

    // First, write to the file
    addNumbersToFile(fp, sku, price);

    // Now, reset the file pointer to the beginning for reading
    rewind(fp);  // This resets the file pointer to the start of the file

    // Then, read from the file
    readNumbersFromFile(fp);

    fclose(fp);  // Close the file after reading

    return 0;  // Return success
}



