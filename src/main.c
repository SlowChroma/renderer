#include"../include/header.h"
#include<raylib.h>

int main()
{
	bool repeat = true;
	InitWindow(1000, 1000, "Renderer");
	SetTargetFPS(60);
	while(repeat){
		repeat = false;

		camera cam;
		cam.coords.x = 0;
		cam.coords.y = -3;
		cam.coords.z = 0;
		cam.fov = 90;

		while(!WindowShouldClose()){
			BeginDrawing();
			ClearBackground(BLACK);

			cube myCube;
			myCube.coords.x = 0;
			myCube.coords.y = 0;
			myCube.coords.z = 0;
			myCube.vertices[0].x = 1;
			myCube.vertices[0].y = -1;
			myCube.vertices[0].z = -1;
			myCube.vertices[1].x = 1;
			myCube.vertices[1].y = -1;
			myCube.vertices[1].z = 1;
			myCube.vertices[2].x = -1;
			myCube.vertices[2].y = -1;
			myCube.vertices[2].z = 1;
			myCube.vertices[3].x = -1;
			myCube.vertices[3].y = -1;
			myCube.vertices[3].z = -1;
			myCube.vertices[4].x = 1;
			myCube.vertices[4].y = 1;
			myCube.vertices[4].z = 1;
			myCube.vertices[5].x = 1;
			myCube.vertices[5].y = 1;
			myCube.vertices[5].z = -1;
			myCube.vertices[6].x = -1;
			myCube.vertices[6].y = 1;
			myCube.vertices[6].z = 1;
			myCube.vertices[7].x = -1;
			myCube.vertices[7].y = 1;
			myCube.vertices[7].z = -1;


			renderCube(myCube, cam);

			EndDrawing();

			if(IsKeyDown(KEY_D))
				cam.coords.x = cam.coords.x + 0.1;
			if(IsKeyDown(KEY_A))
				cam.coords.x = cam.coords.x - 0.1;
			if(IsKeyDown(KEY_W))
				cam.coords.z = cam.coords.z + 0.1;
			if(IsKeyDown(KEY_S))
				cam.coords.z = cam.coords.z - 0.1;
			if(IsKeyDown(KEY_Q))
				cam.coords.y = cam.coords.y - 0.1;
			if(IsKeyDown(KEY_E))
				cam.coords.y = cam.coords.y + 0.1;
			if(IsKeyDown(KEY_X))
				cam.fov++;
			if(IsKeyDown(KEY_Z))
				cam.fov--;
			if(IsKeyPressed(KEY_R)){
				repeat = true;
				break;
			}
		}
	}

	return 0;
}
