#pragma once
#include "jobApproval.h"
#include "clientInfo.h"
#include "timeBlock.h"
#include "waitingList.h"
#include "jobTask.h"
#include "payment.h"
#include "report.h"
#include "survey.h"
#include "Notification.h"
#include "apptDate.h"
#include "TechnicianInfo.h"
#include "ExitProgram.h"


namespace CIS375Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for mainMenu
	/// </summary>
	public ref class mainMenu : public System::Windows::Forms::Form
	{
	public:
		mainMenu(void)
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
		~mainMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(mainMenu::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 26.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(128, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(458, 43);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Osric\'s Office Appliances and D��cor";
			this->label1->Click += gcnew System::EventHandler(this, &mainMenu::label1_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(116, 139);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(83, 34);
			this->button1->TabIndex = 1;
			this->button1->Text = L"New Job ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &mainMenu::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(301, 208);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(83, 34);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Pending Request";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &mainMenu::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(301, 139);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(83, 34);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Waiting List";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &mainMenu::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(301, 275);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(83, 34);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Report";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &mainMenu::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(116, 275);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(83, 34);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Payment";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &mainMenu::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(116, 208);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(83, 34);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Job Task";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &mainMenu::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(494, 275);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(83, 34);
			this->button7->TabIndex = 7;
			this->button7->Text = L"Survey";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &mainMenu::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(494, 139);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(83, 34);
			this->button8->TabIndex = 8;
			this->button8->Text = L"Tech Time-Block";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &mainMenu::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(494, 208);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(83, 34);
			this->button9->TabIndex = 9;
			this->button9->Text = L"Notification";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &mainMenu::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(116, 336);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(83, 34);
			this->button10->TabIndex = 10;
			this->button10->Text = L"Technician";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &mainMenu::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(301, 452);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(83, 34);
			this->button11->TabIndex = 11;
			this->button11->Text = L"Exit";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &mainMenu::button11_Click);
			// 
			// mainMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(724, 489);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"mainMenu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Menu";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		clientInfo^form = gcnew clientInfo();
		form->Show();
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		jobApproval ^form1 = gcnew jobApproval();
		form1->Show();
	}
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
		timeBlock ^form2 = gcnew timeBlock();
		form2->Show();
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		waitingList ^form3 = gcnew waitingList();
		form3->Show();
	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		jobTask ^form4 = gcnew jobTask();
		form4->Show();
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		payment ^form5 = gcnew payment();
		form5->Show();
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		report ^form6 = gcnew report();
		form6->Show();
	}
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
		survey ^form7 = gcnew survey();
		form7->Show();
	}
	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
		Notification ^form8 = gcnew Notification();
		form8->Show();
	}
	private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
		TechnicianInfo^form9 = gcnew TechnicianInfo();
		form9->Show();
	}
	private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
		ExitProgram ^form10 = gcnew ExitProgram();
		form10->Show();
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
