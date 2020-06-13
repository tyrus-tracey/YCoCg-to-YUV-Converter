#pragma once

void convertToYUV(int& Y, int& Co, int& Cg, double& Luma, double& U, double& V) {
	
	double R = double(Y) + Co - Cg;
	double G = double(Y) + Cg;
	double B = double(Y) - Co - Cg;

	std::cout << "RGB: " << R << " " << G << " " << B << "\n";

	Luma	= std::round((R *	0.299)	+ (G *	0.587)	+ (B *	0.114));
	U		= std::round((R * -0.299)	+ (G * -0.587)	+ (B *	0.886));
	V		= std::round((R *	0.701)	+ (G * -0.587)	+ (B * -0.114));
	return;
}