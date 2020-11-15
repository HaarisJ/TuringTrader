#pragma once

namespace GroupsGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Label^ label58;
	private: System::Windows::Forms::Label^ label55;
	private: System::Windows::Forms::Label^ label52;
	private: System::Windows::Forms::Label^ label57;
	private: System::Windows::Forms::Label^ label54;
	private: System::Windows::Forms::Label^ label51;
	private: System::Windows::Forms::Label^ label56;
	private: System::Windows::Forms::Label^ label53;
	private: System::Windows::Forms::Label^ label50;
	private: System::Windows::Forms::Label^ label49;
	private: System::Windows::Forms::Label^ label48;
	private: System::Windows::Forms::Label^ label47;
	private: System::Windows::Forms::Label^ label46;
	private: System::Windows::Forms::Label^ label45;
	private: System::Windows::Forms::Label^ label44;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::Label^ label40;
	private: System::Windows::Forms::Label^ label41;
	private: System::Windows::Forms::Label^ label42;
	private: System::Windows::Forms::Label^ label43;
	private: System::Windows::Forms::Label^ label60;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label59;

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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->panel2->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::LimeGreen;
			this->button6->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button6->Location = System::Drawing::Point(342, 37);
			this->button6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(151, 39);
			this->button6->TabIndex = 10;
			this->button6->Text = L"Join Group";
			this->button6->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button2->Location = System::Drawing::Point(40, 14);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(173, 84);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Group 1";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::DodgerBlue;
			this->button3->ForeColor = System::Drawing::SystemColors::Window;
			this->button3->Location = System::Drawing::Point(379, 14);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(173, 84);
			this->button3->TabIndex = 1;
			this->button3->Text = L"Group 2";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button4->Location = System::Drawing::Point(703, 14);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(173, 84);
			this->button4->TabIndex = 2;
			this->button4->Text = L"Group 3";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// panel2
			// 
			this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel2->BackColor = System::Drawing::Color::DimGray;
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Location = System::Drawing::Point(88, 239);
			this->panel2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1076, 112);
			this->panel2->TabIndex = 9;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 5;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel1->Controls->Add(this->label58, 4, 5);
			this->tableLayoutPanel1->Controls->Add(this->label55, 4, 4);
			this->tableLayoutPanel1->Controls->Add(this->label52, 4, 3);
			this->tableLayoutPanel1->Controls->Add(this->label57, 3, 5);
			this->tableLayoutPanel1->Controls->Add(this->label54, 3, 4);
			this->tableLayoutPanel1->Controls->Add(this->label51, 3, 3);
			this->tableLayoutPanel1->Controls->Add(this->label56, 2, 5);
			this->tableLayoutPanel1->Controls->Add(this->label53, 2, 4);
			this->tableLayoutPanel1->Controls->Add(this->label50, 2, 3);
			this->tableLayoutPanel1->Controls->Add(this->label49, 4, 2);
			this->tableLayoutPanel1->Controls->Add(this->label48, 3, 2);
			this->tableLayoutPanel1->Controls->Add(this->label47, 2, 2);
			this->tableLayoutPanel1->Controls->Add(this->label46, 4, 1);
			this->tableLayoutPanel1->Controls->Add(this->label45, 3, 1);
			this->tableLayoutPanel1->Controls->Add(this->label44, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->label29, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->label30, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->label31, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->label32, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->label33, 4, 0);
			this->tableLayoutPanel1->Controls->Add(this->label34, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->label35, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->label36, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->label37, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->label38, 0, 5);
			this->tableLayoutPanel1->Controls->Add(this->label39, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->label40, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->label41, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->label42, 1, 4);
			this->tableLayoutPanel1->Controls->Add(this->label43, 1, 5);
			this->tableLayoutPanel1->Location = System::Drawing::Point(17, 20);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 7;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1147, 319);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Location = System::Drawing::Point(232, 225);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(24, 17);
			this->label43->TabIndex = 14;
			this->label43->Text = L"10";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(232, 180);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(24, 17);
			this->label42->TabIndex = 13;
			this->label42->Text = L"10";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(232, 135);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(24, 17);
			this->label41->TabIndex = 12;
			this->label41->Text = L"10";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(232, 90);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(16, 17);
			this->label40->TabIndex = 11;
			this->label40->Text = L"8";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(232, 45);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(24, 17);
			this->label39->TabIndex = 10;
			this->label39->Text = L"15";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(3, 225);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(50, 17);
			this->label38->TabIndex = 9;
			this->label38->Text = L"Maddy";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(3, 180);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(46, 17);
			this->label37->TabIndex = 8;
			this->label37->Text = L"Jason";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(3, 135);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(39, 17);
			this->label36->TabIndex = 7;
			this->label36->Text = L"Mark";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(3, 90);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(46, 17);
			this->label35->TabIndex = 6;
			this->label35->Text = L"Harris";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(3, 45);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(38, 17);
			this->label34->TabIndex = 5;
			this->label34->Text = L"Liam";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(919, 0);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(81, 17);
			this->label33->TabIndex = 4;
			this->label33->Text = L"Total Gains";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(690, 0);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(60, 17);
			this->label32->TabIndex = 3;
			this->label32->Text = L"Portfolio";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(461, 0);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(63, 17);
			this->label31->TabIndex = 2;
			this->label31->Text = L"Holdings";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(3, 0);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(45, 17);
			this->label30->TabIndex = 1;
			this->label30->Text = L"Name";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(232, 0);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(73, 17);
			this->label29->TabIndex = 0;
			this->label29->Text = L"Trades/wk";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Location = System::Drawing::Point(461, 45);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(16, 17);
			this->label44->TabIndex = 15;
			this->label44->Text = L"5";
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Location = System::Drawing::Point(690, 45);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(68, 17);
			this->label45->TabIndex = 16;
			this->label45->Text = L"$112,800";
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Location = System::Drawing::Point(919, 45);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(60, 17);
			this->label46->TabIndex = 17;
			this->label46->Text = L"$12,800";
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Location = System::Drawing::Point(461, 90);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(16, 17);
			this->label47->TabIndex = 18;
			this->label47->Text = L"4";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Location = System::Drawing::Point(690, 90);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(60, 17);
			this->label48->TabIndex = 19;
			this->label48->Text = L"$82,000";
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Location = System::Drawing::Point(919, 90);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(65, 17);
			this->label49->TabIndex = 20;
			this->label49->Text = L"-$18,000";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Location = System::Drawing::Point(461, 135);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(16, 17);
			this->label50->TabIndex = 21;
			this->label50->Text = L"7";
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Location = System::Drawing::Point(461, 180);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(16, 17);
			this->label53->TabIndex = 24;
			this->label53->Text = L"7";
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->Location = System::Drawing::Point(461, 225);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(16, 17);
			this->label56->TabIndex = 27;
			this->label56->Text = L"7";
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Location = System::Drawing::Point(690, 135);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(60, 17);
			this->label51->TabIndex = 30;
			this->label51->Text = L"$82,000";
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->Location = System::Drawing::Point(690, 180);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(60, 17);
			this->label54->TabIndex = 31;
			this->label54->Text = L"$82,000";
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->Location = System::Drawing::Point(690, 225);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(60, 17);
			this->label57->TabIndex = 32;
			this->label57->Text = L"$82,000";
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Location = System::Drawing::Point(919, 135);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(65, 17);
			this->label52->TabIndex = 33;
			this->label52->Text = L"-$18,000";
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Location = System::Drawing::Point(919, 180);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(65, 17);
			this->label55->TabIndex = 34;
			this->label55->Text = L"-$18,000";
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->Location = System::Drawing::Point(919, 225);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(65, 17);
			this->label58->TabIndex = 35;
			this->label58->Text = L"-$18,000";
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->Location = System::Drawing::Point(27, 361);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(318, 34);
			this->label60->TabIndex = 1;
			this->label60->Text = L"Group Code: x8Km2K9\r\nUse this code to invite your friends to your group!\r\n";
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Crimson;
			this->button7->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button7->Location = System::Drawing::Point(1012, 353);
			this->button7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(151, 39);
			this->button7->TabIndex = 6;
			this->button7->Text = L"Leave Group";
			this->button7->UseVisualStyleBackColor = false;
			// 
			// panel3
			// 
			this->panel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel3->Controls->Add(this->button7);
			this->panel3->Controls->Add(this->label60);
			this->panel3->Controls->Add(this->tableLayoutPanel1);
			this->panel3->Location = System::Drawing::Point(88, 357);
			this->panel3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1285, 420);
			this->panel3->TabIndex = 8;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::DodgerBlue;
			this->button5->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button5->Location = System::Drawing::Point(94, 37);
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(171, 39);
			this->button5->TabIndex = 7;
			this->button5->Text = L"Create Group";
			this->button5->UseVisualStyleBackColor = false;
			// 
			// label59
			// 
			this->label59->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label59->AutoSize = true;
			this->label59->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label59->Location = System::Drawing::Point(88, 195);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(175, 32);
			this->label59->TabIndex = 11;
			this->label59->Text = L"Your Groups";
			// 
			// GroupsPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1602, 903);
			this->Controls->Add(this->label59);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Name = L"GroupsPage";
			this->Text = L"GroupsPage";
			this->panel2->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
