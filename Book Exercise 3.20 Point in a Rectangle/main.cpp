//
//  main.cpp
//  Book Exercise 3.20
//
//  Created by ax on 8/29/16.
//  Copyright © 2016 COMP130. All rights reserved.
//
//  Calculate if a point is inside or outside a rectangle centered at 0,0 with with of 10 and height of 5
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    // Hello
    cout << "Calculate if a point is inside or outside a rectangle \n";
    
    // D
    double x1 = 0.0;
    double y1 = 0.0;
    // container for square calculation
    double d_square = 0.0;
    // horizontal distance
    double h_dist_calc = 0.0;
    // vertical distance
    double v_dist_calc = 0.0;
    
    // I
    cout << "Enter a point with two coordinates: ";
    cin >> x1 >> y1;
    
    // P
    // half the usual distance calculation because the
    // tests of points (0, 0) to (x, 0) and (0, y)
    
    // calculate horizontal distance
    d_square = pow((0 - x1), 2.0);
    h_dist_calc = pow(d_square, 0.5);
    
    // calculate vertical distance
    d_square = pow((0 - y1), 2.0);
    v_dist_calc = pow(d_square, 0.5);
    
    // O
    if ((h_dist_calc <= 10/2) && (v_dist_calc <= 5/2)) {
        cout << "Teh point (" << x1 << "," << y1 << ") in the rectangle" << endl;
    } else {
        cout << "Teh point (" << x1 << "," << y1 << ") is out the rectangle" << endl;
    }
    
    return 0;
    
}