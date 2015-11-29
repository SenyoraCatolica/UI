
#include "p2SString.h"
#include "j1Fonts.h"


class Label : public UI_Element
{
	p2SString Text;
	uint MaxSize;
	//Image texture;
	j1Fonts* font;
	SDL_Color color;
	_TTF_Font* f;

public:

	Label(){}

	Label(p2SString t) : MaxSize(14)
	{
		Text = t;
		f = App->font->Load(DEFAULT_FONT, 14);
		
	}


	bool CheckUser();

	void Draw()

	{
		
		App->render->Blit(App->font->Print(Text.GetString(), { (255), (255), (255), (255) }, f), 10, 10, false, false);
	}

};