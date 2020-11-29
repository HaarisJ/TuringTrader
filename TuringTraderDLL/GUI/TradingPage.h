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
			this->FinancialNewsHeader->Anchor = System::Windows::Forms::AnchorStyles::None;
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
			this->panel1->Anchor = System::Windows::Forms::AnchorStyles::None;
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
			this->SandP->Anchor = System::Windows::Forms::AnchorStyles::Top;
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
			this->NASDAQ->Anchor = System::Windows::Forms::AnchorStyles::Top;
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
			this->DowJones->Anchor = System::Windows::Forms::AnchorStyles::Top;
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
			this->searchBox->Anchor = System::Windows::Forms::AnchorStyles::Top;
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
			this->IndexesHeader->Anchor = System::Windows::Forms::AnchorStyles::Top;
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
			this->searchLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
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
			this->Owned4->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->Owned4->AutoSize = true;
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
			// 
			// Owned3
			// 
			this->Owned3->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->Owned3->AutoSize = true;
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
			// 
			// Owned6
			// 
			this->Owned6->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->Owned6->AutoSize = true;
			this->Owned6->BackColor = System::Drawing::Color::DarkRed;
			this->Owned6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Owned6->ForeColor = System::Drawing::Color::Lavender;
			this->Owned6->Location = System::Drawing::Point(1642, 457);
			this->Owned6->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->Owned6->Name = L"Owned6";
			this->Owned6->Size = System::Drawing::Size(174, 138);
			this->Owned6->TabIndex = 50;
			this->Owned6->Text = L"BUD:\r\n3,408.54\r\n-0.51%";
			// 
			// Owned2
			// 
			this->Owned2->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->Owned2->AutoSize = true;
			this->Owned2->BackColor = System::Drawing::Color::DarkRed;
			this->Owned2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Owned2->ForeColor = System::Drawing::Color::Lavender;
			this->Owned2->Location = System::Drawing::Point(1642, 262);
			this->Owned2->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->Owned2->Name = L"Owned2";
			this->Owned2->Size = System::Drawing::Size(174, 138);
			this->Owned2->TabIndex = 49;
			this->Owned2->Text = L"F:\r\n3,408.54\r\n-0.51%";
			// 
			// Owned5
			// 
			this->Owned5->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->Owned5->AutoSize = true;
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
			// 
			// Owned1
			// 
			this->Owned1->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->Owned1->AutoSize = true;
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
			this->Owned1->Click += gcnew System::EventHandler(this, &TradingPage::Owned1_Click);
			// 
			// StocksOwnedHeader
			// 
			this->StocksOwnedHeader->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->StocksOwnedHeader->AutoSize = true;
			this->StocksOwnedHeader->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->StocksOwnedHeader->Location = System::Drawing::Point(1395, 117);
			this->StocksOwnedHeader->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->StocksOwnedHeader->Name = L"StocksOwnedHeader";
			this->StocksOwnedHeader->Size = System::Drawing::Size(1233, 54);
			this->StocksOwnedHeader->TabIndex = 46;
			this->StocksOwnedHeader->Text = L"Performance of Stocks Owned Since Last Market Opening";
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
			// Owned7
			// 
			this->Owned7->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->Owned7->AutoSize = true;
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
			// 
			// Owned8
			// 
			this->Owned8->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->Owned8->AutoSize = true;
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
			// 
			// Owned9
			// 
			this->Owned9->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->Owned9->AutoSize = true;
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
			// 
			// Owned10
			// 
			this->Owned10->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->Owned10->AutoSize = true;
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
			// 
			// Owned11
			// 
			this->Owned11->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->Owned11->AutoSize = true;
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
			// 
			// Owned12
			// 
			this->Owned12->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->Owned12->AutoSize = true;
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
			// 
			// Owned13
			// 
			this->Owned13->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->Owned13->AutoSize = true;
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
			// 
			// Owned17
			// 
			this->Owned17->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->Owned17->AutoSize = true;
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
			// 
			// Owned20
			// 
			this->Owned20->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->Owned20->AutoSize = true;
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
			// 
			// Owned19
			// 
			this->Owned19->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->Owned19->AutoSize = true;
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
			// 
			// Owned18
			// 
			this->Owned18->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->Owned18->AutoSize = true;
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
			// 
			// Owned16
			// 
			this->Owned16->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->Owned16->AutoSize = true;
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
			// 
			// Owned15
			// 
			this->Owned15->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->Owned15->AutoSize = true;
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
			// 
			// Owned14
			// 
			this->Owned14->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->Owned14->AutoSize = true;
			this->Owned14->BackColor = System::Drawing::Color::DarkRed;
			this->Owned14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Owned14->ForeColor = System::Drawing::Color::Lavender;
			this->Owned14->Location = System::Drawing::Point(1642, 870);
			this->Owned14->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->Owned14->Name = L"Owned14";
			this->Owned14->Size = System::Drawing::Size(174, 138);
			this->Owned14->TabIndex = 74;
			this->Owned14->Text = L"BUD:\r\n3,408.54\r\n-0.51%";
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
		CompanyPage^ companyPage = gcnew CompanyPage();
		openChildForm(companyPage);
	}
	private: System::Void searchButton_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ s = searchBox->Text;
	}
	private: System::Void TradingPage_Load(System::Object^ sender, System::EventArgs^ e) {
		String^ username;
		username = marshal_as<String^>(currentUser);
		int i = 1;
		List<String^>^ owns = gcnew List<String^>();
		owns->Add("Owned1");
		owns->Add("Owned2");
		owns->Add("Owned3");
		owns->Add("Owned4");
		owns->Add("Owned5");
		owns->Add("Owned6");
		owns->Add("Owned7");
		owns->Add("Owned8");
		owns->Add("Owned9");
		owns->Add("Owned10");
		owns->Add("Owned11");
		owns->Add("Owned12");
		owns->Add("Owned13");
		owns->Add("Owned14");
		owns->Add("Owned15");
		owns->Add("Owned16");
		owns->Add("Owned17");
		owns->Add("Owned18");
		owns->Add("Owned19");
		owns->Add("Owned20");
		try {
			String^ connection_str = "Server=35.227.90.11;Uid=root;Pwd=password;Database=TuringTrader";
			MySqlConnection^ connection = gcnew MySqlConnection(connection_str);
			MySqlCommand^ cmd1 = gcnew MySqlCommand("SELECT * from holdings WHERE person='" + username + "'", connection);
			MySqlDataReader^ dr1;
			connection->Open();
			dr1 = cmd1->ExecuteReader();
			while (dr1->Read()) {
				Label^ label = (Label^)this->Controls["Owned" + i.ToString()];
				i += 1;
			}
			dr1->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	};
}
