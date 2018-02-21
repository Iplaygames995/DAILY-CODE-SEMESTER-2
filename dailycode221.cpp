#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>

int main()
{
	  al_init();
	  al_init_primitives_addon();
	  auto disp = al_create_display(800, 600);
	  auto queue = al_create_event_queue();
	  al_register_event_source(queue, al_get_display_event_source(disp));
	  al_clear_to_color(al_map_rgb_f(0, 0, 0));
	
		  struct MyPoint
		  {
		    float x, y;
		    int something_else;
		  };
	
		  const size_t num_points1 = 5;
	MyPoint points1[5] =
		  {
		    {100, 100, 0},
			    {150, 150, 0},
			  {220, 200, 0},
			   {275, 300, 0},
			   {230, 500, 0}
		  };
	
		  al_draw_ribbon((float*)points1, sizeof(MyPoint), al_map_rgb_f(1, 0, 0.5), 10, num_points1);
	
		 const size_t num_points2 = num_points1 * 2;
	 auto points2 = new MyPoint[num_points2];
	
		  al_calculate_ribbon((float*)points2, sizeof(MyPoint), (float*)points1, sizeof(MyPoint), 30, num_points1);
	
		  for (size_t ii = 0; ii < num_points2; ii++)
		    al_draw_filled_circle(points2[ii].x, points2[ii].y, 5, al_map_rgb_f(1, 0.5, 0));
	
		  float spline_control_points[8] =
		  {
			    400, 150,
			    100, 250,
			    650, 425,
			    200, 570
			  };
	
		  al_calculate_spline((float*)points2, sizeof(MyPoint), spline_control_points, 30, num_points1);
	
		  for (size_t ii = 0; ii < num_points2; ii++)
		    al_draw_filled_circle(points2[ii].x, points2[ii].y, 5, al_map_rgb_f(0.5, 1, 0));
	
		  al_flip_display();
	  ALLEGRO_EVENT ev;
	  al_wait_for_event(queue, &ev);
	
		  delete[] points2;
	}