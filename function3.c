

#include <stdio.h>
#include <math.h> // M_PI is defined here

// --- Function Prototypes ---
// It's good practice to declare functions before they are used.
// These now take parameters and return a value.
float square_area(float side);
float circle_area(float radius);
float rectangle_area(float length, float width);
float calculate_final_price(float base_price);

// --- Main Function ---
int main() {
    // Declare all necessary variables
    float side, radius, length, width;
    float s_area, c_area, r_area, final_price;

    // --- Get User Input with Clear Prompts ---
    printf("Enter the side of the square: ");
    scanf("%f", &side); // Use %f for float variables

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    // --- Call Functions and Store Results ---
    // Pass the user's input as arguments to the functions
    s_area = square_area(side);
    c_area = circle_area(radius);
    r_area = rectangle_area(length, width);
    
    // --- Display Results ---
    printf("\n--- Calculated Areas ---\n");
    printf("The area of the square is: %f\n", s_area);
    printf("The area of the circle is: %f\n", c_area);
    printf("The area of the rectangle is: %f\n", r_area);

    // --- Calculate and Display Final Price ---
    // Let's assume the price is based on the rectangle's area
    final_price = calculate_final_price(r_area);
    printf("\nFinal price based on rectangle area (with 18%% tax): %f\n", final_price);

    return 0; // End of the program
}

// --- Function Definitions ---

/**
 * Calculates the area of a square.
 * @param side The length of the square's side.
 * @return The area of the square.
 */
float square_area(float side) {
    return side * side; // Simpler than pow() for squaring
}

/**
 * Calculates the area of a circle.
 * @param radius The radius of the circle.
 * @return The area of the circle.
 */
float circle_area(float radius) {
    // M_PI is a more accurate value for Pi from math.h
    return M_PI * radius * radius;
}

/**
 * Calculates the area of a rectangle.
 * @param length The length of the rectangle.
 * @param width The width of the rectangle.
 * @return The area of the rectangle.
 */
float rectangle_area(float length, float width) {
    return length * width;
}

/**
 * Calculates a final price by adding an 18% tax.
 * @param base_price The initial price/value.
 * @return The price after tax.
 */
float calculate_final_price(float base_price) {
    return base_price + (0.18 * base_price);
}