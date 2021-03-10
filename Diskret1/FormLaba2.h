#pragma once
#include <iostream>
#include <conio.h>
#include <fstream>
namespace Diskret1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для FormLaba2
	/// </summary>
	public ref class FormLaba2 : public System::Windows::Forms::Form
	{
	public:
		FormLaba2(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~FormLaba2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBoxN;

	private: System::Windows::Forms::TextBox^ textBoxM;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button4;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormLaba2::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxN = (gcnew System::Windows::Forms::TextBox());
			this->textBoxM = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(128, 15);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(78, 44);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Open txt for\r\nwrite P";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FormLaba2::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(128, 65);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(78, 44);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Open txt for\r\nwrite Q";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &FormLaba2::button2_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 15;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"1) M=P^Q", L"2) M=P&Q", L"3) M=P\\Q", L"4) M=Q\\P",
					L"5) M=NO(P)", L"6) M=NO(Q)", L"7) M=P^-1", L"8) M=Q^-1", L"9) M=PxQ", L"10 )M=PΔQ"
			});
			this->listBox1->Location = System::Drawing::Point(12, 160);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(219, 154);
			this->listBox1->TabIndex = 2;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &FormLaba2::listBox1_SelectedIndexChanged);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(128, 325);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 60);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Calculate";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &FormLaba2::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 15);
			this->label1->TabIndex = 4;
			this->label1->Text = L"NxN:=";
			// 
			// textBoxN
			// 
			this->textBoxN->Location = System::Drawing::Point(56, 27);
			this->textBoxN->Name = L"textBoxN";
			this->textBoxN->Size = System::Drawing::Size(66, 21);
			this->textBoxN->TabIndex = 5;
			this->textBoxN->TextChanged += gcnew System::EventHandler(this, &FormLaba2::textBox1_TextChanged);
			// 
			// textBoxM
			// 
			this->textBoxM->Location = System::Drawing::Point(56, 77);
			this->textBoxM->Name = L"textBoxM";
			this->textBoxM->Size = System::Drawing::Size(66, 21);
			this->textBoxM->TabIndex = 7;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 80);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 15);
			this->label2->TabIndex = 6;
			this->label2->Text = L"MxM:=";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 330);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(95, 50);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Generate random 1/0";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &FormLaba2::button4_Click);
			// 
			// FormLaba2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(246, 400);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBoxM);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBoxN);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"FormLaba2";
			this->Text = L"Laba 5";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

		ifstream fileP("fileP.txt"); ifstream fileQ("fileQ.txt");
		String^ sN = textBoxN->Text;
		String^ sM = textBoxN->Text;
		if (sN == "") {
			MessageBox::Show("Нет данных", "Ошибка");
			return;
		}
		if (sM == "") {
			MessageBox::Show("Нет данных", "Ошибка");
			return;
		}
		ofstream filePROV("filePROV.txt");
		int m = Convert::ToInt16(sM);
		int n = Convert::ToInt16(sN);
		 char** q;  q = new  char* [n];
		 for ( int i = 0; i < n; i++) {
			 *(q+i) = new char[n];
		 }

		 char** p;  p = new  char* [n];
		 for (int i = 0; i < n; i++) {
			 *(p + i) = new char[n];
		 }

		 for (int i = 0; i < n; i++) {
			 string line;
			 fileP >> line;
			 for (int j = 0; j < n; j++) {
				 p[i][j] = line[j] - '0';

			 }
		}

		 for (int i = 0; i < n; i++) {
			 string line2;
			 fileQ >> line2;
			 for (int j = 0; j < n; j++) {
				 q[i][j] = line2[j] - '0';

			 }
		 }
		
		/* for (int k = 0; k < n ; k++) {
			 for (int l = 0; l < n; l++) {
				 filePROV << static_cast<int>(p[k][l]);
			 }
			 filePROV << endl;
		}
		 filePROV << endl;
		 for (int k = 0; k < n; k++) {
			 for (int l = 0; l < n; l++) {
				 filePROV << static_cast<int>(q[k][l]);
			 }
			 filePROV << endl;
		 }
		 filePROV.close();*/
		 fileQ.close(); fileP.close();
	//	 Process::Start("notepad.exe", "filePROV.txt");
		
		if (listBox1->SelectedIndex == 0) {
			ofstream ans("laba5bin1.txt");
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					ans << (static_cast<int>(p[i][j])) * (static_cast<int>(q[i][j]));
				}ans << endl;
			}
			ans.close();
			Process::Start("notepad.exe", "laba5bin1.txt");
			
		}
		if (listBox1->SelectedIndex == 1) {
			ofstream ans("laba5bin2.txt");
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					int tmp = (static_cast<int>(p[i][j])) + (static_cast<int>(q[i][j]));
					if (tmp >= 1) {
						ans << tmp;
					}
					else {
						ans << '0';
					}


				}ans << endl;
			}ans.close();
			Process::Start("notepad.exe", "laba5bin2.txt");
			
		}
		if (listBox1->SelectedIndex == 2) {
			ofstream ans("laba5bin3.txt");
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					if (((static_cast<int>(p[i][j])) == 1) && ((static_cast<int>(q[i][j])) == 0)) {

						ans << '1';
					}
					else {
						ans << '0';
					}

				}ans << endl;
			}
			ans.close();
			Process::Start("notepad.exe", "laba5bin3.txt");


		}
		if (listBox1->SelectedIndex == 3) {
			ofstream ans("laba5bin4.txt");
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					if ( ( ( static_cast<int> ( p[i][j] ) ) == 0 ) && ( ( static_cast<int> ( q[i][j] ) ) == 1 ) ) {

						ans << '1';
					}
					else {
						ans << '0';
					}

				}ans << endl;
			}
			ans.close();
			Process::Start("notepad.exe", "laba5bin4.txt");

		}
		if (listBox1->SelectedIndex == 4) {
			ofstream ans("laba5bin5.txt");
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					if ((static_cast<int>(p[i][j])) == 1) {
						ans << '0';
					}
					else if ((static_cast<int>(p[i][j])) == 0) {
						ans << '1';
					}
				}ans << endl;
			}
			ans.close();
			Process::Start("notepad.exe", "laba5bin5.txt");

		}

		if (listBox1->SelectedIndex == 5) {
			ofstream ans("laba5bin6.txt");
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					if ((static_cast<int>(q[i][j])) == 1) {
						ans << '0';
					}
					else if ((static_cast<int>(q[i][j])) == 0) {
						ans << '1';
					}
				}ans << endl;
			}
			ans.close();
			Process::Start("notepad.exe", "laba5bin6.txt");

		}
		if (listBox1->SelectedIndex == 6) {
			ofstream ans("laba5bin7.txt");
			char** p1;  p1 = new  char* [n];
			for (int i = 0; i < n; i++) {
				*(p1 + i) = new char[n];
			}
			int t;
			for (int i = 0; i < n; ++i)
			{
				for (int j = i; j < n; ++j)
				{
					t = static_cast<int>(p1[i][j]);
					p1[i][j] = p1[j][i];
					p1[j][i] = t;
				}
			}
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					ans << p1[i][j];
				}ans << endl;
			}
			ans.close(); delete[]p1;
			Process::Start("notepad.exe", "laba5bin7.txt");

		}
		if (listBox1->SelectedIndex == 7) {
			ofstream ans("laba5bin8.txt");
			char** q1;  q1 = new  char* [n];
			for (int i = 0; i < n; i++) {
				*(q1 + i) = new char[n];
			}
			for (int i = 0; i < n; ++i)
			{
				for (int j = 0; j < n; ++j)
				{
					q1[i][j] = q[i][j];
				}
			}
			int t;
			for (int i = 0; i < n; ++i)
			{
				for (int j = i; j < n; ++j)
				{
					t = q1[i][j];
					q1[i][j] = q1[j][i];
					q1[j][i] = t;
				}
			}
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					ans << q1[i][j];
				}ans << endl;
			}
			ans.close(); delete[]q1;
			Process::Start("notepad.exe", "laba5bin8.txt");

		}
		
		if (listBox1->SelectedIndex == 8) {
			ofstream ans("laba5bin9.txt");
			int** C;  C = new  int* [n];
			for (int i = 0; i < n; i++) {
				*(C + i) = new int[n];
			}
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					C[i][j] = 0;
					for (int k = 0; k < n; k++)
						C[i][j] += static_cast<int>(p[i][k]) * static_cast<int>(q[k][j]);
					ans << C[i][j];
				}
				ans << endl;
			}
			ans.close();
			Process::Start("notepad.exe", "laba5bin9.txt");

		}
		if (listBox1->SelectedIndex == 9) {
			ofstream ans("laba5bin10.txt");
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					if ( ( ( ( static_cast<int> ( p[i][j] ) ) == 0 )  && ((static_cast<int> (q[i][j])) == 1 ) )
						||
						((((static_cast<int> (p[i][j])) == 1) && ((static_cast<int> (q[i][j])) == 0)))) {
						ans << '1';

					}
					else {
						ans << '0';
					}
				}
				ans << endl;
			}

			ans.close();
			Process::Start("notepad.exe", "laba5bin10.txt");
		}
	}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	ofstream fileQ("fileQ.txt");
	fileQ.close();
	Process::Start("notepad.exe", "fileQ.txt");
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	ofstream fileP("fileP.txt");
	fileP.close();
	Process::Start("notepad.exe", "fileP.txt");
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	ofstream fileP("fileP.txt");
	ofstream fileQ("fileQ.txt");
	srand(time(NULL));
	String^ sN = textBoxN->Text;
	String^ sM = textBoxM->Text;
	if (sN == "") {
		MessageBox::Show("Нет данных", "Ошибка");
		return;
	}
	if (sM == "") {
		MessageBox::Show("Нет данных", "Ошибка");
		return;
	}
	int m = Convert::ToInt16(sM);
	int n = Convert::ToInt16(sN);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			fileP << rand() % 2;
		}fileP << endl;
		
	}
	for (int i = 0; i < m ; i++) {
		for (int j = 0; j < m; j++) {
			fileQ << rand() % 2;
		}fileQ << endl;
	}
	fileQ.close(); fileP.close();
	Process::Start("notepad.exe", "fileQ.txt"); Process::Start("notepad.exe", "fileP.txt");
}
};
}
