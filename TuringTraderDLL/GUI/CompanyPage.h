#pragma once
#include "Stock.h"

namespace AppGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Button^ buttonTest;
	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::SplitContainer^ splitContainer1;

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
			this->buttonTest = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->SuspendLayout();
			this->SuspendLayout();
			// 
			// buttonTest
			// 
			this->buttonTest->Location = System::Drawing::Point(173, 230);
			this->buttonTest->Name = L"buttonTest";
			this->buttonTest->Size = System::Drawing::Size(75, 23);
			this->buttonTest->TabIndex = 0;
			this->buttonTest->Text = L"button1";
			this->buttonTest->UseVisualStyleBackColor = true;
			this->buttonTest->Click += gcnew System::EventHandler(this, &CompanyPage::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(128, 167);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"label1";
			// 
			// splitContainer1
			// 
			this->splitContainer1->Location = System::Drawing::Point(107, 57);
			this->splitContainer1->Name = L"splitContainer1";
			this->splitContainer1->Size = System::Drawing::Size(211, 100);
			this->splitContainer1->SplitterDistance = 70;
			this->splitContainer1->TabIndex = 2;
			// 
			// CompanyPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(452, 393);
			this->Controls->Add(this->splitContainer1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonTest);
			this->KeyPreview = true;
			this->Name = L"CompanyPage";
			this->Text = L"CompanyPage";
			this->Load += gcnew System::EventHandler(this, &CompanyPage::CompanyPage_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//label1->Text = getPrice().ToString();
		Stock apple("AAPL");
		label1->Text = apple.getPrice().ToString();
	}
	private: System::Void CompanyPage_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
