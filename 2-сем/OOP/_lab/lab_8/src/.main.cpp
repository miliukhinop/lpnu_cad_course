#include<iostream>
#include<math.h>

double cone_frustum_area (double r, double R, double slant_height);
double celsius_to_fahrenheit (double celsius);
double arctg_taylor (double x, int n);
double sphere_area (double r);
double sphere_volume (double r);

/* #include<gtk-3.0/gtk/gtk.h> */
#include<gtkmm-3.0/gtkmm.h>

// Button click event handler
void on_button_clicked(GtkWidget *widget, gpointer data)
{
    g_print("Button clicked!\n");
}

int main()
{
	// Initialize GTK
	gtk_init(&argc, &argv);

	// Create the main window
	GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gtk_window_set_title(GTK_WINDOW(window), "Simple GTK App");
	gtk_container_set_border_width(GTK_CONTAINER(window), 10);
	gtk_widget_set_size_request(window, 300, 200);
	g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

	// Create a button
	GtkWidget *button = gtk_button_new_with_label("Click Me!");
	g_signal_connect(button, "clicked", G_CALLBACK(on_button_clicked), NULL);

	// Add the button to the window
	gtk_container_add(GTK_CONTAINER(window), button);

	// Show all the widgets
	gtk_widget_show_all(window);

	// Start the GTK main loop
	gtk_main();

	using namespace std;

	cout << cone_frustum_area(1,1,2) << endl;
	cout << celsius_to_fahrenheit(37) << endl;
	cout << arctg_taylor(0.5, 4) << endl;
	cout << atan(sqrt(1)) << endl;
	cout << sphere_volume(1) << endl;
	cout << sphere_area(1) << endl;
	return 0;
}
