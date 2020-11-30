#pragma once

#include "Stock.h"
#include "Holding.h"
#include "CompanyPage.h"
#include <msclr\marshal_cppstd.h>
#include <vector>

namespace PortfolioDetailsGUI {

	using namespace msclr::interop; // This namespace is used for marshalling between string and String^
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PortfolioDetails
	/// </summary>
	public ref class PortfolioDetails : public System::Windows::Forms::Form
	{
	public:
		PortfolioDetails(int index, float totalValue)
		{
			InitializeComponent();
			indexToUse = index;
			totalPortFolioValue = totalValue;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		int indexToUse;
		float totalPortFolioValue;
		~PortfolioDetails()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;

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
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(41, 59);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(41, 104);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(41, 153);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(46, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"label3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(41, 204);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(46, 17);
			this->label4->TabIndex = 5;
			this->label4->Text = L"label4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(41, 251);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(46, 17);
			this->label5->TabIndex = 4;
			this->label5->Text = L"label5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(41, 297);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(46, 17);
			this->label6->TabIndex = 3;
			this->label6->Text = L"label6";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(41, 347);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(46, 17);
			this->label7->TabIndex = 7;
			this->label7->Text = L"label7";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(41, 398);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(46, 17);
			this->label8->TabIndex = 6;
			this->label8->Text = L"label8";
			// 
			// PortfolioDetails
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(548, 497);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"PortfolioDetails";
			this->Text = L"PortfolioDetails";
			this->Load += gcnew System::EventHandler(this, &PortfolioDetails::PortfolioDetails_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void PortfolioDetails_Load(System::Object^ sender, System::EventArgs^ e) {
		vector<Holding> userHoldings;
		float totalEquity = 0;
		float totalPortfolioValue = 0;

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

		}
		catch (Exception^ ex) {
			MessageBox::Show("something has gone wrong");
		}
		std::string ticker = userHoldings[indexToUse].getTicker();
		Stock company = Stock(ticker);
		company.updateMarketVals();

		this->Text = marshal_as<String^>(ticker) + " Details";
		float stockWorths = company.getCurrentPrice() * userHoldings[indexToUse].getQty();

		float profit = stockWorths - userHoldings[indexToUse].getTotalCost();

		float percentageReturn = (profit / userHoldings[indexToUse].getTotalCost());

		float proportionValue = (stockWorths / totalPortFolioValue);
	
		float averagePricePerShare = userHoldings[indexToUse].getTotalCost() / userHoldings[indexToUse].getQty();

		label1->Text = "Total Profit/Loss: " + profit.ToString(L"c");
		label2->Text = "Total Percentage Return: " + percentageReturn.ToString(L"p");
		label3->Text = "Proportion of Portfolio: " + proportionValue.ToString(L"p");
		label4->Text = "Number of Shares Owned: " + userHoldings[indexToUse].getQty().ToString();
		label5->Text = "Average Price of Shares: " + averagePricePerShare.ToString(L"c");
		label6->Text = "Total Position Cost: " + userHoldings[indexToUse].getTotalCost().ToString(L"c");
		label7->Text = "Current Share Price: " + company.getCurrentPrice().ToString(L"c");
		label8->Text = "Market Value of Position: " + stockWorths.ToString(L"c");
	}
};
}
