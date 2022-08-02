#include <Windows.h>

int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PWSTR pCmdLine, int nCmdShow)
{
	MessageBox(nullptr, L"Hello Window", nullptr, MB_OK);
	
	return 0;
}