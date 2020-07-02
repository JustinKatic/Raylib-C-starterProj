#include "GameApp.h"
#include "raylib.h"
#include <iostream>


GameApp::GameApp()
{

}
GameApp::~GameApp()
{

}

//happens before anything else once project opens up
void GameApp::Startup()
{
	//screen size
	m_screenWidth = 500;
	m_screenHeight = 500;
	//creates raylib screen
	InitWindow(m_screenWidth, m_screenHeight, "Rename");
	//sets fps to lock at 60
	SetTargetFPS(60);
}

//happens right before project finishs use for clean up
void GameApp::Shutdown()
{
	CloseWindow();
}

//Game loop
void GameApp::Run()
{
	// Main game loop
	while (!WindowShouldClose())    // Detect window close button or ESC key
	{
		//functionality every frame
		Update();
		//drawing every frame
		Draw();
	}
}

//use to update functionality every frame
void GameApp::Update()
{

}
//use to draw to screen every frame
void GameApp::Draw()
{
	BeginDrawing();

	ClearBackground(BLACK);

	EndDrawing();
}

