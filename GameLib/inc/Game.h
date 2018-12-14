class Game
{
public:  
    Game();
    virtual ~Game();

    virtual void Update(float deltaTime);
    virtual void Render();

};