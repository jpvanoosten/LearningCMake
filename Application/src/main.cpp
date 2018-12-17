#define WIN32_LEAN_AND_MEAN
#include <Windows.h>

#include <cassert>
#include <iostream>
#include <chrono>
#include <thread>

#include <Game.h>

using namespace std;
using namespace std::chrono;
using namespace std::chrono_literals;

// 30 FPS
auto frameTime = duration<float>(1 / 30.0f);
duration<float> deltaTime;

int main(int argc, char* argv[])
{
    Game* game = new Game();

    auto t0 = high_resolution_clock::now();

    while (true)
    {
        auto t1 = high_resolution_clock::now();
        deltaTime +=  duration<float>( t1 - t0 );
        t0 = t1;

        while ( deltaTime >= frameTime )
        {
            game->Update(deltaTime.count());
            game->Render();

            deltaTime -= frameTime;
        }

        if ( GetAsyncKeyState(VK_ESCAPE) )
        {
            break;
        }

        this_thread::yield();
    }

    return 0;
}