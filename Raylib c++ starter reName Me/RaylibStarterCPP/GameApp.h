class GameApp
{
public:

	GameApp();
	~GameApp();

	bool gameOver = false;
	static const int MAP_ROWS = 32;
	static const int MAP_COLS = 50;

	void Startup();
	void Shutdown();
	void Run();

	void Update();
	void Draw();
private:

	int m_screenWidth;
	int m_screenHeight;

};