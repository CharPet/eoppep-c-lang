﻿#include <stdio.h>
#include <stdbool.h> // Χρησιμοποιούμε τη βιβλιοθήκη για τη μεταβλητή τύπου bool

// Συνάρτηση για την ταξινόμηση του πίνακα με την τεχνική Bubble Sort
void bubbleSort(int array[], int length) {

    int i = 0; // Αρχικοποιούμε το i για τις επαναλήψεις
    bool swapped = false; // Χρησιμοποιούμε μια σημαία για να ελέγξουμε αν έγιναν ανταλλαγές

    do {

        swapped = false; // Επαναφέρουμε τη σημαία σε κάθε νέα επανάληψη

        // Εσωτερικός βρόχος για να συγκρίνουμε ζευγάρια στοιχείων
        for (int j = 0; j < length - i - 1; j++) {

            if (array[j] > array[j + 1]) { // Εάν το στοιχείο στη θέση j είναι μεγαλύτερο από το επόμενο
                // Ανταλλαγή στοιχείων
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swapped = true; // Ενημερώνουμε ότι έγινε ανταλλαγή
            }
        }

        i++; // Αυξάνουμε το i για να μην συγκρίνουμε τα ήδη ταξινομημένα στοιχεία στο τέλος του πίνακα

    } while (swapped); // Συνεχίζουμε την επανάληψη όσο γίνονται ανταλλαγές

}

// Συνάρτηση main για την εκτέλεση του προγράμματος
int main() {

    int array[] = { 6, 7, 9, 3, 5, 8 }; // Ο αρχικός πίνακας
    int length = sizeof(array) / sizeof(array[0]); // Υπολογίζουμε το μήκος του πίνακα

    bubbleSort(array, length); // Καλούμε τη συνάρτηση για την ταξινόμηση

    // Εκτυπώνουμε τον ταξινομημένο πίνακα
    printf("Sorted with Bubble Sort:\n");
    for (int i = 0; i < length; i++) {
        printf("a[%d] = %d\n", i, array[i]); // Εκτυπώνουμε το κάθε στοιχείο του πίνακα
    }

    return 0; // Το πρόγραμμα ολοκληρώθηκε επιτυχώς
}
