#pragma once
#include <msclr\marshal_cppstd.h>

extern std::string currentUser;

namespace ProfileGUI {

	using namespace std;
	using namespace msclr::interop; // This namespace is used for marshalling between string and String^
	using namespace MySql::Data::MySqlClient;
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

	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label64;

	private: System::Windows::Forms::Label^ label62;
	private: System::Windows::Forms::Label^ label61;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label12;

	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;

	private: System::ComponentModel::IContainer^ components;

	protected:



















	protected:
















	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ProfilePage::typeid));
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(405, 1270);
			this->button12->Margin = System::Windows::Forms::Padding(6, 4, 6, 4);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(528, 103);
			this->button12->TabIndex = 35;
			this->button12->Text = L"Reset account";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &ProfilePage::button12_Click);
			// 
			// label70
			// 
			this->label70->AutoSize = true;
			this->label70->Location = System::Drawing::Point(370, 1022);
			this->label70->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(719, 128);
			this->label70->TabIndex = 33;
			this->label70->Text = L"Reset account completely, removing all\r\ncurrent positions and resetting account b"
				L"alance to base.\r\n\r\nWould you like to continue\?\r\n";
			this->label70->Click += gcnew System::EventHandler(this, &ProfilePage::label70_Click);
			// 
			// label69
			// 
			this->label69->AutoSize = true;
			this->label69->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label69->Location = System::Drawing::Point(487, 932);
			this->label69->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(418, 69);
			this->label69->TabIndex = 32;
			this->label69->Text = L"Reset Account";
			this->label69->Click += gcnew System::EventHandler(this, &ProfilePage::label69_Click);
			// 
			// label68
			// 
			this->label68->AutoSize = true;
			this->label68->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label68->Location = System::Drawing::Point(1732, 685);
			this->label68->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(1440, 465);
			this->label68->TabIndex = 31;
			this->label68->Text = L"Welcome to TuringTrader \n \r"
				L"TuringTrader is a simulated investing application for individuals that are new to finance \r"
				L"and seeking a consequence - free way to practice investing in stocks alongside an interactive group.\r \n"
				L"Use our groups page to compete against other users and track your progess in the group.\r"
				L"If you are interested in joining a group, please head to the group pageand click the join group button!\r"
				L"To create a group, click the create group button on the groups pageand shares the generated code with all you friends \r \n"
				L"To begin investing, go to the the trading page. \r"
				L"On the trading page, you can see stocks you are watching as well as search for stocks \r"
				L"Unsure of where to start ? Checkout our selection of default stocks! \r"
				L"Click on a stock to find more information about the company, add it to your watchlist \r"
				L"or buy and sell shares. \r"
				L"Once you own stock, you can head over to the porfolio page where you can see your current postions \r"
				L"as well as the porfolios value over it's lifetime and how it currently stands.";
			this->label68->Click += gcnew System::EventHandler(this, &ProfilePage::label68_Click);
			// 
			// label67
			// 
			this->label67->AutoSize = true;
			this->label67->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label67->Location = System::Drawing::Point(1732, 255);
			this->label67->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(1459, 310);
			this->label67->TabIndex = 30;
			this->label67->Text = "Active trading is what an investor who places 10 or more trades per month does. \r"
				L"Typically, they use a strategy that relies heavily on timing the market,\r"
				L"trying to take advantage of short - term events(at the company level or based on market fluctuations)\r"
				L"to turn a profit in the coming weeks or months. \r \n"
				L"Day trading is the strategy employed by investors who play hot potato with stocks\r"
				L"— buying, sellingand closing their positions of the same stock in a single trading day,\r"
				L"caring little about the inner workings of the underlying businesses.\r"
				L"(Position refers to the amount of a particular stock or fund you own.)\r"
				L"The aim of the day trader is to make a few bucks in the next few minutes, hours or days based on daily price fluctuations.";
			this->label67->Click += gcnew System::EventHandler(this, &ProfilePage::label67_Click);
			// 
			// label66
			// 
			this->label66->AutoSize = true;
			this->label66->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label66->Location = System::Drawing::Point(2135, 88);
			this->label66->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(168, 75);
			this->label66->TabIndex = 29;
			this->label66->Text = L"Help";
			this->label66->Click += gcnew System::EventHandler(this, &ProfilePage::label66_Click);
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label65->Location = System::Drawing::Point(597, 75);
			this->label65->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(218, 75);
			this->label65->TabIndex = 28;
			this->label65->Text = L"Profile";
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(1043, 765);
			this->button11->Margin = System::Windows::Forms::Padding(6, 4, 6, 4);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(382, 93);
			this->button11->TabIndex = 27;
			this->button11->Text = L"Change Password";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &ProfilePage::button11_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(1043, 622);
			this->button9->Margin = System::Windows::Forms::Padding(6, 4, 6, 4);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(382, 97);
			this->button9->TabIndex = 25;
			this->button9->Text = L"Change Email";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &ProfilePage::button9_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(1043, 192);
			this->button8->Margin = System::Windows::Forms::Padding(6, 4, 6, 4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(382, 97);
			this->button8->TabIndex = 24;
			this->button8->Text = L"Change Username";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &ProfilePage::button8_Click);
			// 
			// label64
			// 
			this->label64->AutoSize = true;
			this->label64->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label64->Location = System::Drawing::Point(101, 765);
			this->label64->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(255, 54);
			this->label64->TabIndex = 23;
			this->label64->Text = L"Password: ";
			// 
			// label62
			// 
			this->label62->AutoSize = true;
			this->label62->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label62->Location = System::Drawing::Point(101, 622);
			this->label62->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(152, 54);
			this->label62->TabIndex = 21;
			this->label62->Text = L"Email:";
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label61->Location = System::Drawing::Point(101, 180);
			this->label61->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(253, 54);
			this->label61->TabIndex = 20;
			this->label61->Text = L"Username:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(684, 192);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(337, 38);
			this->textBox1->TabIndex = 36;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(684, 622);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(337, 38);
			this->textBox2->TabIndex = 37;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(684, 765);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(337, 38);
			this->textBox4->TabIndex = 39;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(684, 820);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(337, 38);
			this->textBox3->TabIndex = 40;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(684, 251);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(337, 38);
			this->textBox5->TabIndex = 41;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(684, 681);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(337, 38);
			this->textBox6->TabIndex = 42;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(370, 826);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(308, 32);
			this->label1->TabIndex = 43;
			this->label1->Text = L"Re-type New Password";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(370, 768);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(202, 32);
			this->label2->TabIndex = 44;
			this->label2->Text = L"New Password";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(370, 628);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(188, 32);
			this->label3->TabIndex = 46;
			this->label3->Text = L"Current Email";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(370, 681);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(150, 32);
			this->label4->TabIndex = 45;
			this->label4->Text = L"New Email";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(370, 192);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(246, 32);
			this->label5->TabIndex = 48;
			this->label5->Text = L"Current Username";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(370, 251);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(208, 32);
			this->label6->TabIndex = 47;
			this->label6->Text = L"New Username";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(499, 1193);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(367, 36);
			this->checkBox1->TabIndex = 49;
			this->checkBox1->Text = L"Please Check to confirm.";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &ProfilePage::checkBox1_CheckedChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(370, 336);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(253, 32);
			this->label7->TabIndex = 55;
			this->label7->Text = L"Current First Name";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(370, 395);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(215, 32);
			this->label8->TabIndex = 54;
			this->label8->Text = L"New First Name";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(684, 395);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(337, 38);
			this->textBox7->TabIndex = 53;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(684, 336);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(337, 38);
			this->textBox8->TabIndex = 52;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1043, 336);
			this->button1->Margin = System::Windows::Forms::Padding(6, 4, 6, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(382, 97);
			this->button1->TabIndex = 51;
			this->button1->Text = L"Change First Name";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ProfilePage::button1_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label9->Location = System::Drawing::Point(101, 324);
			this->label9->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(252, 54);
			this->label9->TabIndex = 50;
			this->label9->Text = L"First Name";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(370, 490);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(252, 32);
			this->label10->TabIndex = 61;
			this->label10->Text = L"Current Last Name";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(370, 543);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(214, 32);
			this->label11->TabIndex = 60;
			this->label11->Text = L"New Last Name";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(684, 543);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(337, 38);
			this->textBox9->TabIndex = 59;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(684, 484);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(337, 38);
			this->textBox10->TabIndex = 58;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1043, 484);
			this->button2->Margin = System::Windows::Forms::Padding(6, 4, 6, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(382, 97);
			this->button2->TabIndex = 57;
			this->button2->Text = L"Change Last Name";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ProfilePage::button2_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(101, 484);
			this->label12->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(262, 54);
			this->label12->TabIndex = 56;
			this->label12->Text = L"Last Name:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label14->Location = System::Drawing::Point(1730, 194);
			this->label14->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(344, 46);
			this->label14->TabIndex = 63;
			this->label14->Text = L"Stock Trading 101";
			this->label14->Click += gcnew System::EventHandler(this, &ProfilePage::label14_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label15->Location = System::Drawing::Point(1730, 612);
			this->label15->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(354, 46);
			this->label15->TabIndex = 64;
			this->label15->Text = L"Turing Trading 101";
			this->label15->Click += gcnew System::EventHandler(this, &ProfilePage::label15_Click);
			// 
			// ProfilePage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(3204, 1750);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->label70);
			this->Controls->Add(this->label69);
			this->Controls->Add(this->label68);
			this->Controls->Add(this->label67);
			this->Controls->Add(this->label66);
			this->Controls->Add(this->label65);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->label64);
			this->Controls->Add(this->label62);
			this->Controls->Add(this->label61);
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"ProfilePage";
			this->Text = L"ProfilePage";
			this->Load += gcnew System::EventHandler(this, &ProfilePage::ProfilePage_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ProfilePage_Load(System::Object^ sender, System::EventArgs^ e) {
		String^ username;
		username = marshal_as<String^>(currentUser);
		try {
			String^ connection_str = "Server=35.227.90.11;Uid=root;Pwd=password;Database=TuringTrader";
			MySqlConnection^ connection = gcnew MySqlConnection(connection_str);
			MySqlCommand^ cmd1 = gcnew MySqlCommand("SELECT * from users WHERE username='"+username+ "'", connection);
			MySqlDataReader^ dr1;
			connection->Open();
			dr1 = cmd1->ExecuteReader();
			while(dr1->Read()){
				textBox1->Text = dr1->GetString(0);
				textBox8->Text = dr1->GetString(1);
				textBox10->Text = dr1->GetString(2);
				textBox2->Text = dr1->GetString(3);
			}
			dr1->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ username;
	username = marshal_as<String^>(currentUser);
	String^ s = textBox5->Text;

	try {

		String^ connection_str = "Server=35.227.90.11;Uid=root;Pwd=password;Database=TuringTrader";
		MySqlConnection^ connection = gcnew MySqlConnection(connection_str);
		MySqlCommand^ cmd1 = gcnew MySqlCommand("update users set username='"+s+"' WHERE username='" + username + "'", connection);
		MySqlDataReader^ dr1;
		connection->Open();
		dr1 = cmd1->ExecuteReader();
		dr1->Close();
	
		currentUser = marshal_as<string>(s);

	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ username;
	username = marshal_as<String^>(currentUser);
	if (checkBox1->Checked) {
		try {
			String^ connection_str = "Server=35.227.90.11;Uid=root;Pwd=password;Database=TuringTrader";
			MySqlConnection^ connection = gcnew MySqlConnection(connection_str);
			MySqlCommand^ cmd1 = gcnew MySqlCommand("update users set accountBalance=100000 WHERE username='" + username + "'", connection);
			MySqlCommand^ cmd2 = gcnew MySqlCommand("delete from watches WHERE person='" + username + "'", connection);
			MySqlCommand^ cmd3 = gcnew MySqlCommand("delete from holdings WHERE person='" + username + "'", connection);
			MySqlCommand^ cmd4 = gcnew MySqlCommand("delete from groupMember WHERE member='" + username + "'", connection);
			MySqlDataReader^ dr1;
			MySqlDataReader^ dr2;
			MySqlDataReader^ dr3;
			MySqlDataReader^ dr4;
			connection->Open();
			dr1 = cmd1->ExecuteReader();
			dr1->Close();
			dr2 = cmd2->ExecuteReader();
			dr2->Close();
			dr3 = cmd3->ExecuteReader();
			dr3->Close();
			dr4 = cmd4->ExecuteReader();
			dr4->Close();
			MessageBox::Show("Account Reset Successfully");
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ username;
	username = marshal_as<String^>(currentUser);
	String^ s = textBox6->Text;

	try {

		String^ connection_str = "Server=35.227.90.11;Uid=root;Pwd=password;Database=TuringTrader";
		MySqlConnection^ connection = gcnew MySqlConnection(connection_str);
		MySqlCommand^ cmd1 = gcnew MySqlCommand("update users set email='" + s + "' WHERE username='" + username + "'", connection);
		MySqlDataReader^ dr1;
		connection->Open();
		dr1 = cmd1->ExecuteReader();
		dr1->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ username;
	username = marshal_as<String^>(currentUser);
	String^ password1 = textBox3->Text;
	String^ password2 = textBox4->Text;
	if ((password1 == password2)&&(password1->Length != 0))  {
		try {
			String^ connection_str = "Server=35.227.90.11;Uid=root;Pwd=password;Database=TuringTrader";
			MySqlConnection^ connection = gcnew MySqlConnection(connection_str);
			MySqlCommand^ cmd1 = gcnew MySqlCommand("update users set PASSWORD='" + password1 + "' WHERE username='" + username + "'", connection);
			MySqlDataReader^ dr1;
			connection->Open();
			dr1 = cmd1->ExecuteReader();
			dr1->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ username;
	username = marshal_as<String^>(currentUser);
	String^ s = textBox7->Text;

	try {

		String^ connection_str = "Server=35.227.90.11;Uid=root;Pwd=password;Database=TuringTrader";
		MySqlConnection^ connection = gcnew MySqlConnection(connection_str);
		MySqlCommand^ cmd1 = gcnew MySqlCommand("update users set fname='" + s + "' WHERE username='" + username + "'", connection);
		MySqlDataReader^ dr1;
		connection->Open();
		dr1 = cmd1->ExecuteReader();
		dr1->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ username;
	username = marshal_as<String^>(currentUser);
	String^ s = textBox9->Text;

	try {

		String^ connection_str = "Server=35.227.90.11;Uid=root;Pwd=password;Database=TuringTrader";
		MySqlConnection^ connection = gcnew MySqlConnection(connection_str);
		MySqlCommand^ cmd1 = gcnew MySqlCommand("update users set fname='" + s + "' WHERE username='" + username + "'", connection);
		MySqlDataReader^ dr1;
		connection->Open();
		dr1 = cmd1->ExecuteReader();
		dr1->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void label66_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label67_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label15_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label68_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label69_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label70_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
