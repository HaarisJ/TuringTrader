#pragma once
#include <string>
#include <vector>
#include "GroupCreationPage.h"
#include "GroupJoinPage.h"
#include "msclr\marshal_cppstd.h"
#include <cliext/vector>
#include "Holding.h"

extern std::string currentUser;
using namespace MySql::Data::MySqlClient;

namespace GroupsGUI {
	using namespace GroupJoinGUI;
	using namespace GroupCreationGUI;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;

	/// <summary>
	/// Summary for GroupsPage
	/// </summary>
	public ref class GroupsPage : public System::Windows::Forms::Form
	{
	public:
		GroupsPage(void)
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
		~GroupsPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button6;

	protected:

	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label59;
	private: System::Windows::Forms::Label^ label60;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Username;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Holdings;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PortfolioValue;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ TotalProfitLoss;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TreeView^ treeView1;

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
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Username = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Holdings = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PortfolioValue = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TotalProfitLoss = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->treeView1 = (gcnew System::Windows::Forms::TreeView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::LimeGreen;
			this->button6->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button6->Location = System::Drawing::Point(381, 42);
			this->button6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(170, 49);
			this->button6->TabIndex = 10;
			this->button6->Text = L"Join Group";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &GroupsPage::button6_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::DodgerBlue;
			this->button5->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button5->Location = System::Drawing::Point(106, 42);
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(192, 49);
			this->button5->TabIndex = 7;
			this->button5->Text = L"Create Group";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &GroupsPage::button5_Click);
			// 
			// label59
			// 
			this->label59->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label59->AutoSize = true;
			this->label59->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label59->Location = System::Drawing::Point(99, 123);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(203, 38);
			this->label59->TabIndex = 11;
			this->label59->Text = L"Your Groups";
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->Location = System::Drawing::Point(343, 0);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(240, 20);
			this->label60->TabIndex = 1;
			this->label60->Text = L"Group Code: No Group Selected\r\n";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Username,
					this->Holdings, this->PortfolioValue, this->TotalProfitLoss
			});
			this->dataGridView1->Location = System::Drawing::Point(347, 64);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(953, 460);
			this->dataGridView1->TabIndex = 7;
			// 
			// Username
			// 
			this->Username->HeaderText = L"Username";
			this->Username->MinimumWidth = 8;
			this->Username->Name = L"Username";
			this->Username->Width = 150;
			// 
			// Holdings
			// 
			this->Holdings->HeaderText = L"Holdings";
			this->Holdings->MinimumWidth = 8;
			this->Holdings->Name = L"Holdings";
			this->Holdings->Width = 150;
			// 
			// PortfolioValue
			// 
			this->PortfolioValue->HeaderText = L"PortfolioValue";
			this->PortfolioValue->MinimumWidth = 8;
			this->PortfolioValue->Name = L"PortfolioValue";
			this->PortfolioValue->Width = 150;
			// 
			// TotalProfitLoss
			// 
			this->TotalProfitLoss->HeaderText = L"Total Profit/Loss";
			this->TotalProfitLoss->MinimumWidth = 8;
			this->TotalProfitLoss->Name = L"TotalProfitLoss";
			this->TotalProfitLoss->Width = 150;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Crimson;
			this->button7->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button7->Location = System::Drawing::Point(1006, 546);
			this->button7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(294, 49);
			this->button7->TabIndex = 6;
			this->button7->Text = L"Leave Group";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &GroupsPage::button7_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Location = System::Drawing::Point(0, 0);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(329, 524);
			this->listBox1->TabIndex = 8;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &GroupsPage::listBox1_SelectedIndexChanged);
			// 
			// panel3
			// 
			this->panel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel3->Controls->Add(this->listBox1);
			this->panel3->Controls->Add(this->button7);
			this->panel3->Controls->Add(this->dataGridView1);
			this->panel3->Controls->Add(this->label60);
			this->panel3->Location = System::Drawing::Point(99, 193);
			this->panel3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1446, 646);
			this->panel3->TabIndex = 8;
			// 
			// treeView1
			// 
			this->treeView1->Location = System::Drawing::Point(37, 645);
			this->treeView1->Name = L"treeView1";
			this->treeView1->Size = System::Drawing::Size(8, 8);
			this->treeView1->TabIndex = 12;
			// 
			// GroupsPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1802, 1129);
			this->Controls->Add(this->treeView1);
			this->Controls->Add(this->label59);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->panel3);
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"GroupsPage";
			this->Text = L"GroupsPage";
			this->Load += gcnew System::EventHandler(this, &GroupsPage::GroupsPage_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		GroupCreationPage^ group_creation_dialog = gcnew GroupCreationPage();
		group_creation_dialog->ShowDialog();
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		GroupJoinPage^ group_join_dialog = gcnew GroupJoinPage();
		group_join_dialog->ShowDialog();
	}

	// This event handler controls what happens when this page is loaded
	private: System::Void GroupsPage_Load(System::Object^ sender, System::EventArgs^ e) {
		String^ username = marshal_as<String^>(currentUser);
		try {
			String^ connection_str = "Server=35.227.90.11;Uid=root;Pwd=password;Database=TuringTrader";
			MySqlConnection^ connection = gcnew MySqlConnection(connection_str);
			MySqlCommand^ cmd = gcnew MySqlCommand("SELECT groupName FROM groupMember INNER JOIN tradingGroup ON groupMember.groupCode = tradingGroup.joinCode WHERE member='" + username + "'", connection);
			MySqlDataReader^ dr;
			connection->Open();
			dr = cmd->ExecuteReader();
			while (dr->Read()) {
				listBox1->Items->Add(dr->GetString(0));
			}
			dr->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		// Resetting the groups table
		dataGridView1->Rows->Clear();
		if (listBox1->SelectedIndex > -1) {
			String^ current_group_name = listBox1->SelectedItem->ToString();
			String^ current_group_code = "";
			cliext::vector<String^> current_group_members;

			String^ connection_str = "Server=35.227.90.11;Uid=root;Pwd=password;Database=TuringTrader";
			MySqlConnection^ connection = gcnew MySqlConnection(connection_str);
			MySqlCommand^ cmd = gcnew MySqlCommand("SELECT joinCode FROM tradingGroup WHERE groupName='" + current_group_name + "'", connection);
			MySqlDataReader^ dr;
			connection->Open();
			dr = cmd->ExecuteReader();
			while (dr->Read()) {
				current_group_code = dr->GetString(0);
				label60->Text = L"Group Code: " + current_group_code + "\r\nUse this code to invite your friends to your group!\r\n";
			}
			dr->Close();

			// Adding usernames of members of current group to a vector and displaying in table
			MySqlCommand^ cmd2 = gcnew MySqlCommand("SELECT member from groupMember INNER JOIN tradingGroup ON groupMember.groupCode = tradingGroup.joinCode WHERE joinCode='" + current_group_code + "'", connection);
			MySqlDataReader^ dr2;
			dr2 = cmd2->ExecuteReader();
			while (dr2->Read()) {
				current_group_members.push_back(dr2->GetString(0));
			}
			dr2->Close();

			// For each group member, create a holdings object for each of their holdings
			for (int i = 0; i < current_group_members.size(); i++) {
				std::vector<Holding> user_portfolio;
				MySqlCommand^ cmd3 = gcnew MySqlCommand("SELECT ticker, numShares, totalCost FROM holdings WHERE person='" + current_group_members[i] + "'", connection);
				MySqlDataReader^ dr3;
				dr3 = cmd3->ExecuteReader();
				// This loops through each holding possessed by the user
				while (dr3->Read()) {
					std::string ticker = marshal_as<std::string>(dr3->GetString(0));
					int num_shares = dr3->GetInt32(1);
					float total_cost = dr3->GetFloat(2);
					Holding holding(ticker, num_shares, total_cost);
					user_portfolio.push_back(holding);
				}
				dr3->Close();

				// Get user's cash balance
				MySqlCommand^ cmd4 = gcnew MySqlCommand("SELECT accountBalance FROM users WHERE username='" + current_group_members[i] + "'", connection);
				MySqlDataReader^ dr4;
				dr4 = cmd4->ExecuteReader();
				float user_cash_balance;
				while (dr4->Read()) {
					user_cash_balance = dr4->GetInt32(0);
				}

				dr4->Close();

				// Add user's stats to the DataGridView
				float user_portfolio_value = user_cash_balance;
				float user_portfolio_cost = 0;
				for (int i = 0; i < user_portfolio.size(); i++) {
					user_portfolio[i].updateMarketVals();
					float holding_price = user_portfolio[i].getCurrentPrice();
					user_portfolio_value += holding_price * (user_portfolio[i].getQty());
					user_portfolio_cost += user_portfolio[i].getTotalCost();
				}
				dataGridView1->Rows->Add(current_group_members[i], user_portfolio.size(), user_portfolio_value, user_portfolio_value - 100000);
			}
		}
		
	}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (listBox1->SelectedIndex < 0) {
		MessageBox::Show("Select a group from the listbox to indicate which one you would like to leave.");
	}
	else {
		String^ current_group_name = listBox1->SelectedItem->ToString();

		String^ connection_str = "Server=35.227.90.11;Uid=root;Pwd=password;Database=TuringTrader";
		MySqlConnection^ connection = gcnew MySqlConnection(connection_str);
		MySqlCommand^ cmd = gcnew MySqlCommand("SELECT joinCode FROM tradingGroup WHERE groupName='" + current_group_name + "'", connection);
		MySqlDataReader^ dr;
		connection->Open();
		dr = cmd->ExecuteReader();
		String^ current_join_code = "";
		while (dr->Read()) {
			current_join_code = dr->GetString(0);
		}
		dr->Close();

		MySqlCommand^ cmd2 = gcnew MySqlCommand("DELETE FROM groupMember WHERE groupCode='" + current_join_code + "'", connection);
		MySqlDataReader^ dr2;
		dr2 = cmd2->ExecuteReader();

		dr2->Close();
		listBox1->Items->Remove(listBox1->SelectedItem);
		label60->Text = L"Group Code: No Group Selected\r\n";
	}
}
};
}
