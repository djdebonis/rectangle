/**
 * This is a comparator class which has one member function -
 * isLessThan. This member function can be used to compare
 * Rectangles by their area.
 * Author: Your Name
 * Version: Due Date
 */
#include "Rectangle.h"
#ifndef HW2_RECTANGLEAREACOMPARATOR_H
#define HW2_RECTANGLEAREACOMPARATOR_H

class RectangleAreaComparator {
public:

    /**
     * This function can be used to compare two Rectangles based
     * on their area. It will return true if area of left
     * Rectangle is less than the area of right Rectangle
     * @param lhs Rectangle object
     * @param rhs Rectangle object
     * @return true if left Rectangle < right Rectangle, otherwise
     * it will return false
     */
    bool isLessThan (const Rectangle & lhs, const Rectangle & rhs) {
        bool answer;

        double lhsArea = lhs.getLength() * lhs.getWidth();
        double rhsArea = rhs.getLength() * rhs.getWidth();

        if (lhsArea == rhsArea){
          throw "Cannot compare: two (or more) areas are the same value!";
        }
        else if (lhsArea < rhsArea) {
          answer = true;
        }
        else {
          answer = false;
        }

        return answer;
      }

};


#endif //HW2_RECTANGLEAREACOMPARATOR_H
