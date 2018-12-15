#include "windows.h"

Window::Window(){
	pWindow = SDL_CreateWindow("Arknoid", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 600, 600, SDL_WINDOW_SHOWN);
	win_surf = SDL_GetWindowSurface(pWindow);
	srcBg = { 0,128, 96,128 };
	dest = { 0,0,0,0 };
}

void Window::remplir(SDL_Surface* plancheSprites){

	// remplit le fond
	for (int j = 0; j < win_surf->h; j+=128)
		for (int i = 0; i < win_surf->w; i += 96)
		{
			dest.x = i;
			dest.y = j;
			SDL_BlitSurface(plancheSprites, &srcBg, win_surf, &dest);
		}
}

SDL_Window* Window::getWindow(){
	return pWindow;
}

SDL_Surface* Window::getSurface(){
	return win_surf;
}

SDL_Rect Window::getDest(){
	return dest;
}

SDL_Rect Window::getSrc(){
	return srcBg;
}
void Window::setDest(int x, int y){
	dest.x = x;
	dest.y = y;
}
