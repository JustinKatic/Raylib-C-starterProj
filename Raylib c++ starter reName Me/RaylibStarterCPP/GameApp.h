class GameApp
{
public:

	GameApp();
	~GameApp();

	void Startup();
	void Shutdown();
	void Run();

	void Update();
	void Draw();

private:
	int m_screenWidth;
	int m_screenHeight;

};