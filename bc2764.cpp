#include <stdio.h>

int main() {
    char date[8];
    int day, month, year;

    while(scanf("%s", date) == 1) {
        // Convert date string to integers
        sscanf(date, "%d/%d/%d", &day, &month, &year);

        // Print date in MM/DD/YY format
        printf("%02d/%02d/%02d\n", month, day, year);

        // Print date in YY/MM/DD format
        printf("%02d/%02d/%02d\n", year, month, day);

        // Print date in DD-MM-YY format
        printf("%02d-%02d-%02d\n", day, month, year);
    }

    return 0;
}
