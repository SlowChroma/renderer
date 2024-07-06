#include"../include/header.h"
#include<raylib.h>

void renderCube(cube c, camera cam){
	for(int i = 0; i < 8; i++)
		drawPoint(c, i, cam);
}

void drawPoint(cube c, int vertex, camera cam){
	DrawCircle((int)(cam.fov * vertex_to_cam_distance_x(c.vertices[vertex], c.coords, cam)/vertex_to_cam_distance_y(c.vertices[vertex], c.coords, cam)) + 500, 500 - ((int)(cam.fov * vertex_to_cam_distance_z(c.vertices[vertex], c.coords, cam)/vertex_to_cam_distance_y(c.vertices[vertex], c.coords, cam))), 1, WHITE);
}

float vertex_to_cam_distance_x(coordinates local, coordinates global, camera cam){
	return local.x + global.x - cam.coords.x;
}

float vertex_to_cam_distance_y(coordinates local, coordinates global, camera cam){
	return local.y + global.y - cam.coords.y;
}

float vertex_to_cam_distance_z(coordinates local, coordinates global, camera cam){
	return local.z + global.z - cam.coords.z;
}
