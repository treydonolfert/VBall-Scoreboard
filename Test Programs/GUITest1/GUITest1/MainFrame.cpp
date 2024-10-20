#include "MainFrame.h"
#include <wx/wx.h>
#include <wx/spinctrl.h>

MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {
	wxPanel* panel = new wxPanel(this);
	wxButton* button = new wxButton(panel, wxID_ANY, "Button", wxPoint(150, 50), wxSize(100, 35));
	wxStaticText* staticText = new wxStaticText(panel, wxID_ANY, "StaticText", wxPoint(120, 150));
	wxTextCtrl* textCtrl = new wxTextCtrl(panel, wxID_ANY, "Editable text", wxPoint(500, 145), wxSize(200, -1));
	wxSpinCtrl* spinCtrl = new wxSpinCtrl(panel, wxID_ANY, "", wxPoint(550, 375), wxSize(100, -1));
}