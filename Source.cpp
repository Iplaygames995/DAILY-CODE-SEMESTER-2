#include<string>
#include<iostream>
#include<allegro5\allegro.h>
#include<allegro5\allegro_primitives.h>


using namespace std;
class face {

private:	
	int xpos;
	int ypos;
	int xvelocity;
	int yvelocity;

	ALLEGRO_BITMAP*win;



public:
	void initclass(int xp, int yp, int xv, int yv,ALLEGRO_BITMAP*window);
	void draw();
	

};

int main(){

	while (1);
	face b1;
	b1.initclass(200,200);
		
}
void face::initclass(int xp, int yp, int xv, int yv, ALLEGRO_BITMAP*window) {
	xpos = xp;
	ypos = yp;
	xvelocity = xv;
	yvelocity = yv;
	win = window;

	

}
void face::draw() {



}
