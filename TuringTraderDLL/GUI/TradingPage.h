#pragma once
#include "CompanyPage.h"

namespace TradingGUI {

	using namespace CompanyPageGUI;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Label^ label28;
	protected:
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::LinkLabel^ linkLabel2;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;

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
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label28
			// 
			this->label28->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(41, 336);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(248, 29);
			this->label28->TabIndex = 63;
			this->label28->Text = L"Latest Financial News";
			// 
			// panel1
			// 
			this->panel1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel1->Location = System::Drawing::Point(45, 381);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1300, 110);
			this->panel1->TabIndex = 62;
			// 
			// label27
			// 
			this->label27->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label27->AutoSize = true;
			this->label27->BackColor = System::Drawing::Color::DarkRed;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->ForeColor = System::Drawing::Color::Lavender;
			this->label27->Location = System::Drawing::Point(631, 189);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(96, 75);
			this->label27->TabIndex = 61;
			this->label27->Text = L"S&&P 500:\r\n3,408.54\r\n-0.51%";
			// 
			// label26
			// 
			this->label26->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label26->AutoSize = true;
			this->label26->BackColor = System::Drawing::Color::LimeGreen;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->ForeColor = System::Drawing::Color::Lavender;
			this->label26->Location = System::Drawing::Point(368, 189);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(104, 75);
			this->label26->TabIndex = 60;
			this->label26->Text = L"NASDAQ:\r\n11,329.95\r\n+1.24%";
			// 
			// label25
			// 
			this->label25->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label25->AutoSize = true;
			this->label25->BackColor = System::Drawing::Color::LimeGreen;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->ForeColor = System::Drawing::Color::Lavender;
			this->label25->Location = System::Drawing::Point(103, 189);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(99, 75);
			this->label25->TabIndex = 59;
			this->label25->Text = L"DJIA:\r\n28,129.90\r\n+0.07%";
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(45, 57);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(580, 30);
			this->textBox1->TabIndex = 58;
			// 
			// label24
			// 
			this->label24->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(42, 128);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(577, 29);
			this->label24->TabIndex = 57;
			this->label24->Text = L"Major Index Performance Since Last Market Opening";
			// 
			// label23
			// 
			this->label23->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(40, 29);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(423, 25);
			this->label23->TabIndex = 56;
			this->label23->Text = L"Search for a company by name or ticker symbol";
			// 
			// linkLabel2
			// 
			this->linkLabel2->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel2->Location = System::Drawing::Point(1115, 672);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(182, 20);
			this->linkLabel2->TabIndex = 55;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"View All Owned Stocks";
			// 
			// label13
			// 
			this->label13->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::DimGray;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::Lavender;
			this->label13->Location = System::Drawing::Point(740, 733);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(187, 25);
			this->label13->TabIndex = 54;
			this->label13->Text = L"No Company added";
			// 
			// label15
			// 
			this->label15->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::DimGray;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::Lavender;
			this->label15->Location = System::Drawing::Point(489, 733);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(187, 25);
			this->label15->TabIndex = 53;
			this->label15->Text = L"No Company added";
			// 
			// label16
			// 
			this->label16->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::LimeGreen;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::Lavender;
			this->label16->Location = System::Drawing::Point(779, 615);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(99, 75);
			this->label16->TabIndex = 52;
			this->label16->Text = L"TSLA:\r\n28,129.90\r\n+0.07%";
			// 
			// label17
			// 
			this->label17->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::DarkRed;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::Lavender;
			this->label17->Location = System::Drawing::Point(538, 615);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(99, 75);
			this->label17->TabIndex = 51;
			this->label17->Text = L"GM:\r\n28,129.90\r\n-0.07%";
			// 
			// label18
			// 
			this->label18->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::DarkRed;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::Lavender;
			this->label18->Location = System::Drawing::Point(299, 716);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(88, 75);
			this->label18->TabIndex = 50;
			this->label18->Text = L"BUD:\r\n3,408.54\r\n-0.51%";
			// 
			// label19
			// 
			this->label19->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::DarkRed;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::Lavender;
			this->label19->Location = System::Drawing::Point(299, 615);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(88, 75);
			this->label19->TabIndex = 49;
			this->label19->Text = L"F:\r\n3,408.54\r\n-0.51%";
			// 
			// label20
			// 
			this->label20->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::LimeGreen;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::Lavender;
			this->label20->Location = System::Drawing::Point(82, 716);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(99, 75);
			this->label20->TabIndex = 48;
			this->label20->Text = L"NVDA:\r\n28,129.90\r\n+0.07%";
			// 
			// label21
			// 
			this->label21->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::LimeGreen;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::Color::Lavender;
			this->label21->Location = System::Drawing::Point(82, 615);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(99, 75);
			this->label21->TabIndex = 47;
			this->label21->Text = L"AAPL:\r\n28,129.90\r\n+0.07%";
			this->label21->Click += gcnew System::EventHandler(this, &TradingPage::label21_Click);
			// 
			// label22
			// 
			this->label22->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(42, 563);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(634, 29);
			this->label22->TabIndex = 46;
			this->label22->Text = L"Performance of Stocks Owned Since Last Market Opening";
			// 
			// TradingPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1602, 903);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->linkLabel2);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label22);
			this->Name = L"TradingPage";
			this->Text = L"TradingPage";
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
	private: System::Void label21_Click(System::Object^ sender, System::EventArgs^ e) {
		CompanyPage^ companyPage = gcnew CompanyPage();
		openChildForm(companyPage);
	}
};
}
