/* Author: Kennedy Derrick Praise 
   Registration_Number: BCS-03-0139/2026
   Description: A simple c program to display room occupancy of a hotel using a 2D array for a single branch.
   Date: 2026-11-03
   Version: 2.2 */



#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator
    srand(time(NULL));



    
    int occupancy[5][10];
    int totalOccupied2D = 0;
    int totalVacant2D = 0;

    printf("=== 2D ARRAY: SINGLE BRANCH ROOM OCCUPANCY ===\n");
    printf("(1 = Occupied, 0 = Vacant)\n\n");

    for (int floor = 0; floor < 5; floor++) {
        int occupiedCount = 0;
        int vacantCount = 0;

        for (int room = 0; room < 10; room++) {
            // Randomly assign 1 (occupied) or 0 (vacant)
            occupancy[floor][room] = rand() % 2;

            if (occupancy[floor][room] == 1) {
                occupiedCount++;
            } else {
                vacantCount++;
            }
        }

        totalOccupied2D += occupiedCount;
        totalVacant2D += vacantCount;

        printf("Floor %d -> Occupied Rooms: %2d | Vacant Rooms: %2d\n", 
               (floor + 1), occupiedCount, vacantCount);
    }

    printf("\nTotal Occupied Rooms (Single Branch): %d\n", totalOccupied2D);
    printf("Total Vacant Rooms (Single Branch): %d\n", totalVacant2D);

    return 0;
}