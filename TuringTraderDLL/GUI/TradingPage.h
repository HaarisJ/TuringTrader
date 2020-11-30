#pragma once
#include "CompanyPage.h"
#include "News.h"
#include <msclr\marshal_cppstd.h>
#include <vector>
#include "Stock.h"
#include <cmath>
#include <sstream>
#include <iomanip>
#include <algorithm>
#include <chrono>
#include <random>


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

	protected:

	protected:

	private: System::Windows::Forms::Label^ Apple;

	private: System::Windows::Forms::Label^ McLeod;


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
	private: System::Windows::Forms::Label^ Microsoft;
	private: System::Windows::Forms::PictureBox^ newsImage2;

	private: System::Windows::Forms::PictureBox^ newsImage1;

	private: System::Windows::Forms::TableLayoutPanel^ newsArticle2;
	private: System::Windows::Forms::Label^ headline2;
	private: System::Windows::Forms::Label^ date2;
	private: System::Windows::Forms::Label^ source2;




	private: System::Windows::Forms::TableLayoutPanel^ newsArticle1;
private: System::Windows::Forms::Label^ headline1;
private: System::Windows::Forms::Label^ date1;
private: System::Windows::Forms::Label^ source1;




private: System::Windows::Forms::PictureBox^ newsImage4;

private: System::Windows::Forms::PictureBox^ newsImage3;

private: System::Windows::Forms::TableLayoutPanel^ newsArticle4;
private: System::Windows::Forms::Label^ headline4;
private: System::Windows::Forms::Label^ date4;
private: System::Windows::Forms::Label^ source4;




private: System::Windows::Forms::TableLayoutPanel^ newsArticle3;
private: System::Windows::Forms::Label^ headline3;
private: System::Windows::Forms::Label^ date3;
private: System::Windows::Forms::Label^ source3;





private: System::Windows::Forms::Label^ label8;











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
			this->Apple = (gcnew System::Windows::Forms::Label());
			this->McLeod = (gcnew System::Windows::Forms::Label());
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
			this->Microsoft = (gcnew System::Windows::Forms::Label());
			this->newsImage2 = (gcnew System::Windows::Forms::PictureBox());
			this->newsImage1 = (gcnew System::Windows::Forms::PictureBox());
			this->newsArticle2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->headline2 = (gcnew System::Windows::Forms::Label());
			this->date2 = (gcnew System::Windows::Forms::Label());
			this->source2 = (gcnew System::Windows::Forms::Label());
			this->newsArticle1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->headline1 = (gcnew System::Windows::Forms::Label());
			this->date1 = (gcnew System::Windows::Forms::Label());
			this->source1 = (gcnew System::Windows::Forms::Label());
			this->newsImage4 = (gcnew System::Windows::Forms::PictureBox());
			this->newsImage3 = (gcnew System::Windows::Forms::PictureBox());
			this->newsArticle4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->headline4 = (gcnew System::Windows::Forms::Label());
			this->date4 = (gcnew System::Windows::Forms::Label());
			this->source4 = (gcnew System::Windows::Forms::Label());
			this->newsArticle3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->headline3 = (gcnew System::Windows::Forms::Label());
			this->date3 = (gcnew System::Windows::Forms::Label());
			this->source3 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->newsImage2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->newsImage1))->BeginInit();
			this->newsArticle2->SuspendLayout();
			this->newsArticle1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->newsImage4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->newsImage3))->BeginInit();
			this->newsArticle4->SuspendLayout();
			this->newsArticle3->SuspendLayout();
			this->SuspendLayout();
			// 
			// Apple
			// 
			this->Apple->BackColor = System::Drawing::Color::DarkRed;
			this->Apple->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->Apple->ForeColor = System::Drawing::Color::Lavender;
			this->Apple->Location = System::Drawing::Point(86, 1530);
			this->Apple->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->Apple->Name = L"Apple";
			this->Apple->Size = System::Drawing::Size(196, 138);
			this->Apple->TabIndex = 61;
			this->Apple->Text = L"S&&P 500:\r\n3,408.54\r\n-0.51%";
			// 
			// McLeod
			// 
			this->McLeod->BackColor = System::Drawing::Color::LimeGreen;
			this->McLeod->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->McLeod->ForeColor = System::Drawing::Color::Lavender;
			this->McLeod->Location = System::Drawing::Point(489, 1285);
			this->McLeod->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->McLeod->Name = L"McLeod";
			this->McLeod->Size = System::Drawing::Size(196, 138);
			this->McLeod->TabIndex = 60;
			this->McLeod->Text = L"NASDAQ:\r\n11,329.95\r\n+1.24%";
			// 
			// DowJones
			// 
			this->DowJones->BackColor = System::Drawing::Color::LimeGreen;
			this->DowJones->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->DowJones->ForeColor = System::Drawing::Color::Lavender;
			this->DowJones->Location = System::Drawing::Point(86, 1285);
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
			this->IndexesHeader->Location = System::Drawing::Point(149, 1139);
			this->IndexesHeader->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->IndexesHeader->Name = L"IndexesHeader";
			this->IndexesHeader->Size = System::Drawing::Size(500, 92);
			this->IndexesHeader->TabIndex = 57;
			this->IndexesHeader->Text = L"Major Index Performance \r\nSince Last Market Opening";
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
			this->Owned4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
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
			this->Owned3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
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
			this->Owned6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
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
			this->Owned2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
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
			this->Owned5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
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
			this->Owned1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
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
			this->dataGridView1->Size = System::Drawing::Size(871, 652);
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
			this->Owned7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
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
			this->Owned8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
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
			this->Owned9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->Owned9->ForeColor = System::Drawing::Color::Lavender;
			this->Owned9->Location = System::Drawing::Point(1208, 639);
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
			this->Owned10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->Owned10->ForeColor = System::Drawing::Color::Lavender;
			this->Owned10->Location = System::Drawing::Point(1642, 639);
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
			this->Owned11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->Owned11->ForeColor = System::Drawing::Color::Lavender;
			this->Owned11->Location = System::Drawing::Point(2120, 639);
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
			this->Owned12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->Owned12->ForeColor = System::Drawing::Color::Lavender;
			this->Owned12->Location = System::Drawing::Point(2602, 639);
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
			this->Owned13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->Owned13->ForeColor = System::Drawing::Color::Lavender;
			this->Owned13->Location = System::Drawing::Point(1208, 826);
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
			this->Owned17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->Owned17->ForeColor = System::Drawing::Color::Lavender;
			this->Owned17->Location = System::Drawing::Point(1208, 1002);
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
			this->Owned20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->Owned20->ForeColor = System::Drawing::Color::Lavender;
			this->Owned20->Location = System::Drawing::Point(2602, 1002);
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
			this->Owned19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->Owned19->ForeColor = System::Drawing::Color::Lavender;
			this->Owned19->Location = System::Drawing::Point(2120, 1002);
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
			this->Owned18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->Owned18->ForeColor = System::Drawing::Color::Lavender;
			this->Owned18->Location = System::Drawing::Point(1642, 1002);
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
			this->Owned16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->Owned16->ForeColor = System::Drawing::Color::Lavender;
			this->Owned16->Location = System::Drawing::Point(2602, 818);
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
			this->Owned15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->Owned15->ForeColor = System::Drawing::Color::Lavender;
			this->Owned15->Location = System::Drawing::Point(2120, 818);
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
			this->Owned14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->Owned14->ForeColor = System::Drawing::Color::Lavender;
			this->Owned14->Location = System::Drawing::Point(1642, 818);
			this->Owned14->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->Owned14->Name = L"Owned14";
			this->Owned14->Size = System::Drawing::Size(196, 138);
			this->Owned14->TabIndex = 74;
			this->Owned14->Text = L"BUD:\r\n3,408.54\r\n-0.51%";
			this->Owned14->Visible = false;
			this->Owned14->Click += gcnew System::EventHandler(this, &TradingPage::Owned14_Click);
			// 
			// Microsoft
			// 
			this->Microsoft->BackColor = System::Drawing::Color::DarkRed;
			this->Microsoft->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->Microsoft->ForeColor = System::Drawing::Color::Lavender;
			this->Microsoft->Location = System::Drawing::Point(489, 1530);
			this->Microsoft->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->Microsoft->Name = L"Microsoft";
			this->Microsoft->Size = System::Drawing::Size(196, 138);
			this->Microsoft->TabIndex = 80;
			this->Microsoft->Text = L"S&&P 500:\r\n3,408.54\r\n-0.51%";
			// 
			// newsImage2
			// 
			this->newsImage2->Location = System::Drawing::Point(806, 1530);
			this->newsImage2->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->newsImage2->Name = L"newsImage2";
			this->newsImage2->Size = System::Drawing::Size(267, 181);
			this->newsImage2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->newsImage2->TabIndex = 89;
			this->newsImage2->TabStop = false;
			// 
			// newsImage1
			// 
			this->newsImage1->Location = System::Drawing::Point(806, 1292);
			this->newsImage1->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->newsImage1->Name = L"newsImage1";
			this->newsImage1->Size = System::Drawing::Size(267, 193);
			this->newsImage1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->newsImage1->TabIndex = 88;
			this->newsImage1->TabStop = false;
			// 
			// newsArticle2
			// 
			this->newsArticle2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->newsArticle2->ColumnCount = 1;
			this->newsArticle2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->newsArticle2->Controls->Add(this->headline2, 0, 0);
			this->newsArticle2->Controls->Add(this->date2, 0, 1);
			this->newsArticle2->Controls->Add(this->source2, 0, 2);
			this->newsArticle2->Location = System::Drawing::Point(1120, 1530);
			this->newsArticle2->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->newsArticle2->Name = L"newsArticle2";
			this->newsArticle2->RowCount = 3;
			this->newsArticle2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->newsArticle2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 41)));
			this->newsArticle2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 38)));
			this->newsArticle2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 48)));
			this->newsArticle2->Size = System::Drawing::Size(771, 181);
			this->newsArticle2->TabIndex = 85;
			// 
			// headline2
			// 
			this->headline2->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->headline2->AutoSize = true;
			this->headline2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->headline2->Location = System::Drawing::Point(5, 30);
			this->headline2->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->headline2->Name = L"headline2";
			this->headline2->Size = System::Drawing::Size(197, 42);
			this->headline2->TabIndex = 19;
			this->headline2->Text = L"Headline 2";
			// 
			// date2
			// 
			this->date2->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->date2->AutoSize = true;
			this->date2->Location = System::Drawing::Point(8, 106);
			this->date2->Margin = System::Windows::Forms::Padding(8, 0, 8, 0);
			this->date2->Name = L"date2";
			this->date2->Size = System::Drawing::Size(98, 32);
			this->date2->TabIndex = 27;
			this->date2->Text = L"Date 2";
			// 
			// source2
			// 
			this->source2->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->source2->AutoSize = true;
			this->source2->Location = System::Drawing::Point(8, 146);
			this->source2->Margin = System::Windows::Forms::Padding(8, 0, 8, 0);
			this->source2->Name = L"source2";
			this->source2->Size = System::Drawing::Size(128, 32);
			this->source2->TabIndex = 28;
			this->source2->Text = L"Source 2";
			// 
			// newsArticle1
			// 
			this->newsArticle1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->newsArticle1->ColumnCount = 1;
			this->newsArticle1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->newsArticle1->Controls->Add(this->headline1, 0, 0);
			this->newsArticle1->Controls->Add(this->date1, 0, 1);
			this->newsArticle1->Controls->Add(this->source1, 0, 2);
			this->newsArticle1->Location = System::Drawing::Point(1120, 1292);
			this->newsArticle1->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->newsArticle1->Name = L"newsArticle1";
			this->newsArticle1->RowCount = 3;
			this->newsArticle1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->newsArticle1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 45)));
			this->newsArticle1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 38)));
			this->newsArticle1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 48)));
			this->newsArticle1->Size = System::Drawing::Size(771, 193);
			this->newsArticle1->TabIndex = 84;
			// 
			// headline1
			// 
			this->headline1->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->headline1->AutoSize = true;
			this->headline1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->headline1->Location = System::Drawing::Point(5, 34);
			this->headline1->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->headline1->Name = L"headline1";
			this->headline1->Size = System::Drawing::Size(197, 42);
			this->headline1->TabIndex = 9;
			this->headline1->Text = L"Headline 1";
			// 
			// date1
			// 
			this->date1->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->date1->AutoSize = true;
			this->date1->Location = System::Drawing::Point(8, 116);
			this->date1->Margin = System::Windows::Forms::Padding(8, 0, 8, 0);
			this->date1->Name = L"date1";
			this->date1->Size = System::Drawing::Size(98, 32);
			this->date1->TabIndex = 25;
			this->date1->Text = L"Date 1";
			// 
			// source1
			// 
			this->source1->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->source1->AutoSize = true;
			this->source1->Location = System::Drawing::Point(8, 158);
			this->source1->Margin = System::Windows::Forms::Padding(8, 0, 8, 0);
			this->source1->Name = L"source1";
			this->source1->Size = System::Drawing::Size(128, 32);
			this->source1->TabIndex = 26;
			this->source1->Text = L"Source 1";
			// 
			// newsImage4
			// 
			this->newsImage4->Location = System::Drawing::Point(1927, 1530);
			this->newsImage4->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->newsImage4->Name = L"newsImage4";
			this->newsImage4->Size = System::Drawing::Size(267, 181);
			this->newsImage4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->newsImage4->TabIndex = 93;
			this->newsImage4->TabStop = false;
			// 
			// newsImage3
			// 
			this->newsImage3->Location = System::Drawing::Point(1927, 1292);
			this->newsImage3->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->newsImage3->Name = L"newsImage3";
			this->newsImage3->Size = System::Drawing::Size(267, 193);
			this->newsImage3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->newsImage3->TabIndex = 92;
			this->newsImage3->TabStop = false;
			// 
			// newsArticle4
			// 
			this->newsArticle4->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->newsArticle4->ColumnCount = 1;
			this->newsArticle4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->newsArticle4->Controls->Add(this->headline4, 0, 0);
			this->newsArticle4->Controls->Add(this->date4, 0, 1);
			this->newsArticle4->Controls->Add(this->source4, 0, 2);
			this->newsArticle4->Location = System::Drawing::Point(2236, 1530);
			this->newsArticle4->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->newsArticle4->Name = L"newsArticle4";
			this->newsArticle4->RowCount = 3;
			this->newsArticle4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->newsArticle4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 41)));
			this->newsArticle4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 38)));
			this->newsArticle4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 48)));
			this->newsArticle4->Size = System::Drawing::Size(771, 181);
			this->newsArticle4->TabIndex = 91;
			// 
			// headline4
			// 
			this->headline4->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->headline4->AutoSize = true;
			this->headline4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->headline4->Location = System::Drawing::Point(5, 30);
			this->headline4->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->headline4->Name = L"headline4";
			this->headline4->Size = System::Drawing::Size(197, 42);
			this->headline4->TabIndex = 19;
			this->headline4->Text = L"Headline 4";
			// 
			// date4
			// 
			this->date4->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->date4->AutoSize = true;
			this->date4->Location = System::Drawing::Point(8, 106);
			this->date4->Margin = System::Windows::Forms::Padding(8, 0, 8, 0);
			this->date4->Name = L"date4";
			this->date4->Size = System::Drawing::Size(98, 32);
			this->date4->TabIndex = 27;
			this->date4->Text = L"Date 4";
			// 
			// source4
			// 
			this->source4->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->source4->AutoSize = true;
			this->source4->Location = System::Drawing::Point(8, 146);
			this->source4->Margin = System::Windows::Forms::Padding(8, 0, 8, 0);
			this->source4->Name = L"source4";
			this->source4->Size = System::Drawing::Size(128, 32);
			this->source4->TabIndex = 28;
			this->source4->Text = L"Source 4";
			// 
			// newsArticle3
			// 
			this->newsArticle3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->newsArticle3->ColumnCount = 1;
			this->newsArticle3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->newsArticle3->Controls->Add(this->headline3, 0, 0);
			this->newsArticle3->Controls->Add(this->date3, 0, 1);
			this->newsArticle3->Controls->Add(this->source3, 0, 2);
			this->newsArticle3->Location = System::Drawing::Point(2236, 1292);
			this->newsArticle3->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->newsArticle3->Name = L"newsArticle3";
			this->newsArticle3->RowCount = 3;
			this->newsArticle3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->newsArticle3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 45)));
			this->newsArticle3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 38)));
			this->newsArticle3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 48)));
			this->newsArticle3->Size = System::Drawing::Size(771, 193);
			this->newsArticle3->TabIndex = 90;
			// 
			// headline3
			// 
			this->headline3->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->headline3->AutoSize = true;
			this->headline3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->headline3->Location = System::Drawing::Point(5, 34);
			this->headline3->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->headline3->Name = L"headline3";
			this->headline3->Size = System::Drawing::Size(197, 42);
			this->headline3->TabIndex = 9;
			this->headline3->Text = L"Headline 3";
			// 
			// date3
			// 
			this->date3->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->date3->AutoSize = true;
			this->date3->Location = System::Drawing::Point(8, 116);
			this->date3->Margin = System::Windows::Forms::Padding(8, 0, 8, 0);
			this->date3->Name = L"date3";
			this->date3->Size = System::Drawing::Size(98, 32);
			this->date3->TabIndex = 25;
			this->date3->Text = L"Date 3";
			// 
			// source3
			// 
			this->source3->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->source3->AutoSize = true;
			this->source3->Location = System::Drawing::Point(8, 158);
			this->source3->Margin = System::Windows::Forms::Padding(8, 0, 8, 0);
			this->source3->Name = L"source3";
			this->source3->Size = System::Drawing::Size(128, 32);
			this->source3->TabIndex = 26;
			this->source3->Text = L"Source 3";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(1125, 1177);
			this->label8->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(297, 54);
			this->label8->TabIndex = 94;
			this->label8->Text = L"Market News";
			// 
			// TradingPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(3204, 1750);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->newsImage4);
			this->Controls->Add(this->newsImage3);
			this->Controls->Add(this->newsArticle4);
			this->Controls->Add(this->newsArticle3);
			this->Controls->Add(this->newsImage2);
			this->Controls->Add(this->newsImage1);
			this->Controls->Add(this->newsArticle2);
			this->Controls->Add(this->newsArticle1);
			this->Controls->Add(this->Microsoft);
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
			this->Controls->Add(this->Apple);
			this->Controls->Add(this->McLeod);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->newsImage2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->newsImage1))->EndInit();
			this->newsArticle2->ResumeLayout(false);
			this->newsArticle2->PerformLayout();
			this->newsArticle1->ResumeLayout(false);
			this->newsArticle1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->newsImage4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->newsImage3))->EndInit();
			this->newsArticle4->ResumeLayout(false);
			this->newsArticle4->PerformLayout();
			this->newsArticle3->ResumeLayout(false);
			this->newsArticle3->PerformLayout();
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
				MySqlCommand^ cmd1 = gcnew MySqlCommand("SELECT * from watches WHERE person='" + username + "'", connection);
				MySqlDataReader^ dr1;
				connection->Open();
				dr1 = cmd1->ExecuteReader();
				while (dr1->Read() && i < 2) {
					ticker = dr1->GetString(1);
					i += 1;
				}
				dr1->Close();
				CompanyPage^ companyPage = gcnew CompanyPage(ticker);
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
			MySqlCommand^ cmd1 = gcnew MySqlCommand("SELECT * from watches WHERE person='" + username + "'", connection);
			MySqlCommand^ cmd2 = gcnew MySqlCommand("SELECT * from company", connection);
			MySqlDataReader^ dr1;
			MySqlDataReader^ dr2;
			connection->Open();
			dr1 = cmd1->ExecuteReader();
			while (dr1->Read()) {
				Label^ label = (Label^)this->Controls["Owned" + i.ToString()];
				String^ ticker = dr1->GetString(1);
				string stdTicker;
				stdTicker= marshal_as<string>(ticker);
				Stock stock = Stock(stdTicker);
				stock.updateMarketVals();
				float cp = stock.getCurrentPrice();
				float op = stock.getOpenPrice();
				float pnl = stock.getPL();
				float pc = (pnl / op) * 100;
				String^ CurrentPrice = cp.ToString(L"c");
				std::stringstream ss;
				ss << std::fixed << std::setprecision(2) << pc;
				std::string stdPC = ss.str();
				String^ PercentChange= marshal_as<String^>(stdPC);
				String^ text1 = "" + ticker + " \r\n " + CurrentPrice + " \r\n " + PercentChange + "% \r\n ";
				label->Text = text1;
				label->Visible = true;
				if (pc > 0) 
					label->BackColor = System::Drawing::Color::LimeGreen;
				else
					label->BackColor = System::Drawing::Color::DarkRed;
				i += 1;

			}
			dr1->Close();

			// Dow Jones Label
			Stock dowJones = Stock("DJD");
			dowJones.updateMarketVals();
			float cp = dowJones.getCurrentPrice();
			float op = dowJones.getOpenPrice();
			float pnl = dowJones.getPL();
			float pc = (pnl / op) * 100;
			String^ CurrentPrice = cp.ToString(L"c");
			std::stringstream s1;
			s1 << std::fixed << std::setprecision(2) << pc;
			std::string stdPC1 = s1.str();
			String^ PercentChange = marshal_as<String^>(stdPC1);
			String^ text1 = "Dow Jones \r\n " + CurrentPrice + " \r\n " + PercentChange + "% \r\n ";
			DowJones->Text = text1;
			if (pc > 0)
				DowJones->BackColor = System::Drawing::Color::LimeGreen;
			else
				DowJones->BackColor = System::Drawing::Color::DarkRed;

			// Apple Stock Label
			Stock apple = Stock("AAPL");
			apple.updateMarketVals();
			cp = apple.getCurrentPrice();
			op = apple.getOpenPrice();
			pnl = apple.getPL();
			pc = (pnl / op) * 100;
			CurrentPrice = cp.ToString(L"c");
			std::stringstream s2;
			s2<< std::fixed << std::setprecision(2) << pc;
			std::string stdPC2 = s2.str();
			PercentChange = marshal_as<String^>(stdPC2);
			text1 = "Apple \r\n " + CurrentPrice + " \r\n " + PercentChange + "% \r\n ";
			Apple->Text = text1;
			if (pc > 0)
				Apple->BackColor = System::Drawing::Color::LimeGreen;
			else
				Apple->BackColor = System::Drawing::Color::DarkRed;

			// Microsoft Stock Label
			Stock ms = Stock("MSFT");
			ms.updateMarketVals();
			cp = ms.getCurrentPrice();
			op = ms.getOpenPrice();
			pnl = ms.getPL();
			pc = (pnl / op) * 100;
			CurrentPrice = cp.ToString(L"c");
			std::stringstream s3;
			s3 << std::fixed << std::setprecision(2) << pc;
			std::string stdPC3 = s3.str();
			PercentChange = marshal_as<String^>(stdPC3);
			text1 = "Microsoft \r\n " + CurrentPrice + " \r\n " + PercentChange + "% \r\n ";
			Microsoft->Text = text1;
			if (pc > 0)
				Microsoft->BackColor = System::Drawing::Color::LimeGreen;
			else
				Microsoft->BackColor = System::Drawing::Color::DarkRed;

			// McLeod Label
			text1 = "McLeod's Teaching \r\n $69,420 \r\n 69% \r\n ";
			McLeod->Text = text1;
			McLeod->BackColor = System::Drawing::Color::LimeGreen;

			// Populating Search DataGridView with default stocks
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
			dataGridView1->Rows->Add("SQ", "Square");


			// Populating news panel


			Stock news1= Stock("DJIA");
			news1.updateNews();
			vector<Stock::news> cNews = news1.getNews();
			Stock news2 = Stock("AAPL");
			news2.updateNews();
			vector<Stock::news> aNews = news2.getNews();
			cNews.insert(cNews.end(), aNews.begin(), aNews.end());
			Stock news3 = Stock("MSFT");
			news3.updateNews();
			vector<Stock::news> bNews = news3.getNews();
			cNews.insert(cNews.end(), bNews.begin(), bNews.end());
			Stock news4 = Stock("FB");
			news4.updateNews();
			vector<Stock::news> dNews = news4.getNews();
			cNews.insert(cNews.end(), dNews.begin(), dNews.end());
			Stock news5 = Stock("GOOGL");
			news5.updateNews();
			vector<Stock::news> eNews = news5.getNews();
			cNews.insert(cNews.end(), eNews.begin(), eNews.end());
			Stock news6 = Stock("TSLA");
			news6.updateNews();
			vector<Stock::news> fNews = news6.getNews();
			cNews.insert(cNews.end(), fNews.begin(), fNews.end());
			unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
			std::shuffle(cNews.begin(), cNews.end(), std::default_random_engine(seed));



			headline1->Text = gcnew String(cNews[0].headline.c_str());
			date1->Text = gcnew String(cNews[0].date.c_str());
			source1->Text = gcnew String(cNews[0].source.c_str());
			newsImage1->ImageLocation = gcnew String(cNews[0].image.c_str());

			headline2->Text = gcnew String(cNews[1].headline.c_str());
			date2->Text = gcnew String(cNews[1].date.c_str());
			source2->Text = gcnew String(cNews[1].source.c_str());
			newsImage2->ImageLocation = gcnew String(cNews[1].image.c_str());

			headline3->Text = gcnew String(cNews[2].headline.c_str());
			date3->Text = gcnew String(cNews[2].date.c_str());
			source3->Text = gcnew String(cNews[2].source.c_str());
			newsImage3->ImageLocation = gcnew String(cNews[2].image.c_str());

			headline4->Text = gcnew String(cNews[3].headline.c_str());
			date4->Text = gcnew String(cNews[3].date.c_str());
			source4->Text = gcnew String(cNews[3].source.c_str());
			newsImage4->ImageLocation = gcnew String(cNews[3].image.c_str());
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
				MySqlCommand^ cmd1 = gcnew MySqlCommand("SELECT * from watches WHERE person='" + username + "'", connection);
				MySqlDataReader^ dr1;
				connection->Open();
				dr1 = cmd1->ExecuteReader();
				while (dr1->Read() && i < box) {
					ticker = dr1->GetString(1);
					i += 1;
				}
				dr1->Close();
				CompanyPage^ companyPage = gcnew CompanyPage(ticker);
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
			MySqlCommand^ cmd1 = gcnew MySqlCommand("SELECT * from watches WHERE person='" + username + "'", connection);
			MySqlDataReader^ dr1;
			connection->Open();
			dr1 = cmd1->ExecuteReader();
			while (dr1->Read() && i < box) {
				ticker = dr1->GetString(1);
				i += 1;
			}
			dr1->Close();
			CompanyPage^ companyPage = gcnew CompanyPage(ticker);
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
			MySqlCommand^ cmd1 = gcnew MySqlCommand("SELECT * from watches WHERE person='" + username + "'", connection);
			MySqlDataReader^ dr1;
			connection->Open();
			dr1 = cmd1->ExecuteReader();
			while (dr1->Read() && i < box) {
				ticker = dr1->GetString(1);
				i += 1;
			}
			dr1->Close();
			CompanyPage^ companyPage = gcnew CompanyPage(ticker);
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
			MySqlCommand^ cmd1 = gcnew MySqlCommand("SELECT * from watches WHERE person='" + username + "'", connection);
			MySqlDataReader^ dr1;
			connection->Open();
			dr1 = cmd1->ExecuteReader();
			while (dr1->Read() && i < box) {
				ticker = dr1->GetString(1);
				i += 1;
			}
			dr1->Close();
			CompanyPage^ companyPage = gcnew CompanyPage(ticker);
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
			MySqlCommand^ cmd1 = gcnew MySqlCommand("SELECT * from watches WHERE person='" + username + "'", connection);
			MySqlDataReader^ dr1;
			connection->Open();
			dr1 = cmd1->ExecuteReader();
			while (dr1->Read() && i < box) {
				ticker = dr1->GetString(1);
				i += 1;
			}
			dr1->Close();
			CompanyPage^ companyPage = gcnew CompanyPage(ticker);
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
			MySqlCommand^ cmd1 = gcnew MySqlCommand("SELECT * from watches WHERE person='" + username + "'", connection);
			MySqlDataReader^ dr1;
			connection->Open();
			dr1 = cmd1->ExecuteReader();
			while (dr1->Read() && i < box) {
				ticker = dr1->GetString(1);
				i += 1;
			}
			dr1->Close();
			CompanyPage^ companyPage = gcnew CompanyPage(ticker);
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
			MySqlCommand^ cmd1 = gcnew MySqlCommand("SELECT * from watches WHERE person='" + username + "'", connection);
			MySqlDataReader^ dr1;
			connection->Open();
			dr1 = cmd1->ExecuteReader();
			while (dr1->Read() && i < box) {
				ticker = dr1->GetString(1);
				i += 1;
			}
			dr1->Close();
			CompanyPage^ companyPage = gcnew CompanyPage(ticker);
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
			MySqlCommand^ cmd1 = gcnew MySqlCommand("SELECT * from watches WHERE person='" + username + "'", connection);
			MySqlDataReader^ dr1;
			connection->Open();
			dr1 = cmd1->ExecuteReader();
			while (dr1->Read() && i < box) {
				ticker = dr1->GetString(1);
				i += 1;
			}
			dr1->Close();
			CompanyPage^ companyPage = gcnew CompanyPage(ticker);
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
			MySqlCommand^ cmd1 = gcnew MySqlCommand("SELECT * from watches WHERE person='" + username + "'", connection);
			MySqlDataReader^ dr1;
			connection->Open();
			dr1 = cmd1->ExecuteReader();
			while (dr1->Read() && i < box) {
				ticker = dr1->GetString(1);
				i += 1;
			}
			dr1->Close();
			CompanyPage^ companyPage = gcnew CompanyPage(ticker);
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
			MySqlCommand^ cmd1 = gcnew MySqlCommand("SELECT * from watches WHERE person='" + username + "'", connection);
			MySqlDataReader^ dr1;
			connection->Open();
			dr1 = cmd1->ExecuteReader();
			while (dr1->Read() && i < box) {
				ticker = dr1->GetString(1);
				i += 1;
			}
			dr1->Close();
			CompanyPage^ companyPage = gcnew CompanyPage(ticker);
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
			MySqlCommand^ cmd1 = gcnew MySqlCommand("SELECT * from watches WHERE person='" + username + "'", connection);
			MySqlDataReader^ dr1;
			connection->Open();
			dr1 = cmd1->ExecuteReader();
			while (dr1->Read() && i < box) {
				ticker = dr1->GetString(1);
				i += 1;
			}
			dr1->Close();
			CompanyPage^ companyPage = gcnew CompanyPage(ticker);
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
			MySqlCommand^ cmd1 = gcnew MySqlCommand("SELECT * from watches WHERE person='" + username + "'", connection);
			MySqlDataReader^ dr1;
			connection->Open();
			dr1 = cmd1->ExecuteReader();
			while (dr1->Read() && i < box) {
				ticker = dr1->GetString(1);
				i += 1;
			}
			dr1->Close();
			CompanyPage^ companyPage = gcnew CompanyPage(ticker);
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
			MySqlCommand^ cmd1 = gcnew MySqlCommand("SELECT * from watches WHERE person='" + username + "'", connection);
			MySqlDataReader^ dr1;
			connection->Open();
			dr1 = cmd1->ExecuteReader();
			while (dr1->Read() && i < box) {
				ticker = dr1->GetString(1);
				i += 1;
			}
			dr1->Close();
			CompanyPage^ companyPage = gcnew CompanyPage(ticker);
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
			MySqlCommand^ cmd1 = gcnew MySqlCommand("SELECT * from watches WHERE person='" + username + "'", connection);
			MySqlDataReader^ dr1;
			connection->Open();
			dr1 = cmd1->ExecuteReader();
			while (dr1->Read() && i < box) {
				ticker = dr1->GetString(1);
				i += 1;
			}
			dr1->Close();
			CompanyPage^ companyPage = gcnew CompanyPage(ticker);
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
			MySqlCommand^ cmd1 = gcnew MySqlCommand("SELECT * from watches WHERE person='" + username + "'", connection);
			MySqlDataReader^ dr1;
			connection->Open();
			dr1 = cmd1->ExecuteReader();
			while (dr1->Read() && i < box) {
				ticker = dr1->GetString(1);
				i += 1;
			}
			dr1->Close();
			CompanyPage^ companyPage = gcnew CompanyPage(ticker);
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
			MySqlCommand^ cmd1 = gcnew MySqlCommand("SELECT * from watches WHERE person='" + username + "'", connection);
			MySqlDataReader^ dr1;
			connection->Open();
			dr1 = cmd1->ExecuteReader();
			while (dr1->Read() && i < box) {
				ticker = dr1->GetString(1);
				i += 1;
			}
			dr1->Close();
			CompanyPage^ companyPage = gcnew CompanyPage(ticker);
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
			MySqlCommand^ cmd1 = gcnew MySqlCommand("SELECT * from watches WHERE person='" + username + "'", connection);
			MySqlDataReader^ dr1;
			connection->Open();
			dr1 = cmd1->ExecuteReader();
			while (dr1->Read() && i < box) {
				ticker = dr1->GetString(1);
				i += 1;
			}
			dr1->Close();
			CompanyPage^ companyPage = gcnew CompanyPage(ticker);
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
			MySqlCommand^ cmd1 = gcnew MySqlCommand("SELECT * from watches WHERE person='" + username + "'", connection);
			MySqlDataReader^ dr1;
			connection->Open();
			dr1 = cmd1->ExecuteReader();
			while (dr1->Read() && i < box) {
				ticker = dr1->GetString(1);
				i += 1;
			}
			dr1->Close();
			CompanyPage^ companyPage = gcnew CompanyPage(ticker);
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
			MySqlCommand^ cmd1 = gcnew MySqlCommand("SELECT * from watches WHERE person='" + username + "'", connection);
			MySqlDataReader^ dr1;
			connection->Open();
			dr1 = cmd1->ExecuteReader();
			while (dr1->Read() && i < box) {
				ticker = dr1->GetString(1);
				i += 1;
			}
			dr1->Close();
			CompanyPage^ companyPage = gcnew CompanyPage(ticker);
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
	CompanyPage^ companyPage = gcnew CompanyPage(str);
	openChildForm(companyPage);
}
};
}
