# makefile for rectangle project (HW #2)
# Author: David J DeBonis
# Version: 2020-08-30

# ************************************
# variables to control op

CXX = g++ -std=c++11
CXXFLAGS = -Wall -g

# *************************************
# targets

#main.o: main.cpp
#	$(CXX) $(CXXFLAGS) -c main.cpp

#RectangleAreaComparator.o: RectangleAreaComparator.h
#	$(CXX) $(CXXFLAGS) -c RectangleAreaComparator.h
#
#RectanglePerimeterComparator.o: RectanglePerimeterComparator.h
#	$(CXX) $(CXXFLAGS) -c RectanglePerimeterComparator.h
#
#Rectangle.o: Rectangle.h #Rectangle.cpp
#	$(CXX) $(CXXFLAGS) -c Rectangle.h #Rectangle.cpp
#
main: main.cpp Rectangle.cpp Rectangle.h RectangleAreaComparator.h RectanglePerimeterComparator.h
		$(CXX) $(CXXFLAGS) main.cpp Rectangle.cpp Rectangle.h RectangleAreaComparator.h RectanglePerimeterComparator.h
#
# The main.o target can be written more simply
