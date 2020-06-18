#pragma once
//Converts YCoCg -> RGB -> YUV space
void convertToYUV(int& Y, int& Co, int& Cg, double& Luma, double& U, double& V) {
	if (Y < 0) { Y = 0; } //Clamp Y range to 0...255 according to assignment
	if (Y > 255) { Y = 255; }

	//RGB conversion based off matrix in course materials
	double R = double(Y) + Co - Cg;
	double G = double(Y) + Cg;
	double B = double(Y) - Co - Cg;

	std::cout << "RGB: " << R << " " << G << " " << B << "\n";

	//YUV conversion based off matrix in course materials
	Luma	= std::round((R *	0.299)	+ (G *	0.587)	+ (B *	0.114));
	U		= std::round((R * -0.299)	+ (G * -0.587)	+ (B *	0.886));
	V		= std::round((R *	0.701)	+ (G * -0.587)	+ (B * -0.114));
	return;
}