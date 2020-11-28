#pragma once
#include "CompanyPage.h"
#include <msclr\marshal_cppstd.h>

extern std::string currentUser;


namespace TradingGUI {

	using namespace CompanyPageGUI;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for TradingPage
	/// </summary>
	public ref class TradingPage : public System::Windows::Forms::Form
	{
	public:
		TradingPage(void)
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
		~TradingPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label28;
	protected:
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label23;



	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Ticker;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Company;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;

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
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Ticker = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Company = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label28
			// 
			this->label28->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label28->Location = System::Drawing::Point(1479, 1268);
			this->label28->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(410, 46);
			this->label28->TabIndex = 63;
			this->label28->Text = L"Latest Financial News";
			// 
			// panel1
			// 
			this->panel1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel1->Location = System::Drawing::Point(1476, 1334);
			this->panel1->Margin = System::Windows::Forms::Padding(6, 4, 6, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(931, 282);
			this->panel1->TabIndex = 62;
			// 
			// label27
			// 
			this->label27->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label27->AutoSize = true;
			this->label27->BackColor = System::Drawing::Color::DarkRed;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->ForeColor = System::Drawing::Color::Lavender;
			this->label27->Location = System::Drawing::Point(104, 1478);
			this->label27->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(189, 138);
			this->label27->TabIndex = 61;
			this->label27->Text = L"S&&P 500:\r\n3,408.54\r\n-0.51%";
			// 
			// label26
			// 
			this->label26->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label26->AutoSize = true;
			this->label26->BackColor = System::Drawing::Color::LimeGreen;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->ForeColor = System::Drawing::Color::Lavender;
			this->label26->Location = System::Drawing::Point(462, 1478);
			this->label26->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(201, 138);
			this->label26->TabIndex = 60;
			this->label26->Text = L"NASDAQ:\r\n11,329.95\r\n+1.24%";
			// 
			// label25
			// 
			this->label25->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label25->AutoSize = true;
			this->label25->BackColor = System::Drawing::Color::LimeGreen;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->ForeColor = System::Drawing::Color::Lavender;
			this->label25->Location = System::Drawing::Point(853, 1483);
			this->label25->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(196, 138);
			this->label25->TabIndex = 59;
			this->label25->Text = L"DJIA:\r\n28,129.90\r\n+0.07%";
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(88, 188);
			this->textBox1->Margin = System::Windows::Forms::Padding(6, 4, 6, 4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(597, 53);
			this->textBox1->TabIndex = 58;
			// 
			// label24
			// 
			this->label24->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label24->Location = System::Drawing::Point(80, 1400);
			this->label24->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(960, 46);
			this->label24->TabIndex = 57;
			this->label24->Text = L"Major Index Performance Since Last Market Opening";
			// 
			// label23
			// 
			this->label23->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(85, 117);
			this->label23->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(867, 46);
			this->label23->TabIndex = 56;
			this->label23->Text = L"Search for a company by name or ticker symbol";
			// 
			// label16
			// 
			this->label16->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::LimeGreen;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::Lavender;
			this->label16->Location = System::Drawing::Point(2602, 262);
			this->label16->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(196, 138);
			this->label16->TabIndex = 52;
			this->label16->Text = L"TSLA:\r\n28,129.90\r\n+0.07%";
			// 
			// label17
			// 
			this->label17->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::DarkRed;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::Lavender;
			this->label17->Location = System::Drawing::Point(2120, 262);
			this->label17->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(196, 138);
			this->label17->TabIndex = 51;
			this->label17->Text = L"GM:\r\n28,129.90\r\n-0.07%";
			// 
			// label18
			// 
			this->label18->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::DarkRed;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::Lavender;
			this->label18->Location = System::Drawing::Point(1642, 457);
			this->label18->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(174, 138);
			this->label18->TabIndex = 50;
			this->label18->Text = L"BUD:\r\n3,408.54\r\n-0.51%";
			// 
			// label19
			// 
			this->label19->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::DarkRed;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::Lavender;
			this->label19->Location = System::Drawing::Point(1642, 262);
			this->label19->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(174, 138);
			this->label19->TabIndex = 49;
			this->label19->Text = L"F:\r\n3,408.54\r\n-0.51%";
			// 
			// label20
			// 
			this->label20->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::LimeGreen;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::Lavender;
			this->label20->Location = System::Drawing::Point(1208, 457);
			this->label20->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(196, 138);
			this->label20->TabIndex = 48;
			this->label20->Text = L"NVDA:\r\n28,129.90\r\n+0.07%";
			// 
			// label21
			// 
			this->label21->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::LimeGreen;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::Color::Lavender;
			this->label21->Location = System::Drawing::Point(1208, 262);
			this->label21->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(196, 138);
			this->label21->TabIndex = 47;
			this->label21->Text = L"AAPL:\r\n28,129.90\r\n+0.07%";
			this->label21->Click += gcnew System::EventHandler(this, &TradingPage::label21_Click);
			// 
			// label22
			// 
			this->label22->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(1395, 117);
			this->label22->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(1233, 54);
			this->label22->TabIndex = 46;
			this->label22->Text = L"Performance of Stocks Owned Since Last Market Opening";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(720, 195);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(232, 44);
			this->button1->TabIndex = 64;
			this->button1->Text = L"Search";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &TradingPage::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Ticker,
					this->Company
			});
			this->dataGridView1->Location = System::Drawing::Point(96, 322);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 150;
			this->dataGridView1->RowTemplate->Height = 40;
			this->dataGridView1->Size = System::Drawing::Size(855, 720);
			this->dataGridView1->TabIndex = 65;
			// 
			// Ticker
			// 
			this->Ticker->HeaderText = L"Ticker";
			this->Ticker->MinimumWidth = 12;
			this->Ticker->Name = L"Ticker";
			this->Ticker->ReadOnly = true;
			this->Ticker->Width = 250;
			// 
			// Company
			// 
			this->Company->HeaderText = L"Company";
			this->Company->MinimumWidth = 12;
			this->Company->Name = L"Company";
			this->Company->ReadOnly = true;
			this->Company->Width = 250;
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::LimeGreen;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Lavender;
			this->label1->Location = System::Drawing::Point(2120, 457);
			this->label1->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(196, 138);
			this->label1->TabIndex = 66;
			this->label1->Text = L"AAPL:\r\n28,129.90\r\n+0.07%";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::LimeGreen;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Lavender;
			this->label2->Location = System::Drawing::Point(2602, 457);
			this->label2->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(196, 138);
			this->label2->TabIndex = 67;
			this->label2->Text = L"AAPL:\r\n28,129.90\r\n+0.07%";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::LimeGreen;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Lavender;
			this->label3->Location = System::Drawing::Point(1208, 672);
			this->label3->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(196, 138);
			this->label3->TabIndex = 68;
			this->label3->Text = L"AAPL:\r\n28,129.90\r\n+0.07%";
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::LimeGreen;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Lavender;
			this->label4->Location = System::Drawing::Point(1642, 672);
			this->label4->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(196, 138);
			this->label4->TabIndex = 69;
			this->label4->Text = L"AAPL:\r\n28,129.90\r\n+0.07%";
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::LimeGreen;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Lavender;
			this->label5->Location = System::Drawing::Point(2120, 672);
			this->label5->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(196, 138);
			this->label5->TabIndex = 70;
			this->label5->Text = L"AAPL:\r\n28,129.90\r\n+0.07%";
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::LimeGreen;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Lavender;
			this->label6->Location = System::Drawing::Point(2602, 672);
			this->label6->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(196, 138);
			this->label6->TabIndex = 71;
			this->label6->Text = L"AAPL:\r\n28,129.90\r\n+0.07%";
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::LimeGreen;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Lavender;
			this->label7->Location = System::Drawing::Point(1208, 878);
			this->label7->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(196, 138);
			this->label7->TabIndex = 72;
			this->label7->Text = L"AAPL:\r\n28,129.90\r\n+0.07%";
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::LimeGreen;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Lavender;
			this->label8->Location = System::Drawing::Point(1208, 1085);
			this->label8->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(196, 138);
			this->label8->TabIndex = 73;
			this->label8->Text = L"AAPL:\r\n28,129.90\r\n+0.07%";
			// 
			// label9
			// 
			this->label9->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::LimeGreen;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Lavender;
			this->label9->Location = System::Drawing::Point(2602, 1085);
			this->label9->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(196, 138);
			this->label9->TabIndex = 79;
			this->label9->Text = L"AAPL:\r\n28,129.90\r\n+0.07%";
			// 
			// label10
			// 
			this->label10->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::LimeGreen;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Lavender;
			this->label10->Location = System::Drawing::Point(2120, 1085);
			this->label10->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(196, 138);
			this->label10->TabIndex = 78;
			this->label10->Text = L"AAPL:\r\n28,129.90\r\n+0.07%";
			// 
			// label11
			// 
			this->label11->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::LimeGreen;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Lavender;
			this->label11->Location = System::Drawing::Point(1642, 1085);
			this->label11->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(196, 138);
			this->label11->TabIndex = 77;
			this->label11->Text = L"AAPL:\r\n28,129.90\r\n+0.07%";
			// 
			// label12
			// 
			this->label12->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::LimeGreen;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Lavender;
			this->label12->Location = System::Drawing::Point(2602, 870);
			this->label12->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(196, 138);
			this->label12->TabIndex = 76;
			this->label12->Text = L"AAPL:\r\n28,129.90\r\n+0.07%";
			// 
			// label13
			// 
			this->label13->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::LimeGreen;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::Lavender;
			this->label13->Location = System::Drawing::Point(2120, 870);
			this->label13->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(196, 138);
			this->label13->TabIndex = 75;
			this->label13->Text = L"AAPL:\r\n28,129.90\r\n+0.07%";
			// 
			// label14
			// 
			this->label14->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::DarkRed;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::Lavender;
			this->label14->Location = System::Drawing::Point(1642, 870);
			this->label14->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(174, 138);
			this->label14->TabIndex = 74;
			this->label14->Text = L"BUD:\r\n3,408.54\r\n-0.51%";
			// 
			// TradingPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(3204, 1750);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label22);
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"TradingPage";
			this->Text = L"TradingPage";
			this->Load += gcnew System::EventHandler(this, &TradingPage::TradingPage_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: Form^ activeForm = nullptr;
	private: void openChildForm(Form^ childForm) {
		if (activeForm != nullptr) {
			activeForm->Close();
		}
		activeForm = childForm;
		childForm->TopLevel = false;
		childForm->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		childForm->Dock = System::Windows::Forms::DockStyle::Fill;
		this->Controls->Add(childForm);
		this->Tag = childForm;
		childForm->BringToFront();
		childForm->Show();
	}
	private: System::Void label21_Click(System::Object^ sender, System::EventArgs^ e) {
		CompanyPage^ companyPage = gcnew CompanyPage();
		openChildForm(companyPage);
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ s = textBox1->Text;
	}
	private: System::Void TradingPage_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
