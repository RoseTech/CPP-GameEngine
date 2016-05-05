//Include standard headers.
#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>

int main(int argc, char* argv[]){
    SDL_Window *window;
    //Declare Pointer
    SDL_Init(SDL_INIT_EVERYTHING);
    //Initializes SDL2

    //Create an application window:
    window = SDL_CreateWindow(
    "Game Engine",
    SDL_WINDOWPOS_CENTERED, // Center initial x.
    SDL_WINDOWPOS_CENTERED, // Center initial y.
    1240, //Set Width
    768, //Set Height
    SDL_WINDOW_RESIZABLE //Set flag
    );

    if(window == NULL){ // Check for window
        printf( // if false:
        "Could not create window: %s\n",
        SDL_GetError());
        return 1;
    }
    //The window is open: ENTER PROGRAM LOOP HERE!
    //See SDL_PollEvent for game loop.

    SDL_Delay(3000); // Delay set in ms.

    //Close and destroy window
    SDL_DestroyWindow(window);

    //Clean up
    SDL_Quit();

    return 0;
}


