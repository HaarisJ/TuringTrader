#pragma once
#include "Stock.h"

namespace AppGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CompanyPage
	/// </summary>
	public ref class CompanyPage : public System::Windows::Forms::Form
	{
	public:
		CompanyPage(void)
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
		~CompanyPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonTest;
	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ loginPanel;

	private: System::Windows::Forms::Label^ username;
	private: System::Windows::Forms::LinkLabel^ forgotPassword;

	private: System::Windows::Forms::TextBox^ passwordInput;
	private: System::Windows::Forms::Label^ password;
	private: System::Windows::Forms::TextBox^ usernameInput;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ loginBtn;
	private: System::Windows::Forms::Label^ subtitleLabel;

	private: System::Windows::Forms::Label^ titleLabel;

	private: System::Windows::Forms::LinkLabel^ CreateAccount;
	private: System::Windows::Forms::Panel^ loginTitle;
	private: System::Windows::Forms::TabControl^ turingTraderTabs;


	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ portfolioTab;
	private: System::Windows::Forms::TabPage^ tradingTab;
	private: System::Windows::Forms::TabPage^ groupsTab;
	private: System::Windows::Forms::TabPage^ settingsTab;
	private: System::Windows::Forms::TabPage^ profileTab;







	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ logoutBtnPortfolio;

	private: System::Windows::Forms::Button^ logoutBtnTrading;
	private: System::Windows::Forms::Button^ logoutBtnGroups;
	private: System::Windows::Forms::Button^ logoutBtnSettings;
	private: System::Windows::Forms::Button^ logoutBtnProfile;
	private: System::Windows::Forms::Label^ chartTitle;





	private: System::Windows::Forms::Label^ portfolioVal;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label14;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ percentageReturn;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;

	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::LinkLabel^ linkLabel2;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Panel^ panel3;

private: System::Windows::Forms::Panel^ panel2;
private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::Label^ label58;
private: System::Windows::Forms::Label^ label55;
private: System::Windows::Forms::Label^ label52;
private: System::Windows::Forms::Label^ label57;
private: System::Windows::Forms::Label^ label54;
private: System::Windows::Forms::Label^ label51;
private: System::Windows::Forms::Label^ label56;
private: System::Windows::Forms::Label^ label53;
private: System::Windows::Forms::Label^ label50;
private: System::Windows::Forms::Label^ label49;
private: System::Windows::Forms::Label^ label48;
private: System::Windows::Forms::Label^ label47;
private: System::Windows::Forms::Label^ label46;
private: System::Windows::Forms::Label^ label45;
private: System::Windows::Forms::Label^ label44;
private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::Label^ label40;
private: System::Windows::Forms::Label^ label41;
private: System::Windows::Forms::Label^ label42;
private: System::Windows::Forms::Label^ label43;
private: System::Windows::Forms::Label^ label59;
private: System::Windows::Forms::Button^ button6;
private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::Label^ label60;
private: System::Windows::Forms::Button^ button12;
private: System::Windows::Forms::Panel^ panel4;
private: System::Windows::Forms::PictureBox^ pictureBox1;
private: System::Windows::Forms::Label^ label70;
private: System::Windows::Forms::Label^ label69;
private: System::Windows::Forms::Label^ label68;
private: System::Windows::Forms::Label^ label67;
private: System::Windows::Forms::Label^ label66;
private: System::Windows::Forms::Label^ label65;
private: System::Windows::Forms::Button^ button11;
private: System::Windows::Forms::Button^ button10;
private: System::Windows::Forms::Button^ button9;
private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::Label^ label64;
private: System::Windows::Forms::Label^ label63;
private: System::Windows::Forms::Label^ label62;
private: System::Windows::Forms::Label^ label61;
private: System::Windows::Forms::PictureBox^ pictureBox3;
private: System::Windows::Forms::PictureBox^ pictureBox2;
private: System::Windows::Forms::Label^ label72;
private: System::Windows::Forms::Label^ label71;

























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
			this->buttonTest = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->loginPanel = (gcnew System::Windows::Forms::Panel());
			this->loginTitle = (gcnew System::Windows::Forms::Panel());
			this->titleLabel = (gcnew System::Windows::Forms::Label());
			this->subtitleLabel = (gcnew System::Windows::Forms::Label());
			this->CreateAccount = (gcnew System::Windows::Forms::LinkLabel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->loginBtn = (gcnew System::Windows::Forms::Button());
			this->forgotPassword = (gcnew System::Windows::Forms::LinkLabel());
			this->passwordInput = (gcnew System::Windows::Forms::TextBox());
			this->password = (gcnew System::Windows::Forms::Label());
			this->usernameInput = (gcnew System::Windows::Forms::TextBox());
			this->username = (gcnew System::Windows::Forms::Label());
			this->turingTraderTabs = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->portfolioTab = (gcnew System::Windows::Forms::TabPage());
			this->label72 = (gcnew System::Windows::Forms::Label());
			this->label71 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->percentageReturn = (gcnew System::Windows::Forms::Label());
			this->portfolioVal = (gcnew System::Windows::Forms::Label());
			this->chartTitle = (gcnew System::Windows::Forms::Label());
			this->logoutBtnPortfolio = (gcnew System::Windows::Forms::Button());
			this->tradingTab = (gcnew System::Windows::Forms::TabPage());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->logoutBtnTrading = (gcnew System::Windows::Forms::Button());
			this->groupsTab = (gcnew System::Windows::Forms::TabPage());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->logoutBtnGroups = (gcnew System::Windows::Forms::Button());
			this->settingsTab = (gcnew System::Windows::Forms::TabPage());
			this->logoutBtnSettings = (gcnew System::Windows::Forms::Button());
			this->profileTab = (gcnew System::Windows::Forms::TabPage());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->logoutBtnProfile = (gcnew System::Windows::Forms::Button());
			this->loginPanel->SuspendLayout();
			this->loginTitle->SuspendLayout();
			this->turingTraderTabs->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->portfolioTab->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->tradingTab->SuspendLayout();
			this->groupsTab->SuspendLayout();
			this->panel3->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->settingsTab->SuspendLayout();
			this->profileTab->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// buttonTest
			// 
			this->buttonTest->Location = System::Drawing::Point(172, 234);
			this->buttonTest->Name = L"buttonTest";
			this->buttonTest->Size = System::Drawing::Size(75, 23);
			this->buttonTest->TabIndex = 0;
			this->buttonTest->Text = L"button1";
			this->buttonTest->UseVisualStyleBackColor = true;
			this->buttonTest->Click += gcnew System::EventHandler(this, &CompanyPage::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(128, 167);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"label1";
			// 
			// loginPanel
			// 
			this->loginPanel->Controls->Add(this->loginTitle);
			this->loginPanel->Controls->Add(this->CreateAccount);
			this->loginPanel->Controls->Add(this->label2);
			this->loginPanel->Controls->Add(this->loginBtn);
			this->loginPanel->Controls->Add(this->forgotPassword);
			this->loginPanel->Controls->Add(this->passwordInput);
			this->loginPanel->Controls->Add(this->password);
			this->loginPanel->Controls->Add(this->usernameInput);
			this->loginPanel->Controls->Add(this->username);
			this->loginPanel->Location = System::Drawing::Point(1, 0);
			this->loginPanel->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->loginPanel->Name = L"loginPanel";
			this->loginPanel->Size = System::Drawing::Size(994, 594);
			this->loginPanel->TabIndex = 2;
			this->loginPanel->Visible = false;
			this->loginPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &CompanyPage::loginPanel_Paint);
			// 
			// loginTitle
			// 
			this->loginTitle->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->loginTitle->Controls->Add(this->titleLabel);
			this->loginTitle->Controls->Add(this->subtitleLabel);
			this->loginTitle->Location = System::Drawing::Point(2, 0);
			this->loginTitle->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->loginTitle->Name = L"loginTitle";
			this->loginTitle->Size = System::Drawing::Size(328, 594);
			this->loginTitle->TabIndex = 11;
			// 
			// titleLabel
			// 
			this->titleLabel->AutoSize = true;
			this->titleLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->titleLabel->Location = System::Drawing::Point(41, 47);
			this->titleLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->titleLabel->Name = L"titleLabel";
			this->titleLabel->Size = System::Drawing::Size(240, 44);
			this->titleLabel->TabIndex = 9;
			this->titleLabel->Text = L"TuringTrader";
			// 
			// subtitleLabel
			// 
			this->subtitleLabel->AutoSize = true;
			this->subtitleLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->subtitleLabel->Location = System::Drawing::Point(14, 120);
			this->subtitleLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->subtitleLabel->Name = L"subtitleLabel";
			this->subtitleLabel->Size = System::Drawing::Size(311, 26);
			this->subtitleLabel->TabIndex = 10;
			this->subtitleLabel->Text = L" A CISC 320 Trading Simulator";
			// 
			// CreateAccount
			// 
			this->CreateAccount->AutoSize = true;
			this->CreateAccount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CreateAccount->Location = System::Drawing::Point(680, 317);
			this->CreateAccount->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->CreateAccount->Name = L"CreateAccount";
			this->CreateAccount->Size = System::Drawing::Size(120, 20);
			this->CreateAccount->TabIndex = 8;
			this->CreateAccount->TabStop = true;
			this->CreateAccount->Text = L"Create Account";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(438, 98);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(357, 39);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Login to Turing Trader";
			// 
			// loginBtn
			// 
			this->loginBtn->BackColor = System::Drawing::Color::MediumBlue;
			this->loginBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loginBtn->ForeColor = System::Drawing::Color::GhostWhite;
			this->loginBtn->Location = System::Drawing::Point(425, 380);
			this->loginBtn->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->loginBtn->Name = L"loginBtn";
			this->loginBtn->Size = System::Drawing::Size(136, 53);
			this->loginBtn->TabIndex = 5;
			this->loginBtn->Text = L"Login";
			this->loginBtn->UseVisualStyleBackColor = false;
			this->loginBtn->Click += gcnew System::EventHandler(this, &CompanyPage::loginBtn_Click);
			// 
			// forgotPassword
			// 
			this->forgotPassword->AutoSize = true;
			this->forgotPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->forgotPassword->Location = System::Drawing::Point(422, 317);
			this->forgotPassword->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->forgotPassword->Name = L"forgotPassword";
			this->forgotPassword->Size = System::Drawing::Size(138, 20);
			this->forgotPassword->TabIndex = 4;
			this->forgotPassword->TabStop = true;
			this->forgotPassword->Text = L"Forgot Password\?";
			// 
			// passwordInput
			// 
			this->passwordInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passwordInput->Location = System::Drawing::Point(590, 253);
			this->passwordInput->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->passwordInput->Name = L"passwordInput";
			this->passwordInput->Size = System::Drawing::Size(201, 37);
			this->passwordInput->TabIndex = 3;
			// 
			// password
			// 
			this->password->AutoSize = true;
			this->password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password->Location = System::Drawing::Point(420, 258);
			this->password->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(142, 31);
			this->password->TabIndex = 2;
			this->password->Text = L"Password:";
			// 
			// usernameInput
			// 
			this->usernameInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->usernameInput->Location = System::Drawing::Point(590, 191);
			this->usernameInput->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->usernameInput->Name = L"usernameInput";
			this->usernameInput->Size = System::Drawing::Size(201, 37);
			this->usernameInput->TabIndex = 1;
			this->usernameInput->TextChanged += gcnew System::EventHandler(this, &CompanyPage::usernameInput_TextChanged);
			// 
			// username
			// 
			this->username->AutoSize = true;
			this->username->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username->Location = System::Drawing::Point(420, 191);
			this->username->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(147, 31);
			this->username->TabIndex = 0;
			this->username->Text = L"Username:";
			// 
			// turingTraderTabs
			// 
			this->turingTraderTabs->Controls->Add(this->tabPage1);
			this->turingTraderTabs->Controls->Add(this->portfolioTab);
			this->turingTraderTabs->Controls->Add(this->tradingTab);
			this->turingTraderTabs->Controls->Add(this->groupsTab);
			this->turingTraderTabs->Controls->Add(this->settingsTab);
			this->turingTraderTabs->Controls->Add(this->profileTab);
			this->turingTraderTabs->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->turingTraderTabs->ItemSize = System::Drawing::Size(71, 50);
			this->turingTraderTabs->Location = System::Drawing::Point(0, 0);
			this->turingTraderTabs->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->turingTraderTabs->Name = L"turingTraderTabs";
			this->turingTraderTabs->SelectedIndex = 1;
			this->turingTraderTabs->Size = System::Drawing::Size(995, 600);
			this->turingTraderTabs->TabIndex = 3;
			this->turingTraderTabs->Visible = false;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Enabled = false;
			this->tabPage1->Location = System::Drawing::Point(4, 54);
			this->tabPage1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tabPage1->Size = System::Drawing::Size(987, 542);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"TuringTrader";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(652, 13);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(108, 35);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Logout";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// portfolioTab
			// 
			this->portfolioTab->Controls->Add(this->label72);
			this->portfolioTab->Controls->Add(this->label71);
			this->portfolioTab->Controls->Add(this->pictureBox3);
			this->portfolioTab->Controls->Add(this->pictureBox2);
			this->portfolioTab->Controls->Add(this->linkLabel1);
			this->portfolioTab->Controls->Add(this->label12);
			this->portfolioTab->Controls->Add(this->label11);
			this->portfolioTab->Controls->Add(this->label10);
			this->portfolioTab->Controls->Add(this->label9);
			this->portfolioTab->Controls->Add(this->label8);
			this->portfolioTab->Controls->Add(this->label7);
			this->portfolioTab->Controls->Add(this->label14);
			this->portfolioTab->Controls->Add(this->label6);
			this->portfolioTab->Controls->Add(this->label5);
			this->portfolioTab->Controls->Add(this->label4);
			this->portfolioTab->Controls->Add(this->label3);
			this->portfolioTab->Controls->Add(this->percentageReturn);
			this->portfolioTab->Controls->Add(this->portfolioVal);
			this->portfolioTab->Controls->Add(this->chartTitle);
			this->portfolioTab->Controls->Add(this->logoutBtnPortfolio);
			this->portfolioTab->Location = System::Drawing::Point(4, 54);
			this->portfolioTab->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->portfolioTab->Name = L"portfolioTab";
			this->portfolioTab->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->portfolioTab->Size = System::Drawing::Size(987, 542);
			this->portfolioTab->TabIndex = 1;
			this->portfolioTab->Text = L"Portfolio";
			this->portfolioTab->UseVisualStyleBackColor = true;
			// 
			// label72
			// 
			this->label72->AutoSize = true;
			this->label72->Location = System::Drawing::Point(815, 200);
			this->label72->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label72->Name = L"label72";
			this->label72->Size = System::Drawing::Size(134, 20);
			this->label72->TabIndex = 30;
			this->label72->Text = L"Chart Unavailable";
			// 
			// label71
			// 
			this->label71->AutoSize = true;
			this->label71->Location = System::Drawing::Point(178, 172);
			this->label71->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(134, 20);
			this->label71->TabIndex = 29;
			this->label71->Text = L"Chart Unavailable";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(771, 110);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(202, 214);
			this->pictureBox3->TabIndex = 28;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(10, 62);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(488, 252);
			this->pictureBox2->TabIndex = 27;
			this->pictureBox2->TabStop = false;
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(822, 427);
			this->linkLabel1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(171, 20);
			this->linkLabel1->TabIndex = 26;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"View All Owned Stocks";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::DimGray;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Lavender;
			this->label12->Location = System::Drawing::Point(538, 480);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(149, 20);
			this->label12->TabIndex = 25;
			this->label12->Text = L"No Company added";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::DimGray;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Lavender;
			this->label11->Location = System::Drawing::Point(358, 480);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(149, 20);
			this->label11->TabIndex = 24;
			this->label11->Text = L"No Company added";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::LimeGreen;
			this->label10->ForeColor = System::Drawing::Color::Lavender;
			this->label10->Location = System::Drawing::Point(569, 381);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(80, 60);
			this->label10->TabIndex = 23;
			this->label10->Text = L"TSLA:\r\n28,129.90\r\n+0.07%";
			this->label10->Click += gcnew System::EventHandler(this, &CompanyPage::label10_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::DarkRed;
			this->label9->ForeColor = System::Drawing::Color::Lavender;
			this->label9->Location = System::Drawing::Point(392, 381);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(80, 60);
			this->label9->TabIndex = 22;
			this->label9->Text = L"GM:\r\n28,129.90\r\n-0.07%";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::DarkRed;
			this->label8->ForeColor = System::Drawing::Color::Lavender;
			this->label8->Location = System::Drawing::Point(210, 462);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(71, 60);
			this->label8->TabIndex = 21;
			this->label8->Text = L"BUD:\r\n3,408.54\r\n-0.51%";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::DarkRed;
			this->label7->ForeColor = System::Drawing::Color::Lavender;
			this->label7->Location = System::Drawing::Point(210, 381);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(71, 60);
			this->label7->TabIndex = 20;
			this->label7->Text = L"F:\r\n3,408.54\r\n-0.51%";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::LimeGreen;
			this->label14->ForeColor = System::Drawing::Color::Lavender;
			this->label14->Location = System::Drawing::Point(46, 462);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(80, 60);
			this->label14->TabIndex = 19;
			this->label14->Text = L"NVDA:\r\n28,129.90\r\n+0.07%";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::LimeGreen;
			this->label6->ForeColor = System::Drawing::Color::Lavender;
			this->label6->Location = System::Drawing::Point(46, 381);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(80, 60);
			this->label6->TabIndex = 11;
			this->label6->Text = L"AAPL:\r\n28,129.90\r\n+0.07%";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(8, 346);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(421, 20);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Performance of Stocks Owned Since Last Market Opening";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(807, 76);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(156, 20);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Equity/Cash Balance";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(594, 232);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(156, 60);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Equity/Cash Balance\r\n25/75\r\n\r\n";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// percentageReturn
			// 
			this->percentageReturn->AutoSize = true;
			this->percentageReturn->Location = System::Drawing::Point(597, 152);
			this->percentageReturn->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->percentageReturn->Name = L"percentageReturn";
			this->percentageReturn->Size = System::Drawing::Size(144, 40);
			this->percentageReturn->TabIndex = 7;
			this->percentageReturn->Text = L"Percentage Return\r\n-10%\r\n";
			this->percentageReturn->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// portfolioVal
			// 
			this->portfolioVal->AutoSize = true;
			this->portfolioVal->Location = System::Drawing::Point(584, 76);
			this->portfolioVal->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->portfolioVal->Name = L"portfolioVal";
			this->portfolioVal->Size = System::Drawing::Size(169, 40);
			this->portfolioVal->TabIndex = 4;
			this->portfolioVal->Text = L"Current Portfolio Value\r\n90,000";
			this->portfolioVal->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// chartTitle
			// 
			this->chartTitle->AutoSize = true;
			this->chartTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chartTitle->Location = System::Drawing::Point(6, 22);
			this->chartTitle->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->chartTitle->Name = L"chartTitle";
			this->chartTitle->Size = System::Drawing::Size(333, 26);
			this->chartTitle->TabIndex = 3;
			this->chartTitle->Text = L"Value of Portfolio Since Inception";
			this->chartTitle->Click += gcnew System::EventHandler(this, &CompanyPage::label3_Click);
			// 
			// logoutBtnPortfolio
			// 
			this->logoutBtnPortfolio->Location = System::Drawing::Point(874, 13);
			this->logoutBtnPortfolio->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->logoutBtnPortfolio->Name = L"logoutBtnPortfolio";
			this->logoutBtnPortfolio->Size = System::Drawing::Size(108, 35);
			this->logoutBtnPortfolio->TabIndex = 1;
			this->logoutBtnPortfolio->Text = L"Logout";
			this->logoutBtnPortfolio->UseVisualStyleBackColor = true;
			this->logoutBtnPortfolio->Click += gcnew System::EventHandler(this, &CompanyPage::logoutBtnPortfolio_Click);
			// 
			// tradingTab
			// 
			this->tradingTab->Controls->Add(this->label28);
			this->tradingTab->Controls->Add(this->panel1);
			this->tradingTab->Controls->Add(this->label27);
			this->tradingTab->Controls->Add(this->label26);
			this->tradingTab->Controls->Add(this->label25);
			this->tradingTab->Controls->Add(this->textBox1);
			this->tradingTab->Controls->Add(this->label24);
			this->tradingTab->Controls->Add(this->label23);
			this->tradingTab->Controls->Add(this->linkLabel2);
			this->tradingTab->Controls->Add(this->label13);
			this->tradingTab->Controls->Add(this->label15);
			this->tradingTab->Controls->Add(this->label16);
			this->tradingTab->Controls->Add(this->label17);
			this->tradingTab->Controls->Add(this->label18);
			this->tradingTab->Controls->Add(this->label19);
			this->tradingTab->Controls->Add(this->label20);
			this->tradingTab->Controls->Add(this->label21);
			this->tradingTab->Controls->Add(this->label22);
			this->tradingTab->Controls->Add(this->logoutBtnTrading);
			this->tradingTab->Location = System::Drawing::Point(4, 54);
			this->tradingTab->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tradingTab->Name = L"tradingTab";
			this->tradingTab->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tradingTab->Size = System::Drawing::Size(987, 542);
			this->tradingTab->TabIndex = 2;
			this->tradingTab->Text = L"Trading";
			this->tradingTab->UseVisualStyleBackColor = true;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(15, 200);
			this->label28->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(164, 20);
			this->label28->TabIndex = 44;
			this->label28->Text = L"Latest Financial News";
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(19, 232);
			this->panel1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(559, 89);
			this->panel1->TabIndex = 43;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &CompanyPage::panel1_Paint);
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->BackColor = System::Drawing::Color::DarkRed;
			this->label27->ForeColor = System::Drawing::Color::Lavender;
			this->label27->Location = System::Drawing::Point(457, 118);
			this->label27->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(76, 60);
			this->label27->TabIndex = 42;
			this->label27->Text = L"S&&P 500:\r\n3,408.54\r\n-0.51%";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->BackColor = System::Drawing::Color::LimeGreen;
			this->label26->ForeColor = System::Drawing::Color::Lavender;
			this->label26->Location = System::Drawing::Point(295, 118);
			this->label26->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(81, 60);
			this->label26->TabIndex = 41;
			this->label26->Text = L"NASDAQ:\r\n11,329.95\r\n+1.24%";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->BackColor = System::Drawing::Color::LimeGreen;
			this->label25->ForeColor = System::Drawing::Color::Lavender;
			this->label25->Location = System::Drawing::Point(61, 118);
			this->label25->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(80, 60);
			this->label25->TabIndex = 40;
			this->label25->Text = L"DJIA:\r\n28,129.90\r\n+0.07%";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(19, 36);
			this->textBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(436, 26);
			this->textBox1->TabIndex = 39;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(15, 82);
			this->label24->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(382, 20);
			this->label24->TabIndex = 38;
			this->label24->Text = L"Major Index Performance Since Last Market Opening";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(15, 13);
			this->label23->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(341, 20);
			this->label23->TabIndex = 37;
			this->label23->Text = L"Search for a company by name or ticker symbol";
			// 
			// linkLabel2
			// 
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->Location = System::Drawing::Point(820, 431);
			this->linkLabel2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(171, 20);
			this->linkLabel2->TabIndex = 36;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"View All Owned Stocks";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::DimGray;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::Lavender;
			this->label13->Location = System::Drawing::Point(536, 483);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(149, 20);
			this->label13->TabIndex = 35;
			this->label13->Text = L"No Company added";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::DimGray;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::Lavender;
			this->label15->Location = System::Drawing::Point(356, 483);
			this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(149, 20);
			this->label15->TabIndex = 34;
			this->label15->Text = L"No Company added";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::LimeGreen;
			this->label16->ForeColor = System::Drawing::Color::Lavender;
			this->label16->Location = System::Drawing::Point(568, 384);
			this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(80, 60);
			this->label16->TabIndex = 33;
			this->label16->Text = L"TSLA:\r\n28,129.90\r\n+0.07%";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::DarkRed;
			this->label17->ForeColor = System::Drawing::Color::Lavender;
			this->label17->Location = System::Drawing::Point(390, 384);
			this->label17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(80, 60);
			this->label17->TabIndex = 32;
			this->label17->Text = L"GM:\r\n28,129.90\r\n-0.07%";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::DarkRed;
			this->label18->ForeColor = System::Drawing::Color::Lavender;
			this->label18->Location = System::Drawing::Point(208, 466);
			this->label18->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(71, 60);
			this->label18->TabIndex = 31;
			this->label18->Text = L"BUD:\r\n3,408.54\r\n-0.51%";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::DarkRed;
			this->label19->ForeColor = System::Drawing::Color::Lavender;
			this->label19->Location = System::Drawing::Point(208, 384);
			this->label19->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(71, 60);
			this->label19->TabIndex = 30;
			this->label19->Text = L"F:\r\n3,408.54\r\n-0.51%";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::LimeGreen;
			this->label20->ForeColor = System::Drawing::Color::Lavender;
			this->label20->Location = System::Drawing::Point(45, 466);
			this->label20->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(80, 60);
			this->label20->TabIndex = 29;
			this->label20->Text = L"NVDA:\r\n28,129.90\r\n+0.07%";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::LimeGreen;
			this->label21->ForeColor = System::Drawing::Color::Lavender;
			this->label21->Location = System::Drawing::Point(45, 384);
			this->label21->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(80, 60);
			this->label21->TabIndex = 28;
			this->label21->Text = L"AAPL:\r\n28,129.90\r\n+0.07%";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(15, 350);
			this->label22->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(421, 20);
			this->label22->TabIndex = 27;
			this->label22->Text = L"Performance of Stocks Owned Since Last Market Opening";
			// 
			// logoutBtnTrading
			// 
			this->logoutBtnTrading->Location = System::Drawing::Point(874, 13);
			this->logoutBtnTrading->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->logoutBtnTrading->Name = L"logoutBtnTrading";
			this->logoutBtnTrading->Size = System::Drawing::Size(108, 35);
			this->logoutBtnTrading->TabIndex = 1;
			this->logoutBtnTrading->Text = L"Logout";
			this->logoutBtnTrading->UseVisualStyleBackColor = true;
			this->logoutBtnTrading->Click += gcnew System::EventHandler(this, &CompanyPage::logoutBtnTrading_Click);
			// 
			// groupsTab
			// 
			this->groupsTab->Controls->Add(this->label59);
			this->groupsTab->Controls->Add(this->button6);
			this->groupsTab->Controls->Add(this->button5);
			this->groupsTab->Controls->Add(this->panel3);
			this->groupsTab->Controls->Add(this->panel2);
			this->groupsTab->Controls->Add(this->logoutBtnGroups);
			this->groupsTab->Location = System::Drawing::Point(4, 54);
			this->groupsTab->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupsTab->Name = L"groupsTab";
			this->groupsTab->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupsTab->Size = System::Drawing::Size(987, 542);
			this->groupsTab->TabIndex = 3;
			this->groupsTab->Text = L"Groups";
			this->groupsTab->UseVisualStyleBackColor = true;
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label59->Location = System::Drawing::Point(19, 68);
			this->label59->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(136, 26);
			this->label59->TabIndex = 5;
			this->label59->Text = L"Your Groups";
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::LimeGreen;
			this->button6->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button6->Location = System::Drawing::Point(218, 16);
			this->button6->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(113, 32);
			this->button6->TabIndex = 4;
			this->button6->Text = L"Join Group";
			this->button6->UseVisualStyleBackColor = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::DodgerBlue;
			this->button5->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button5->Location = System::Drawing::Point(32, 16);
			this->button5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(128, 32);
			this->button5->TabIndex = 3;
			this->button5->Text = L"Create Group";
			this->button5->UseVisualStyleBackColor = false;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->button7);
			this->panel3->Controls->Add(this->label60);
			this->panel3->Controls->Add(this->tableLayoutPanel1);
			this->panel3->Location = System::Drawing::Point(19, 200);
			this->panel3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(964, 341);
			this->panel3->TabIndex = 3;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Crimson;
			this->button7->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button7->Location = System::Drawing::Point(759, 287);
			this->button7->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(113, 32);
			this->button7->TabIndex = 6;
			this->button7->Text = L"Leave Group";
			this->button7->UseVisualStyleBackColor = false;
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->Location = System::Drawing::Point(20, 293);
			this->label60->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(351, 40);
			this->label60->TabIndex = 1;
			this->label60->Text = L"Group Code: x8Km2K9\r\nUse this code to invite your friends to your group!\r\n";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 5;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel1->Controls->Add(this->label58, 4, 5);
			this->tableLayoutPanel1->Controls->Add(this->label55, 4, 4);
			this->tableLayoutPanel1->Controls->Add(this->label52, 4, 3);
			this->tableLayoutPanel1->Controls->Add(this->label57, 3, 5);
			this->tableLayoutPanel1->Controls->Add(this->label54, 3, 4);
			this->tableLayoutPanel1->Controls->Add(this->label51, 3, 3);
			this->tableLayoutPanel1->Controls->Add(this->label56, 2, 5);
			this->tableLayoutPanel1->Controls->Add(this->label53, 2, 4);
			this->tableLayoutPanel1->Controls->Add(this->label50, 2, 3);
			this->tableLayoutPanel1->Controls->Add(this->label49, 4, 2);
			this->tableLayoutPanel1->Controls->Add(this->label48, 3, 2);
			this->tableLayoutPanel1->Controls->Add(this->label47, 2, 2);
			this->tableLayoutPanel1->Controls->Add(this->label46, 4, 1);
			this->tableLayoutPanel1->Controls->Add(this->label45, 3, 1);
			this->tableLayoutPanel1->Controls->Add(this->label44, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->label29, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->label30, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->label31, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->label32, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->label33, 4, 0);
			this->tableLayoutPanel1->Controls->Add(this->label34, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->label35, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->label36, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->label37, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->label38, 0, 5);
			this->tableLayoutPanel1->Controls->Add(this->label39, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->label40, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->label41, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->label42, 1, 4);
			this->tableLayoutPanel1->Controls->Add(this->label43, 1, 5);
			this->tableLayoutPanel1->Location = System::Drawing::Point(13, 16);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 7;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(860, 259);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->Location = System::Drawing::Point(690, 180);
			this->label58->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(72, 20);
			this->label58->TabIndex = 35;
			this->label58->Text = L"-$18,000";
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Location = System::Drawing::Point(690, 144);
			this->label55->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(72, 20);
			this->label55->TabIndex = 34;
			this->label55->Text = L"-$18,000";
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Location = System::Drawing::Point(690, 108);
			this->label52->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(72, 20);
			this->label52->TabIndex = 33;
			this->label52->Text = L"-$18,000";
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->Location = System::Drawing::Point(518, 180);
			this->label57->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(67, 20);
			this->label57->TabIndex = 32;
			this->label57->Text = L"$82,000";
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->Location = System::Drawing::Point(518, 144);
			this->label54->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(67, 20);
			this->label54->TabIndex = 31;
			this->label54->Text = L"$82,000";
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Location = System::Drawing::Point(518, 108);
			this->label51->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(67, 20);
			this->label51->TabIndex = 30;
			this->label51->Text = L"$82,000";
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->Location = System::Drawing::Point(346, 180);
			this->label56->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(18, 20);
			this->label56->TabIndex = 27;
			this->label56->Text = L"7";
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Location = System::Drawing::Point(346, 144);
			this->label53->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(18, 20);
			this->label53->TabIndex = 24;
			this->label53->Text = L"7";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Location = System::Drawing::Point(346, 108);
			this->label50->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(18, 20);
			this->label50->TabIndex = 21;
			this->label50->Text = L"7";
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Location = System::Drawing::Point(690, 72);
			this->label49->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(72, 20);
			this->label49->TabIndex = 20;
			this->label49->Text = L"-$18,000";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Location = System::Drawing::Point(518, 72);
			this->label48->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(67, 20);
			this->label48->TabIndex = 19;
			this->label48->Text = L"$82,000";
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Location = System::Drawing::Point(346, 72);
			this->label47->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(18, 20);
			this->label47->TabIndex = 18;
			this->label47->Text = L"4";
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Location = System::Drawing::Point(690, 36);
			this->label46->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(67, 20);
			this->label46->TabIndex = 17;
			this->label46->Text = L"$12,800";
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Location = System::Drawing::Point(518, 36);
			this->label45->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(76, 20);
			this->label45->TabIndex = 16;
			this->label45->Text = L"$112,800";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Location = System::Drawing::Point(346, 36);
			this->label44->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(18, 20);
			this->label44->TabIndex = 15;
			this->label44->Text = L"5";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(174, 0);
			this->label29->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(81, 20);
			this->label29->TabIndex = 0;
			this->label29->Text = L"Trades/wk";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(2, 0);
			this->label30->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(51, 20);
			this->label30->TabIndex = 1;
			this->label30->Text = L"Name";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(346, 0);
			this->label31->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(71, 20);
			this->label31->TabIndex = 2;
			this->label31->Text = L"Holdings";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(518, 0);
			this->label32->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(67, 20);
			this->label32->TabIndex = 3;
			this->label32->Text = L"Portfolio";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(690, 0);
			this->label33->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(90, 20);
			this->label33->TabIndex = 4;
			this->label33->Text = L"Total Gains";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(2, 36);
			this->label34->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(43, 20);
			this->label34->TabIndex = 5;
			this->label34->Text = L"Liam";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(2, 72);
			this->label35->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(51, 20);
			this->label35->TabIndex = 6;
			this->label35->Text = L"Harris";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(2, 108);
			this->label36->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(44, 20);
			this->label36->TabIndex = 7;
			this->label36->Text = L"Mark";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(2, 144);
			this->label37->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(52, 20);
			this->label37->TabIndex = 8;
			this->label37->Text = L"Jason";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(2, 180);
			this->label38->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(56, 20);
			this->label38->TabIndex = 9;
			this->label38->Text = L"Maddy";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(174, 36);
			this->label39->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(27, 20);
			this->label39->TabIndex = 10;
			this->label39->Text = L"15";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(174, 72);
			this->label40->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(18, 20);
			this->label40->TabIndex = 11;
			this->label40->Text = L"8";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(174, 108);
			this->label41->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(27, 20);
			this->label41->TabIndex = 12;
			this->label41->Text = L"10";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(174, 144);
			this->label42->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(27, 20);
			this->label42->TabIndex = 13;
			this->label42->Text = L"10";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Location = System::Drawing::Point(174, 180);
			this->label43->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(27, 20);
			this->label43->TabIndex = 14;
			this->label43->Text = L"10";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::DimGray;
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Location = System::Drawing::Point(19, 104);
			this->panel2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(807, 91);
			this->panel2->TabIndex = 3;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button4->Location = System::Drawing::Point(527, 11);
			this->button4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(130, 68);
			this->button4->TabIndex = 2;
			this->button4->Text = L"Group 3";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::DodgerBlue;
			this->button3->ForeColor = System::Drawing::SystemColors::Window;
			this->button3->Location = System::Drawing::Point(284, 11);
			this->button3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(130, 68);
			this->button3->TabIndex = 1;
			this->button3->Text = L"Group 2";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button2->Location = System::Drawing::Point(30, 11);
			this->button2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(130, 68);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Group 1";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// logoutBtnGroups
			// 
			this->logoutBtnGroups->Location = System::Drawing::Point(874, 13);
			this->logoutBtnGroups->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->logoutBtnGroups->Name = L"logoutBtnGroups";
			this->logoutBtnGroups->Size = System::Drawing::Size(108, 35);
			this->logoutBtnGroups->TabIndex = 2;
			this->logoutBtnGroups->Text = L"Logout";
			this->logoutBtnGroups->UseVisualStyleBackColor = true;
			this->logoutBtnGroups->Click += gcnew System::EventHandler(this, &CompanyPage::logoutBtnGroups_Click);
			// 
			// settingsTab
			// 
			this->settingsTab->Controls->Add(this->logoutBtnSettings);
			this->settingsTab->Location = System::Drawing::Point(4, 54);
			this->settingsTab->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->settingsTab->Name = L"settingsTab";
			this->settingsTab->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->settingsTab->Size = System::Drawing::Size(987, 542);
			this->settingsTab->TabIndex = 4;
			this->settingsTab->Text = L"Settings";
			this->settingsTab->UseVisualStyleBackColor = true;
			// 
			// logoutBtnSettings
			// 
			this->logoutBtnSettings->Location = System::Drawing::Point(874, 13);
			this->logoutBtnSettings->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->logoutBtnSettings->Name = L"logoutBtnSettings";
			this->logoutBtnSettings->Size = System::Drawing::Size(108, 35);
			this->logoutBtnSettings->TabIndex = 2;
			this->logoutBtnSettings->Text = L"Logout";
			this->logoutBtnSettings->UseVisualStyleBackColor = true;
			this->logoutBtnSettings->Click += gcnew System::EventHandler(this, &CompanyPage::logoutBtnSettings_Click);
			// 
			// profileTab
			// 
			this->profileTab->Controls->Add(this->button12);
			this->profileTab->Controls->Add(this->panel4);
			this->profileTab->Controls->Add(this->label70);
			this->profileTab->Controls->Add(this->label69);
			this->profileTab->Controls->Add(this->label68);
			this->profileTab->Controls->Add(this->label67);
			this->profileTab->Controls->Add(this->label66);
			this->profileTab->Controls->Add(this->label65);
			this->profileTab->Controls->Add(this->button11);
			this->profileTab->Controls->Add(this->button10);
			this->profileTab->Controls->Add(this->button9);
			this->profileTab->Controls->Add(this->button8);
			this->profileTab->Controls->Add(this->label64);
			this->profileTab->Controls->Add(this->label63);
			this->profileTab->Controls->Add(this->label62);
			this->profileTab->Controls->Add(this->label61);
			this->profileTab->Controls->Add(this->logoutBtnProfile);
			this->profileTab->Location = System::Drawing::Point(4, 54);
			this->profileTab->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->profileTab->Name = L"profileTab";
			this->profileTab->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->profileTab->Size = System::Drawing::Size(987, 542);
			this->profileTab->TabIndex = 5;
			this->profileTab->Text = L"Profile";
			this->profileTab->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(620, 498);
			this->button12->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(198, 43);
			this->button12->TabIndex = 19;
			this->button12->Text = L"Reset account";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Black;
			this->panel4->Controls->Add(this->pictureBox1);
			this->panel4->Location = System::Drawing::Point(778, 439);
			this->panel4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(40, 47);
			this->panel4->TabIndex = 18;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->Location = System::Drawing::Point(2, 2);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(35, 39);
			this->pictureBox1->TabIndex = 17;
			this->pictureBox1->TabStop = false;
			// 
			// label70
			// 
			this->label70->AutoSize = true;
			this->label70->Location = System::Drawing::Point(549, 389);
			this->label70->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(405, 80);
			this->label70->TabIndex = 16;
			this->label70->Text = L"Reset account completely, removing all\r\ncurrent positions and resetting account b"
				L"alance to base.\r\n\r\nWould you like to continue\?\r\n";
			// 
			// label69
			// 
			this->label69->AutoSize = true;
			this->label69->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label69->Location = System::Drawing::Point(650, 339);
			this->label69->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(167, 29);
			this->label69->TabIndex = 15;
			this->label69->Text = L"Reset Account";
			// 
			// label68
			// 
			this->label68->AutoSize = true;
			this->label68->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label68->Location = System::Drawing::Point(569, 242);
			this->label68->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(277, 39);
			this->label68->TabIndex = 14;
			this->label68->Text = L"Turing Trading 101\r\nLorem ipsum dolor sit amet. Ut consequat.\r\nNullam quis est eg"
				L"et eros faucibus volutpat ut eget dolor. ";
			// 
			// label67
			// 
			this->label67->AutoSize = true;
			this->label67->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label67->Location = System::Drawing::Point(569, 134);
			this->label67->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(137, 39);
			this->label67->TabIndex = 13;
			this->label67->Text = L"Stock Trading 101\r\nLorem ipsum dolor sit amet. \r\nNullam quis eget dolor. ";
			// 
			// label66
			// 
			this->label66->AutoSize = true;
			this->label66->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label66->Location = System::Drawing::Point(686, 71);
			this->label66->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(70, 31);
			this->label66->TabIndex = 12;
			this->label66->Text = L"Help";
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label65->Location = System::Drawing::Point(182, 76);
			this->label65->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(91, 31);
			this->label65->TabIndex = 11;
			this->label65->Text = L"Profile";
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(297, 466);
			this->button11->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(143, 39);
			this->button11->TabIndex = 10;
			this->button11->Text = L"Change Password";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(297, 379);
			this->button10->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(143, 39);
			this->button10->TabIndex = 9;
			this->button10->Text = L"Change Phone";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(297, 278);
			this->button9->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(143, 41);
			this->button9->TabIndex = 8;
			this->button9->Text = L"Change Email";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(297, 187);
			this->button8->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(143, 41);
			this->button8->TabIndex = 7;
			this->button8->Text = L"Change Username";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// label64
			// 
			this->label64->AutoSize = true;
			this->label64->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label64->Location = System::Drawing::Point(15, 466);
			this->label64->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(158, 24);
			this->label64->TabIndex = 6;
			this->label64->Text = L"Password: ********";
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label63->Location = System::Drawing::Point(15, 379);
			this->label63->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(188, 24);
			this->label63->TabIndex = 5;
			this->label63->Text = L"Phone: 555-555-5555";
			// 
			// label62
			// 
			this->label62->AutoSize = true;
			this->label62->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label62->Location = System::Drawing::Point(15, 289);
			this->label62->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(192, 24);
			this->label62->TabIndex = 4;
			this->label62->Text = L"Email: liam@turing.ca";
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label61->Location = System::Drawing::Point(15, 187);
			this->label61->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(156, 24);
			this->label61->TabIndex = 3;
			this->label61->Text = L"Username: lfiebig";
			// 
			// logoutBtnProfile
			// 
			this->logoutBtnProfile->Location = System::Drawing::Point(874, 13);
			this->logoutBtnProfile->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->logoutBtnProfile->Name = L"logoutBtnProfile";
			this->logoutBtnProfile->Size = System::Drawing::Size(108, 35);
			this->logoutBtnProfile->TabIndex = 2;
			this->logoutBtnProfile->Text = L"Logout";
			this->logoutBtnProfile->UseVisualStyleBackColor = true;
			this->logoutBtnProfile->Click += gcnew System::EventHandler(this, &CompanyPage::logoutBtnProfile_Click);
			// 
			// CompanyPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(994, 595);
			this->Controls->Add(this->loginPanel);
			this->Controls->Add(this->turingTraderTabs);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonTest);
			this->KeyPreview = true;
			this->Name = L"CompanyPage";
			this->Text = L"CompanyPage";
			this->Load += gcnew System::EventHandler(this, &CompanyPage::CompanyPage_Load);
			this->loginPanel->ResumeLayout(false);
			this->loginPanel->PerformLayout();
			this->loginTitle->ResumeLayout(false);
			this->loginTitle->PerformLayout();
			this->turingTraderTabs->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->portfolioTab->ResumeLayout(false);
			this->portfolioTab->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->tradingTab->ResumeLayout(false);
			this->tradingTab->PerformLayout();
			this->groupsTab->ResumeLayout(false);
			this->groupsTab->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->settingsTab->ResumeLayout(false);
			this->profileTab->ResumeLayout(false);
			this->profileTab->PerformLayout();
			this->panel4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			//label1->Text = getPrice().ToString();
			Stock apple("AAPL");
			label1->Text = apple.getPrice().ToString();
			loginPanel->Visible = true;
		}
		private: System::Void CompanyPage_Load(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void usernameInput_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void loginBtn_Click(System::Object^ sender, System::EventArgs^ e) {
			loginPanel->Visible = false;
			turingTraderTabs->Visible = true;
		}
private: System::Void logoutBtnProfile_Click(System::Object^ sender, System::EventArgs^ e) {
	loginPanel->Visible = true;
	turingTraderTabs->Visible = false;
}
private: System::Void logoutBtnPortfolio_Click(System::Object^ sender, System::EventArgs^ e) {
	loginPanel->Visible = true;
	turingTraderTabs->Visible = false;
}
private: System::Void logoutBtnTrading_Click(System::Object^ sender, System::EventArgs^ e) {
	loginPanel->Visible = true;
	turingTraderTabs->Visible = false;
}
private: System::Void logoutBtnGroups_Click(System::Object^ sender, System::EventArgs^ e) {
	loginPanel->Visible = true;
	turingTraderTabs->Visible = false;
}
private: System::Void logoutBtnSettings_Click(System::Object^ sender, System::EventArgs^ e) {
	loginPanel->Visible = true;
	turingTraderTabs->Visible = false;
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void loginPanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
