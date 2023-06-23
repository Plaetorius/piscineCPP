#ifndef POINT_H
# define POINT_H

# pragma once

class Point
{
	private:

	public:
		Point();
		Point(const  Point &obj);
		Point& operator=(const Point &rhs);
		~Point();
};

#endif