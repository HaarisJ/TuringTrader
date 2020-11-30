#pragma once

#include "Stock.h"
#include "Holding.h"
#include "CompanyPage.h"
#include <msclr\marshal_cppstd.h>
#include <vector>
#include "PortfolioDetails.h"

extern std::string currentUser;

namespace PortfolioGUI {

	using namespace msclr::interop; // This namespace is used for marshalling between string and String^
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace PortfolioDetailsGUI;

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

	protected:



	private: System::Windows::Forms::Label^ equityChartTitle;
	private: System::Windows::Forms::Label^ equityCashRatio;




	private: System::Windows::Forms::Label^ percentageReturn;
	private: System::Windows::Forms::Label^ portfolioVal;
	private: System::Windows::Forms::Label^ chartTitle;

	private: System::Windows::Forms::Label^ holding8;



	private: System::Windows::Forms::Label^ holding7;

	private: System::Windows::Forms::Label^ holding4;

	private: System::Windows::Forms::Label^ holding3;
	private: System::Windows::Forms::Label^ holding6;


	private: System::Windows::Forms::Label^ holding2;
	private: System::Windows::Forms::Label^ holding5;


	private: System::Windows::Forms::Label^ holding1;

	private: System::Windows::Forms::Label^ holdingsLabel;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;
	private: System::Windows::Forms::Label^ holding10;
	private: System::Windows::Forms::Label^ holding9;
	private: System::Windows::Forms::Label^ holding12;
	private: System::Windows::Forms::Label^ holding11;






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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->equityChartTitle = (gcnew System::Windows::Forms::Label());
			this->equityCashRatio = (gcnew System::Windows::Forms::Label());
			this->percentageReturn = (gcnew System::Windows::Forms::Label());
			this->portfolioVal = (gcnew System::Windows::Forms::Label());
			this->chartTitle = (gcnew System::Windows::Forms::Label());
			this->holding8 = (gcnew System::Windows::Forms::Label());
			this->holding7 = (gcnew System::Windows::Forms::Label());
			this->holding4 = (gcnew System::Windows::Forms::Label());
			this->holding3 = (gcnew System::Windows::Forms::Label());
			this->holding6 = (gcnew System::Windows::Forms::Label());
			this->holding2 = (gcnew System::Windows::Forms::Label());
			this->holding5 = (gcnew System::Windows::Forms::Label());
			this->holding1 = (gcnew System::Windows::Forms::Label());
			this->holdingsLabel = (gcnew System::Windows::Forms::Label());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->holding10 = (gcnew System::Windows::Forms::Label());
			this->holding9 = (gcnew System::Windows::Forms::Label());
			this->holding12 = (gcnew System::Windows::Forms::Label());
			this->holding11 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			this->SuspendLayout();
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
			this->chartTitle->Size = System::Drawing::Size(315, 32);
			this->chartTitle->TabIndex = 51;
			this->chartTitle->Text = L"Equity of Owned Stocks";
			// 
			// holding8
			// 
			this->holding8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->holding8->AutoSize = true;
			this->holding8->BackColor = System::Drawing::Color::DimGray;
			this->holding8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->holding8->ForeColor = System::Drawing::Color::Lavender;
			this->holding8->Location = System::Drawing::Point(354, 729);
			this->holding8->Name = L"holding8";
			this->holding8->Size = System::Drawing::Size(99, 75);
			this->holding8->TabIndex = 68;
			this->holding8->Text = L"GM:\r\n28,129.90\r\n-0.07%\r\n";
			this->holding8->Visible = false;
			this->holding8->Click += gcnew System::EventHandler(this, &PortfolioPage::holding8_Click);
			// 
			// holding7
			// 
			this->holding7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->holding7->AutoSize = true;
			this->holding7->BackColor = System::Drawing::Color::DimGray;
			this->holding7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->holding7->ForeColor = System::Drawing::Color::Lavender;
			this->holding7->Location = System::Drawing::Point(135, 729);
			this->holding7->Name = L"holding7";
			this->holding7->Size = System::Drawing::Size(99, 75);
			this->holding7->TabIndex = 67;
			this->holding7->Text = L"GM:\r\n28,129.90\r\n-0.07%\r\n";
			this->holding7->Visible = false;
			this->holding7->Click += gcnew System::EventHandler(this, &PortfolioPage::holding7_Click);
			// 
			// holding4
			// 
			this->holding4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->holding4->AutoSize = true;
			this->holding4->BackColor = System::Drawing::Color::LimeGreen;
			this->holding4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->holding4->ForeColor = System::Drawing::Color::Lavender;
			this->holding4->Location = System::Drawing::Point(833, 611);
			this->holding4->Name = L"holding4";
			this->holding4->Size = System::Drawing::Size(99, 75);
			this->holding4->TabIndex = 66;
			this->holding4->Text = L"TSLA:\r\n28,129.90\r\n+0.07%";
			this->holding4->Visible = false;
			this->holding4->Click += gcnew System::EventHandler(this, &PortfolioPage::holding4_Click);
			// 
			// holding3
			// 
			this->holding3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->holding3->AutoSize = true;
			this->holding3->BackColor = System::Drawing::Color::DarkRed;
			this->holding3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->holding3->ForeColor = System::Drawing::Color::Lavender;
			this->holding3->Location = System::Drawing::Point(597, 611);
			this->holding3->Name = L"holding3";
			this->holding3->Size = System::Drawing::Size(99, 75);
			this->holding3->TabIndex = 65;
			this->holding3->Text = L"GM:\r\n28,129.90\r\n-0.07%";
			this->holding3->Visible = false;
			this->holding3->Click += gcnew System::EventHandler(this, &PortfolioPage::holding3_Click);
			// 
			// holding6
			// 
			this->holding6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->holding6->AutoSize = true;
			this->holding6->BackColor = System::Drawing::Color::DarkRed;
			this->holding6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->holding6->ForeColor = System::Drawing::Color::Lavender;
			this->holding6->Location = System::Drawing::Point(1281, 611);
			this->holding6->Name = L"holding6";
			this->holding6->Size = System::Drawing::Size(88, 75);
			this->holding6->TabIndex = 64;
			this->holding6->Text = L"BUD:\r\n3,408.54\r\n-0.51%";
			this->holding6->Visible = false;
			this->holding6->Click += gcnew System::EventHandler(this, &PortfolioPage::holding6_Click);
			// 
			// holding2
			// 
			this->holding2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->holding2->AutoSize = true;
			this->holding2->BackColor = System::Drawing::Color::DarkRed;
			this->holding2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->holding2->ForeColor = System::Drawing::Color::Lavender;
			this->holding2->Location = System::Drawing::Point(354, 611);
			this->holding2->Name = L"holding2";
			this->holding2->Size = System::Drawing::Size(88, 75);
			this->holding2->TabIndex = 63;
			this->holding2->Text = L"F:\r\n3,408.54\r\n-0.51%";
			this->holding2->Visible = false;
			this->holding2->Click += gcnew System::EventHandler(this, &PortfolioPage::holding2_Click);
			// 
			// holding5
			// 
			this->holding5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->holding5->AutoSize = true;
			this->holding5->BackColor = System::Drawing::Color::LimeGreen;
			this->holding5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->holding5->ForeColor = System::Drawing::Color::Lavender;
			this->holding5->Location = System::Drawing::Point(1075, 611);
			this->holding5->Name = L"holding5";
			this->holding5->Size = System::Drawing::Size(99, 75);
			this->holding5->TabIndex = 62;
			this->holding5->Text = L"NVDA:\r\n28,129.90\r\n+0.07%";
			this->holding5->Visible = false;
			this->holding5->Click += gcnew System::EventHandler(this, &PortfolioPage::holding5_Click);
			// 
			// holding1
			// 
			this->holding1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->holding1->AutoSize = true;
			this->holding1->BackColor = System::Drawing::Color::LimeGreen;
			this->holding1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->holding1->ForeColor = System::Drawing::Color::Lavender;
			this->holding1->Location = System::Drawing::Point(135, 611);
			this->holding1->Name = L"holding1";
			this->holding1->Size = System::Drawing::Size(99, 75);
			this->holding1->TabIndex = 61;
			this->holding1->Text = L"AAPL:\r\n28,129.90\r\n+0.07%";
			this->holding1->Visible = false;
			this->holding1->Click += gcnew System::EventHandler(this, &PortfolioPage::holding1_Click);
			// 
			// holdingsLabel
			// 
			this->holdingsLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->holdingsLabel->AutoSize = true;
			this->holdingsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->holdingsLabel->Location = System::Drawing::Point(85, 568);
			this->holdingsLabel->Name = L"holdingsLabel";
			this->holdingsLabel->Size = System::Drawing::Size(519, 25);
			this->holdingsLabel->TabIndex = 60;
			this->holdingsLabel->Text = L"Performance of Stocks Owned Since Last Market Opening";
			// 
			// chart1
			// 
			chartArea1->AxisX->Title = L"Company";
			chartArea1->AxisY->Title = L"Equity";
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(53, 110);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(655, 391);
			this->chart1->TabIndex = 70;
			this->chart1->Text = L"chart1";
			// 
			// chart2
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart2->Legends->Add(legend2);
			this->chart2->Location = System::Drawing::Point(1235, 173);
			this->chart2->Name = L"chart2";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			this->chart2->Series->Add(series2);
			this->chart2->Size = System::Drawing::Size(300, 264);
			this->chart2->TabIndex = 71;
			this->chart2->Text = L"chart2";
			this->chart2->Click += gcnew System::EventHandler(this, &PortfolioPage::chart2_Click);
			// 
			// holding10
			// 
			this->holding10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->holding10->AutoSize = true;
			this->holding10->BackColor = System::Drawing::Color::DarkRed;
			this->holding10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->holding10->ForeColor = System::Drawing::Color::Lavender;
			this->holding10->Location = System::Drawing::Point(833, 729);
			this->holding10->Name = L"holding10";
			this->holding10->Size = System::Drawing::Size(88, 75);
			this->holding10->TabIndex = 73;
			this->holding10->Text = L"BUD:\r\n3,408.54\r\n-0.51%";
			this->holding10->Visible = false;
			this->holding10->Click += gcnew System::EventHandler(this, &PortfolioPage::holding10_Click);
			// 
			// holding9
			// 
			this->holding9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->holding9->AutoSize = true;
			this->holding9->BackColor = System::Drawing::Color::DarkRed;
			this->holding9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->holding9->ForeColor = System::Drawing::Color::Lavender;
			this->holding9->Location = System::Drawing::Point(597, 729);
			this->holding9->Name = L"holding9";
			this->holding9->Size = System::Drawing::Size(88, 75);
			this->holding9->TabIndex = 72;
			this->holding9->Text = L"F:\r\n3,408.54\r\n-0.51%";
			this->holding9->Visible = false;
			this->holding9->Click += gcnew System::EventHandler(this, &PortfolioPage::holding9_Click);
			// 
			// holding12
			// 
			this->holding12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->holding12->AutoSize = true;
			this->holding12->BackColor = System::Drawing::Color::DarkRed;
			this->holding12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->holding12->ForeColor = System::Drawing::Color::Lavender;
			this->holding12->Location = System::Drawing::Point(1281, 729);
			this->holding12->Name = L"holding12";
			this->holding12->Size = System::Drawing::Size(88, 75);
			this->holding12->TabIndex = 75;
			this->holding12->Text = L"BUD:\r\n3,408.54\r\n-0.51%";
			this->holding12->Visible = false;
			this->holding12->Click += gcnew System::EventHandler(this, &PortfolioPage::holding12_Click);
			// 
			// holding11
			// 
			this->holding11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->holding11->AutoSize = true;
			this->holding11->BackColor = System::Drawing::Color::DarkRed;
			this->holding11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->holding11->ForeColor = System::Drawing::Color::Lavender;
			this->holding11->Location = System::Drawing::Point(1075, 729);
			this->holding11->Name = L"holding11";
			this->holding11->Size = System::Drawing::Size(88, 75);
			this->holding11->TabIndex = 74;
			this->holding11->Text = L"F:\r\n3,408.54\r\n-0.51%";
			this->holding11->Visible = false;
			this->holding11->Click += gcnew System::EventHandler(this, &PortfolioPage::holding11_Click);
			// 
			// PortfolioPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1602, 903);
			this->Controls->Add(this->holding12);
			this->Controls->Add(this->holding11);
			this->Controls->Add(this->holding10);
			this->Controls->Add(this->holding9);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->holding8);
			this->Controls->Add(this->holding7);
			this->Controls->Add(this->holding4);
			this->Controls->Add(this->holding3);
			this->Controls->Add(this->holding6);
			this->Controls->Add(this->holding2);
			this->Controls->Add(this->holding5);
			this->Controls->Add(this->holding1);
			this->Controls->Add(this->holdingsLabel);
			this->Controls->Add(this->equityChartTitle);
			this->Controls->Add(this->equityCashRatio);
			this->Controls->Add(this->percentageReturn);
			this->Controls->Add(this->portfolioVal);
			this->Controls->Add(this->chartTitle);
			this->Name = L"PortfolioPage";
			this->Text = L"PortfolioPage";
			this->Load += gcnew System::EventHandler(this, &PortfolioPage::PortfolioPage_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	float totalPortfolioValue = 0;
#pragma endregion
	private: System::Void PortfolioPage_Load(System::Object^ sender, System::EventArgs^ e) {
		vector<Holding> userHoldings;
		vector<Stock> companies;
		float totalEquity = 0;

		try {
			String^ user;
			user = marshal_as<String^>(currentUser);
			

			String^ connection_str = "Server=35.227.90.11;Uid=root;Pwd=password;Database=TuringTrader";
			MySqlConnection^ connection = gcnew MySqlConnection(connection_str);
			//using this cmd line, query the username.
			MySqlCommand^ cmd = gcnew MySqlCommand("SELECT ticker, numShares, totalCost FROM TuringTrader.holdings where person='" + user + "'", connection);
			MySqlDataReader^ dr;
			connection->Open();
			dr = cmd->ExecuteReader();

			while (dr->Read()) {
				string symbol = marshal_as<std::string>(dr->GetString(0));
				string strShares = marshal_as<std::string>(dr->GetString(1));
				string strCosts = marshal_as<std::string>(dr->GetString(2));
				Holding currentHolding(symbol, stoi(strShares), stod(strCosts));
				userHoldings.push_back(currentHolding);
			}

			for (int i = 0; i < userHoldings.size(); i++) {
				std::string ticker = userHoldings[i].getTicker();
				Stock company = Stock(ticker);
				companies.push_back(company);
				company.updateMarketVals();
				float currentPrice = company.getCurrentPrice();
				float companyPL = company.getPL();
				float priceChange = (((companyPL + currentPrice) / currentPrice) - 1);
				float companyEquity = currentPrice * userHoldings[i].getQty();
				totalEquity += companyEquity;

				chart1->Series["Series1"]->Points->AddY(companyEquity);
				chart1->Series["Series1"]->Points[i]->AxisLabel = marshal_as<String^>(userHoldings[i].getTicker());
				if (i < 8) {
					Label^ label = (Label^)this->Controls["holding" + (i+1).ToString()];
					String^ text1 = marshal_as<String^>(userHoldings[i].getTicker()) + ": " + " \r\n " + currentPrice.ToString(L"c") + " \r\n " + priceChange.ToString(L"p");
					label->Text = text1;
					label->Visible = true;
					if (priceChange >= 0) {
						label->BackColor = Color::LimeGreen;
					}
					else {
						label->BackColor = Color::DarkRed;
					}
				}

			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("something has gone wrong");
		}
		try {
			String^ user;
			user = marshal_as<String^>(currentUser);

			String^ connection_str = "Server=35.227.90.11;Uid=root;Pwd=password;Database=TuringTrader";
			MySqlConnection^ connection = gcnew MySqlConnection(connection_str);
			//using this cmd line, query the username.
			MySqlCommand^ cmd = gcnew MySqlCommand("SELECT accountBalance FROM TuringTrader.users where username='" + user + "'", connection);
			MySqlDataReader^ dr;
			connection->Open();
			dr = cmd->ExecuteReader();

			while (dr->Read()) {
				string accountValue = marshal_as<std::string>(dr->GetString(0));
				totalPortfolioValue = stod(accountValue) + totalEquity;
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("something has gone wrong");
		}
		portfolioVal->Text = "Current Portfolio Value: $" + " \r\n " + totalPortfolioValue;
		int percentageReturnValue = (totalPortfolioValue-100000) / 100000;
		percentageReturn->Text = "Percentage Return: " + " \r\n " + percentageReturnValue.ToString(L"p");
		int percentageEquity = (totalEquity / totalPortfolioValue) * 100;
		equityCashRatio->Text = "Equity/Cash Balance: " + " \r\n " + percentageEquity + "/" + (100 - percentageEquity);
		chart2->Series["Series1"]->Points->AddY(percentageEquity);
		chart2->Series["Series1"]->Points->AddY(100 - percentageEquity);
		chart2->Series["Series1"]->Points[0]->LegendText = "Equity";
		chart2->Series["Series1"]->Points[1]->LegendText = "Cash";

	}
private: System::Void chart2_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void holding1_Click(System::Object^ sender, System::EventArgs^ e) {
	PortfolioDetailsGUI::PortfolioDetails^ details = gcnew PortfolioDetailsGUI::PortfolioDetails(0, totalPortfolioValue);
	details->ShowDialog();
}
private: System::Void holding2_Click(System::Object^ sender, System::EventArgs^ e) {
	PortfolioDetailsGUI::PortfolioDetails^ details = gcnew PortfolioDetailsGUI::PortfolioDetails(1, totalPortfolioValue);
	details->ShowDialog();
}
private: System::Void holding3_Click(System::Object^ sender, System::EventArgs^ e) {
	PortfolioDetailsGUI::PortfolioDetails^ details = gcnew PortfolioDetailsGUI::PortfolioDetails(2, totalPortfolioValue);
	details->ShowDialog();
}
private: System::Void holding4_Click(System::Object^ sender, System::EventArgs^ e) {
	PortfolioDetailsGUI::PortfolioDetails^ details = gcnew PortfolioDetailsGUI::PortfolioDetails(3, totalPortfolioValue);
	details->ShowDialog();
}
private: System::Void holding5_Click(System::Object^ sender, System::EventArgs^ e) {
	PortfolioDetailsGUI::PortfolioDetails^ details = gcnew PortfolioDetailsGUI::PortfolioDetails(4, totalPortfolioValue);
	details->ShowDialog();
}
private: System::Void holding6_Click(System::Object^ sender, System::EventArgs^ e) {
	PortfolioDetailsGUI::PortfolioDetails^ details = gcnew PortfolioDetailsGUI::PortfolioDetails(5, totalPortfolioValue);
	details->ShowDialog();
}
private: System::Void holding7_Click(System::Object^ sender, System::EventArgs^ e) {
	PortfolioDetailsGUI::PortfolioDetails^ details = gcnew PortfolioDetailsGUI::PortfolioDetails(6, totalPortfolioValue);
	details->ShowDialog();
}
private: System::Void holding8_Click(System::Object^ sender, System::EventArgs^ e) {
	PortfolioDetailsGUI::PortfolioDetails^ details = gcnew PortfolioDetailsGUI::PortfolioDetails(7, totalPortfolioValue);
	details->ShowDialog();
}
private: System::Void holding9_Click(System::Object^ sender, System::EventArgs^ e) {
	PortfolioDetailsGUI::PortfolioDetails^ details = gcnew PortfolioDetailsGUI::PortfolioDetails(8, totalPortfolioValue);
	details->ShowDialog();
}
private: System::Void holding10_Click(System::Object^ sender, System::EventArgs^ e) {
	PortfolioDetailsGUI::PortfolioDetails^ details = gcnew PortfolioDetailsGUI::PortfolioDetails(9, totalPortfolioValue);
	details->ShowDialog();
}
private: System::Void holding11_Click(System::Object^ sender, System::EventArgs^ e) {
	PortfolioDetailsGUI::PortfolioDetails^ details = gcnew PortfolioDetailsGUI::PortfolioDetails(10, totalPortfolioValue);
	details->ShowDialog();
}
private: System::Void holding12_Click(System::Object^ sender, System::EventArgs^ e) {
	PortfolioDetailsGUI::PortfolioDetails^ details = gcnew PortfolioDetailsGUI::PortfolioDetails(11, totalPortfolioValue);
	details->ShowDialog();
}
};
}
