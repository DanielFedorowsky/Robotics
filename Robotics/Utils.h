/*
 * Utils.h
 *
 *  Created on: Jun 30, 2015
 *      Author: colman
 */

#ifndef UTILS_H_
#define UTILS_H_

#define PI 3.1415926536

class Utils {
public:
	Utils();

	static const float DEGREES_INDEX_RATIO = 666 / 270;
	static const float MIDDLE_INDEX = 666 / 2;

	static const float UNSAFE_DIST = 0.8;

	static int IndexToDegrees(int index);
	static int DegreesToIndex(int degrees);

	static double IndexToRadians(int index);
	static int RadiansToIndex(double radians);
};

#endif /* UTILS_H_ */