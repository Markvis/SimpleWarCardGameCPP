#include "war.h"
#pragma once

namespace program_16 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnNG;
	private: System::Windows::Forms::Button^  btnNC;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  tbxTie;
	private: System::Windows::Forms::TextBox^  tbxUsr;
	private: System::Windows::Forms::TextBox^  tbxComp;
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
			this->btnNG = (gcnew System::Windows::Forms::Button());
			this->btnNC = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbxTie = (gcnew System::Windows::Forms::TextBox());
			this->tbxUsr = (gcnew System::Windows::Forms::TextBox());
			this->tbxComp = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnNG
			// 
			this->btnNG->Location = System::Drawing::Point(222, 36);
			this->btnNG->Name = L"btnNG";
			this->btnNG->Size = System::Drawing::Size(90, 39);
			this->btnNG->TabIndex = 0;
			this->btnNG->Text = L"New Game";
			this->btnNG->UseVisualStyleBackColor = true;
			this->btnNG->Click += gcnew System::EventHandler(this, &Form1::btnNG_Click);
			// 
			// btnNC
			// 
			this->btnNC->Location = System::Drawing::Point(222, 98);
			this->btnNC->Name = L"btnNC";
			this->btnNC->Size = System::Drawing::Size(90, 39);
			this->btnNC->TabIndex = 1;
			this->btnNC->Text = L"Next Card";
			this->btnNC->UseVisualStyleBackColor = true;
			this->btnNC->Click += gcnew System::EventHandler(this, &Form1::btnNC_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->tbxTie);
			this->groupBox1->Controls->Add(this->tbxUsr);
			this->groupBox1->Controls->Add(this->tbxComp);
			this->groupBox1->Location = System::Drawing::Point(29, 174);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(283, 87);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Scores";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(222, 52);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(22, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Tie";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(129, 52);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Human";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(28, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Computer";
			// 
			// tbxTie
			// 
			this->tbxTie->Location = System::Drawing::Point(205, 29);
			this->tbxTie->Name = L"tbxTie";
			this->tbxTie->Size = System::Drawing::Size(59, 20);
			this->tbxTie->TabIndex = 2;
			// 
			// tbxUsr
			// 
			this->tbxUsr->Location = System::Drawing::Point(117, 29);
			this->tbxUsr->Name = L"tbxUsr";
			this->tbxUsr->Size = System::Drawing::Size(59, 20);
			this->tbxUsr->TabIndex = 1;
			// 
			// tbxComp
			// 
			this->tbxComp->Location = System::Drawing::Point(21, 29);
			this->tbxComp->Name = L"tbxComp";
			this->tbxComp->Size = System::Drawing::Size(59, 20);
			this->tbxComp->TabIndex = 0;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(339, 290);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->btnNC);
			this->Controls->Add(this->btnNG);
			this->Name = L"Form1";
			this->Text = L"War Game";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::Form1_Paint);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		deck * reddeck;
		card * chand;
		card * uhand;
		int cpt, hpt, tie, cardnum;
		char chsuit, uhsuit;
		int chpip, uhpip;
		cli::array<String ^> ^clubs;
		cli::array<String ^> ^diamonds;
		cli::array<String ^> ^hearts;
		cli::array<String ^> ^spades;

	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 reddeck = new deck;
				 chand = new card[26];
				 uhand = new card[26];
				 cpt=hpt=tie=0;
				 cardnum = 0;
				 chpip = 0;
				 uhpip = 0;

				 // CLUBS
				 clubs = gcnew cli::array<String ^>(13);
				 clubs[0] = "Card0jC2.bmp";clubs[1] = "Card0jC3.bmp";
				 clubs[2] = "Card0jC4.bmp";clubs[3] = "Card0jC5.bmp";
				 clubs[4] = "Card0jC6.bmp";clubs[5] = "Card0jC7.bmp";
				 clubs[6] = "Card0jC8.bmp";clubs[7] = "Card0jC9.bmp";
				 clubs[8] = "Card0jCt.bmp";clubs[9] = "Card0jCj.bmp";
				 clubs[10] = "Card0jCq.bmp";clubs[11] = "Card0jCk.bmp";
				 clubs[12] = "Card0jCa.bmp";

				 // SPADES
				 spades = gcnew cli::array<String ^>(13);
				 spades[0] = "Card0jS2.bmp";spades[1] = "Card0jS3.bmp";
				 spades[2] = "Card0jS4.bmp";spades[3] = "Card0jS5.bmp";
				 spades[4] = "Card0jS6.bmp";spades[5] = "Card0jS7.bmp";
				 spades[6] = "Card0jS8.bmp";spades[7] = "Card0jS9.bmp";
				 spades[8] = "Card0jSt.bmp";spades[9] = "Card0jSj.bmp";
				 spades[10] = "Card0jSq.bmp";spades[11] = "Card0jSk.bmp";
				 spades[12] = "Card0jSa.bmp";

				 // HEARTS
				 hearts = gcnew cli::array<String ^>(13);
				 hearts[0] = "Card0jH2.bmp";hearts[1] = "Card0jH3.bmp";
				 hearts[2] = "Card0jH4.bmp";hearts[3] = "Card0jH5.bmp";
				 hearts[4] = "Card0jH6.bmp";hearts[5] = "Card0jH7.bmp";
				 hearts[6] = "Card0jH8.bmp";hearts[7] = "Card0jH9.bmp";
				 hearts[8] = "Card0jHt.bmp";hearts[9] = "Card0jHj.bmp";
				 hearts[10] = "Card0jHq.bmp";hearts[11] = "Card0jHk.bmp";
				 hearts[12] = "Card0jHa.bmp";

				 // DIAMONDS
				 diamonds = gcnew cli::array<String ^>(13);
				 diamonds[0] = "Card0jD2.bmp";diamonds[1] = "Card0jD3.bmp";
				 diamonds[2] = "Card0jD4.bmp";diamonds[3] = "Card0jD5.bmp";
				 diamonds[4] = "Card0jD6.bmp";diamonds[5] = "Card0jD7.bmp";
				 diamonds[6] = "Card0jD8.bmp";diamonds[7] = "Card0jD9.bmp";
				 diamonds[8] = "Card0jDt.bmp";diamonds[9] = "Card0jDj.bmp";
				 diamonds[10] = "Card0jDq.bmp";diamonds[11] = "Card0jDk.bmp";
				 diamonds[12] = "Card0jDa.bmp";
			 }
	private: System::Void Form1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
				 Graphics ^pg = CreateGraphics();
				 pg->Clear(this->BackColor);
				 Bitmap ^bmp;
				 Brush ^b = gcnew SolidBrush(Color::DarkOrange);

				 switch(chsuit)
				 {
				 case 'C':
					 bmp = gcnew Bitmap(clubs[chpip]);
					 break;
				 case 'S':
					 bmp = gcnew Bitmap(spades[chpip]);
					 break;
				 case 'H':
					 bmp = gcnew Bitmap(hearts[chpip]);
					 break;
				 case 'D':
					 bmp = gcnew Bitmap(diamonds[chpip]);
					 break;
				 default:
					 bmp = gcnew Bitmap ("Back05v4.bmp");
				 }
				 pg->DrawImage(bmp,30,30);
				 pg->DrawString("Computer",this->Font, b,30,130);

				 switch(uhsuit)
				 {
				 case 'C':
					 bmp = gcnew Bitmap(clubs[uhpip]);
					 break;
				 case 'S':
					 bmp = gcnew Bitmap(spades[uhpip]);
					 break;
				 case 'H':
					 bmp = gcnew Bitmap(hearts[uhpip]);
					 break;
				 case 'D':
					 bmp = gcnew Bitmap(diamonds[uhpip]);
					 break;
				 default:
					 bmp = gcnew Bitmap ("Back05v4.bmp");
				 }
				 pg->DrawImage(bmp,120,30);
				 pg->DrawString("Human",this->Font, b,130,130);
			 }
private: System::Void btnNC_Click(System::Object^  sender, System::EventArgs^  e) {
			 System::Windows::Forms::PaintEventArgs ^dummy;

			 chand[cardnum] = reddeck->dealacard();
			 uhand[cardnum] = reddeck->dealacard();
			 
			 chpip = chand[cardnum].getpip();
			 chsuit = chand[cardnum].getsuit();
			 uhpip = uhand[cardnum].getpip();
			 uhsuit = uhand[cardnum].getsuit();

			 this->Form1_Paint(sender,dummy);

			 if(chpip > uhpip)
				 cpt++;
			 else if(uhpip > chpip)
				 hpt++;
			 else
				 tie++;

			 tbxComp->Text = cpt.ToString();
			 tbxUsr->Text = hpt.ToString();
			 tbxTie->Text = tie.ToString();

			 cardnum++;

			 if(cardnum == 26)
			 {
				 if(cpt > hpt)
					 MessageBox::Show("Computer Wins!");
				 else if(hpt > cpt)
					 MessageBox::Show("You Win!");
				 else
					 MessageBox::Show("Its a Tie!");
				 cardnum = 0;
				 cpt=hpt=tie=0;
				 chsuit = 'a'; // clear
				 uhsuit = 'a'; // clear
				 reddeck->resetdeck();
				 tbxComp->Text = cpt.ToString();
				 tbxUsr->Text = hpt.ToString();
				 tbxTie->Text = tie.ToString();
				 this->Form1_Paint(sender,dummy);
			 }
		 }
private: System::Void btnNG_Click(System::Object^  sender, System::EventArgs^  e) {
			 System::Windows::Forms::PaintEventArgs ^dummy;

			 cardnum = 0;
			 cpt=hpt=tie=0;
			 chsuit = 'a'; // clear
			 uhsuit = 'a'; // clear
			 reddeck->resetdeck();
			 tbxComp->Text = cpt.ToString();
			 tbxUsr->Text = hpt.ToString();
			 tbxTie->Text = tie.ToString();
			 this->Form1_Paint(sender,dummy);
		 }
};
}

