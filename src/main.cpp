#include "../include/game.hpp"
#include "../include/game_state_start.hpp"

int main()
{
    Game game;

    game.pushState(new GameStateStart(&game));
    game.gameLoop();

    return 0;
}
