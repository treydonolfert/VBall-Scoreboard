#pragma once
#include <wx/wx.h>

class SubFrame : public wxFrame
{
public:
	wxStaticText* score1txt;
	wxStaticText* score2txt;
	wxStaticText* sets1txt;
	wxStaticText* sets2txt;
	SubFrame(const wxString& title);
	void ChangeText(int score1, int score2);
	void ChangeSets(int sets1, int sets2);
};

