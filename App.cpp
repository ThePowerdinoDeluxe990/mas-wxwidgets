#include "App.h"
#include "MainFrame.h"
#include <wx/wx.h>

wxIMPLEMENT_APP(App);

bool App ::OnInit() {
	MainFrame* mainFrame = new MainFrame("Hola mundo");
	mainFrame->Show();
	mainFrame->SetClientSize(800, 600);
	mainFrame->Show();
	return true;
}