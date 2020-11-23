#pragma once
#include "TestGUI.h"
#include "MainGUI.h"
#include "AccountCreationPage.h"
#include <msclr\marshal_cppstd.h>

string currentUser = "test_user";

namespace GUI {
	using namespace AppGUI;
	using namespace MainAppGUI;
	using namespace AccountCreationGUI;
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

	private: System::Windows::Forms::TextBox^ passwordInput;
	private: System::Windows::Forms::Label^ password;
	private: System::Windows::Forms::TextBox^ usernameInput;
	private: System::Windows::Forms::Label^ username;
	private: System::Windows::Forms::Label^ invalidInputsText;



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
			this->passwordInput = (gcnew System::Windows::Forms::TextBox());
			this->password = (gcnew System::Windows::Forms::Label());
			this->usernameInput = (gcnew System::Windows::Forms::TextBox());
			this->username = (gcnew System::Windows::Forms::Label());
			this->invalidInputsText = (gcnew System::Windows::Forms::Label());
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
			this->loginTitle->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->loginTitle->Name = L"loginTitle";
			this->loginTitle->Size = System::Drawing::Size(437, 653);
			this->loginTitle->TabIndex = 20;
			// 
			// titleLabel
			// 
			this->titleLabel->AutoSize = true;
			this->titleLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->titleLabel->Location = System::Drawing::Point(55, 58);
			this->titleLabel->Name = L"titleLabel";
			this->titleLabel->Size = System::Drawing::Size(302, 55);
			this->titleLabel->TabIndex = 9;
			this->titleLabel->Text = L"TuringTrader";
			// 
			// subtitleLabel
			// 
			this->subtitleLabel->AutoSize = true;
			this->subtitleLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->subtitleLabel->Location = System::Drawing::Point(19, 148);
			this->subtitleLabel->Name = L"subtitleLabel";
			this->subtitleLabel->Size = System::Drawing::Size(401, 32);
			this->subtitleLabel->TabIndex = 10;
			this->subtitleLabel->Text = L" A CISC 320 Trading Simulator";
			// 
			// CreateAccount
			// 
			this->CreateAccount->AutoSize = true;
			this->CreateAccount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CreateAccount->Location = System::Drawing::Point(995, 194);
			this->CreateAccount->Name = L"CreateAccount";
			this->CreateAccount->Size = System::Drawing::Size(148, 25);
			this->CreateAccount->TabIndex = 19;
			this->CreateAccount->TabStop = true;
			this->CreateAccount->Text = L"Create Account";
			this->CreateAccount->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginPage::CreateAccount_LinkClicked);
			// 
			// loginLabel
			// 
			this->loginLabel->AutoSize = true;
			this->loginLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loginLabel->Location = System::Drawing::Point(621, 86);
			this->loginLabel->Name = L"loginLabel";
			this->loginLabel->Size = System::Drawing::Size(445, 51);
			this->loginLabel->TabIndex = 18;
			this->loginLabel->Text = L"Login to Turing Trader";
			// 
			// loginBtn
			// 
			this->loginBtn->BackColor = System::Drawing::Color::MediumBlue;
			this->loginBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loginBtn->ForeColor = System::Drawing::Color::GhostWhite;
			this->loginBtn->Location = System::Drawing::Point(717, 438);
			this->loginBtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->loginBtn->Name = L"loginBtn";
			this->loginBtn->Size = System::Drawing::Size(181, 65);
			this->loginBtn->TabIndex = 17;
			this->loginBtn->Text = L"Login";
			this->loginBtn->UseVisualStyleBackColor = false;
			this->loginBtn->Click += gcnew System::EventHandler(this, &LoginPage::loginBtn_Click);
			// 
			// passwordInput
			// 
			this->passwordInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passwordInput->Location = System::Drawing::Point(764, 313);
			this->passwordInput->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->passwordInput->Name = L"passwordInput";
			this->passwordInput->Size = System::Drawing::Size(379, 34);
			this->passwordInput->TabIndex = 15;
			// 
			// password
			// 
			this->password->AutoSize = true;
			this->password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password->Location = System::Drawing::Point(558, 320);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(126, 29);
			this->password->TabIndex = 14;
			this->password->Text = L"Password:";
			// 
			// usernameInput
			// 
			this->usernameInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->usernameInput->Location = System::Drawing::Point(764, 237);
			this->usernameInput->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->usernameInput->Name = L"usernameInput";
			this->usernameInput->Size = System::Drawing::Size(379, 34);
			this->usernameInput->TabIndex = 13;
			this->usernameInput->TextChanged += gcnew System::EventHandler(this, &LoginPage::usernameInput_TextChanged);
			// 
			// username
			// 
			this->username->AutoSize = true;
			this->username->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username->Location = System::Drawing::Point(558, 237);
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(130, 29);
			this->username->TabIndex = 12;
			this->username->Text = L"Username:";
			// 
			// invalidInputsText
			// 
			this->invalidInputsText->AutoSize = true;
			this->invalidInputsText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->invalidInputsText->ForeColor = System::Drawing::Color::Red;
			this->invalidInputsText->Location = System::Drawing::Point(693, 394);
			this->invalidInputsText->Name = L"invalidInputsText";
			this->invalidInputsText->Size = System::Drawing::Size(232, 20);
			this->invalidInputsText->TabIndex = 21;
			this->invalidInputsText->Text = L"Invalid username or password";
			this->invalidInputsText->Visible = false;
			// 
			// LoginPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1182, 653);
			this->Controls->Add(this->invalidInputsText);
			this->Controls->Add(this->loginTitle);
			this->Controls->Add(this->CreateAccount);
			this->Controls->Add(this->loginLabel);
			this->Controls->Add(this->loginBtn);
			this->Controls->Add(this->passwordInput);
			this->Controls->Add(this->password);
			this->Controls->Add(this->usernameInput);
			this->Controls->Add(this->username);
			this->MaximumSize = System::Drawing::Size(1200, 700);
			this->MinimumSize = System::Drawing::Size(1200, 700);
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
		invalidInputsText->Visible = false;
		bool validUsername = false;
		bool validPassword = false;
		String^ userNameUsing;
		String^ passwordUsing;

		try {
			String^ connection_str = "Server=35.227.90.11;Uid=root;Pwd=password;Database=TuringTrader";
			MySqlConnection^ connection = gcnew MySqlConnection(connection_str);
			//using this cmd line, query the username.
			MySqlCommand^ cmd = gcnew MySqlCommand("SELECT username FROM TuringTrader.users", connection);
			MySqlDataReader^ dr;
			connection->Open();
			dr = cmd->ExecuteReader();
			while (dr->Read()) {
				if (usernameInput->Text == dr->GetString(0)) {
					validUsername = true;
					userNameUsing = dr->GetString(0);
					break;
				}
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("something has gone wrong");
		}

		if (validUsername) {
			try {
				String^ connection_str = "Server=35.227.90.11;Uid=root;Pwd=password;Database=TuringTrader";
				MySqlConnection^ connection = gcnew MySqlConnection(connection_str);
				//using this cmd line, query the username.
				MySqlCommand^ cmd = gcnew MySqlCommand("SELECT PASSWORD FROM TuringTrader.users where username='" + userNameUsing + "'", connection);
				MySqlDataReader^ dr;
				connection->Open();
				dr = cmd->ExecuteReader();
				while (dr->Read()) {
					if (passwordInput->Text == dr->GetString(0)) {
						validPassword = true;
					}					
				}
			}
			catch (Exception^ ex) {
				MessageBox::Show("something has gone wrong2");
			}
		}


		if (validPassword && validUsername) {
			String^ s = usernameInput->Text;
			currentUser = marshal_as<string>(s);
			MainGUI^ mainGuiWindow = gcnew MainGUI();
			this->Hide();
			mainGuiWindow->ShowDialog();
			this->Close();
		}
		else {
			passwordInput->Text = "";
			invalidInputsText->Visible = true;
		}


	}
private: System::Void CreateAccount_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	invalidInputsText->Visible = false;
	AccountCreationPage^ accountCreationDialog = gcnew AccountCreationPage();
	accountCreationDialog->ShowDialog();
}
		private: System::Void usernameInput_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		}
};
}
