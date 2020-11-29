#pragma once
#include "CompanyPage.h"
#include <msclr\marshal_cppstd.h>
#include <vector>

extern std::string currentUser;


namespace TradingGUI {

	using namespace CompanyPageGUI;
	using namespace std;
	using namespace msclr::interop; // This namespace is used for marshalling between string and String^
	using namespace MySql::Data::MySqlClient;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;


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
	private: System::Windows::Forms::Label^ FinancialNewsHeader;
	protected:

	protected:
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ SandP;
	private: System::Windows::Forms::Label^ NASDAQ;
	private: System::Windows::Forms::Label^ DowJones;
	private: System::Windows::Forms::TextBox^ searchBox;




	private: System::Windows::Forms::Label^ IndexesHeader;
	private: System::Windows::Forms::Label^ searchLabel;



	private: System::Windows::Forms::Label^ Owned4;




	private: System::Windows::Forms::Label^ Owned3;
	private: System::Windows::Forms::Label^ Owned6;


	private: System::Windows::Forms::Label^ Owned2;
	private: System::Windows::Forms::Label^ Owned5;


	private: System::Windows::Forms::Label^ Owned1;
	private: System::Windows::Forms::Label^ StocksOwnedHeader;
	private: System::Windows::Forms::Button^ searchButton;



	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Ticker;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Company;
	private: System::Windows::Forms::Label^ Owned7;
	private: System::Windows::Forms::Label^ Owned8;
	private: System::Windows::Forms::Label^ Owned9;
	private: System::Windows::Forms::Label^ Owned10;
	private: System::Windows::Forms::Label^ Owned11;
	private: System::Windows::Forms::Label^ Owned12;
	private: System::Windows::Forms::Label^ Owned13;
	private: System::Windows::Forms::Label^ Owned17;
	private: System::Windows::Forms::Label^ Owned20;










	private: System::Windows::Forms::Label^ Owned19;

	private: System::Windows::Forms::Label^ Owned18;

	private: System::Windows::Forms::Label^ Owned16;

	private: System::Windows::Forms::Label^ Owned15;

	private: System::Windows::Forms::Label^ Owned14;


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
			this->FinancialNewsHeader = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->SandP = (gcnew System::Windows::Forms::Label());
			this->NASDAQ = (gcnew System::Windows::Forms::Label());
			this->DowJones = (gcnew System::Windows::Forms::Label());
			this->searchBox = (gcnew System::Windows::Forms::TextBox());
			this->IndexesHeader = (gcnew System::Windows::Forms::Label());
			this->searchLabel = (gcnew System::Windows::Forms::Label());
			this->Owned4 = (gcnew System::Windows::Forms::Label());
			this->Owned3 = (gcnew System::Windows::Forms::Label());
			this->Owned6 = (gcnew System::Windows::Forms::Label());
			this->Owned2 = (gcnew System::Windows::Forms::Label());
			this->Owned5 = (gcnew System::Windows::Forms::Label());
			this->Owned1 = (gcnew System::Windows::Forms::Label());
			this->StocksOwnedHeader = (gcnew System::Windows::Forms::Label());
			this->searchButton = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Ticker = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Company = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Owned7 = (gcnew System::Windows::Forms::Label());
			this->Owned8 = (gcnew System::Windows::Forms::Label());
			this->Owned9 = (gcnew System::Windows::Forms::Label());
			this->Owned10 = (gcnew System::Windows::Forms::Label());
			this->Owned11 = (gcnew System::Windows::Forms::Label());
			this->Owned12 = (gcnew System::Windows::Forms::Label());
			this->Owned13 = (gcnew System::Windows::Forms::Label());
			this->Owned17 = (gcnew System::Windows::Forms::Label());
			this->Owned20 = (gcnew System::Windows::Forms::Label());
			this->Owned19 = (gcnew System::Windows::Forms::Label());
			this->Owned18 = (gcnew System::Windows::Forms::Label());
			this->Owned16 = (gcnew System::Windows::Forms::Label());
			this->Owned15 = (gcnew System::Windows::Forms::Label());
			this->Owned14 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// FinancialNewsHeader
			// 
			this->FinancialNewsHeader->AutoSize = true;
			this->FinancialNewsHeader->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->FinancialNewsHeader->Location = System::Drawing::Point(1479, 1268);
			this->FinancialNewsHeader->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->FinancialNewsHeader->Name = L"FinancialNewsHeader";
			this->FinancialNewsHeader->Size = System::Drawing::Size(410, 46);
			this->FinancialNewsHeader->TabIndex = 63;
			this->FinancialNewsHeader->Text = L"Latest Financial News";
			// 
			// panel1
			// 
			this->panel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel1->Location = System::Drawing::Point(1476, 1334);
			this->panel1->Margin = System::Windows::Forms::Padding(6, 4, 6, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(931, 282);
			this->panel1->TabIndex = 62;
			// 
			// SandP
			// 
			this->SandP->AutoSize = true;
			this->SandP->BackColor = System::Drawing::Color::DarkRed;
			this->SandP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SandP->ForeColor = System::Drawing::Color::Lavender;
			this->SandP->Location = System::Drawing::Point(104, 1478);
			this->SandP->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->SandP->Name = L"SandP";
			this->SandP->Size = System::Drawing::Size(189, 138);
			this->SandP->TabIndex = 61;
			this->SandP->Text = L"S&&P 500:\r\n3,408.54\r\n-0.51%";
			// 
			// NASDAQ
			// 
			this->NASDAQ->AutoSize = true;
			this->NASDAQ->BackColor = System::Drawing::Color::LimeGreen;
			this->NASDAQ->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NASDAQ->ForeColor = System::Drawing::Color::Lavender;
			this->NASDAQ->Location = System::Drawing::Point(462, 1478);
			this->NASDAQ->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->NASDAQ->Name = L"NASDAQ";
			this->NASDAQ->Size = System::Drawing::Size(201, 138);
			this->NASDAQ->TabIndex = 60;
			this->NASDAQ->Text = L"NASDAQ:\r\n11,329.95\r\n+1.24%";
			// 
			// DowJones
			// 
			this->DowJones->AutoSize = true;
			this->DowJones->BackColor = System::Drawing::Color::LimeGreen;
			this->DowJones->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DowJones->ForeColor = System::Drawing::Color::Lavender;
			this->DowJones->Location = System::Drawing::Point(853, 1483);
			this->DowJones->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->DowJones->Name = L"DowJones";
			this->DowJones->Size = System::Drawing::Size(196, 138);
			this->DowJones->TabIndex = 59;
			this->DowJones->Text = L"DJIA:\r\n28,129.90\r\n+0.07%";
			// 
			// searchBox
			// 
			this->searchBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->searchBox->Location = System::Drawing::Point(88, 188);
			this->searchBox->Margin = System::Windows::Forms::Padding(6, 4, 6, 4);
			this->searchBox->Name = L"searchBox";
			this->searchBox->Size = System::Drawing::Size(597, 53);
			this->searchBox->TabIndex = 58;
			// 
			// IndexesHeader
			// 
			this->IndexesHeader->AutoSize = true;
			this->IndexesHeader->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->IndexesHeader->Location = System::Drawing::Point(80, 1400);
			this->IndexesHeader->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->IndexesHeader->Name = L"IndexesHeader";
			this->IndexesHeader->Size = System::Drawing::Size(960, 46);
			this->IndexesHeader->TabIndex = 57;
			this->IndexesHeader->Text = L"Major Index Performance Since Last Market Opening";
			// 
			// searchLabel
			// 
			this->searchLabel->AutoSize = true;
			this->searchLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->searchLabel->Location = System::Drawing::Point(85, 117);
			this->searchLabel->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->searchLabel->Name = L"searchLabel";
			this->searchLabel->Size = System::Drawing::Size(867, 46);
			this->searchLabel->TabIndex = 56;
			this->searchLabel->Text = L"Search for a company by name or ticker symbol";
			// 
			// Owned4
			// 
			this->Owned4->BackColor = System::Drawing::Color::LimeGreen;
			this->Owned4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Owned4->ForeColor = System::Drawing::Color::Lavender;
			this->Owned4->Location = System::Drawing::Point(2602, 262);
			this->Owned4->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->Owned4->Name = L"Owned4";
			this->Owned4->Size = System::Drawing::Size(196, 138);
			this->Owned4->TabIndex = 52;
			this->Owned4->Text = L"TSLA:\r\n28,129.90\r\n+0.07%";
			this->Owned4->Visible = false;
			this->Owned4->Click += gcnew System::EventHandler(this, &TradingPage::Owned4_Click);
			// 
			// Owned3
			// 
			this->Owned3->BackColor = System::Drawing::Color::DarkRed;
			this->Owned3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Owned3->ForeColor = System::Drawing::Color::Lavender;
			this->Owned3->Location = System::Drawing::Point(2120, 262);
			this->Owned3->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->Owned3->Name = L"Owned3";
			this->Owned3->Size = System::Drawing::Size(196, 138);
			this->Owned3->TabIndex = 51;
			this->Owned3->Text = L"GM:\r\n28,129.90\r\n-0.07%";
			this->Owned3->Visible = false;
			this->Owned3->Click += gcnew System::EventHandler(this, &TradingPage::Owned3_Click);
			// 
			// Owned6
			// 
			this->Owned6->BackColor = System::Drawing::Color::DarkRed;
			this->Owned6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Owned6->ForeColor = System::Drawing::Color::Lavender;
			this->Owned6->Location = System::Drawing::Point(1642, 457);
			this->Owned6->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->Owned6->Name = L"Owned6";
			this->Owned6->Size = System::Drawing::Size(196, 138);
			this->Owned6->TabIndex = 50;
			this->Owned6->Text = L"BUD:\r\n3,408.54\r\n-0.51%";
			this->Owned6->Visible = false;
			this->Owned6->Click += gcnew System::EventHandler(this, &TradingPage::Owned6_Click);
			// 
			// Owned2
			// 
			this->Owned2->BackColor = System::Drawing::Color::DarkRed;
			this->Owned2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Owned2->ForeColor = System::Drawing::Color::Lavender;
			this->Owned2->Location = System::Drawing::Point(1642, 262);
			this->Owned2->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->Owned2->Name = L"Owned2";
			this->Owned2->Size = System::Drawing::Size(196, 138);
			this->Owned2->TabIndex = 49;
			this->Owned2->Text = L"F:\r\n3,408.54\r\n-0.51%";
			this->Owned2->Visible = false;
			this->Owned2->Click += gcnew System::EventHandler(this, &TradingPage::Owned2_Click);
			// 
			// Owned5
			// 
			this->Owned5->BackColor = System::Drawing::Color::LimeGreen;
			this->Owned5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Owned5->ForeColor = System::Drawing::Color::Lavender;
			this->Owned5->Location = System::Drawing::Point(1208, 457);
			this->Owned5->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->Owned5->Name = L"Owned5";
			this->Owned5->Size = System::Drawing::Size(196, 138);
			this->Owned5->TabIndex = 48;
			this->Owned5->Text = L"NVDA:\r\n28,129.90\r\n+0.07%";
			this->Owned5->Visible = false;
			this->Owned5->Click += gcnew System::EventHandler(this, &TradingPage::Owned5_Click);
			// 
			// Owned1
			// 
			this->Owned1->BackColor = System::Drawing::Color::LimeGreen;
			this->Owned1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Owned1->ForeColor = System::Drawing::Color::Lavender;
			this->Owned1->Location = System::Drawing::Point(1208, 262);
			this->Owned1->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->Owned1->Name = L"Owned1";
			this->Owned1->Size = System::Drawing::Size(196, 138);
			this->Owned1->TabIndex = 47;
			this->Owned1->Text = L"AAPL:\r\n28,129.90\r\n+0.07%";
			this->Owned1->Visible = false;
			this->Owned1->Click += gcnew System::EventHandler(this, &TradingPage::Owned1_Click);
			// 
			// StocksOwnedHeader
			// 
			this->StocksOwnedHeader->AutoSize = true;
			this->StocksOwnedHeader->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->StocksOwnedHeader->Location = System::Drawing::Point(1395, 117);
			this->StocksOwnedHeader->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->StocksOwnedHeader->Name = L"StocksOwnedHeader";
			this->StocksOwnedHeader->Size = System::Drawing::Size(1269, 54);
			this->StocksOwnedHeader->TabIndex = 46;
			this->StocksOwnedHeader->Text = L"Performance of Stocks Watched Since Last Market Opening";
			// 
			// searchButton
			// 
			this->searchButton->Location = System::Drawing::Point(720, 195);
			this->searchButton->Name = L"searchButton";
			this->searchButton->Size = System::Drawing::Size(232, 44);
			this->searchButton->TabIndex = 64;
			this->searchButton->Text = L"Search";
			this->searchButton->UseVisualStyleBackColor = true;
			this->searchButton->Click += gcnew System::EventHandler(this, &TradingPage::searchButton_Click);
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
			this->dataGridView1->RowHeadersWidth = 50;
			this->dataGridView1->RowTemplate->Height = 40;
			this->dataGridView1->Size = System::Drawing::Size(855, 720);
			this->dataGridView1->TabIndex = 65;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &TradingPage::dataGridView1_CellContentClick);
			// 
			// Ticker
			// 
			this->Ticker->HeaderText = L"Ticker";
			this->Ticker->MinimumWidth = 12;
			this->Ticker->Name = L"Ticker";
			this->Ticker->ReadOnly = true;
			this->Ticker->Width = 75;
			// 
			// Company
			// 
			this->Company->HeaderText = L"Company";
			this->Company->MinimumWidth = 12;
			this->Company->Name = L"Company";
			this->Company->ReadOnly = true;
			this->Company->Width = 200;
			// 
			// Owned7
			// 
			this->Owned7->BackColor = System::Drawing::Color::LimeGreen;
			this->Owned7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Owned7->ForeColor = System::Drawing::Color::Lavender;
			this->Owned7->Location = System::Drawing::Point(2120, 457);
			this->Owned7->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->Owned7->Name = L"Owned7";
			this->Owned7->Size = System::Drawing::Size(196, 138);
			this->Owned7->TabIndex = 66;
			this->Owned7->Text = L"AAPL:\r\n28,129.90\r\n+0.07%";
			this->Owned7->Visible = false;
			this->Owned7->Click += gcnew System::EventHandler(this, &TradingPage::Owned7_Click);
			// 
			// Owned8
			// 
			this->Owned8->BackColor = System::Drawing::Color::LimeGreen;
			this->Owned8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Owned8->ForeColor = System::Drawing::Color::Lavender;
			this->Owned8->Location = System::Drawing::Point(2602, 457);
			this->Owned8->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->Owned8->Name = L"Owned8";
			this->Owned8->Size = System::Drawing::Size(196, 138);
			this->Owned8->TabIndex = 67;
			this->Owned8->Text = L"AAPL:\r\n28,129.90\r\n+0.07%";
			this->Owned8->Visible = false;
			this->Owned8->Click += gcnew System::EventHandler(this, &TradingPage::Owned8_Click);
			// 
			// Owned9
			// 
			this->Owned9->BackColor = System::Drawing::Color::LimeGreen;
			this->Owned9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Owned9->ForeColor = System::Drawing::Color::Lavender;
			this->Owned9->Location = System::Drawing::Point(1208, 672);
			this->Owned9->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->Owned9->Name = L"Owned9";
			this->Owned9->Size = System::Drawing::Size(196, 138);
			this->Owned9->TabIndex = 68;
			this->Owned9->Text = L"AAPL:\r\n28,129.90\r\n+0.07%";
			this->Owned9->Visible = false;
			this->Owned9->Click += gcnew System::EventHandler(this, &TradingPage::Owned9_Click);
			// 
			// Owned10
			// 
			this->Owned10->BackColor = System::Drawing::Color::LimeGreen;
			this->Owned10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Owned10->ForeColor = System::Drawing::Color::Lavender;
			this->Owned10->Location = System::Drawing::Point(1642, 672);
			this->Owned10->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->Owned10->Name = L"Owned10";
			this->Owned10->Size = System::Drawing::Size(196, 138);
			this->Owned10->TabIndex = 69;
			this->Owned10->Text = L"AAPL:\r\n28,129.90\r\n+0.07%";
			this->Owned10->Visible = false;
			this->Owned10->Click += gcnew System::EventHandler(this, &TradingPage::Owned10_Click);
			// 
			// Owned11
			// 
			this->Owned11->BackColor = System::Drawing::Color::LimeGreen;
			this->Owned11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Owned11->ForeColor = System::Drawing::Color::Lavender;
			this->Owned11->Location = System::Drawing::Point(2120, 672);
			this->Owned11->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->Owned11->Name = L"Owned11";
			this->Owned11->Size = System::Drawing::Size(196, 138);
			this->Owned11->TabIndex = 70;
			this->Owned11->Text = L"AAPL:\r\n28,129.90\r\n+0.07%";
			this->Owned11->Visible = false;
			this->Owned11->Click += gcnew System::EventHandler(this, &TradingPage::Owned11_Click);
			// 
			// Owned12
			// 
			this->Owned12->BackColor = System::Drawing::Color::LimeGreen;
			this->Owned12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Owned12->ForeColor = System::Drawing::Color::Lavender;
			this->Owned12->Location = System::Drawing::Point(2602, 672);
			this->Owned12->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->Owned12->Name = L"Owned12";
			this->Owned12->Size = System::Drawing::Size(196, 138);
			this->Owned12->TabIndex = 71;
			this->Owned12->Text = L"AAPL:\r\n28,129.90\r\n+0.07%";
			this->Owned12->Visible = false;
			this->Owned12->Click += gcnew System::EventHandler(this, &TradingPage::Owned12_Click);
			// 
			// Owned13
			// 
			this->Owned13->BackColor = System::Drawing::Color::LimeGreen;
			this->Owned13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Owned13->ForeColor = System::Drawing::Color::Lavender;
			this->Owned13->Location = System::Drawing::Point(1208, 878);
			this->Owned13->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->Owned13->Name = L"Owned13";
			this->Owned13->Size = System::Drawing::Size(196, 138);
			this->Owned13->TabIndex = 72;
			this->Owned13->Text = L"AAPL:\r\n28,129.90\r\n+0.07%";
			this->Owned13->Visible = false;
			this->Owned13->Click += gcnew System::EventHandler(this, &TradingPage::Owned13_Click);
			// 
			// Owned17
			// 
			this->Owned17->BackColor = System::Drawing::Color::LimeGreen;
			this->Owned17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Owned17->ForeColor = System::Drawing::Color::Lavender;
			this->Owned17->Location = System::Drawing::Point(1208, 1085);
			this->Owned17->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->Owned17->Name = L"Owned17";
			this->Owned17->Size = System::Drawing::Size(196, 138);
			this->Owned17->TabIndex = 73;
			this->Owned17->Text = L"AAPL:\r\n28,129.90\r\n+0.07%";
			this->Owned17->Visible = false;
			this->Owned17->Click += gcnew System::EventHandler(this, &TradingPage::Owned17_Click);
			// 
			// Owned20
			// 
			this->Owned20->BackColor = System::Drawing::Color::LimeGreen;
			this->Owned20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Owned20->ForeColor = System::Drawing::Color::Lavender;
			this->Owned20->Location = System::Drawing::Point(2602, 1085);
			this->Owned20->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->Owned20->Name = L"Owned20";
			this->Owned20->Size = System::Drawing::Size(196, 138);
			this->Owned20->TabIndex = 79;
			this->Owned20->Text = L"AAPL:\r\n28,129.90\r\n+0.07%";
			this->Owned20->Visible = false;
			this->Owned20->Click += gcnew System::EventHandler(this, &TradingPage::Owned20_Click);
			// 
			// Owned19
			// 
			this->Owned19->BackColor = System::Drawing::Color::LimeGreen;
			this->Owned19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Owned19->ForeColor = System::Drawing::Color::Lavender;
			this->Owned19->Location = System::Drawing::Point(2120, 1085);
			this->Owned19->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->Owned19->Name = L"Owned19";
			this->Owned19->Size = System::Drawing::Size(196, 138);
			this->Owned19->TabIndex = 78;
			this->Owned19->Text = L"AAPL:\r\n28,129.90\r\n+0.07%";
			this->Owned19->Visible = false;
			this->Owned19->Click += gcnew System::EventHandler(this, &TradingPage::Owned19_Click);
			// 
			// Owned18
			// 
			this->Owned18->BackColor = System::Drawing::Color::LimeGreen;
			this->Owned18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Owned18->ForeColor = System::Drawing::Color::Lavender;
			this->Owned18->Location = System::Drawing::Point(1642, 1085);
			this->Owned18->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->Owned18->Name = L"Owned18";
			this->Owned18->Size = System::Drawing::Size(196, 138);
			this->Owned18->TabIndex = 77;
			this->Owned18->Text = L"AAPL:\r\n28,129.90\r\n+0.07%";
			this->Owned18->Visible = false;
			this->Owned18->Click += gcnew System::EventHandler(this, &TradingPage::Owned18_Click);
			// 
			// Owned16
			// 
			this->Owned16->BackColor = System::Drawing::Color::LimeGreen;
			this->Owned16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Owned16->ForeColor = System::Drawing::Color::Lavender;
			this->Owned16->Location = System::Drawing::Point(2602, 870);
			this->Owned16->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->Owned16->Name = L"Owned16";
			this->Owned16->Size = System::Drawing::Size(196, 138);
			this->Owned16->TabIndex = 76;
			this->Owned16->Text = L"AAPL:\r\n28,129.90\r\n+0.07%";
			this->Owned16->Visible = false;
			this->Owned16->Click += gcnew System::EventHandler(this, &TradingPage::Owned16_Click);
			// 
			// Owned15
			// 
			this->Owned15->BackColor = System::Drawing::Color::LimeGreen;
			this->Owned15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Owned15->ForeColor = System::Drawing::Color::Lavender;
			this->Owned15->Location = System::Drawing::Point(2120, 870);
			this->Owned15->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->Owned15->Name = L"Owned15";
			this->Owned15->Size = System::Drawing::Size(196, 138);
			this->Owned15->TabIndex = 75;
			this->Owned15->Text = L"AAPL:\r\n28,129.90\r\n+0.07%";
			this->Owned15->Visible = false;
			this->Owned15->Click += gcnew System::EventHandler(this, &TradingPage::Owned15_Click);
			// 
			// Owned14
			// 
			this->Owned14->BackColor = System::Drawing::Color::DarkRed;
			this->Owned14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Owned14->ForeColor = System::Drawing::Color::Lavender;
			this->Owned14->Location = System::Drawing::Point(1642, 870);
			this->Owned14->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->Owned14->Name = L"Owned14";
			this->Owned14->Size = System::Drawing::Size(196, 138);
			this->Owned14->TabIndex = 74;
			this->Owned14->Text = L"BUD:\r\n3,408.54\r\n-0.51%";
			this->Owned14->Visible = false;
			this->Owned14->Click += gcnew System::EventHandler(this, &TradingPage::Owned14_Click);
			// 
			// TradingPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(3204, 1750);
			this->Controls->Add(this->Owned20);
			this->Controls->Add(this->Owned19);
			this->Controls->Add(this->Owned18);
			this->Controls->Add(this->Owned16);
			this->Controls->Add(this->Owned15);
			this->Controls->Add(this->Owned14);
			this->Controls->Add(this->Owned17);
			this->Controls->Add(this->Owned13);
			this->Controls->Add(this->Owned12);
			this->Controls->Add(this->Owned11);
			this->Controls->Add(this->Owned10);
			this->Controls->Add(this->Owned9);
			this->Controls->Add(this->Owned8);
			this->Controls->Add(this->Owned7);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->searchButton);
			this->Controls->Add(this->FinancialNewsHeader);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->SandP);
			this->Controls->Add(this->NASDAQ);
			this->Controls->Add(this->DowJones);
			this->Controls->Add(this->searchBox);
			this->Controls->Add(this->IndexesHeader);
			this->Controls->Add(this->searchLabel);
			this->Controls->Add(this->Owned4);
			this->Controls->Add(this->Owned3);
			this->Controls->Add(this->Owned6);
			this->Controls->Add(this->Owned2);
			this->Controls->Add(this->Owned5);
			this->Controls->Add(this->Owned1);
			this->Controls->Add(this->StocksOwnedHeader);
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
	private: System::Void Owned1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Owned1->Visible == true) {
			String^ username;
			username = marshal_as<String^>(currentUser);
			int i = 1;
			int box = 2;
			String^ ticker;
			try {
				String^ connection_str = "Server=35.227.90.11;Uid=root;Pwd=password;Database=TuringTrader";
				MySqlConnection^ connection = gcnew MySqlConnection(connection_str);
				MySqlCommand^ cmd1 = gcnew MySqlCommand("SELECT * from holdings WHERE person='" + username + "'", connection);
				MySqlDataReader^ dr1;
				connection->Open();
				dr1 = cmd1->ExecuteReader();
				while (dr1->Read() && i < 2) {
					ticker = dr1->GetString(1);
					i += 1;
				}
				dr1->Close();
				CompanyPage^ companyPage = gcnew CompanyPage();
				openChildForm(companyPage);
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
			}
		}
	}
	private: System::Void searchButton_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ s = searchBox->Text;
		String^ company;
		String^ ticker;
		try {
			dataGridView1->Rows->Clear();
			String^ connection_str = "Server=35.227.90.11;Uid=root;Pwd=password;Database=TuringTrader";
			MySqlConnection^ connection = gcnew MySqlConnection(connection_str);
			MySqlCommand^ cmd1 = gcnew MySqlCommand("SELECT * from company WHERE compName regexp'" + s  + "' or ticker regexp'" + s + "'", connection);
			MySqlDataReader^ dr1;
			connection->Open();
			dr1 = cmd1->ExecuteReader();
			while (dr1->Read()) {
				ticker = dr1->GetString(0);
				company = dr1->GetString(1);
				dataGridView1->Rows->Add(ticker, company);
			}
			dr1->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}

	}
	private: System::Void TradingPage_Load(System::Object^ sender, System::EventArgs^ e) {
		String^ username;
		username = marshal_as<String^>(currentUser);
		int i = 1;
		int j = 0;
		try {
			String^ connection_str = "Server=35.227.90.11;Uid=root;Pwd=password;Database=TuringTrader";
			MySqlConnection^ connection = gcnew MySqlConnection(connection_str);
			MySqlCommand^ cmd1 = gcnew MySqlCommand("SELECT * from holdings WHERE person='" + username + "'", connection);
			MySqlCommand^ cmd2 = gcnew MySqlCommand("SELECT * from company", connection);
			MySqlDataReader^ dr1;
			MySqlDataReader^ dr2;
			connection->Open();
			dr1 = cmd1->ExecuteReader();
			while (dr1->Read()) {
				Label^ label = (Label^)this->Controls["Owned" + i.ToString()];
				String^ text1 = "'" + dr1->GetString(1) + "' \r\n ";
				label->Text = text1;
				label->Visible = true;
				i += 1;

			}
			dr1->Close();
			dataGridView1->Rows->Add("XOM","Exxon Mobile");
			dataGridView1->Rows->Add("AAPL", "Apple");
			dataGridView1->Rows->Add("MSFT", "Microsoft");
			dataGridView1->Rows->Add("GE", "General Electric");
			dataGridView1->Rows->Add("IBM", "International Business Machine");
			dataGridView1->Rows->Add("MO", "Altria");
			dataGridView1->Rows->Add("JNJ", "Johnson and Johnson");
			dataGridView1->Rows->Add("CVX", "Chevron");
			dataGridView1->Rows->Add("WMT", "Walmart");
			dataGridView1->Rows->Add("GOOGL", "Alphabet");
			dataGridView1->Rows->Add("BRK.A", "Berkshire Hathway");
			dataGridView1->Rows->Add("PG", "Proctor & Gamble");
			dataGridView1->Rows->Add("AMZN", "Amazon");
			dataGridView1->Rows->Add("KO", "Coco Cola");
			dataGridView1->Rows->Add("MRK", "Merck");
			dataGridView1->Rows->Add("WFC", "Wells Fargo");
			dataGridView1->Rows->Add("INTC", "Intel");
			dataGridView1->Rows->Add("JPM", "JPMorgan Chase");
			dataGridView1->Rows->Add("HD", "Home Depot");
			dataGridView1->Rows->Add("PEP", "Pepsi Co.");
			dataGridView1->Rows->Add("ORCL", "Oracle Corp");
			dataGridView1->Rows->Add("MMM", "3M");
			dataGridView1->Rows->Add("DIS", "Walt Disney Co.");
			dataGridView1->Rows->Add("FB", "Facebook");
			dataGridView1->Rows->Add("ABT", "Abbott Laboratories");
			dataGridView1->Rows->Add("PFE", "Phizer");
			dataGridView1->Rows->Add("RY", "Royal Bank");
			dataGridView1->Rows->Add("SHOP", "Shopify");
			dataGridView1->Rows->Add("ACB", "Aurora Cannibis");
			dataGridView1->Rows->Add("TSLA", "Telsa");



		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void Owned2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Owned2->Visible == true) {
			String^ username;
			username = marshal_as<String^>(currentUser);
			int i = 1;
			int box = 3;
			String^ ticker;
			try {
				String^ connection_str = "Server=35.227.90.11;Uid=root;Pwd=password;Database=TuringTrader";
				MySqlConnection^ connection = gcnew MySqlConnection(connection_str);
				MySqlCommand^ cmd1 = gcnew MySqlCommand("SELECT * from holdings WHERE person='" + username + "'", connection);
				MySqlDataReader^ dr1;
				connection->Open();
				dr1 = cmd1->ExecuteReader();
				while (dr1->Read() && i < box) {
					ticker = dr1->GetString(1);
					i += 1;
				}
				dr1->Close();
				CompanyPage^ companyPage = gcnew CompanyPage();
				openChildForm(companyPage);
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
			}
		}
	}
private: System::Void Owned19_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Owned19->Visible == true) {
		String^ username;
		username = marshal_as<String^>(currentUser);
		int i = 1;
		int box = 20;
		String^ ticker;
		try {
			String^ connection_str = "Server=35.227.90.11;Uid=root;Pwd=password;Database=TuringTrader";
			MySqlConnection^ connection = gcnew MySqlConnection(connection_str);
			MySqlCommand^ cmd1 = gcnew MySqlCommand("SELECT * from holdings WHERE person='" + username + "'", connection);
			MySqlDataReader^ dr1;
			connection->Open();
			dr1 = cmd1->ExecuteReader();
			while (dr1->Read() && i < box) {
				ticker = dr1->GetString(1);
				i += 1;
			}
			dr1->Close();
			CompanyPage^ companyPage = gcnew CompanyPage();
			openChildForm(companyPage);
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
}
private: System::Void Owned20_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Owned20->Visible == true) {
		String^ username;
		username = marshal_as<String^>(currentUser);
		int i = 1;
		int box = 21;
		String^ ticker;
		try {
			String^ connection_str = "Server=35.227.90.11;Uid=root;Pwd=password;Database=TuringTrader";
			MySqlConnection^ connection = gcnew MySqlConnection(connection_str);
			MySqlCommand^ cmd1 = gcnew MySqlCommand("SELECT * from holdings WHERE person='" + username + "'", connection);
			MySqlDataReader^ dr1;
			connection->Open();
			dr1 = cmd1->ExecuteReader();
			while (dr1->Read() && i < box) {
				ticker = dr1->GetString(1);
				i += 1;
			}
			dr1->Close();
			CompanyPage^ companyPage = gcnew CompanyPage();
			openChildForm(companyPage);
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
}
private: System::Void Owned18_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Owned19->Visible == true) {
		String^ username;
		username = marshal_as<String^>(currentUser);
		int i = 1;
		int box = 19;
		String^ ticker;
		try {
			String^ connection_str = "Server=35.227.90.11;Uid=root;Pwd=password;Database=TuringTrader";
			MySqlConnection^ connection = gcnew MySqlConnection(connection_str);
			MySqlCommand^ cmd1 = gcnew MySqlCommand("SELECT * from holdings WHERE person='" + username + "'", connection);
			MySqlDataReader^ dr1;
			connection->Open();
			dr1 = cmd1->ExecuteReader();
			while (dr1->Read() && i < box) {
				ticker = dr1->GetString(1);
				i += 1;
			}
			dr1->Close();
			CompanyPage^ companyPage = gcnew CompanyPage();
			openChildForm(companyPage);
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
}
private: System::Void Owned16_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Owned16->Visible == true) {
		String^ username;
		username = marshal_as<String^>(currentUser);
		int i = 1;
		int box = 17;
		String^ ticker;
		try {
			String^ connection_str = "Server=35.227.90.11;Uid=root;Pwd=password;Database=TuringTrader";
			MySqlConnection^ connection = gcnew MySqlConnection(connection_str);
			MySqlCommand^ cmd1 = gcnew MySqlCommand("SELECT * from holdings WHERE person='" + username + "'", connection);
			MySqlDataReader^ dr1;
			connection->Open();
			dr1 = cmd1->ExecuteReader();
			while (dr1->Read() && i < box) {
				ticker = dr1->GetString(1);
				i += 1;
			}
			dr1->Close();
			CompanyPage^ companyPage = gcnew CompanyPage();
			openChildForm(companyPage);
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
}
private: System::Void Owned15_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Owned15->Visible == true) {
		String^ username;
		username = marshal_as<String^>(currentUser);
		int i = 1;
		int box = 16;
		String^ ticker;
		try {
			String^ connection_str = "Server=35.227.90.11;Uid=root;Pwd=password;Database=TuringTrader";
			MySqlConnection^ connection = gcnew MySqlConnection(connection_str);
			MySqlCommand^ cmd1 = gcnew MySqlCommand("SELECT * from holdings WHERE person='" + username + "'", connection);
			MySqlDataReader^ dr1;
			connection->Open();
			dr1 = cmd1->ExecuteReader();
			while (dr1->Read() && i < box) {
				ticker = dr1->GetString(1);
				i += 1;
			}
			dr1->Close();
			CompanyPage^ companyPage = gcnew CompanyPage();
			openChildForm(companyPage);
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
}
private: System::Void Owned14_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Owned14->Visible == true) {
		String^ username;
		username = marshal_as<String^>(currentUser);
		int i = 1;
		int box = 15;
		String^ ticker;
		try {
			String^ connection_str = "Server=35.227.90.11;Uid=root;Pwd=password;Database=TuringTrader";
			MySqlConnection^ connection = gcnew MySqlConnection(connection_str);
			MySqlCommand^ cmd1 = gcnew MySqlCommand("SELECT * from holdings WHERE person='" + username + "'", connection);
			MySqlDataReader^ dr1;
			connection->Open();
			dr1 = cmd1->ExecuteReader();
			while (dr1->Read() && i < box) {
				ticker = dr1->GetString(1);
				i += 1;
			}
			dr1->Close();
			CompanyPage^ companyPage = gcnew CompanyPage();
			openChildForm(companyPage);
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
}
private: System::Void Owned17_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Owned17->Visible == true) {
		String^ username;
		username = marshal_as<String^>(currentUser);
		int i = 1;
		int box = 18;
		String^ ticker;
		try {
			String^ connection_str = "Server=35.227.90.11;Uid=root;Pwd=password;Database=TuringTrader";
			MySqlConnection^ connection = gcnew MySqlConnection(connection_str);
			MySqlCommand^ cmd1 = gcnew MySqlCommand("SELECT * from holdings WHERE person='" + username + "'", connection);
			MySqlDataReader^ dr1;
			connection->Open();
			dr1 = cmd1->ExecuteReader();
			while (dr1->Read() && i < box) {
				ticker = dr1->GetString(1);
				i += 1;
			}
			dr1->Close();
			CompanyPage^ companyPage = gcnew CompanyPage();
			openChildForm(companyPage);
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
}
private: System::Void Owned13_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Owned13->Visible == true) {
		String^ username;
		username = marshal_as<String^>(currentUser);
		int i = 1;
		int box = 14;
		String^ ticker;
		try {
			String^ connection_str = "Server=35.227.90.11;Uid=root;Pwd=password;Database=TuringTrader";
			MySqlConnection^ connection = gcnew MySqlConnection(connection_str);
			MySqlCommand^ cmd1 = gcnew MySqlCommand("SELECT * from holdings WHERE person='" + username + "'", connection);
			MySqlDataReader^ dr1;
			connection->Open();
			dr1 = cmd1->ExecuteReader();
			while (dr1->Read() && i < box) {
				ticker = dr1->GetString(1);
				i += 1;
			}
			dr1->Close();
			CompanyPage^ companyPage = gcnew CompanyPage();
			openChildForm(companyPage);
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
}
private: System::Void Owned12_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Owned12->Visible == true) {
		String^ username;
		username = marshal_as<String^>(currentUser);
		int i = 1;
		int box = 13;
		String^ ticker;
		try {
			String^ connection_str = "Server=35.227.90.11;Uid=root;Pwd=password;Database=TuringTrader";
			MySqlConnection^ connection = gcnew MySqlConnection(connection_str);
			MySqlCommand^ cmd1 = gcnew MySqlCommand("SELECT * from holdings WHERE person='" + username + "'", connection);
			MySqlDataReader^ dr1;
			connection->Open();
			dr1 = cmd1->ExecuteReader();
			while (dr1->Read() && i < box) {
				ticker = dr1->GetString(1);
				i += 1;
			}
			dr1->Close();
			CompanyPage^ companyPage = gcnew CompanyPage();
			openChildForm(companyPage);
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
}
private: System::Void Owned11_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Owned11->Visible == true) {
		String^ username;
		username = marshal_as<String^>(currentUser);
		int i = 1;
		int box = 12;
		String^ ticker;
		try {
			String^ connection_str = "Server=35.227.90.11;Uid=root;Pwd=password;Database=TuringTrader";
			MySqlConnection^ connection = gcnew MySqlConnection(connection_str);
			MySqlCommand^ cmd1 = gcnew MySqlCommand("SELECT * from holdings WHERE person='" + username + "'", connection);
			MySqlDataReader^ dr1;
			connection->Open();
			dr1 = cmd1->ExecuteReader();
			while (dr1->Read() && i < box) {
				ticker = dr1->GetString(1);
				i += 1;
			}
			dr1->Close();
			CompanyPage^ companyPage = gcnew CompanyPage();
			openChildForm(companyPage);
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
}
private: System::Void Owned10_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Owned10->Visible == true) {
		String^ username;
		username = marshal_as<String^>(currentUser);
		int i = 1;
		int box = 11;
		String^ ticker;
		try {
			String^ connection_str = "Server=35.227.90.11;Uid=root;Pwd=password;Database=TuringTrader";
			MySqlConnection^ connection = gcnew MySqlConnection(connection_str);
			MySqlCommand^ cmd1 = gcnew MySqlCommand("SELECT * from holdings WHERE person='" + username + "'", connection);
			MySqlDataReader^ dr1;
			connection->Open();
			dr1 = cmd1->ExecuteReader();
			while (dr1->Read() && i < box) {
				ticker = dr1->GetString(1);
				i += 1;
			}
			dr1->Close();
			CompanyPage^ companyPage = gcnew CompanyPage();
			openChildForm(companyPage);
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
}
private: System::Void Owned9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Owned9->Visible == true) {
		String^ username;
		username = marshal_as<String^>(currentUser);
		int i = 1;
		int box = 10;
		String^ ticker;
		try {
			String^ connection_str = "Server=35.227.90.11;Uid=root;Pwd=password;Database=TuringTrader";
			MySqlConnection^ connection = gcnew MySqlConnection(connection_str);
			MySqlCommand^ cmd1 = gcnew MySqlCommand("SELECT * from holdings WHERE person='" + username + "'", connection);
			MySqlDataReader^ dr1;
			connection->Open();
			dr1 = cmd1->ExecuteReader();
			while (dr1->Read() && i < box) {
				ticker = dr1->GetString(1);
				i += 1;
			}
			dr1->Close();
			CompanyPage^ companyPage = gcnew CompanyPage();
			openChildForm(companyPage);
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
}
private: System::Void Owned8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Owned8->Visible == true) {
		String^ username;
		username = marshal_as<String^>(currentUser);
		int i = 1;
		int box = 9;
		String^ ticker;
		try {
			String^ connection_str = "Server=35.227.90.11;Uid=root;Pwd=password;Database=TuringTrader";
			MySqlConnection^ connection = gcnew MySqlConnection(connection_str);
			MySqlCommand^ cmd1 = gcnew MySqlCommand("SELECT * from holdings WHERE person='" + username + "'", connection);
			MySqlDataReader^ dr1;
			connection->Open();
			dr1 = cmd1->ExecuteReader();
			while (dr1->Read() && i < box) {
				ticker = dr1->GetString(1);
				i += 1;
			}
			dr1->Close();
			CompanyPage^ companyPage = gcnew CompanyPage();
			openChildForm(companyPage);
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
}
private: System::Void Owned7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Owned7->Visible == true) {
		String^ username;
		username = marshal_as<String^>(currentUser);
		int i = 1;
		int box = 8;
		String^ ticker;
		try {
			String^ connection_str = "Server=35.227.90.11;Uid=root;Pwd=password;Database=TuringTrader";
			MySqlConnection^ connection = gcnew MySqlConnection(connection_str);
			MySqlCommand^ cmd1 = gcnew MySqlCommand("SELECT * from holdings WHERE person='" + username + "'", connection);
			MySqlDataReader^ dr1;
			connection->Open();
			dr1 = cmd1->ExecuteReader();
			while (dr1->Read() && i < box) {
				ticker = dr1->GetString(1);
				i += 1;
			}
			dr1->Close();
			CompanyPage^ companyPage = gcnew CompanyPage();
			openChildForm(companyPage);
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
}
private: System::Void Owned4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Owned4->Visible == true) {
		String^ username;
		username = marshal_as<String^>(currentUser);
		int i = 1;
		int box = 5;
		String^ ticker;
		try {
			String^ connection_str = "Server=35.227.90.11;Uid=root;Pwd=password;Database=TuringTrader";
			MySqlConnection^ connection = gcnew MySqlConnection(connection_str);
			MySqlCommand^ cmd1 = gcnew MySqlCommand("SELECT * from holdings WHERE person='" + username + "'", connection);
			MySqlDataReader^ dr1;
			connection->Open();
			dr1 = cmd1->ExecuteReader();
			while (dr1->Read() && i < box) {
				ticker = dr1->GetString(1);
				i += 1;
			}
			dr1->Close();
			CompanyPage^ companyPage = gcnew CompanyPage();
			openChildForm(companyPage);
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
}
private: System::Void Owned3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Owned3->Visible == true) {
		String^ username;
		username = marshal_as<String^>(currentUser);
		int i = 1;
		int box = 4;
		String^ ticker;
		try {
			String^ connection_str = "Server=35.227.90.11;Uid=root;Pwd=password;Database=TuringTrader";
			MySqlConnection^ connection = gcnew MySqlConnection(connection_str);
			MySqlCommand^ cmd1 = gcnew MySqlCommand("SELECT * from holdings WHERE person='" + username + "'", connection);
			MySqlDataReader^ dr1;
			connection->Open();
			dr1 = cmd1->ExecuteReader();
			while (dr1->Read() && i < box) {
				ticker = dr1->GetString(1);
				i += 1;
			}
			dr1->Close();
			CompanyPage^ companyPage = gcnew CompanyPage();
			openChildForm(companyPage);
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
}
private: System::Void Owned6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Owned6->Visible == true) {
		String^ username;
		username = marshal_as<String^>(currentUser);
		int i = 1;
		int box = 7;
		String^ ticker;
		try {
			String^ connection_str = "Server=35.227.90.11;Uid=root;Pwd=password;Database=TuringTrader";
			MySqlConnection^ connection = gcnew MySqlConnection(connection_str);
			MySqlCommand^ cmd1 = gcnew MySqlCommand("SELECT * from holdings WHERE person='" + username + "'", connection);
			MySqlDataReader^ dr1;
			connection->Open();
			dr1 = cmd1->ExecuteReader();
			while (dr1->Read() && i < box) {
				ticker = dr1->GetString(1);
				i += 1;
			}
			dr1->Close();
			CompanyPage^ companyPage = gcnew CompanyPage();
			openChildForm(companyPage);
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
}
private: System::Void Owned5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Owned5->Visible == true) {
		String^ username;
		username = marshal_as<String^>(currentUser);
		int i = 1;
		int box = 6;
		String^ ticker;
		try {
			String^ connection_str = "Server=35.227.90.11;Uid=root;Pwd=password;Database=TuringTrader";
			MySqlConnection^ connection = gcnew MySqlConnection(connection_str);
			MySqlCommand^ cmd1 = gcnew MySqlCommand("SELECT * from holdings WHERE person='" + username + "'", connection);
			MySqlDataReader^ dr1;
			connection->Open();
			dr1 = cmd1->ExecuteReader();
			while (dr1->Read() && i < box) {
				ticker = dr1->GetString(1);
				i += 1;
			}
			dr1->Close();
			CompanyPage^ companyPage = gcnew CompanyPage();
			openChildForm(companyPage);
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	String^ str;
	DataGridViewRow^ row = dataGridView1->Rows[e->RowIndex];
	str = row->Cells[0]->Value->ToString();

}
};
}
