#ifndef GENERATOR_H
#define GENERATOR_H


/// @brief Generates a square in the XZ plane, centred in the origin, subdivided
/// in both X and Z directions
/// centered on the origin of the 
/// @param length Length of the plane 
/// @param divisions 
/// @param filename 
void drawPlane(int length,int divisions,char * filename);

/// @brief Generates a 3D box based centered in the origin
/// @param size Length of the edge 
/// @param divisions Number of divisions of each face (grid divisionsXdivisions)
void generateBox(int size, int divisions,char * filename);

/// @brief Generates a 3D sphere centered in the origin
/// @param radius Radius of the base
/// @param slices Number of slices made to the surface
/// @param stacks Number of stacks to draw
void generateSphere(double radius,int slices,int stacks,char * filename);

/// @brief Generates a 3D cone with the base on the XZ plane
/// @param radius Radius of the base
/// @param height Height of the cone
/// @param slices Number of slices to draw
/// @param stacks Number of stacks to draw
void generateCone(double radius,double height,int slices,int stacks,char * filename);

#endif