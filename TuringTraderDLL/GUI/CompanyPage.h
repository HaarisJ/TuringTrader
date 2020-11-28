#pragma once
#include "Stock.h"
#include "OrderDlg.h"
#include <msclr\marshal_cppstd.h>
#include <algorithm>

extern std::string currentUser;
using namespace MySql::Data::MySqlClient;

namespace CompanyPageGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace OrderGUI;

	
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
	private: System::Windows::Forms::Button^ button1;
	protected:

	protected:

	protected:

	protected:

	protected:

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ labelPrice;
	private: System::Windows::Forms::Label^ labelDelta;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel5;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;



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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->labelPrice = (gcnew System::Windows::Forms::Label());
			this->labelDelta = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tableLayoutPanel2->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->tableLayoutPanel4->SuspendLayout();
			this->tableLayoutPanel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::WindowText;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(26, 17);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 34);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Back";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &CompanyPage::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label2->Location = System::Drawing::Point(154, 115);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Apple Inc.";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(153, 83);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 29);
			this->label3->TabIndex = 3;
			this->label3->Text = L"AAPL";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::Highlight;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->Location = System::Drawing::Point(333, 86);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(62, 29);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Refresh";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &CompanyPage::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button3->Location = System::Drawing::Point(399, 86);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(154, 29);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Add to Watchlist";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &CompanyPage::button3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(590, 219);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(183, 29);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Company News";
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->label5->Location = System::Drawing::Point(2, 14);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(77, 18);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Headline 1";
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->label6->Location = System::Drawing::Point(2, 15);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(77, 18);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Headline 3";
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->label7->Location = System::Drawing::Point(2, 14);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(77, 18);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Headline 2";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(590, 83);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(78, 29);
			this->label8->TabIndex = 10;
			this->label8->Text = L"Trade";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->textBox1->Location = System::Drawing::Point(595, 117);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->MaxLength = 30;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(216, 27);
			this->textBox1->TabIndex = 11;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button4->Location = System::Drawing::Point(595, 148);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(91, 39);
			this->button4->TabIndex = 12;
			this->button4->Text = L"Buy";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &CompanyPage::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Crimson;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button5->Location = System::Drawing::Point(717, 148);
			this->button5->Margin = System::Windows::Forms::Padding(2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(96, 39);
			this->button5->TabIndex = 13;
			this->button5->Text = L"Sell";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &CompanyPage::button5_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->label26, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->label27, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->label24, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->label25, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->label9, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->label11, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->label10, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->label12, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->label13, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->label14, 1, 4);
			this->tableLayoutPanel1->Location = System::Drawing::Point(26, 467);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(2);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 5;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 29)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 27)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(527, 150);
			this->tableLayoutPanel1->TabIndex = 14;
			// 
			// label26
			// 
			this->label26->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(266, 65);
			this->label26->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(58, 20);
			this->label26->TabIndex = 37;
			this->label26->Text = L"113.90";
			// 
			// label27
			// 
			this->label27->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(266, 95);
			this->label27->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(58, 20);
			this->label27->TabIndex = 38;
			this->label27->Text = L"111.13";
			// 
			// label24
			// 
			this->label24->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(3, 95);
			this->label24->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(38, 20);
			this->label24->TabIndex = 37;
			this->label24->Text = L"Low";
			// 
			// label25
			// 
			this->label25->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(3, 65);
			this->label25->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(42, 20);
			this->label25->TabIndex = 38;
			this->label25->Text = L"High";
			// 
			// label9
			// 
			this->label9->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(3, 5);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(87, 20);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Open Price";
			// 
			// label11
			// 
			this->label11->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(3, 35);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(60, 20);
			this->label11->TabIndex = 2;
			this->label11->Text = L"P&L Day";
			// 
			// label10
			// 
			this->label10->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(266, 5);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(58, 20);
			this->label10->TabIndex = 1;
			this->label10->Text = L"112.89";
			// 
			// label12
			// 
			this->label12->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(266, 35);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(50, 20);
			this->label12->TabIndex = 3;
			this->label12->Text = L"-3.3%";
			// 
			// label13
			// 
			this->label13->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(3, 125);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(91, 20);
			this->label13->TabIndex = 4;
			this->label13->Text = L"Market Cap";
			// 
			// label14
			// 
			this->label14->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(266, 125);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(53, 20);
			this->label14->TabIndex = 5;
			this->label14->Text = L"1.93 T";
			// 
			// labelPrice
			// 
			this->labelPrice->AutoSize = true;
			this->labelPrice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->labelPrice->Location = System::Drawing::Point(33, 190);
			this->labelPrice->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelPrice->Name = L"labelPrice";
			this->labelPrice->Size = System::Drawing::Size(78, 26);
			this->labelPrice->TabIndex = 15;
			this->labelPrice->Text = L"112.89";
			// 
			// labelDelta
			// 
			this->labelDelta->AutoSize = true;
			this->labelDelta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->labelDelta->Location = System::Drawing::Point(115, 194);
			this->labelDelta->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelDelta->Name = L"labelDelta";
			this->labelDelta->Size = System::Drawing::Size(58, 20);
			this->labelDelta->TabIndex = 16;
			this->labelDelta->Text = L"112.89";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(26, 83);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(105, 75);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 17;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(155, 145);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 18;
			this->label1->Text = L"label1";
			// 
			// label15
			// 
			this->label15->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->label15->Location = System::Drawing::Point(2, 12);
			this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(77, 18);
			this->label15->TabIndex = 19;
			this->label15->Text = L"Headline 3";
			// 
			// label16
			// 
			this->label16->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(3, 49);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(41, 13);
			this->label16->TabIndex = 21;
			this->label16->Text = L"label16";
			// 
			// label17
			// 
			this->label17->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(3, 65);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(41, 13);
			this->label17->TabIndex = 22;
			this->label17->Text = L"label17";
			// 
			// label18
			// 
			this->label18->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(3, 68);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(41, 13);
			this->label18->TabIndex = 24;
			this->label18->Text = L"label18";
			// 
			// label19
			// 
			this->label19->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(3, 51);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(41, 13);
			this->label19->TabIndex = 23;
			this->label19->Text = L"label19";
			// 
			// label20
			// 
			this->label20->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(3, 66);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(41, 13);
			this->label20->TabIndex = 26;
			this->label20->Text = L"label20";
			// 
			// label21
			// 
			this->label21->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(3, 49);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(41, 13);
			this->label21->TabIndex = 25;
			this->label21->Text = L"label21";
			// 
			// label22
			// 
			this->label22->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(3, 61);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(41, 13);
			this->label22->TabIndex = 28;
			this->label22->Text = L"label22";
			// 
			// label23
			// 
			this->label23->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(3, 45);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(41, 13);
			this->label23->TabIndex = 27;
			this->label23->Text = L"label23";
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->tableLayoutPanel2->ColumnCount = 1;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->Controls->Add(this->label5, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->label16, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->label17, 0, 2);
			this->tableLayoutPanel2->Location = System::Drawing::Point(711, 251);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 3;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 17)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 16)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(416, 80);
			this->tableLayoutPanel2->TabIndex = 29;
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->tableLayoutPanel3->ColumnCount = 1;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel3->Controls->Add(this->label6, 0, 0);
			this->tableLayoutPanel3->Controls->Add(this->label19, 0, 1);
			this->tableLayoutPanel3->Controls->Add(this->label18, 0, 2);
			this->tableLayoutPanel3->Location = System::Drawing::Point(711, 343);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 3;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 18)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 16)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(416, 83);
			this->tableLayoutPanel3->TabIndex = 30;
			// 
			// tableLayoutPanel4
			// 
			this->tableLayoutPanel4->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->tableLayoutPanel4->ColumnCount = 1;
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel4->Controls->Add(this->label7, 0, 0);
			this->tableLayoutPanel4->Controls->Add(this->label21, 0, 1);
			this->tableLayoutPanel4->Controls->Add(this->label20, 0, 2);
			this->tableLayoutPanel4->Location = System::Drawing::Point(711, 441);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 3;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 19)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 16)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel4->Size = System::Drawing::Size(416, 81);
			this->tableLayoutPanel4->TabIndex = 31;
			// 
			// tableLayoutPanel5
			// 
			this->tableLayoutPanel5->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->tableLayoutPanel5->ColumnCount = 1;
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel5->Controls->Add(this->label15, 0, 0);
			this->tableLayoutPanel5->Controls->Add(this->label23, 0, 1);
			this->tableLayoutPanel5->Controls->Add(this->label22, 0, 2);
			this->tableLayoutPanel5->Location = System::Drawing::Point(711, 541);
			this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
			this->tableLayoutPanel5->RowCount = 3;
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 17)));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 16)));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel5->Size = System::Drawing::Size(416, 76);
			this->tableLayoutPanel5->TabIndex = 32;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(595, 251);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(100, 78);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 33;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(595, 343);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(100, 83);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 34;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Location = System::Drawing::Point(595, 441);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(100, 81);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 35;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Location = System::Drawing::Point(595, 541);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(100, 76);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 36;
			this->pictureBox5->TabStop = false;
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Enabled = false;
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(26, 219);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->IsVisibleInLegend = false;
			series1->Legend = L"Legend1";
			series1->Name = L"Candles";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(527, 243);
			this->chart1->TabIndex = 37;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &CompanyPage::chart1_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(6, 13);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(44, 17);
			this->radioButton1->TabIndex = 38;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Day";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Location = System::Drawing::Point(372, 181);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(181, 35);
			this->groupBox1->TabIndex = 39;
			this->groupBox1->TabStop = false;
			this->groupBox1->Enter += gcnew System::EventHandler(this, &CompanyPage::groupBox1_Enter);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(116, 13);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(55, 17);
			this->radioButton3->TabIndex = 40;
			this->radioButton3->Text = L"Month";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(56, 13);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(54, 17);
			this->radioButton2->TabIndex = 39;
			this->radioButton2->Text = L"Week";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// CompanyPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1186, 734);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->tableLayoutPanel5);
			this->Controls->Add(this->tableLayoutPanel4);
			this->Controls->Add(this->tableLayoutPanel3);
			this->Controls->Add(this->tableLayoutPanel2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->labelDelta);
			this->Controls->Add(this->labelPrice);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"CompanyPage";
			this->Text = L"Apple Inc.";
			this->Load += gcnew System::EventHandler(this, &CompanyPage::CompanyPage_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel3->PerformLayout();
			this->tableLayoutPanel4->ResumeLayout(false);
			this->tableLayoutPanel4->PerformLayout();
			this->tableLayoutPanel5->ResumeLayout(false);
			this->tableLayoutPanel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CompanyPage_Load(System::Object^ sender, System::EventArgs^ e) {
		// DB SETUP
		String^ constr = "Server=35.227.90.11;Uid=root;Pwd=password;Database=TuringTrader";
		MySqlConnection^ con = gcnew MySqlConnection(constr);

		// Check if this stock is in user's watchlist
		//MySqlCommand^ cmd = gcnew MySqlCommand("SELECT * from watches");

		System::String^ tickerM = "TSLA";
		std::string tickerUM = msclr::interop::marshal_as<std::string>(tickerM);

		Stock company = Stock(tickerUM);

		// Initialization and updating fields with realtime data
		company.updateMarketVals();
		company.updateProfile();
		company.updateNews();

		CompanyPage::initChart(company);
		
		vector<Stock::news> cNews = company.getNews();

		// Call accessors and set labels
		pictureBox1->ImageLocation = gcnew String(company.logo.c_str());

		label2->Text = gcnew String(company.name.c_str());
		label1->Text = gcnew String(company.exchange.c_str());

		label3->Text = tickerM;

		float cp = company.getCurrentPrice();
		labelPrice->Text = cp.ToString(L"F");
		
		if (company.getPL() < 0) {
			labelDelta->ForeColor = System::Drawing::Color::Crimson;
			labelDelta->Text = company.getPL().ToString(L"F");
		}
		else {
			labelDelta->ForeColor = System::Drawing::Color::SeaGreen;
			labelDelta->Text = gcnew String("+") + company.getPL().ToString(L"F");
		}
		

		float open = company.getOpenPrice();
		label10->Text = open.ToString(L"F");

		label12->Text = company.getPL().ToString(L"F");

		label26->Text = company.getDailyHigh().ToString(L"F");
		label27->Text = company.getDailyLow().ToString(L"F");

		label14->Text = company.getMarketCap().ToString(L"F");

		// COMPANY NEWS
		label5->Text = gcnew String(cNews[0].headline.c_str());
		label6->Text = gcnew String(cNews[1].headline.c_str());
		label7->Text = gcnew String(cNews[2].headline.c_str());
		label15->Text = gcnew String(cNews[3].headline.c_str());

		label16->Text = gcnew String(cNews[0].date.c_str());
		label19->Text = gcnew String(cNews[1].date.c_str());
		label21->Text = gcnew String(cNews[2].date.c_str());
		label23->Text = gcnew String(cNews[3].date.c_str());

		label17->Text = gcnew String(cNews[0].source.c_str());
		label18->Text = gcnew String(cNews[1].source.c_str());
		label20->Text = gcnew String(cNews[2].source.c_str());
		label22->Text = gcnew String(cNews[3].source.c_str());

		pictureBox2->ImageLocation = gcnew String(cNews[0].image.c_str());
		pictureBox3->ImageLocation = gcnew String(cNews[1].image.c_str());
		pictureBox4->ImageLocation = gcnew String(cNews[2].image.c_str());
		pictureBox5->ImageLocation = gcnew String(cNews[3].image.c_str());

		// ADD NEWS LINKS!
		
		// MAKE DB CALL TO SEE IF TICKER IS IN USER WATCHLIST
		// SET WATCHLIST BUTTON TEXT AND COLOUR

	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	// BUY BUTTON
	if (textBox1->Text == "") {
		MessageBox::Show("Please enter an order quantity");
		return;
	}
	int qtyInput;
	if (!int::TryParse(textBox1->Text, qtyInput)) {
		MessageBox::Show("Quantity must be an integer");
		return;
	}

	if (qtyInput == 0) {
		MessageBox::Show("Quantity must be between 1-1000");
		return;
	}
	
	// ONCE ALL BOUNDARIES HAVE BEEN CHECKED, OPEN A CONFIRMATION DIALOG BOX
	extern std::string currentUser;
	String^ username = msclr::interop::marshal_as<String^>(currentUser);
	float userCash = 0;
	MySqlConnection^ connection;

	try {
		String^ connection_str = "Server=35.227.90.11;Uid=root;Pwd=password;Database=TuringTrader";
		connection = gcnew MySqlConnection(connection_str);
		MySqlCommand^ cmd = gcnew MySqlCommand("SELECT accountBalance from users WHERE username='" + username + "'", connection);
		
		MySqlDataReader^ dr;
		connection->Open();
		dr = cmd->ExecuteReader();
		while (dr->Read()) {
			userCash = dr->GetFloat(0);
		}
		dr->Close();
		connection->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}

	std::string ticker = "TSLA";
	Stock company = Stock("TSLA");
	company.updateMarketVals();

	String^ ticker2 = gcnew String(ticker.c_str());
	String^ title = gcnew String("Buy " + textBox1->Text + " " + ticker2 + " @ Market");
	String^ price = company.getCurrentPrice().ToString();
	float total = company.getCurrentPrice() * qtyInput;
	String^ value = gcnew String(qtyInput.ToString() + " x " + price + " = " + total.ToString(L"c") + " USD");
	String^ buyingPwr = gcnew String("(" + total.ToString(L"c") + ")" + " USD");
	float newBal = userCash - total;
	String^ newBuy = newBal.ToString(L"c");
	OrderGUI::OrderDlg^ dlg = gcnew OrderGUI::OrderDlg(title, value, buyingPwr, newBuy);
	if (dlg->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		if (userCash >= total) {
			//Place the order in the DB here
			//UPDATE TuringTrader.holdings SET numShares=numShares+10, totalCost=totalCost+2000 WHERE person='mark_l' AND ticker='AAPL'
			//UPDATE TuringTrader.users SET accountBalance=accountBalance-5000 WHERE username='mark_l'
			//INSERT INTO TuringTrader.holdings (person, ticker, numShares, totalCost) VALUES ('mark_l', 'SQ', 120, 1070) ON DUPLICATE KEY UPDATE numShares=numShares+10, totalCost=totalCost+150

			try {
				MySqlCommand^ cmdUpdShares = gcnew MySqlCommand("INSERT INTO holdings (person, ticker, numShares, totalCost) VALUES ('" + username + "', '" + ticker2
					+ "', " + qtyInput + ", " + total + ") ON DUPLICATE KEY UPDATE numShares=numShares+" + qtyInput + ", totalCost=totalCost+" + total, connection);
				
				MySqlCommand^ cmdUpdBalance = gcnew MySqlCommand("UPDATE users SET accountBalance=accountBalance-" + total + " WHERE username='" + username + "'", connection);
				
				connection->Open();
				MySqlDataReader^ dr2;
				dr2 = cmdUpdShares->ExecuteReader();
				dr2->Close();
				dr2 = cmdUpdBalance->ExecuteReader();
				dr2->Close();
				connection->Close();
				MessageBox::Show("Order Placed Successfully!");
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
			}
		}
		else {
			MessageBox::Show("You do not have enough buying power for this order.");
		}
	}
	delete dlg;
	textBox1->Text = "";

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	// ADD TO WATCHLIST HERE OR REMOVE IF ITS ALREADY IN IT
}
private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void initChart(Stock& company) {
	chart1->Series["Candles"]->Points->Clear();

	if (radioButton1->Checked) {
		company.updateCandles("D");
	}
	else if (radioButton2->Checked) {
		company.updateCandles("W");
	}
	else if (radioButton3->Checked) {
		company.updateCandles("M");
	}

	// INIT CANDLE CHART
	vector<float> candles = company.getCandles();
	vector<int> candleTimes = company.getCandleTimes();

	float minCan = *std::min_element(candles.begin(), candles.end());
	float maxCan = *std::max_element(candles.begin(), candles.end());
	float diff = maxCan - minCan;

	for (int i = 0; i < candles.size(); i++) {
		chart1->Series["Candles"]->Points->AddY(candles[i]);
	}
	chart1->ChartAreas[0]->AxisY->Minimum = minCan - 0.1 * diff;
	chart1->ChartAreas[0]->AxisY->Maximum = maxCan + 0.1 * diff;
	chart1->ChartAreas[0]->AxisY->LabelStyle->Format = "0.00";
}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	//CompanyPage::initChart();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	CompanyPage::CompanyPage_Load(sender, e);
}

//================================================
//================= SELL BUTTON ==================
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "") {
		MessageBox::Show("Please enter an order quantity");
		return;
	}
	int qtyInput;
	if (!int::TryParse(textBox1->Text, qtyInput)) {
		MessageBox::Show("Quantity must be an integer");
		return;
	}

	if (qtyInput == 0) {
		MessageBox::Show("Quantity must be between 1-1000");
		return;
	}

	// ONCE ALL BOUNDARIES HAVE BEEN CHECKED, OPEN A CONFIRMATION DIALOG BOX
	extern std::string currentUser;
	String^ username = msclr::interop::marshal_as<String^>(currentUser);
	float userCash = 0;
	int numShares = 0;
	MySqlConnection^ connection;
	std::string ticker = "TSLA";
	String^ ticker2 = gcnew String(ticker.c_str());

	try {
		String^ connection_str = "Server=35.227.90.11;Uid=root;Pwd=password;Database=TuringTrader";
		connection = gcnew MySqlConnection(connection_str);
		MySqlCommand^ cmd = gcnew MySqlCommand("SELECT accountBalance from users WHERE username='" + username + "'", connection);

		MySqlDataReader^ dr;
		connection->Open();
		dr = cmd->ExecuteReader();
		while (dr->Read()) {
			userCash = dr->GetFloat(0);
		}
		dr->Close();
		connection->Close();

		MySqlCommand^ cmd2 = gcnew MySqlCommand("SELECT numShares from holdings WHERE person='" + username + "' AND ticker='" + ticker2 + "'", connection);

		connection->Open();
		dr = cmd2->ExecuteReader();
		while (dr->Read()) {
			numShares = dr->GetInt16(0);
		}
		dr->Close();
		connection->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}

	Stock company = Stock("TSLA");
	company.updateMarketVals();

	String^ title = gcnew String("Sell " + textBox1->Text + " " + ticker2 + " @ Market");
	String^ price = company.getCurrentPrice().ToString();
	float total = company.getCurrentPrice() * qtyInput;
	String^ value = gcnew String(qtyInput.ToString() + " x " + price + " = " + total.ToString(L"c") + " USD");
	String^ buyingPwr = gcnew String("+ " + total.ToString(L"c") + " USD");
	float newBal = userCash + total;
	String^ newBuy = newBal.ToString(L"c");
	OrderGUI::OrderDlg^ dlg = gcnew OrderGUI::OrderDlg(title, value, buyingPwr, newBuy);
	if (dlg->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		if (numShares >= qtyInput) {
			//Place the order in the DB here
			//UPDATE TuringTrader.holdings SET numShares=numShares+10, totalCost=totalCost+2000 WHERE person='mark_l' AND ticker='AAPL'
			//UPDATE TuringTrader.users SET accountBalance=accountBalance-5000 WHERE username='mark_l'
			//INSERT INTO TuringTrader.holdings (person, ticker, numShares, totalCost) VALUES ('mark_l', 'SQ', 120, 1070) ON DUPLICATE KEY UPDATE numShares=numShares+10, totalCost=totalCost+150

			try {
				MySqlCommand^ cmdUpdShares = gcnew MySqlCommand("INSERT INTO holdings (person, ticker, numShares, totalCost) VALUES ('" + username + "', '" + ticker2
					+ "', " + qtyInput + ", " + total + ") ON DUPLICATE KEY UPDATE numShares=numShares-" + qtyInput + ", totalCost=totalCost-" + total, connection);

				MySqlCommand^ cmdUpdBalance = gcnew MySqlCommand("UPDATE users SET accountBalance=accountBalance+" + total + " WHERE username='" + username + "'", connection);

				connection->Open();
				MySqlDataReader^ dr2;
				dr2 = cmdUpdShares->ExecuteReader();
				dr2->Close();
				dr2 = cmdUpdBalance->ExecuteReader();
				dr2->Close();
				connection->Close();
				MessageBox::Show("Shares Sold Successfully!");
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
			}
		}
		else {
			MessageBox::Show("You do not own enough shares to sell for this order.");
		}
	}
	delete dlg;
	textBox1->Text = "";

}
};
}
