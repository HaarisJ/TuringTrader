#pragma once

namespace PortfolioGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PortfolioPage
	/// </summary>
	public ref class PortfolioPage : public System::Windows::Forms::Form
	{
	public:
		PortfolioPage(void)
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
		~PortfolioPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label72;
	protected:
	private: System::Windows::Forms::Label^ label71;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ equityChartTitle;
	private: System::Windows::Forms::Label^ equityCashRatio;




	private: System::Windows::Forms::Label^ percentageReturn;
	private: System::Windows::Forms::Label^ portfolioVal;
	private: System::Windows::Forms::Label^ chartTitle;
	private: System::Windows::Forms::LinkLabel^ allHoldings;
	private: System::Windows::Forms::Label^ holding8;



	private: System::Windows::Forms::Label^ holding7;

	private: System::Windows::Forms::Label^ holding4;

	private: System::Windows::Forms::Label^ holding3;
	private: System::Windows::Forms::Label^ holding6;


	private: System::Windows::Forms::Label^ holding2;
	private: System::Windows::Forms::Label^ holding5;


	private: System::Windows::Forms::Label^ holding1;

	private: System::Windows::Forms::Label^ holdingsLabel;



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
			this->label72 = (gcnew System::Windows::Forms::Label());
			this->label71 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->equityChartTitle = (gcnew System::Windows::Forms::Label());
			this->equityCashRatio = (gcnew System::Windows::Forms::Label());
			this->percentageReturn = (gcnew System::Windows::Forms::Label());
			this->portfolioVal = (gcnew System::Windows::Forms::Label());
			this->chartTitle = (gcnew System::Windows::Forms::Label());
			this->allHoldings = (gcnew System::Windows::Forms::LinkLabel());
			this->holding8 = (gcnew System::Windows::Forms::Label());
			this->holding7 = (gcnew System::Windows::Forms::Label());
			this->holding4 = (gcnew System::Windows::Forms::Label());
			this->holding3 = (gcnew System::Windows::Forms::Label());
			this->holding6 = (gcnew System::Windows::Forms::Label());
			this->holding2 = (gcnew System::Windows::Forms::Label());
			this->holding5 = (gcnew System::Windows::Forms::Label());
			this->holding1 = (gcnew System::Windows::Forms::Label());
			this->holdingsLabel = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// label72
			// 
			this->label72->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label72->AutoSize = true;
			this->label72->Location = System::Drawing::Point(1305, 262);
			this->label72->Name = L"label72";
			this->label72->Size = System::Drawing::Size(120, 17);
			this->label72->TabIndex = 59;
			this->label72->Text = L"Chart Unavailable";
			// 
			// label71
			// 
			this->label71->AutoSize = true;
			this->label71->Location = System::Drawing::Point(276, 246);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(120, 17);
			this->label71->TabIndex = 58;
			this->label71->Text = L"Chart Unavailable";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox3->Location = System::Drawing::Point(1246, 151);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(269, 263);
			this->pictureBox3->TabIndex = 57;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(52, 110);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(651, 310);
			this->pictureBox2->TabIndex = 56;
			this->pictureBox2->TabStop = false;
			// 
			// equityChartTitle
			// 
			this->equityChartTitle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->equityChartTitle->AutoSize = true;
			this->equityChartTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->equityChartTitle->Location = System::Drawing::Point(1281, 110);
			this->equityChartTitle->Name = L"equityChartTitle";
			this->equityChartTitle->Size = System::Drawing::Size(195, 25);
			this->equityChartTitle->TabIndex = 55;
			this->equityChartTitle->Text = L"Equity/Cash Balance";
			// 
			// equityCashRatio
			// 
			this->equityCashRatio->AutoSize = true;
			this->equityCashRatio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->equityCashRatio->Location = System::Drawing::Point(852, 302);
			this->equityCashRatio->Name = L"equityCashRatio";
			this->equityCashRatio->Size = System::Drawing::Size(195, 75);
			this->equityCashRatio->TabIndex = 54;
			this->equityCashRatio->Text = L"Equity/Cash Balance\r\n25/75\r\n\r\n";
			this->equityCashRatio->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// percentageReturn
			// 
			this->percentageReturn->AutoSize = true;
			this->percentageReturn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->percentageReturn->Location = System::Drawing::Point(856, 203);
			this->percentageReturn->Name = L"percentageReturn";
			this->percentageReturn->Size = System::Drawing::Size(174, 50);
			this->percentageReturn->TabIndex = 53;
			this->percentageReturn->Text = L"Percentage Return\r\n-10%\r\n";
			this->percentageReturn->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// portfolioVal
			// 
			this->portfolioVal->AutoSize = true;
			this->portfolioVal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->portfolioVal->Location = System::Drawing::Point(839, 110);
			this->portfolioVal->Name = L"portfolioVal";
			this->portfolioVal->Size = System::Drawing::Size(208, 50);
			this->portfolioVal->TabIndex = 52;
			this->portfolioVal->Text = L"Current Portfolio Value\r\n90,000";
			this->portfolioVal->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// chartTitle
			// 
			this->chartTitle->AutoSize = true;
			this->chartTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chartTitle->Location = System::Drawing::Point(47, 61);
			this->chartTitle->Name = L"chartTitle";
			this->chartTitle->Size = System::Drawing::Size(435, 32);
			this->chartTitle->TabIndex = 51;
			this->chartTitle->Text = L"Value of Portfolio Since Inception";
			// 
			// allHoldings
			// 
			this->allHoldings->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->allHoldings->AutoSize = true;
			this->allHoldings->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->allHoldings->Location = System::Drawing::Point(1241, 690);
			this->allHoldings->Name = L"allHoldings";
			this->allHoldings->Size = System::Drawing::Size(261, 29);
			this->allHoldings->TabIndex = 69;
			this->allHoldings->TabStop = true;
			this->allHoldings->Text = L"View All Owned Stocks";
			// 
			// holding8
			// 
			this->holding8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->holding8->AutoSize = true;
			this->holding8->BackColor = System::Drawing::Color::DimGray;
			this->holding8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->holding8->ForeColor = System::Drawing::Color::Lavender;
			this->holding8->Location = System::Drawing::Point(791, 743);
			this->holding8->Name = L"holding8";
			this->holding8->Size = System::Drawing::Size(187, 25);
			this->holding8->TabIndex = 68;
			this->holding8->Text = L"No Company added";
			// 
			// holding7
			// 
			this->holding7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->holding7->AutoSize = true;
			this->holding7->BackColor = System::Drawing::Color::DimGray;
			this->holding7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->holding7->ForeColor = System::Drawing::Color::Lavender;
			this->holding7->Location = System::Drawing::Point(551, 743);
			this->holding7->Name = L"holding7";
			this->holding7->Size = System::Drawing::Size(187, 25);
			this->holding7->TabIndex = 67;
			this->holding7->Text = L"No Company added";
			// 
			// holding4
			// 
			this->holding4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->holding4->AutoSize = true;
			this->holding4->BackColor = System::Drawing::Color::LimeGreen;
			this->holding4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->holding4->ForeColor = System::Drawing::Color::Lavender;
			this->holding4->Location = System::Drawing::Point(833, 629);
			this->holding4->Name = L"holding4";
			this->holding4->Size = System::Drawing::Size(99, 75);
			this->holding4->TabIndex = 66;
			this->holding4->Text = L"TSLA:\r\n28,129.90\r\n+0.07%";
			// 
			// holding3
			// 
			this->holding3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->holding3->AutoSize = true;
			this->holding3->BackColor = System::Drawing::Color::DarkRed;
			this->holding3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->holding3->ForeColor = System::Drawing::Color::Lavender;
			this->holding3->Location = System::Drawing::Point(597, 629);
			this->holding3->Name = L"holding3";
			this->holding3->Size = System::Drawing::Size(99, 75);
			this->holding3->TabIndex = 65;
			this->holding3->Text = L"GM:\r\n28,129.90\r\n-0.07%";
			// 
			// holding6
			// 
			this->holding6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->holding6->AutoSize = true;
			this->holding6->BackColor = System::Drawing::Color::DarkRed;
			this->holding6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->holding6->ForeColor = System::Drawing::Color::Lavender;
			this->holding6->Location = System::Drawing::Point(354, 729);
			this->holding6->Name = L"holding6";
			this->holding6->Size = System::Drawing::Size(88, 75);
			this->holding6->TabIndex = 64;
			this->holding6->Text = L"BUD:\r\n3,408.54\r\n-0.51%";
			// 
			// holding2
			// 
			this->holding2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->holding2->AutoSize = true;
			this->holding2->BackColor = System::Drawing::Color::DarkRed;
			this->holding2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->holding2->ForeColor = System::Drawing::Color::Lavender;
			this->holding2->Location = System::Drawing::Point(354, 629);
			this->holding2->Name = L"holding2";
			this->holding2->Size = System::Drawing::Size(88, 75);
			this->holding2->TabIndex = 63;
			this->holding2->Text = L"F:\r\n3,408.54\r\n-0.51%";
			// 
			// holding5
			// 
			this->holding5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->holding5->AutoSize = true;
			this->holding5->BackColor = System::Drawing::Color::LimeGreen;
			this->holding5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->holding5->ForeColor = System::Drawing::Color::Lavender;
			this->holding5->Location = System::Drawing::Point(135, 729);
			this->holding5->Name = L"holding5";
			this->holding5->Size = System::Drawing::Size(99, 75);
			this->holding5->TabIndex = 62;
			this->holding5->Text = L"NVDA:\r\n28,129.90\r\n+0.07%";
			// 
			// holding1
			// 
			this->holding1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->holding1->AutoSize = true;
			this->holding1->BackColor = System::Drawing::Color::LimeGreen;
			this->holding1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->holding1->ForeColor = System::Drawing::Color::Lavender;
			this->holding1->Location = System::Drawing::Point(135, 629);
			this->holding1->Name = L"holding1";
			this->holding1->Size = System::Drawing::Size(99, 75);
			this->holding1->TabIndex = 61;
			this->holding1->Text = L"AAPL:\r\n28,129.90\r\n+0.07%";
			// 
			// holdingsLabel
			// 
			this->holdingsLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->holdingsLabel->AutoSize = true;
			this->holdingsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->holdingsLabel->Location = System::Drawing::Point(85, 586);
			this->holdingsLabel->Name = L"holdingsLabel";
			this->holdingsLabel->Size = System::Drawing::Size(519, 25);
			this->holdingsLabel->TabIndex = 60;
			this->holdingsLabel->Text = L"Performance of Stocks Owned Since Last Market Opening";
			// 
			// PortfolioPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1602, 903);
			this->Controls->Add(this->allHoldings);
			this->Controls->Add(this->holding8);
			this->Controls->Add(this->holding7);
			this->Controls->Add(this->holding4);
			this->Controls->Add(this->holding3);
			this->Controls->Add(this->holding6);
			this->Controls->Add(this->holding2);
			this->Controls->Add(this->holding5);
			this->Controls->Add(this->holding1);
			this->Controls->Add(this->holdingsLabel);
			this->Controls->Add(this->label72);
			this->Controls->Add(this->label71);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->equityChartTitle);
			this->Controls->Add(this->equityCashRatio);
			this->Controls->Add(this->percentageReturn);
			this->Controls->Add(this->portfolioVal);
			this->Controls->Add(this->chartTitle);
			this->Name = L"PortfolioPage";
			this->Text = L"PortfolioPage";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
