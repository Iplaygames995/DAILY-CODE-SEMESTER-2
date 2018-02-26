
#include<allegro5\allegro.h>
#include<allegro5\allegro_primitives.h>
#include<iostream>
#include<ctime>

using namespace std;

int main()
{
	ALLEGRO_DISPLAY *window = NULL;
	
	al_init();
	al_init_primitives_addon();
	window = al_create_display(800,800);
	srand(time(NULL));
	while (1) {
		al_draw_filled_circle(rand()%800, rand()%800, rand() % 80, al_map_rgb(rand() % 255, rand() % 225, rand() % 255));
		
		//al_draw_filled_triangle(rand() % 800, rand() % 800, rand() % 80 al_map_rgb((rand() % 255, rand() % 225, rand() % 800, rand() % 800, rand() % 80, al_map_rgb(rand() % 255, rand() % 225, rand() % 255)) rand( % 255));
		al_flip_display();
		//al_rest(.08);

	}
	al_destroy_display(window);

}

