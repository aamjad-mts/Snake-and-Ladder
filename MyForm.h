# Snake-and-Ladder
A simple snake and ladder game
#pragma once
#include <iostream>
#include <cstdlib>
#include<time.h>
#include<Windows.h>
#include<WinUser.h>
#include "MyForm1.h"
namespace ludo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		int ps1 = 0, ps2 = 0; int h = 0;

	private: System::Windows::Forms::Label^  player;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  board;



	public:
		bool t = false;
		
	
		void cl()
		{
			p1->Visible = false;
			p2->Visible = false;
			p3->Visible = false;
			p4->Visible = false;
			p5->Visible = false;
			p6->Visible = false;

		}
		
		void show()
		{
			player->Visible = true;
			board->Visible = true;
			heading->Visible = true;
			roll->Visible = true;
			pl1->Visible = true;
			pl2->Visible = true;
		}
		int ladder(int p)
		{
			

			if (p == 3)
				p = 60;
			if (p == 6)
				p = 27;
			if (p == 11)
				p = 70;
			if (p == 28)
				p = 53;
			if (p == 68)
				p = 93;
			if (p == 63)
				p = 96;
		
			return p;
		}

		int snake(int p)
		{


			if (p == 25)
				p = 5;
			if (p == 37)
				p = 1;
			if (p == 47)
				p = 12;
			if (p == 65)
				p = 59;
			if (p == 87)
				p = 54;
			if (p == 92)
				p = 69;
			if (p == 99)
				p = 62;
			
			return p;
		}
	






	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^  heading;
	protected:

	protected:

	private: System::Windows::Forms::Label^  roll;

	private: System::Windows::Forms::PictureBox^  p1;
	private: System::Windows::Forms::PictureBox^  p6;

	private: System::Windows::Forms::PictureBox^  p5;

	private: System::Windows::Forms::PictureBox^  p4;

	private: System::Windows::Forms::PictureBox^  p3;
	private: System::Windows::Forms::PictureBox^  p2;
	private: System::Windows::Forms::PictureBox^  pl2;
	private: System::Windows::Forms::PictureBox^  pl1;







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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->heading = (gcnew System::Windows::Forms::Label());
			this->roll = (gcnew System::Windows::Forms::Label());
			this->p1 = (gcnew System::Windows::Forms::PictureBox());
			this->p6 = (gcnew System::Windows::Forms::PictureBox());
			this->p5 = (gcnew System::Windows::Forms::PictureBox());
			this->p4 = (gcnew System::Windows::Forms::PictureBox());
			this->p3 = (gcnew System::Windows::Forms::PictureBox());
			this->p2 = (gcnew System::Windows::Forms::PictureBox());
			this->pl2 = (gcnew System::Windows::Forms::PictureBox());
			this->pl1 = (gcnew System::Windows::Forms::PictureBox());
			this->player = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->board = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pl2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pl1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->board))->BeginInit();
			this->SuspendLayout();
			// 
			// heading
			// 
			this->heading->BackColor = System::Drawing::Color::Snow;
			this->heading->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->heading->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->heading->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->heading->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->heading->Location = System::Drawing::Point(89, 9);
			this->heading->Name = L"heading";
			this->heading->Size = System::Drawing::Size(541, 50);
			this->heading->TabIndex = 1;
			this->heading->Text = L"Snake and Ladder";
			this->heading->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->heading->Visible = false;
			// 
			// roll
			// 
			this->roll->AutoSize = true;
			this->roll->BackColor = System::Drawing::Color::Cornsilk;
			this->roll->Location = System::Drawing::Point(807, 379);
			this->roll->Name = L"roll";
			this->roll->Size = System::Drawing::Size(66, 13);
			this->roll->TabIndex = 2;
			this->roll->Text = L"Roll the dice";
			this->roll->Visible = false;
			this->roll->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// p1
			// 
			this->p1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1.Image")));
			this->p1->Location = System::Drawing::Point(798, 228);
			this->p1->Name = L"p1";
			this->p1->Size = System::Drawing::Size(85, 80);
			this->p1->TabIndex = 3;
			this->p1->TabStop = false;
			this->p1->Visible = false;
			this->p1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox2_Click);
			// 
			// p6
			// 
			this->p6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p6.Image")));
			this->p6->Location = System::Drawing::Point(798, 228);
			this->p6->Name = L"p6";
			this->p6->Size = System::Drawing::Size(85, 80);
			this->p6->TabIndex = 4;
			this->p6->TabStop = false;
			this->p6->Visible = false;
			// 
			// p5
			// 
			this->p5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p5.Image")));
			this->p5->Location = System::Drawing::Point(798, 228);
			this->p5->Name = L"p5";
			this->p5->Size = System::Drawing::Size(85, 80);
			this->p5->TabIndex = 5;
			this->p5->TabStop = false;
			this->p5->Visible = false;
			this->p5->Click += gcnew System::EventHandler(this, &MyForm::pictureBox3_Click);
			// 
			// p4
			// 
			this->p4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p4.Image")));
			this->p4->Location = System::Drawing::Point(798, 228);
			this->p4->Name = L"p4";
			this->p4->Size = System::Drawing::Size(85, 80);
			this->p4->TabIndex = 6;
			this->p4->TabStop = false;
			this->p4->Visible = false;
			this->p4->Click += gcnew System::EventHandler(this, &MyForm::pictureBox4_Click);
			// 
			// p3
			// 
			this->p3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p3.Image")));
			this->p3->Location = System::Drawing::Point(798, 228);
			this->p3->Name = L"p3";
			this->p3->Size = System::Drawing::Size(85, 80);
			this->p3->TabIndex = 7;
			this->p3->TabStop = false;
			this->p3->Visible = false;
			// 
			// p2
			// 
			this->p2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2.Image")));
			this->p2->Location = System::Drawing::Point(798, 228);
			this->p2->Name = L"p2";
			this->p2->Size = System::Drawing::Size(85, 80);
			this->p2->TabIndex = 8;
			this->p2->TabStop = false;
			this->p2->Visible = false;
			// 
			// pl2
			// 
			this->pl2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pl2.Image")));
			this->pl2->Location = System::Drawing::Point(40, 600);
			this->pl2->Name = L"pl2";
			this->pl2->Size = System::Drawing::Size(39, 33);
			this->pl2->TabIndex = 9;
			this->pl2->TabStop = false;
			this->pl2->Visible = false;
			this->pl2->Click += gcnew System::EventHandler(this, &MyForm::pl2_Click);
			// 
			// pl1
			// 
			this->pl1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pl1.Image")));
			this->pl1->Location = System::Drawing::Point(40, 639);
			this->pl1->Name = L"pl1";
			this->pl1->Size = System::Drawing::Size(40, 36);
			this->pl1->TabIndex = 10;
			this->pl1->TabStop = false;
			this->pl1->Visible = false;
			// 
			// player
			// 
			this->player->BackColor = System::Drawing::SystemColors::Desktop;
			this->player->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->player->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->player->ForeColor = System::Drawing::Color::White;
			this->player->Location = System::Drawing::Point(783, 98);
			this->player->Name = L"player";
			this->player->Size = System::Drawing::Size(115, 34);
			this->player->TabIndex = 12;
			this->player->Text = L"Player 1";
			this->player->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->player->Visible = false;
			this->player->Click += gcnew System::EventHandler(this, &MyForm::player_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(0, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 19;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(803, 661);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 18;
			this->label1->Text = L"label1";
			// 
			// board
			// 
			this->board->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"board.Image")));
			this->board->Location = System::Drawing::Point(101, 62);
			this->board->Name = L"board";
			this->board->Size = System::Drawing::Size(630, 633);
			this->board->TabIndex = 0;
			this->board->TabStop = false;
			this->board->Visible = false;
			this->board->Click += gcnew System::EventHandler(this, &MyForm::board_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlText;
			this->ClientSize = System::Drawing::Size(934, 741);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->player);
			this->Controls->Add(this->pl1);
			this->Controls->Add(this->pl2);
			this->Controls->Add(this->p2);
			this->Controls->Add(this->p3);
			this->Controls->Add(this->p4);
			this->Controls->Add(this->p5);
			this->Controls->Add(this->p6);
			this->Controls->Add(this->p1);
			this->Controls->Add(this->roll);
			this->Controls->Add(this->heading);
			this->Controls->Add(this->board);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pl2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pl1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->board))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void pictureBox4_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {
}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {


				 // Showing the dice on the screen
				 if (h == 1)
				 {
					 cl();
					 p1->Visible = true;
					 t = !t;
				 }
				 if (h == 2)
				 {
					 cl();
					 p2->Visible = true;
					 t = !t;
				 }
				 if (h == 3)
				 {
					 cl();
					 p3->Visible = true;
					 t = !t;
				 }
				 if (h == 4)
				 {
					 cl();
					 p4->Visible = true;
					 t = !t;
				 }
				 if (h == 5)
				 {
					 cl();
					 p5->Visible = true;
					 t = !t;
				 }
				 if (h == 6)
				 {
					 cl();
					 p6->Visible = true;
					 t = !t;
				 }
				 ps1 = ladder(ps1);
				 ps2 = ladder(ps2);
				 ps1 = snake(ps1);
				 ps2 = snake(ps2);


	}

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 button1->Visible = false;
			
			 show();
}
private: System::Void pl2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void board_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void player_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
