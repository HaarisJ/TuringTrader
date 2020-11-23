#pragma once
#include <random>
#include <string>
#include <ctime>

using namespace MySql::Data::MySqlClient;

namespace AccountCreationGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AccountCreationPage
	/// </summary>
	public ref class AccountCreationPage : public System::Windows::Forms::Form
	{
	public:
		AccountCreationPage(void)
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
		~AccountCreationPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ usernameBox;
	private: System::Windows::Forms::TextBox^ firstNameBox;
	private: System::Windows::Forms::TextBox^ lastNameBox;
	private: System::Windows::Forms::TextBox^ emailBox;
	private: System::Windows::Forms::TextBox^ passwordBox;





	private: System::Windows::Forms::Label^ emptyErrorText;
	private: System::Windows::Forms::Label^ passwordLabel;


	private: System::Windows::Forms::Label^ usernameTakenText;
	private: System::Windows::Forms::Label^ passwordError;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->usernameBox = (gcnew System::Windows::Forms::TextBox());
			this->firstNameBox = (gcnew System::Windows::Forms::TextBox());
			this->lastNameBox = (gcnew System::Windows::Forms::TextBox());
			this->emailBox = (gcnew System::Windows::Forms::TextBox());
			this->passwordBox = (gcnew System::Windows::Forms::TextBox());
			this->emptyErrorText = (gcnew System::Windows::Forms::Label());
			this->passwordLabel = (gcnew System::Windows::Forms::Label());
			this->usernameTakenText = (gcnew System::Windows::Forms::Label());
			this->passwordError = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(21, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(248, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Please enter your account information";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(21, 77);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Username:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(21, 117);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(80, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"First Name:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(21, 153);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(80, 17);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Last Name:";
			this->label4->Click += gcnew System::EventHandler(this, &AccountCreationPage::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(21, 193);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(46, 17);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Email:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(21, 231);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(73, 17);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Password:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(183, 300);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(174, 41);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Create Account";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AccountCreationPage::button1_Click);
			// 
			// usernameBox
			// 
			this->usernameBox->Location = System::Drawing::Point(130, 72);
			this->usernameBox->Name = L"usernameBox";
			this->usernameBox->Size = System::Drawing::Size(258, 22);
			this->usernameBox->TabIndex = 7;
			// 
			// firstNameBox
			// 
			this->firstNameBox->Location = System::Drawing::Point(130, 112);
			this->firstNameBox->Name = L"firstNameBox";
			this->firstNameBox->Size = System::Drawing::Size(258, 22);
			this->firstNameBox->TabIndex = 8;
			// 
			// lastNameBox
			// 
			this->lastNameBox->Location = System::Drawing::Point(130, 148);
			this->lastNameBox->Name = L"lastNameBox";
			this->lastNameBox->Size = System::Drawing::Size(258, 22);
			this->lastNameBox->TabIndex = 9;
			// 
			// emailBox
			// 
			this->emailBox->Location = System::Drawing::Point(130, 188);
			this->emailBox->Name = L"emailBox";
			this->emailBox->Size = System::Drawing::Size(258, 22);
			this->emailBox->TabIndex = 10;
			// 
			// passwordBox
			// 
			this->passwordBox->Location = System::Drawing::Point(130, 226);
			this->passwordBox->Name = L"passwordBox";
			this->passwordBox->Size = System::Drawing::Size(258, 22);
			this->passwordBox->TabIndex = 11;
			// 
			// emptyErrorText
			// 
			this->emptyErrorText->AutoSize = true;
			this->emptyErrorText->ForeColor = System::Drawing::Color::Red;
			this->emptyErrorText->Location = System::Drawing::Point(182, 266);
			this->emptyErrorText->Name = L"emptyErrorText";
			this->emptyErrorText->Size = System::Drawing::Size(175, 17);
			this->emptyErrorText->TabIndex = 12;
			this->emptyErrorText->Text = L"Please fill out all the boxes";
			this->emptyErrorText->Visible = false;
			// 
			// passwordLabel
			// 
			this->passwordLabel->AutoSize = true;
			this->passwordLabel->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->passwordLabel->Location = System::Drawing::Point(412, 226);
			this->passwordLabel->Name = L"passwordLabel";
			this->passwordLabel->Size = System::Drawing::Size(262, 17);
			this->passwordLabel->TabIndex = 13;
			this->passwordLabel->Text = L"The password must be 5-32 letters long.\r\n";
			// 
			// usernameTakenText
			// 
			this->usernameTakenText->AutoSize = true;
			this->usernameTakenText->ForeColor = System::Drawing::Color::Red;
			this->usernameTakenText->Location = System::Drawing::Point(182, 266);
			this->usernameTakenText->Name = L"usernameTakenText";
			this->usernameTakenText->Size = System::Drawing::Size(163, 17);
			this->usernameTakenText->TabIndex = 14;
			this->usernameTakenText->Text = L"Username already taken";
			this->usernameTakenText->Visible = false;
			// 
			// passwordError
			// 
			this->passwordError->AutoSize = true;
			this->passwordError->ForeColor = System::Drawing::Color::Red;
			this->passwordError->Location = System::Drawing::Point(182, 266);
			this->passwordError->Name = L"passwordError";
			this->passwordError->Size = System::Drawing::Size(229, 17);
			this->passwordError->TabIndex = 15;
			this->passwordError->Text = L"password length must be 5-32 long";
			this->passwordError->Visible = false;
			// 
			// AccountCreationPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(682, 353);
			this->Controls->Add(this->passwordError);
			this->Controls->Add(this->usernameTakenText);
			this->Controls->Add(this->passwordLabel);
			this->Controls->Add(this->emptyErrorText);
			this->Controls->Add(this->passwordBox);
			this->Controls->Add(this->emailBox);
			this->Controls->Add(this->lastNameBox);
			this->Controls->Add(this->firstNameBox);
			this->Controls->Add(this->usernameBox);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"AccountCreationPage";
			this->Text = L"AccountCreationPage";
			this->Load += gcnew System::EventHandler(this, &AccountCreationPage::AccountCreationPage_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		emptyErrorText->Visible = false;
		usernameTakenText->Visible = false;
		passwordError->Visible = false;

		String^ username = usernameBox->Text;
		String^ firstName = firstNameBox->Text;
		String^ lastName = lastNameBox->Text;
		String^ email = emailBox->Text;
		String^ password = passwordBox->Text;
		if (String::IsNullOrWhiteSpace(username) || String::IsNullOrWhiteSpace(firstName) || String::IsNullOrWhiteSpace(lastName) || String::IsNullOrWhiteSpace(email) || String::IsNullOrWhiteSpace(password)) {
			emptyErrorText->Visible = true;
		}
		else if (password->Length < 5 || password->Length > 32) {
			passwordError->Visible = true;
		}
		else {
			try {
				String^ connection_str = "Server=35.227.90.11;Uid=root;Pwd=password;Database=TuringTrader";
				MySqlConnection^ connection = gcnew MySqlConnection(connection_str);
				MySqlCommand^ cmd = gcnew MySqlCommand("INSERT INTO users VALUES('" + username + "', '" + firstName + "', '" + lastName + "', '" + email + "', '" + password + "', '100000')", connection);
				MySqlDataReader^ dr;
				connection->Open();
				dr = cmd->ExecuteReader();
				MessageBox::Show("Your account has been created");
				this->Close();
			}
			catch (Exception^ ex) {
				usernameTakenText->Visible = true;
			}
		}
	}
private: System::Void AccountCreationPage_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
