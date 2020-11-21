#pragma once
#include "TestGUI.h"
#include "MainGUI.h"
#include <msclr\marshal_cppstd.h>

string currentUser = "test";

namespace GUI {
	using namespace AppGUI;
	using namespace MainAppGUI;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;

	/// <summary>
	/// Summary for LoginPage
	/// </summary>
	public ref class LoginPage : public System::Windows::Forms::Form
	{
	public:
		LoginPage(void)
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
		~LoginPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ loginTitle;
	protected:
	private: System::Windows::Forms::Label^ titleLabel;
	private: System::Windows::Forms::Label^ subtitleLabel;
	private: System::Windows::Forms::LinkLabel^ CreateAccount;
	private: System::Windows::Forms::Label^ loginLabel;

	private: System::Windows::Forms::Button^ loginBtn;
	private: System::Windows::Forms::LinkLabel^ forgotPassword;
	private: System::Windows::Forms::TextBox^ passwordInput;
	private: System::Windows::Forms::Label^ password;
	private: System::Windows::Forms::TextBox^ usernameInput;
	private: System::Windows::Forms::Label^ username;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->loginTitle = (gcnew System::Windows::Forms::Panel());
			this->titleLabel = (gcnew System::Windows::Forms::Label());
			this->subtitleLabel = (gcnew System::Windows::Forms::Label());
			this->CreateAccount = (gcnew System::Windows::Forms::LinkLabel());
			this->loginLabel = (gcnew System::Windows::Forms::Label());
			this->loginBtn = (gcnew System::Windows::Forms::Button());
			this->forgotPassword = (gcnew System::Windows::Forms::LinkLabel());
			this->passwordInput = (gcnew System::Windows::Forms::TextBox());
			this->password = (gcnew System::Windows::Forms::Label());
			this->usernameInput = (gcnew System::Windows::Forms::TextBox());
			this->username = (gcnew System::Windows::Forms::Label());
			this->loginTitle->SuspendLayout();
			this->SuspendLayout();
			// 
			// loginTitle
			// 
			this->loginTitle->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->loginTitle->Controls->Add(this->titleLabel);
			this->loginTitle->Controls->Add(this->subtitleLabel);
			this->loginTitle->Dock = System::Windows::Forms::DockStyle::Left;
			this->loginTitle->Location = System::Drawing::Point(0, 0);
			this->loginTitle->Margin = System::Windows::Forms::Padding(6, 4, 6, 4);
			this->loginTitle->Name = L"loginTitle";
			this->loginTitle->Size = System::Drawing::Size(874, 1277);
			this->loginTitle->TabIndex = 20;
			// 
			// titleLabel
			// 
			this->titleLabel->AutoSize = true;
			this->titleLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->titleLabel->Location = System::Drawing::Point(110, 112);
			this->titleLabel->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->titleLabel->Name = L"titleLabel";
			this->titleLabel->Size = System::Drawing::Size(596, 108);
			this->titleLabel->TabIndex = 9;
			this->titleLabel->Text = L"TuringTrader";
			// 
			// subtitleLabel
			// 
			this->subtitleLabel->AutoSize = true;
			this->subtitleLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->subtitleLabel->Location = System::Drawing::Point(38, 287);
			this->subtitleLabel->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->subtitleLabel->Name = L"subtitleLabel";
			this->subtitleLabel->Size = System::Drawing::Size(788, 63);
			this->subtitleLabel->TabIndex = 10;
			this->subtitleLabel->Text = L" A CISC 320 Trading Simulator";
			// 
			// CreateAccount
			// 
			this->CreateAccount->AutoSize = true;
			this->CreateAccount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CreateAccount->Location = System::Drawing::Point(1810, 760);
			this->CreateAccount->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->CreateAccount->Name = L"CreateAccount";
			this->CreateAccount->Size = System::Drawing::Size(297, 46);
			this->CreateAccount->TabIndex = 19;
			this->CreateAccount->TabStop = true;
			this->CreateAccount->Text = L"Create Account";
			// 
			// loginLabel
			// 
			this->loginLabel->AutoSize = true;
			this->loginLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loginLabel->Location = System::Drawing::Point(1164, 238);
			this->loginLabel->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->loginLabel->Name = L"loginLabel";
			this->loginLabel->Size = System::Drawing::Size(896, 97);
			this->loginLabel->TabIndex = 18;
			this->loginLabel->Text = L"Login to Turing Trader";
			// 
			// loginBtn
			// 
			this->loginBtn->BackColor = System::Drawing::Color::MediumBlue;
			this->loginBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loginBtn->ForeColor = System::Drawing::Color::GhostWhite;
			this->loginBtn->Location = System::Drawing::Point(1130, 911);
			this->loginBtn->Margin = System::Windows::Forms::Padding(6, 4, 6, 4);
			this->loginBtn->Name = L"loginBtn";
			this->loginBtn->Size = System::Drawing::Size(362, 126);
			this->loginBtn->TabIndex = 17;
			this->loginBtn->Text = L"Login";
			this->loginBtn->UseVisualStyleBackColor = false;
			this->loginBtn->Click += gcnew System::EventHandler(this, &LoginPage::loginBtn_Click);
			// 
			// forgotPassword
			// 
			this->forgotPassword->AutoSize = true;
			this->forgotPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->forgotPassword->Location = System::Drawing::Point(1122, 760);
			this->forgotPassword->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->forgotPassword->Name = L"forgotPassword";
			this->forgotPassword->Size = System::Drawing::Size(345, 46);
			this->forgotPassword->TabIndex = 16;
			this->forgotPassword->TabStop = true;
			this->forgotPassword->Text = L"Forgot Password\?";
			this->forgotPassword->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginPage::forgotPassword_LinkClicked);
			// 
			// passwordInput
			// 
			this->passwordInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passwordInput->Location = System::Drawing::Point(1570, 606);
			this->passwordInput->Margin = System::Windows::Forms::Padding(6, 4, 6, 4);
			this->passwordInput->Name = L"passwordInput";
			this->passwordInput->Size = System::Drawing::Size(530, 82);
			this->passwordInput->TabIndex = 15;
			// 
			// password
			// 
			this->password->AutoSize = true;
			this->password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password->Location = System::Drawing::Point(1116, 620);
			this->password->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(341, 75);
			this->password->TabIndex = 14;
			this->password->Text = L"Password:";
			// 
			// usernameInput
			// 
			this->usernameInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->usernameInput->Location = System::Drawing::Point(1570, 459);
			this->usernameInput->Margin = System::Windows::Forms::Padding(6, 4, 6, 4);
			this->usernameInput->Name = L"usernameInput";
			this->usernameInput->Size = System::Drawing::Size(530, 82);
			this->usernameInput->TabIndex = 13;
			this->usernameInput->TextChanged += gcnew System::EventHandler(this, &LoginPage::usernameInput_TextChanged);
			// 
			// username
			// 
			this->username->AutoSize = true;
			this->username->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username->Location = System::Drawing::Point(1116, 459);
			this->username->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(356, 75);
			this->username->TabIndex = 12;
			this->username->Text = L"Username:";
			// 
			// LoginPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(2372, 1277);
			this->Controls->Add(this->loginTitle);
			this->Controls->Add(this->CreateAccount);
			this->Controls->Add(this->loginLabel);
			this->Controls->Add(this->loginBtn);
			this->Controls->Add(this->forgotPassword);
			this->Controls->Add(this->passwordInput);
			this->Controls->Add(this->password);
			this->Controls->Add(this->usernameInput);
			this->Controls->Add(this->username);
			this->Margin = System::Windows::Forms::Padding(6);
			this->MaximumSize = System::Drawing::Size(2404, 1365);
			this->Name = L"LoginPage";
			this->Text = L"LoginPage";
			this->Load += gcnew System::EventHandler(this, &LoginPage::LoginPage_Load);
			this->loginTitle->ResumeLayout(false);
			this->loginTitle->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void LoginPage_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void loginBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ s = usernameInput->Text;
		currentUser = marshal_as<string>(s);
		MainGUI^ test = gcnew MainGUI();
		this->Hide();
		test->ShowDialog();
		this->Show();
	}
	private: System::Void forgotPassword_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	}
	private: System::Void usernameInput_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}