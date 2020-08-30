#include <iostream>
#include <vector>
#include "Rectangle.h"
#include "RectangleAreaComparator.h"
#include "RectanglePerimeterComparator.h"

/**
 * This is the main function. It creates a vector with five Rectangle
 * objects, use findMax template to find the largest Rectangle
 * by area and by perimeter and displays the result.
 * It also includes findMax template to find the largest item
 * in the list
 */

using namespace std;

// Generic findMax template.
// Precondition: a.size( ) > 0.
//It can be used to find the largest item in a list.
//Note: This is different from the one given in HW handout.
//I think this one is easier to use.
//If you end up creating a function for finding largest Rectangle by
//area and another function for finding largest Rectangle by perimeter
//then you are not using template function.
template <typename Object, typename Comparator>
const Object & findMax( const vector<Object> & arr, Comparator cmp )
{
    int maxIndex = 0;

    for( int i = 1; i < arr.size( ); ++i ){
        try {
          if( cmp.isLessThan( arr[ maxIndex ], arr[ i ] ) )
            maxIndex = i;
        } catch (const char* errorMsg) {
          cerr << errorMsg << endl;
        }

    return arr[ maxIndex ];
  }
}



int main() {
    //Create a vector to store Rectangle object and
    //populate it with five Recatngle objects

    vector<Rectangle> v = {Rectangle(9, 3),  //27, 24
                           Rectangle (5, 6), //30, 22
                           Rectangle (2, 10), // 20, 24
                           Rectangle (5, 5),  //25, 20
                           Rectangle (3, 5)};  // 15, 16

    //Display list of Rectangles
    cout << "List of Rectangles: " << endl;
    cout << "================================" << endl;
    for (int i = 0; i < v.size(); i++) {
        cout << "Rectangle " << (i+1) << endl;
        v[i].output();
        cout << endl;
    }

    cout << "================================" << endl;
    cout << endl;
    cout << endl;

    // define for function access
    RectangleAreaComparator areaComp;

    // assign max to new rectangle
    Rectangle areaMax= findMax(v, areaComp);
    cout << "The largest rectangle by area: " << endl;
    cout << endl;
    areaMax.output();

    //define for function access
    RectanglePerimeterComparator perimeterComp;
    // assign max to new rectangle
    Rectangle perimeterMax = findMax(v, perimeterComp);
    cout << "The largest rectangle by perimeter: " << endl;
    cout << endl;
    perimeterMax.output();


    //Creat an object of RectangleAreaComparator
    //Use findMax template to find largest Rectangle by area
    //Note that findMax will return a Rectangle object
    //Display the Rectangle object.



    //Creat an object of RectanglePerimeterComparator
    //Use findMax template to find largest Rectangle by area
    //Note that findMax will return a Rectangle object
    //Display the Rectangle object.

    return 0;
}
