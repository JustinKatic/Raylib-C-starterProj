
#include "GameApp.h"

int main(int argc, char* argv[])
{
    {
        GameApp game; // constructor
        game.Startup();
        game.Run();
        game.Shutdown();
    }

    return 0;
}