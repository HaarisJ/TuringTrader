#pragma once

namespace GroupJoinGUI {
	using namespace MySql::Data::MySqlClient;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for GroupJoinPage
	/// </summary>
	public ref class GroupJoinPage : public System::Windows::Forms::Form
	{
	public:
		GroupJoinPage(void)
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
		~GroupJoinPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(0, 4);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(346, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Enter the join code of the group you\'d like to join";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(4, 33);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(194, 26);
			this->textBox1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(204, 33);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(143, 26);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Join Group";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &GroupJoinPage::button1_Click);
			// 
			// GroupJoinPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(360, 77);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"GroupJoinPage";
			this->Text = L"GroupJoinPage";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ join_code = textBox1->Text;
		String^ username; // TODO: Need a user object to get a username to insert into the SQL query

		try {
			// Attempt to insert member into groupMember table
			String^ connection_str = "Server=35.227.90.11;Uid=root;Pwd=password;Database=TuringTrader";
			MySqlConnection^ connection = gcnew MySqlConnection(connection_str);
			MySqlCommand^ cmd1 = gcnew MySqlCommand("INSERT INTO groupMember VALUES('mark_laufert', '" + join_code + "')", connection); // TODO: replace hardcoded username
			MySqlDataReader^ dr1;
			connection->Open();
			dr1 = cmd1->ExecuteReader();
			dr1->Close();
			MessageBox::Show("You have successfully joined the group");
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}

	}
	};
}
