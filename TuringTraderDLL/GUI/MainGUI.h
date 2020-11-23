#pragma once
#include "PortfolioPage.h"
#include "GroupsPage.h"
#include "TradingPage.h"
#include "ProfilePage.h"

namespace MainAppGUI {
	using namespace PortfolioGUI;
	using namespace GroupsGUI;
	using namespace TradingGUI;
	using namespace ProfileGUI;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainGUI
	/// </summary>
	public ref class MainGUI : public System::Windows::Forms::Form
	{
	public:
		MainGUI(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainGUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ turingLogo;

	private: System::Windows::Forms::Button^ portfolioButton;
	private: System::Windows::Forms::Button^ logoutButton;


	private: System::Windows::Forms::Button^ groupsButton;

	private: System::Windows::Forms::Button^ tradingButton;
	private: System::Windows::Forms::Button^ profileButton;
	private: System::Windows::Forms::Panel^ contentPanel;






	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->profileButton = (gcnew System::Windows::Forms::Button());
			this->logoutButton = (gcnew System::Windows::Forms::Button());
			this->groupsButton = (gcnew System::Windows::Forms::Button());
			this->tradingButton = (gcnew System::Windows::Forms::Button());
			this->portfolioButton = (gcnew System::Windows::Forms::Button());
			this->turingLogo = (gcnew System::Windows::Forms::Button());
			this->contentPanel = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel1->Controls->Add(this->profileButton);
			this->panel1->Controls->Add(this->logoutButton);
			this->panel1->Controls->Add(this->groupsButton);
			this->panel1->Controls->Add(this->tradingButton);
			this->panel1->Controls->Add(this->portfolioButton);
			this->panel1->Controls->Add(this->turingLogo);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1602, 70);
			this->panel1->TabIndex = 0;
			// 
			// profileButton
			// 
			this->profileButton->Dock = System::Windows::Forms::DockStyle::Right;
			this->profileButton->FlatAppearance->BorderSize = 0;
			this->profileButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->profileButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->profileButton->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->profileButton->Location = System::Drawing::Point(1276, 0);
			this->profileButton->Name = L"profileButton";
			this->profileButton->Size = System::Drawing::Size(150, 70);
			this->profileButton->TabIndex = 7;
			this->profileButton->Text = L"Profile";
			this->profileButton->UseVisualStyleBackColor = true;
			this->profileButton->Click += gcnew System::EventHandler(this, &MainGUI::profileButton_Click);
			// 
			// logoutButton
			// 
			this->logoutButton->Dock = System::Windows::Forms::DockStyle::Right;
			this->logoutButton->FlatAppearance->BorderSize = 0;
			this->logoutButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->logoutButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->logoutButton->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->logoutButton->Location = System::Drawing::Point(1426, 0);
			this->logoutButton->Name = L"logoutButton";
			this->logoutButton->Size = System::Drawing::Size(176, 70);
			this->logoutButton->TabIndex = 6;
			this->logoutButton->Text = L"Logout";
			this->logoutButton->UseVisualStyleBackColor = true;
			this->logoutButton->Click += gcnew System::EventHandler(this, &MainGUI::logoutButton_Click);
			// 
			// groupsButton
			// 
			this->groupsButton->Dock = System::Windows::Forms::DockStyle::Left;
			this->groupsButton->FlatAppearance->BorderSize = 0;
			this->groupsButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupsButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupsButton->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->groupsButton->Location = System::Drawing::Point(541, 0);
			this->groupsButton->Name = L"groupsButton";
			this->groupsButton->Size = System::Drawing::Size(150, 70);
			this->groupsButton->TabIndex = 5;
			this->groupsButton->Text = L"Groups";
			this->groupsButton->UseVisualStyleBackColor = true;
			this->groupsButton->Click += gcnew System::EventHandler(this, &MainGUI::groupsButton_Click);
			// 
			// tradingButton
			// 
			this->tradingButton->Dock = System::Windows::Forms::DockStyle::Left;
			this->tradingButton->FlatAppearance->BorderSize = 0;
			this->tradingButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tradingButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tradingButton->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->tradingButton->Location = System::Drawing::Point(391, 0);
			this->tradingButton->Name = L"tradingButton";
			this->tradingButton->Size = System::Drawing::Size(150, 70);
			this->tradingButton->TabIndex = 4;
			this->tradingButton->Text = L"Trading";
			this->tradingButton->UseVisualStyleBackColor = true;
			this->tradingButton->Click += gcnew System::EventHandler(this, &MainGUI::tradingButton_Click);
			// 
			// portfolioButton
			// 
			this->portfolioButton->Dock = System::Windows::Forms::DockStyle::Left;
			this->portfolioButton->FlatAppearance->BorderSize = 0;
			this->portfolioButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->portfolioButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->portfolioButton->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->portfolioButton->Location = System::Drawing::Point(241, 0);
			this->portfolioButton->Name = L"portfolioButton";
			this->portfolioButton->Size = System::Drawing::Size(150, 70);
			this->portfolioButton->TabIndex = 3;
			this->portfolioButton->Text = L"Portfolio";
			this->portfolioButton->UseVisualStyleBackColor = true;
			this->portfolioButton->Click += gcnew System::EventHandler(this, &MainGUI::portfolioButton_Click);
			// 
			// turingLogo
			// 
			this->turingLogo->Dock = System::Windows::Forms::DockStyle::Left;
			this->turingLogo->Enabled = false;
			this->turingLogo->FlatAppearance->BorderSize = 0;
			this->turingLogo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->turingLogo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->turingLogo->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->turingLogo->Location = System::Drawing::Point(0, 0);
			this->turingLogo->Name = L"turingLogo";
			this->turingLogo->Size = System::Drawing::Size(241, 70);
			this->turingLogo->TabIndex = 2;
			this->turingLogo->Text = L"TuringTrader";
			this->turingLogo->UseVisualStyleBackColor = true;
			// 
			// contentPanel
			// 
			this->contentPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->contentPanel->Location = System::Drawing::Point(0, 70);
			this->contentPanel->Name = L"contentPanel";
			this->contentPanel->Size = System::Drawing::Size(1602, 983);
			this->contentPanel->TabIndex = 1;
			// 
			// MainGUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1602, 1053);
			this->Controls->Add(this->contentPanel);
			this->Controls->Add(this->panel1);
			this->MinimumSize = System::Drawing::Size(1400, 800);
			this->Name = L"MainGUI";
			this->Text = L"MainGUI";
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
		private: Form^ activeForm = nullptr;
		private: void openChildForm(Form^ childForm) {
			try {
				if (activeForm != nullptr) {
					activeForm->Close();
				}
				activeForm = childForm;
				childForm->TopLevel = false;
				childForm->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
				childForm->Dock = System::Windows::Forms::DockStyle::Fill;
				this->contentPanel->Controls->Add(childForm);
				this->contentPanel->Tag = childForm;
				childForm->BringToFront();
				childForm->Show();
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
			}
		}
#pragma endregion
	private: System::Void tradingButton_Click(System::Object^ sender, System::EventArgs^ e) {
		TradingPage^ tradingPage = gcnew TradingPage();
		openChildForm(tradingPage);
/*		testCompany->TopLevel = false;
		testCompany->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		testCompany->Dock = System::Windows::Forms::DockStyle::Fill;
		this->contentPanel->Controls->Add(testCompany);
		testCompany->BringToFront();
		testCompany->Show();*/
	}
private: System::Void portfolioButton_Click(System::Object^ sender, System::EventArgs^ e) {
	PortfolioPage^ portfolioPage = gcnew PortfolioPage();
	openChildForm(portfolioPage);

}
private: System::Void groupsButton_Click(System::Object^ sender, System::EventArgs^ e) {
	GroupsPage^ groupsPage = gcnew GroupsPage();
	openChildForm(groupsPage);
}
private: System::Void profileButton_Click(System::Object^ sender, System::EventArgs^ e) {
	ProfilePage^ profilePage = gcnew ProfilePage();
	openChildForm(profilePage);
}
private: System::Void logoutButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
