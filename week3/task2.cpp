#include <iostream>
using namespace std;
main()
{
		int minutes;
		int fps;
		int frames;
		cout << "Number of Minutes: ";
		cin >> minutes;
		cout << "Frames per Second: " ;
		cin >> fps;
		frames = minutes * fps * 60;
 		cout << "Total Number of Frames: " << frames;
		
}