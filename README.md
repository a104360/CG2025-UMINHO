# Objectives

* Develop a mini scene graph based 3d engine
* Provide usage examples to show potential

## Phases

1. Graphical primitives

   >This phase requires 2 applications: one to generate files with the models  
   information (in this phase only generate the vertices for the model) and the  
   engine itself which will read the configuration file, written in XML, and  
   displays the models.

   * *Generator*

   > * Independant from the engine  
   > * Receives as parameters :  
   >   * graphical primitive's type
   >   * parameters for model creation
   >   * destination file for vertices

   ### Parameters required

    * Plane (square on XZ plane, centred in the origin, subdivided in both X  
    and Z directions)
    * Box (dimension, number of division per edge, centered in the origin)
    * Sphere (radius, slices and stacks, centered in the origin)
    * Cone (bottom radius, height, slices and stacks, the bottom of the cone  
    should be on the XZ plane)

    To run it : generator sphere 1 10 10 sphere.3d

2. Geometric transforms

3. Curves, Cubic surfaces and VBOs

4. Normals and Texture Coordinates
