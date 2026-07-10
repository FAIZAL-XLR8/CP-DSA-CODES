#include <bits/stdc++.h>
using namespace std;
int maze(int startrow,int startcol,int endrow, int endcol){
    //base cases
    if(startrow>endrow || startcol>endcol) return 0;

    if(startrow==endrow && startcol==endcol) return 1;
        //recursive call
        return maze(startrow+1,startcol,endrow,endcol)+ maze(startrow,startcol+1,endrow,endcol);

}
int main(){
    cout<< maze(1,1,3,3);
}
//explaination niche
// Let’s analyze the problem using a 3x3 grid (3 rows and 3 columns) step-by-step. We’ll explain each stack frame and what it returns as the recursive calls progress.

// Grid Representation
// The grid is as follows:

// scss
// Copy code
// Start (S) -> (0,0)       Destination (D) -> (2,2)

// S → → 
// ↓
// ↓
// D
// At each position (i, j), the lad can:

// Move right (increment column j + 1).
// Move down (increment row i + 1).
// Recursive Function
// cpp
// Copy code
// int countPaths(int i, int j, int m, int n) {
//     // Base Case 1: If lad reaches destination
//     if (i == m - 1 && j == n - 1) return 1;

//     // Base Case 2: If lad moves out of bounds
//     if (i >= m || j >= n) return 0;

//     // Recursive calls for right and down moves
//     int rightPaths = countPaths(i, j + 1, m, n); // Move right
//     int downPaths = countPaths(i + 1, j, m, n);  // Move down

//     // Total paths = paths from right + paths from down
//     return rightPaths + downPaths;
// }
// Here, m = 3 and n = 3 (for a 3x3 grid).

// Step-by-Step Explanation of Stack Frames
// Initial Call: countPaths(0, 0, 3, 3)
// Current position: (0,0)
// Recursive calls:
// Move right: countPaths(0, 1, 3, 3)
// Move down: countPaths(1, 0, 3, 3)
// Stack Frame for countPaths(0, 1, 3, 3)
// Current position: (0,1)
// Recursive calls:
// Move right: countPaths(0, 2, 3, 3)
// Move down: countPaths(1, 1, 3, 3)
// Stack Frame for countPaths(0, 2, 3, 3)
// Current position: (0,2)
// Recursive calls:
// Move right: countPaths(0, 3, 3, 3) (Out of bounds → returns 0)
// Move down: countPaths(1, 2, 3, 3)
// Stack Frame for countPaths(1, 2, 3, 3)
// Current position: (1,2)
// Recursive calls:
// Move right: countPaths(1, 3, 3, 3) (Out of bounds → returns 0)
// Move down: countPaths(2, 2, 3, 3)
// Stack Frame for countPaths(2, 2, 3, 3)
// Current position: (2,2) → Destination reached.
// Base Case 1 applies → returns 1.
// Returning Values
// Now, we backtrack and combine the results from each recursive call.

// countPaths(1, 2, 3, 3) returns:

// 0 (from countPaths(1, 3, 3, 3)) + 1 (from countPaths(2, 2, 3, 3)) = 1.
// countPaths(0, 2, 3, 3) returns:

// 0 (from countPaths(0, 3, 3, 3)) + 1 (from countPaths(1, 2, 3, 3)) = 1.
// countPaths(0, 1, 3, 3) returns:

// 1 (from countPaths(0, 2, 3, 3)) + 2 (from countPaths(1, 1, 3, 3)).
// Combining All Stack Frames
// countPaths(0, 0, 3, 3) returns:
// Total paths from all valid recursive calls.
// Final Answer
// For a 3x3 grid, the total number of unique paths is 6. Each stack frame contributes its part until all paths are calculated