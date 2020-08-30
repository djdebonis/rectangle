/**
 * This is a comparator class which has one member function -
 * isLessThan. This member function can be used to compare
 * Rectangles by their perimeter.
 * Author: Your Name
 * Version: Due Date
 */
#include "Rectangle.h"

#ifndef HW2_RECTANGLEPERIMETERCOMPARATOR_H
#define HW2_RECTANGLEPERIMETERCOMPARATOR_H

class RectanglePerimeterComparator {
public:
    /**
     * This function can be used to compare two Rectangles based
     * on their perimeter. It will return true if perimeter of left
     * Rectangle is less than the Perimeter of right Rectangle
     * @param lhs Rectangle object
     * @param rhs Rectangle object
     * @return true if left Rectangle < right Rectangle, otherwise
     * it will return false
     */
    bool isLessThan (const Rectangle & lhs, const Rectangle & rhs) {
        bool answer;

        double lhsPerim = (2 * lhs.getLength()) + (2* lhs.getWidth());
        double rhsPerim = (2 * rhs.getLength()) + (2* rhs.getWidth());

        if (lhsPerim == rhsPerim) {
          throw "Cannot compare: two (or more) perimeters are the same value!";
        }
        else if (lhsPerim < rhsPerim) {
          answer = true;
        }
        else {
          answer = false;
        }

        return answer;
    }
};

#endif //HW2_RECTANGLEPERIMETERCOMPARATOR_H
