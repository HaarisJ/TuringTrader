#pragma once

namespace ProfileGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ProfilePage
	/// </summary>
	public ref class ProfilePage : public System::Windows::Forms::Form
	{
	public:
		ProfilePage(void)
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
		~ProfilePage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button12;
	protected:
	private: System::Windows::Forms::Label^ label70;
	private: System::Windows::Forms::Label^ label69;
	private: System::Windows::Forms::Label^ label68;
	private: System::Windows::Forms::Label^ label67;
	private: System::Windows::Forms::Label^ label66;
	private: System::Windows::Forms::Label^ label65;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label64;
	private: System::Windows::Forms::Label^ label63;
	private: System::Windows::Forms::Label^ label62;
	private: System::Windows::Forms::Label^ label61;

	protected:



















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
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button12
			// 
			this->button12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button12->Location = System::Drawing::Point(934, 637);
			this->button12->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(264, 53);
			this->button12->TabIndex = 35;
			this->button12->Text = L"Reset account";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// label70
			// 
			this->label70->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label70->AutoSize = true;
			this->label70->Location = System::Drawing::Point(839, 503);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(363, 68);
			this->label70->TabIndex = 33;
			this->label70->Text = L"Reset account completely, removing all\r\ncurrent positions and resetting account b"
				L"alance to base.\r\n\r\nWould you like to continue\?\r\n";
			// 
			// label69
			// 
			this->label69->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label69->AutoSize = true;
			this->label69->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label69->Location = System::Drawing::Point(974, 441);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(210, 36);
			this->label69->TabIndex = 32;
			this->label69->Text = L"Reset Account";
			// 
			// label68
			// 
			this->label68->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label68->AutoSize = true;
			this->label68->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label68->Location = System::Drawing::Point(866, 322);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(371, 51);
			this->label68->TabIndex = 31;
			this->label68->Text = L"Turing Trading 101\r\nLorem ipsum dolor sit amet. Ut consequat.\r\nNullam quis est eg"
				L"et eros faucibus volutpat ut eget dolor. ";
			// 
			// label67
			// 
			this->label67->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label67->AutoSize = true;
			this->label67->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label67->Location = System::Drawing::Point(866, 189);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(186, 51);
			this->label67->TabIndex = 30;
			this->label67->Text = L"Stock Trading 101\r\nLorem ipsum dolor sit amet. \r\nNullam quis eget dolor. ";
			// 
			// label66
			// 
			this->label66->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label66->AutoSize = true;
			this->label66->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label66->Location = System::Drawing::Point(1022, 111);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(84, 38);
			this->label66->TabIndex = 29;
			this->label66->Text = L"Help";
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label65->Location = System::Drawing::Point(269, 111);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(109, 38);
			this->label65->TabIndex = 28;
			this->label65->Text = L"Profile";
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(435, 601);
			this->button11->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(191, 48);
			this->button11->TabIndex = 27;
			this->button11->Text = L"Change Password";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(435, 493);
			this->button10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(191, 48);
			this->button10->TabIndex = 26;
			this->button10->Text = L"Change Phone";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(435, 369);
			this->button9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(191, 50);
			this->button9->TabIndex = 25;
			this->button9->Text = L"Change Email";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(435, 257);
			this->button8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(191, 50);
			this->button8->TabIndex = 24;
			this->button8->Text = L"Change Username";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// label64
			// 
			this->label64->AutoSize = true;
			this->label64->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label64->Location = System::Drawing::Point(59, 601);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(212, 29);
			this->label64->TabIndex = 23;
			this->label64->Text = L"Password: ********";
			this->label64->Click += gcnew System::EventHandler(this, &ProfilePage::label64_Click);
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label63->Location = System::Drawing::Point(59, 493);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(241, 29);
			this->label63->TabIndex = 22;
			this->label63->Text = L"Phone: 555-555-5555";
			this->label63->Click += gcnew System::EventHandler(this, &ProfilePage::label63_Click);
			// 
			// label62
			// 
			this->label62->AutoSize = true;
			this->label62->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label62->Location = System::Drawing::Point(59, 383);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(246, 29);
			this->label62->TabIndex = 21;
			this->label62->Text = L"Email: liam@turing.ca";
			this->label62->Click += gcnew System::EventHandler(this, &ProfilePage::label62_Click);
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label61->Location = System::Drawing::Point(59, 257);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(202, 29);
			this->label61->TabIndex = 20;
			this->label61->Text = L"Username: lfiebig";
			this->label61->Click += gcnew System::EventHandler(this, &ProfilePage::label61_Click);
			// 
			// ProfilePage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1602, 903);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->label70);
			this->Controls->Add(this->label69);
			this->Controls->Add(this->label68);
			this->Controls->Add(this->label67);
			this->Controls->Add(this->label66);
			this->Controls->Add(this->label65);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->label64);
			this->Controls->Add(this->label63);
			this->Controls->Add(this->label62);
			this->Controls->Add(this->label61);
			this->Name = L"ProfilePage";
			this->Text = L"ProfilePage";
			this->Load += gcnew System::EventHandler(this, &ProfilePage::ProfilePage_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label64_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label62_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label61_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void ProfilePage_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label63_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
