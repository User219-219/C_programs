/* Author: Kennedy Derrick Praise 
   Registration_Number: BCS-03-0139/2026
   Description: A simple c program to display the room room occupancy of a hotel using a 3D array for multiple branches.
   Date: 2026-11-03
   Version: 2.2 */



#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator
    srand(time(NULL));


    int chain[3][5][10];
    int totalOccupied3D = 0;

    printf("=== 3D ARRAY: MULTIPLE BRANCHES OCCUPANCY ===\n");
    printf("(1 = Occupied, 0 = Vacant)\n\n");

    for (int branch = 0; branch < 3; branch++) {
        int branchOccupied = 0;

        for (int floor = 0; floor < 5; floor++) {
            for (int room = 0; room < 10; room++) {
                // Assign random occupancy (1 or 0)
                chain[branch][floor][room] = rand() % 2;

                if (chain[branch][floor][room] == 1) {
                    branchOccupied++;
                }
            }
        }

        totalOccupied3D += branchOccupied;
        printf("Branch %d -> Total Occupied Rooms: %d out of 50\n", 
               (branch + 1), branchOccupied);
    }

    printf("\nTotal Occupied Rooms Across All Branches: %d out of 150\n", totalOccupied3D);

    return 0;
}