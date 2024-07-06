#ifndef RENDERER_FUNCTIONS_H
#define RENDERER_FUNCTIONS_H

// STRUCTS
typedef struct{
	float x, y, z;
} coordinates;

typedef struct{
	coordinates coords;
	coordinates vertices[8];
} cube;

typedef struct{
	coordinates coords;
	int fov;
} camera;

//FUNCTION DECLARATIONS
void renderCube(cube c, camera cam);
void drawPoint(cube c, int vertex, camera cam);

float vertex_to_cam_distance_x(coordinates local, coordinates global, camera cam);
float vertex_to_cam_distance_y(coordinates local, coordinates global, camera cam);
float vertex_to_cam_distance_z(coordinates local, coordinates global, camera cam);

#endif //RENDERER_FUNCTIONS_H
