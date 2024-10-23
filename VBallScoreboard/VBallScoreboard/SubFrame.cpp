#include "SubFrame.h"
#include <wx/wx.h>

SubFrame::SubFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {
	wxPanel* panel = new wxPanel(this);
	score1txt = new wxStaticText(panel, wxID_ANY, "00", wxPoint(150, 150));
	score2txt = new wxStaticText(panel, wxID_ANY, "00", wxPoint(150, 200));
	sets1txt = new wxStaticText(panel, wxID_ANY, "0", wxPoint(150, 250));
	sets2txt = new wxStaticText(panel, wxID_ANY, "0", wxPoint(150, 300));
	//textCtrl = new wxTextCtrl(panel, wxID_ANY, "0", wxPoint(500, 145), wxSize(200, -1));
}

void SubFrame::ChangeText(int score1, int score2) {
	score1txt->SetLabel(wxString::Format("%02d", score1));
	score2txt->SetLabel(wxString::Format("%02d", score2));
}

void SubFrame::ChangeSets(int sets1, int sets2) {
	sets1txt->SetLabel(wxString::Format("%d", sets1));
	sets2txt->SetLabel(wxString::Format("%d", sets2));
}