#ifndef WINDOWS_H
#define WINDOWS_H


#include <SDL2/SDL.h>

class Window
{
    public:
      Window(int x, int y);
    	void remplir(SDL_Surface* plancheSprites);
      SDL_Window* getWindow();
      SDL_Surface* getSurface();
      SDL_Rect getDest();
      SDL_Rect getSrc();
      void setDest(int x, int y);
      void setWidth(int x);
      void setHeight(int y);
      int getWidth();
      int getHeight();

    private:
      SDL_Window* pWindow;
      SDL_Surface* win_surf;
    	SDL_Rect dest;
    	SDL_Rect srcBg;
      int width;
      int height;
};

#endif
