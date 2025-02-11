#ifndef PONTO_H
#define PONTO_H

/// @brief Struct to keep the variable of the 3d points 
/// @note Keeps variable (x,y,z)
typedef struct ponto * Ponto;

/// @brief Function to create a point in the space
/// @param  x Value for x 
/// @param  y Value for y
/// @param  z Value for z
/// @return New point created
Ponto newPonto(float,float,float);

/// @brief Getter for x variable
/// @param  p Ponto to get the x variable
/// @return Value of x
float getX(Ponto);


/// @brief Getter for y variable
/// @param  p Ponto to get the y variable
/// @return Value of y
float getY(Ponto);


/// @brief Getter for z variable
/// @param  p Ponto to get the z variable
/// @return Value of z
float getZ(Ponto);

#endif