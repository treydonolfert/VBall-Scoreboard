#include "MainFrame.h"
#include <wx/wx.h>

MainFrame::MainFrame(const wxString& title, SubFrame* subFrame) : wxFrame(nullptr, wxID_ANY, title), m_subFrame(subFrame) {
	wxPanel* panel = new wxPanel(this);
	wxButton* button = new wxButton(panel, wxID_ANY, "+1", wxPoint(150, 150), wxSize(100, 35));
	wxButton* button2 = new wxButton(panel, wxID_ANY, "-1", wxPoint(150, 200), wxSize(100, 35));
	wxButton* button3 = new wxButton(panel, wxID_ANY, "+1", wxPoint(150, 250), wxSize(100, 35));
	wxButton* button4 = new wxButton(panel, wxID_ANY, "-1", wxPoint(150, 300), wxSize(100, 35));
	wxButton* button5 = new wxButton(panel, wxID_ANY, "+1", wxPoint(150, 350), wxSize(100, 35));
	wxButton* button6 = new wxButton(panel, wxID_ANY, "-1", wxPoint(150, 400), wxSize(100, 35));
	wxButton* button7 = new wxButton(panel, wxID_ANY, "+1", wxPoint(150, 450), wxSize(100, 35));
	wxButton* button8 = new wxButton(panel, wxID_ANY, "-1", wxPoint(150, 500), wxSize(100, 35));
	textCtrl = new wxTextCtrl(panel, wxID_ANY, "00", wxPoint(500, 145), wxSize(200, -1));
	textCtrl2 = new wxTextCtrl(panel, wxID_ANY, "00", wxPoint(500, 195), wxSize(200, -1));
	textCtrl3 = new wxTextCtrl(panel, wxID_ANY, "0", wxPoint(500, 245), wxSize(200, -1));
	textCtrl4 = new wxTextCtrl(panel, wxID_ANY, "0", wxPoint(500, 295), wxSize(200, -1));

	button->Bind(wxEVT_BUTTON, &MainFrame::OnButtonClicked, this);
	button2->Bind(wxEVT_BUTTON, &MainFrame::OnButtonClicked2, this);
	button3->Bind(wxEVT_BUTTON, &MainFrame::OnButtonClicked3, this);
	button4->Bind(wxEVT_BUTTON, &MainFrame::OnButtonClicked4, this);
	button5->Bind(wxEVT_BUTTON, &MainFrame::OnButtonClicked5, this);
	button6->Bind(wxEVT_BUTTON, &MainFrame::OnButtonClicked6, this);
	button7->Bind(wxEVT_BUTTON, &MainFrame::OnButtonClicked7, this);
	button8->Bind(wxEVT_BUTTON, &MainFrame::OnButtonClicked8, this);
	textCtrl->Bind(wxEVT_TEXT, &MainFrame::OnTextChanged, this);
	textCtrl2->Bind(wxEVT_TEXT, &MainFrame::OnTextChanged2, this);
	textCtrl3->Bind(wxEVT_TEXT, &MainFrame::OnTextChanged3, this);
	textCtrl4->Bind(wxEVT_TEXT, &MainFrame::OnTextChanged4, this);
	//m_timer.Bind(wxEVT_TIMER, &MainFrame::OnTimer, this);

	CreateStatusBar();
}

void MainFrame::OnButtonClicked(wxCommandEvent& evt) {
	//StartStopTimer();
	score1++;
	textCtrl->ChangeValue(wxString::Format("%02d", score1));
	m_subFrame->ChangeText(score1, score2);
}


void MainFrame::OnButtonClicked2(wxCommandEvent& evt) {
	//StartStopTimer();
	if (score1 > 0) {
		score1--;
		textCtrl->ChangeValue(wxString::Format("%02d", score1));
		m_subFrame->ChangeText(score1, score2);
	}
}


void MainFrame::OnButtonClicked3(wxCommandEvent& evt) {
	//StartStopTimer();
	score2++;
	textCtrl2->ChangeValue(wxString::Format("%02d", score2));
	m_subFrame->ChangeText(score1, score2);
}


void MainFrame::OnButtonClicked4(wxCommandEvent& evt) {
	//StartStopTimer();
	if (score2 > 0) {
		score2--;
		textCtrl2->ChangeValue(wxString::Format("%02d", score2));
		m_subFrame->ChangeText(score1, score2);
	}
}

void MainFrame::OnButtonClicked5(wxCommandEvent& evt) {
	sets1++;
	textCtrl3->ChangeValue(wxString::Format("%d", sets1));
	m_subFrame->ChangeSets(sets1, sets2);
}

void MainFrame::OnButtonClicked6(wxCommandEvent& evt) {
	if (sets1 > 0) {
		sets1--;
		textCtrl3->ChangeValue(wxString::Format("%d", sets1));
		m_subFrame->ChangeSets(sets1, sets2);
	}
}

void MainFrame::OnButtonClicked7(wxCommandEvent& evt) {
	sets2++;
	textCtrl4->ChangeValue(wxString::Format("%d", sets2));
	m_subFrame->ChangeSets(sets1, sets2);
}

void MainFrame::OnButtonClicked8(wxCommandEvent& evt) {
	if (sets2 > 0) {
		sets2--;
		textCtrl4->ChangeValue(wxString::Format("%d", sets2));
		m_subFrame->ChangeSets(sets1, sets2);
	}
}

void MainFrame::OnTextChanged(wxCommandEvent& evt) {
	wxTextCtrl* textCtrl = static_cast<wxTextCtrl*>(evt.GetEventObject());
	wxString text = textCtrl->GetValue();

	// Use wxString::ToLong() to attempt conversion
	int value;
	if (text.ToInt(&value)) {
		// Conversion successful, value contains the integer
		// Do something with the integer value here
		score1 = value;
		m_subFrame->ChangeText(score1, score2);
	}
}

void MainFrame::OnTextChanged2(wxCommandEvent& evt) {
	wxTextCtrl* textCtrl = static_cast<wxTextCtrl*>(evt.GetEventObject());
	wxString text = textCtrl->GetValue();

	// Use wxString::ToLong() to attempt conversion
	int value;
	if (text.ToInt(&value)) {
		// Conversion successful, value contains the integer
		// Do something with the integer value here
		score2 = value;
		m_subFrame->ChangeText(score1, score2);
	}
}

void MainFrame::OnTextChanged3(wxCommandEvent& evt) {
	wxTextCtrl* textCtrl = static_cast<wxTextCtrl*>(evt.GetEventObject());
	wxString text = textCtrl->GetValue();

	// Use wxString::ToLong() to attempt conversion
	int value;
	if (text.ToInt(&value)) {
		// Conversion successful, value contains the integer
		// Do something with the integer value here
		sets1 = value;
		m_subFrame->ChangeSets(sets1, sets2);
	}
}

void MainFrame::OnTextChanged4(wxCommandEvent& evt) {
	wxTextCtrl* textCtrl = static_cast<wxTextCtrl*>(evt.GetEventObject());
	wxString text = textCtrl->GetValue();

	// Use wxString::ToLong() to attempt conversion
	int value;
	if (text.ToInt(&value)) {
		// Conversion successful, value contains the integer
		// Do something with the integer value here
		sets2 = value;
		m_subFrame->ChangeSets(sets1, sets2);
	}
}
/*
void MainFrame::StartStopTimer() {
	if (m_timer.IsRunning()) {
		m_timer.Stop();
	}
	else {
		m_timer.Start(1000);
	}
}

void MainFrame::OnTimer(wxTimerEvent& evt) {
	wxLogStatus(wxString::Format("%02d", timer));
	timer++;
	wxString timeStr = wxString::Format("%02d", timer);
	textCtrl->ChangeValue(timeStr);
}
*/