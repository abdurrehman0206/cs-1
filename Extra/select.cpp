
#include <iostream>
#include <conio.h>
#include <windows.h>
#include <cstdlib>

using namespace std;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE); 
COORD CursorPosition; 

void g_xy(int,int); 
int main()
{
	int pos=0, run, y=0;
	bool running = true;
	
	while(running)
	{
		system("pause>nul");
		
		if(GetAsyncKeyState(VK_DOWN) && y != 9)
			{
				g_xy(35,y); cout << "  ";
				y++;
				g_xy(35,y); cout << "<=";
				pos++;
				continue;
				
			}
			
		if(GetAsyncKeyState(VK_UP) && y != 0)
			{
				g_xy(35,y); cout << "  ";
				y--;
				g_xy(35,y); cout << "<=";
				pos--;
				continue;
			}
			
		if(GetAsyncKeyState(VK_RETURN)){ 
			
			switch(pos){
				
				case 0: {
					
					break;
				}
						
				case 1: {

					break;
				}
					
				case 2: {

					break;
				}
					
				case 3: {

					break;
				}
					
				case 4: {

                    break;
                }
                case 5: {

                    break;
                }
                case 6: {

                    break;
                }
				
			}
				
		}		
		
	}

	return 0;
}

void g_xy(int x, int y) 
{ 
	CursorPosition.X = x; 
	CursorPosition.Y = y; 
	SetConsoleCursorPosition(console,CursorPosition); 
}