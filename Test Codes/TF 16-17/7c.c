#include <stdio.h>
#include <stdlib.h>

// Function to calculate the average pixel value of the image
double calculateAverage(int **image, int rows, int cols) {
    double sum = 0.0;
    int totalPixels = rows * cols;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += image[i][j];
        }
    }

    return sum / totalPixels;
}

// Function to calculate the error matrix
void calculateErrorMatrix(int **image, int rows, int cols, double average, int **errorMatrix) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            errorMatrix[i][j] = image[i][j] - (int)average;
        }
    }
}

// Function to initialize and count the occurrences of each error value
void calculateErrorFrequency(int **errorMatrix, int rows, int cols, int *errorFrequency) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int errorValue = errorMatrix[i][j];
            errorFrequency[errorValue]++;
        }
    }
}

// Function to print the error frequency list
void printErrorFrequency(int *errorFrequency) {
    printf("Error Frequency List (Ascending Order):\n");
    for (int i = 0; i <= 255; i++) {
        if (errorFrequency[i] > 0) {
            printf("Error: %d, Frequency: %d\n", i, errorFrequency[i]);
        }
    }
}

int main() {
    // Sample gray scale image
    int image[6][6] = {
        {231, 187, 178, 194, 203, 190},
        {202, 195, 198, 195, 204, 192},
        {214, 197, 179, 196, 200, 197},
        {230, 190, 180, 198, 201, 187},
        {224, 219, 193, 200, 201, 186},
        {231, 123, 189, 201, 203, 197}
    };

    int rows = 6;
    int cols = 6;

    // Allocate memory for error matrix
    int **errorMatrix = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        errorMatrix[i] = (int *)malloc(cols * sizeof(int));
    }

    // Calculate average pixel value
    double average = calculateAverage((int **)image, rows, cols);

    // Calculate error matrix
    calculateErrorMatrix((int **)image, rows, cols, average, errorMatrix);

    // Initialize and count error frequencies
    int errorFrequency[256] = {0};
    calculateErrorFrequency(errorMatrix, rows, cols, errorFrequency);

    // Print error frequency list
    printErrorFrequency(errorFrequency);

    // Free allocated memory
    for (int i = 0; i < rows; i++) {
        free(errorMatrix[i]);
    }
    free(errorMatrix);

    return 0;
}
