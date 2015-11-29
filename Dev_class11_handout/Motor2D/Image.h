#include "UI_Manager.h"
#include "SDL\include\SDL.h"
#include "j1App.h"


class Image : public UI_Element
{

	SDL_Texture* tex;
	SDL_Rect* rect;
	p2Point<int> position;
	
public:

	Image(){}

	Image(SDL_Texture* tex, SDL_Rect* rect)
	{
		this->tex = tex;
		this->rect = rect;
	}

	void Draw()
	{
	 App->render->Blit(tex, 10, 50, rect, false);
	}

};