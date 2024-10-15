#pragma once
#include <wx/wx.h>
#include "BankFunctions.h"

class MainFrame : public wxFrame
{
public:
	MainFrame(const wxString& title);
private:
	//Bankfunctions class
	BankFunctions bank;
	//MAINMENU
	void FirstPanel();
	void ATMPANEL();
	// START MENU BUTTONS
	void OnButton1Clicked(wxCommandEvent& evt);
	void OnButton2Clicked(wxCommandEvent& evt);
	void OnButton3Clicked(wxCommandEvent& evt);
	// BANK MAIN MENU BUTTONS
	void OnEnrollButtonClicked(wxCommandEvent& evt);
	void OnReturnButtonClicked(wxCommandEvent& evt);
	void OnInputChanged(wxCommandEvent& evt);
	void onConfirmButtonClicked(wxCommandEvent& evt);
	void ExitEnroll(wxCommandEvent& evt);
	// ATM MAIN MENU BUTTONS
	void OnDisplayBalanceClicked(wxCommandEvent& evt);
	void OnWithdrawClicked(wxCommandEvent& evt);
	void OnDepositClicked(wxCommandEvent& evt);
	void OnTransferClicked(wxCommandEvent& evt);
	void OnChangePinClicked(wxCommandEvent& evt);
	void OnExitATMClicked(wxCommandEvent& evt);
	void OnOkayButtonClicked(wxCommandEvent& evt);
	
};
