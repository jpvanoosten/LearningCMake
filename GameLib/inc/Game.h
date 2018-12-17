#if defined(GAME_EXPORTS)
#   define GAME_DLL __declspec(dllexport)
#   define GAME_EXTERN
#elif defined(GAME_IMPORTS)
#   define GAME_DLL __declspec(dllimport)
#   define GAME_EXTERN extern
#else
#   define GAME_DLL
#   define GAME_EXTERN
#endif

class GAME_DLL Game
{
public:  
    Game();
    virtual ~Game();

    virtual void Update(float deltaTime);
    virtual void Render();

};