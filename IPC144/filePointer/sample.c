#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    FILE* fp = NULL;

    // Create 5 variables and write them to the file
    int sku = 180;
    double height = 1.23;
    int price = 65;
    double fuelCost = 12.4;
    int age = 82378;

    // Open the file in read+write mode (assumes file already exists)
    fp = fopen("alpha.txt", "r+");  // Use "w+" to create the file if it doesn't exist

    if (fp != NULL)
    {
        // Write data to the file
        fprintf(fp, "sku%d\n%.2f\n%d\n%.9lf\n%d\n",
            sku, height, price, fuelCost, age);

        // Rewind the file pointer to the beginning of the file
        rewind(fp);

        // Reset variables to check if reading works
        int skill = 0;
        double ht = 0.0;
        int pr = 0;
        double fc = 0.0;
        int ages = 0;

        // Read data back from the file
        fscanf(fp, "sku%d\n%lf\n%d\n%lf\n%d\n",
            &skill, &ht, &pr, &fc, &ages);

        // Print the data read from the file
        printf("Read from file:\n");
        printf("sku = %d\nheight = %.2f\nprice = %d\nfuelCost = %.9lf\nage = %d\n",
            skill, ht, pr, fc, ages);

        // Close the file
        fclose(fp);
    }
    else
    {
        printf("Failed to open file\n");
    }

    return 0;
}
