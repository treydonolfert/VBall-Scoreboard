#pragma once
#include <wx/wx.h>
#include "SubFrame.h"

class MainFrame : public wxFrame
{
public:
	//int timer = 50;
	//wxTimer m_timer;
	int score1 = 0;
	int score2 = 0;
	int sets1 = 0;
	int sets2 = 0;
	wxTextCtrl* textCtrl;
	wxTextCtrl* textCtrl2;
	wxTextCtrl* textCtrl3;
	wxTextCtrl* textCtrl4;
	MainFrame(const wxString& title, SubFrame* subFrame);
private:
	void OnButtonClicked(wxCommandEvent& evt);
	void OnButtonClicked2(wxCommandEvent& evt);
	void OnButtonClicked3(wxCommandEvent& evt);
	void OnButtonClicked4(wxCommandEvent& evt);
	void OnButtonClicked5(wxCommandEvent& evt);
	void OnButtonClicked6(wxCommandEvent& evt);
	void OnButtonClicked7(wxCommandEvent& evt);
	void OnButtonClicked8(wxCommandEvent& evt);
	void OnTextChanged(wxCommandEvent& evt);
	void OnTextChanged2(wxCommandEvent& evt);
	void OnTextChanged3(wxCommandEvent& evt);
	void OnTextChanged4(wxCommandEvent& evt);
	SubFrame* m_subFrame;
	//void StartStopTimer();
	//void OnTimer(wxTimerEvent& evt);
};

