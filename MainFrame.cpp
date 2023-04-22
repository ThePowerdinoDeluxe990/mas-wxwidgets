#include "MainFrame.h"
#include <wx/wx.h>

enum IDs {
	BUTTON_ID=2,
	SLIDER_ID=3,
	TEXT_ID=4,
	BUTTON1_ID=5
};

wxBEGIN_EVENT_TABLE(MainFrame, wxFrame)
	EVT_BUTTON(BUTTON1_ID, MainFrame::OnButton1Clicked)
	EVT_BUTTON(BUTTON_ID, MainFrame::OnButtonClicked)
	EVT_SLIDER(SLIDER_ID,MainFrame::OnSliderChanged)
	EVT_TEXT(TEXT_ID, MainFrame::OnTextChange)
wxEND_EVENT_TABLE()

MainFrame::MainFrame(const wxString & title):wxFrame(nullptr,wxID_ANY,title){
	wxPanel* panel = new wxPanel(this);

	wxButton* button1 = new wxButton(panel, BUTTON1_ID, "alert", wxPoint(300, 300), wxSize(100, 35));
	wxButton* button= new wxButton(panel, BUTTON_ID, "boton", wxPoint(150, 50), wxSize(100, 35));
	wxSlider* slider = new wxSlider(panel, SLIDER_ID, 0, 0, 100, wxPoint(300, 200), wxSize(200, -1));
	wxTextCtrl* text = new wxTextCtrl(panel, TEXT_ID, " ", wxPoint(300, 375), wxSize(200, -1));

	

	CreateStatusBar();
}
void MainFrame::OnButton1Clicked(wxCommandEvent& evt) {
	wxMessageBox(wxT("Me gustan las tetas"),("Titulo"));

}

void MainFrame::OnButtonClicked(wxCommandEvent& evt) {

	wxString stirng = wxString::Format("Clicks:", evt.GetInt());
	wxLogStatus(stirng);
	
}

void MainFrame::OnSliderChanged(wxCommandEvent& evt) {
	wxString str = wxString::Format("Slider Value: %d", evt.GetInt());
	wxLogStatus(str);
}

void MainFrame :: OnTextChange(wxCommandEvent& evt) {
	wxString str = wxString::Format("Text: %s", evt.GetString());
	wxLogStatus(str);
}
