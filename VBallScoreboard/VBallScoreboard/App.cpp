#include "App.h"
#include "MainFrame.h"
#include "SubFrame.h"
#include <wx/wx.h>

wxIMPLEMENT_APP(App);

bool App::OnInit() {
	SubFrame* subFrame = new SubFrame("Scoreboard");
	MainFrame* mainFrame = new MainFrame("Scoreboard Controller", subFrame);
	//mainFrame->SetClientSize(x,y);
	//mainFrame->Center();
	mainFrame->Show();
	subFrame->Show();
	return true;
}