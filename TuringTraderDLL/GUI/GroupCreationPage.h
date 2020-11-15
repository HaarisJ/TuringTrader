#pragma once
#include <random>
#include <string>
#include <ctime>

using namespace MySql::Data::MySqlClient;

namespace GroupCreationGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for GroupCreationPage
	/// </summary>
	public ref class GroupCreationPage : public System::Windows::Forms::Form
	{
	public:
		GroupCreationPage(void)
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
		~GroupCreationPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(324, 161);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(135, 36);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Create Group";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &GroupCreationPage::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(0, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(459, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Enter the name and description of the group you want to create.";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(94, 59);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(365, 26);
			this->textBox1->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(0, 55);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(0, 116);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(134, 30);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Description";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(94, 113);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(365, 26);
			this->textBox2->TabIndex = 5;
			// 
			// GroupCreationPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(476, 222);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"GroupCreationPage";
			this->Text = L"GroupCreationPage";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		// Generating a random join_code for the new group
		String^ possible_characters = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
		std::random_device rd;
		std::mt19937 engine(rd());
		std::uniform_int_distribution<> dist(0, 62 - 1);
		String^ join_code = "";
		for (int i = 0; i < 10; i++) {
			int random_index = dist(engine); //get index between 0 and possible_characters.size()-1
			join_code += possible_characters[random_index];
		}
			
		String^ group_name = textBox1->Text;
		String^ group_descr = textBox2->Text;

		try {
			String^ connection_str = "Server=35.227.90.11;Uid=root;Pwd=password;Database=TuringTrader";
			MySqlConnection^ connection = gcnew MySqlConnection(connection_str);
			MySqlCommand^ cmd = gcnew MySqlCommand("INSERT INTO tradingGroup VALUES('" + join_code + "', '" + group_name + "', '" + group_descr + "')", connection);
			MySqlDataReader^ dr;
			connection->Open();
			dr = cmd->ExecuteReader();
			MessageBox::Show("Your group has been created with join code: " + join_code);
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
};
}
