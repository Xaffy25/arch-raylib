#include <stdio.h>
#include <raylib.h>

int main (void)
{
	printf("Hello World!\n");

	const int screenWidth = 800;
	const int screenHeight = 450;

	InitWindow(screenWidth,screenHeight, "raylib test");
	SetTargetFPS(60);

	while(!WindowShouldClose())
	{
	
	BeginDrawing();
	ClearBackground(RAYWHITE);
	DrawText("First window!", 250,100,50,LIGHTGRAY);
	EndDrawing();

	

	}
	CloseWindow();
	return 0;
}

