
#include "UI_Manager.h"
#include "Label.h"
#include "Image.h"


class Button : public UI_Element, public Label, public Image
{
	unsigned int W, H;
	unsigned int Animation;
	Label Text;
	Image buttonImage;

	bool Update();
	void Input();
	void Draw();

};