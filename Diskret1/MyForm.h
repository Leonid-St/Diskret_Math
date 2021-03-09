#pragma once
#include <ctime>
#include <iostream>
#include <string>
#include <fstream>
#include <ostream>
#include <algorithm>
#include <vector>
#include <set>
#include <iterator>
#include<windows.h>
#include<clocale>
#include <cstdio>
using namespace std;
namespace Diskret1 {
	using namespace System::IO;
	using namespace System;
	using namespace System::Diagnostics;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ genA;
	protected:

	private: System::Windows::Forms::Button^ genB;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ buttonAperB;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ buttonAobB;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBoxMaxB;
	private: System::Windows::Forms::TextBox^ textBoxMaxA;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ buttonArB;
	private: System::Windows::Forms::Button^ buttonBrA;
	private: System::Windows::Forms::Label^ labelArB;
	private: System::Windows::Forms::Label^ labelBrA;
	private: System::Windows::Forms::Button^ buttonAsrB;


	private: System::Windows::Forms::Label^ labelAsrB;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;









	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->genA = (gcnew System::Windows::Forms::Button());
			this->genB = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->buttonAperB = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->buttonAobB = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBoxMaxB = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMaxA = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->buttonArB = (gcnew System::Windows::Forms::Button());
			this->buttonBrA = (gcnew System::Windows::Forms::Button());
			this->labelArB = (gcnew System::Windows::Forms::Label());
			this->labelBrA = (gcnew System::Windows::Forms::Label());
			this->buttonAsrB = (gcnew System::Windows::Forms::Button());
			this->labelAsrB = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// genA
			// 
			this->genA->Location = System::Drawing::Point(193, 24);
			this->genA->Name = L"genA";
			this->genA->Size = System::Drawing::Size(44, 23);
			this->genA->TabIndex = 0;
			this->genA->Text = L"gen A";
			this->genA->UseVisualStyleBackColor = true;
			this->genA->Click += gcnew System::EventHandler(this, &MyForm::genA_Click);
			// 
			// genB
			// 
			this->genB->Location = System::Drawing::Point(193, 61);
			this->genB->Name = L"genB";
			this->genB->Size = System::Drawing::Size(44, 23);
			this->genB->TabIndex = 1;
			this->genB->Text = L"gen B";
			this->genB->UseVisualStyleBackColor = true;
			this->genB->Click += gcnew System::EventHandler(this, &MyForm::genB_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(257, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 4;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(257, 71);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 29);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(24, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"N:=";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(43, 26);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(32, 20);
			this->textBox1->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 69);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(25, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"M:=";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(43, 64);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(32, 20);
			this->textBox2->TabIndex = 9;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// buttonAperB
			// 
			this->buttonAperB->Location = System::Drawing::Point(15, 113);
			this->buttonAperB->Name = L"buttonAperB";
			this->buttonAperB->Size = System::Drawing::Size(60, 23);
			this->buttonAperB->TabIndex = 10;
			this->buttonAperB->Text = L"A^B";
			this->buttonAperB->UseVisualStyleBackColor = true;
			this->buttonAperB->Click += gcnew System::EventHandler(this, &MyForm::buttonAperB_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(95, 123);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 13);
			this->label5->TabIndex = 11;
			// 
			// buttonAobB
			// 
			this->buttonAobB->Location = System::Drawing::Point(15, 151);
			this->buttonAobB->Name = L"buttonAobB";
			this->buttonAobB->Size = System::Drawing::Size(60, 23);
			this->buttonAobB->TabIndex = 12;
			this->buttonAobB->Text = L"A U B ";
			this->buttonAobB->UseVisualStyleBackColor = true;
			this->buttonAobB->Click += gcnew System::EventHandler(this, &MyForm::buttonAobB_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(95, 156);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 13);
			this->label6->TabIndex = 13;
			// 
			// textBoxMaxB
			// 
			this->textBoxMaxB->Location = System::Drawing::Point(154, 63);
			this->textBoxMaxB->Name = L"textBoxMaxB";
			this->textBoxMaxB->Size = System::Drawing::Size(33, 20);
			this->textBoxMaxB->TabIndex = 14;
			// 
			// textBoxMaxA
			// 
			this->textBoxMaxA->Location = System::Drawing::Point(154, 24);
			this->textBoxMaxA->Name = L"textBoxMaxA";
			this->textBoxMaxA->Size = System::Drawing::Size(33, 20);
			this->textBoxMaxA->TabIndex = 15;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(81, 28);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(72, 13);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Max num A+1";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(81, 69);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(72, 13);
			this->label8->TabIndex = 17;
			this->label8->Text = L"Max num B+1";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(12, 8);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(265, 13);
			this->label9->TabIndex = 18;
			this->label9->Text = L"if Max A<N or Max B<M then N=Max A and M =Max B ";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// buttonArB
			// 
			this->buttonArB->Location = System::Drawing::Point(15, 190);
			this->buttonArB->Name = L"buttonArB";
			this->buttonArB->Size = System::Drawing::Size(60, 23);
			this->buttonArB->TabIndex = 19;
			this->buttonArB->Text = L"A\\B";
			this->buttonArB->UseVisualStyleBackColor = true;
			this->buttonArB->Click += gcnew System::EventHandler(this, &MyForm::buttonArB_Click);
			// 
			// buttonBrA
			// 
			this->buttonBrA->Location = System::Drawing::Point(15, 228);
			this->buttonBrA->Name = L"buttonBrA";
			this->buttonBrA->Size = System::Drawing::Size(60, 23);
			this->buttonBrA->TabIndex = 20;
			this->buttonBrA->Text = L"B\\A";
			this->buttonBrA->UseVisualStyleBackColor = true;
			this->buttonBrA->Click += gcnew System::EventHandler(this, &MyForm::buttonBrA_Click);
			// 
			// labelArB
			// 
			this->labelArB->AutoSize = true;
			this->labelArB->Location = System::Drawing::Point(95, 200);
			this->labelArB->Name = L"labelArB";
			this->labelArB->Size = System::Drawing::Size(0, 13);
			this->labelArB->TabIndex = 21;
			// 
			// labelBrA
			// 
			this->labelBrA->AutoSize = true;
			this->labelBrA->Location = System::Drawing::Point(95, 238);
			this->labelBrA->Name = L"labelBrA";
			this->labelBrA->Size = System::Drawing::Size(0, 13);
			this->labelBrA->TabIndex = 22;
			// 
			// buttonAsrB
			// 
			this->buttonAsrB->Location = System::Drawing::Point(15, 267);
			this->buttonAsrB->Name = L"buttonAsrB";
			this->buttonAsrB->Size = System::Drawing::Size(60, 23);
			this->buttonAsrB->TabIndex = 23;
			this->buttonAsrB->Text = L"AΔB";
			this->buttonAsrB->UseVisualStyleBackColor = true;
			this->buttonAsrB->Click += gcnew System::EventHandler(this, &MyForm::buttonAsrB_Click);
			// 
			// labelAsrB
			// 
			this->labelAsrB->AutoSize = true;
			this->labelAsrB->Location = System::Drawing::Point(95, 277);
			this->labelAsrB->Name = L"labelAsrB";
			this->labelAsrB->Size = System::Drawing::Size(0, 13);
			this->labelAsrB->TabIndex = 25;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(260, 296);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(213, 133);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 26;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(52, 305);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 27;
			this->button1->Text = L"AxB";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(12, 310);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(34, 13);
			this->label10->TabIndex = 28;
			this->label10->Text = L"Lab3:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(12, 344);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(34, 13);
			this->label11->TabIndex = 29;
			this->label11->Text = L"Lab4:";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"1.\"<\"", L"2.\"=\"", L"3.\"a mod b =0\"", L"4. \"a mod 2=0 или b mod 2=0\"",
					L"5.\"a mod 2=0 и b mod 2 =0\""
			});
			this->listBox1->Location = System::Drawing::Point(52, 344);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(162, 69);
			this->listBox1->TabIndex = 30;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(52, 423);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(148, 32);
			this->button2->TabIndex = 31;
			this->button2->Text = L"P<= AxB";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(288, 435);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(185, 30);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 32;
			this->pictureBox2->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(480, 467);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->labelAsrB);
			this->Controls->Add(this->buttonAsrB);
			this->Controls->Add(this->labelBrA);
			this->Controls->Add(this->labelArB);
			this->Controls->Add(this->buttonBrA);
			this->Controls->Add(this->buttonArB);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBoxMaxA);
			this->Controls->Add(this->textBoxMaxB);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->buttonAobB);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->buttonAperB);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->genB);
			this->Controls->Add(this->genA);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Laba 1,2,3,4";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		void arr_uniq(int* mas, int& size)
		{
			for (auto i = 0; i < size; i++)
			{
				for (auto j = 0; j < size; j++)
				{
					if (i != j)
					{
						if (mas[i] == mas[j])
						{
							swap(mas[size - 1], mas[j]);
							size--;
						}
					}
				}
			}
		}
#pragma endregion

	private: System::Void genA_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ s1 = textBox1->Text;
		if (s1 == "") {
			MessageBox::Show("Нет данных", "Ошибка");
			return;
		}
		int n = Convert::ToInt16(s1);
		String^ sMaxA = textBoxMaxA->Text;
		if (sMaxA == "") {
			MessageBox::Show("Нет данных", "Ошибка");
			return;
		}
		int maxA = Convert::ToInt16(sMaxA);
		int* a = new int[n];  int R = 0; int k = 0; int* a1 = new int[maxA];
		srand(time(0));// bool b = false;
		if (maxA <= n) {
			for (int i = 0; i < n; i++) {
				a1[i] = i;
			}
			for (int i = 0; i < n; i++) {
				R = (rand() % (n - k));
				a[i] = a1[R];
				for (int j = R; j < n - 1; j++) {
					a1[j] = a1[j + 1];

				}
				k++;
			}
		}
		else {
			int x = 0; int y = 0;
			for (int i = 0; i < maxA; i++) {
				a1[i] = i;
			}


			for (int i = 0; i < n; i++) {
				R = (rand() % (maxA - k));
				a[i] = a1[R];
				for (int j = R; j < maxA-1; j++) {
					a1[j] = a1[j + 1];

				}
				k++;
			}
		}


		//ifstream fileA1("fileA");
		//label2->Text = File::ReadAllText(L"fileA.txt");
		ofstream fileA("fileA.txt"); for (int i = 0; i < n; i++) {
			fileA << a[i]; fileA << " ";
		}fileA.close();
		label1->Text = File::ReadAllText(L"fileA.txt");
		delete[]a; delete[]a1;
	}

	private: System::Void genB_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ s2 = textBox2->Text; setlocale(LC_ALL, "Russian");
		
		if (s2 == "") {
			MessageBox::Show("Нет данных", "Ошибка");
			return;
		}
		int m = Convert::ToInt16(s2);
		String^ sMaxB = textBoxMaxB->Text; 
		if (sMaxB == "") {
			MessageBox::Show("Нет данных", "Ошибка");
			return;
		}
		int maxB = Convert::ToInt16(sMaxB);
		int* a = new int[m];  int R = 0; int k = 0; int* a1 = new int[maxB];
		srand(time(0));// bool b = false;

		if (maxB <= m) {
			for (int i = 0; i < m; i++) {
				a1[i] = i;
			}
			for (int i = 0; i < m; i++) {
				R = (rand() % (m - k));
				a[i] = a1[R];
				for (int j = R; j < m - 1; j++) {
					a1[j] = a1[j + 1];

				}
				k++;
			}
		}
		else {
			int x = 0; int y = 0;
			for (int i = 0; i < maxB; i++) {
				a1[i] = i;
			}


			for (int i = 0; i < m; i++) {
				R = (rand() % (maxB - k));
				a[i] = a1[R];
				for (int j = R; j < maxB - 1; j++) {
					a1[j] = a1[j + 1];

				}
				k++;
			}
		}

		/*for (int i = 0; i < m; i++) {
			a1[i] = i;
		}
		for (int i = 0; i < m; i++) {
			R = (rand() % (maxB - k));
			a[i] = a1[R];
			for (int j = R; j < m - 1; j++) {
				a1[j] = a1[j + 1];

			}
			k++;
		}
		for (int i = 0; i < m; i++) {
			a1[i] = rand() % maxB;
		}
		for (int i = 0; i < m; i++) {
			R = (rand() % (m - k));
			a[i] = a1[R];
			for (int j = R; j < m - 1; j++) {
				a1[j] = a1[j + 1];

			}
			k++;
		}*/



		//ifstream fileA1("fileA");
		//label2->Text = File::ReadAllText(L"fileA.txt");
		ofstream fileB("fileB.txt"); for (int i = 0; i < m; i++) {
			fileB << a[i]; fileB << " ";
		}fileB.close();
		label2->Text = File::ReadAllText(L"fileB.txt");
		delete[]a; delete[]a1; 
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void buttonAperB_Click(System::Object^ sender, System::EventArgs^ e) {
		//PER();
		pictureBox1->Image = System::Drawing::Bitmap::FromFile("set1.jpg");
		String^ s1 = textBox1->Text;
		String^ s2 = textBox2->Text; setlocale(LC_ALL, "Russian");
		if (s1 == "") {
			MessageBox::Show("Нет данных", "Ошибка");
			return;
		}
		if (s2 == "") {
			MessageBox::Show("Нет данных", "Ошибка");
			return;
		}
		int n = Convert::ToInt16(s1);
		int m = Convert::ToInt16(s2);
		int* a = new int[n]; int* b = new int[m]; int* c = new int[m+n];
		
		ifstream fileA("fileA.txt");
		//int o = 0;
		//while (!fileA.eof()) {
		//	fileA >> a[o];
		//	o++;
		//}
		//o = 0;
		//while (!fileA.eof()) {
		//	fileB >> b[o];
		//	o++;
		//}
		ifstream fileB("fileB.txt");
		for (int i = 0; i < n; i++) {
			fileA >> a[i];
		}
		for (int i = 0; i < m; i++) {
			fileB >> b[i];
		}
		int k=0;
		
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < m; j++) {
					if (a[i] == b[j]) {
						c[k] = b[j];
						k++;
						
					}
				}
			}
		
		
		ofstream fileC("filePER.txt");
		for (int i = 0; i < k; i++) {
			fileC << c[i]; fileC << " ";
		}fileC.close();
		label5->Text = File::ReadAllText(L"filePER.txt");
		delete[]a; delete[]b; delete[]c;
	}
	private: System::Void buttonAobB_Click(System::Object^ sender, System::EventArgs^ e) {
		////////////////////////////////////////////////////////////
		pictureBox1->Image = System::Drawing::Bitmap::FromFile("set2.jpg");
		String^ s1 = textBox1->Text;
		String^ s2 = textBox2->Text; setlocale(LC_ALL, "Russian");
		if (s1 == "") {
			MessageBox::Show("Нет данных", "Ошибка");
			return;
		}
		if (s2 == "") {
			MessageBox::Show("Нет данных", "Ошибка");
			return;
		}
		int n = Convert::ToInt16(s1);
		int m = Convert::ToInt16(s2);
		int* a = new int[n]; int* b = new int[m]; int* c = new int[m + n];
		ifstream fileA("fileA.txt"); ifstream fileB("fileB.txt");
		ofstream fileC("fileOB.txt");
		for (int i = 0; i < n; i++) {
			fileA >> a[i];
		}
		for (int i = 0; i < m; i++) {
			fileB >> b[i];
		}
		sort(a, a + n); sort(b, b + m);
		set<int> set1(a, a + n); set<int>set2(b, b + m); set<int>set3;
		set_union(set1.begin(), set1.end(), set2.begin(), set2.end(), inserter(set3, set3.begin()));
		set<int>intersection; set<int>::iterator it1 = set3.begin();
		set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(), inserter(intersection, intersection.begin()));
		set<int>::iterator it = intersection.begin(); int k = 0;
		for (int i = 0; i < set3.size(); i++) {
			c[k] = *it1; it1++; k++;
		}

		fileA.close(); fileB.close();
		for (int z = 0; z <k ; z++) {
			fileC << c[z]; fileC << " ";
		}
		   fileC.close();
		label6->Text = File::ReadAllText(L"fileOB.txt");
		delete[]a; delete[]b; delete[]c;
	}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   

		  
private: System::Void buttonArB_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox1->Image = System::Drawing::Bitmap::FromFile("set3.png");
	String^ s1 = textBox1->Text;
	String^ s2 = textBox2->Text; setlocale(LC_ALL, "Russian");
	if (s1 == "") {
		MessageBox::Show("Нет данных", "Ошибка");
		return;
	}
	if (s2 == "") {
		MessageBox::Show("Нет данных", "Ошибка");
		return;
	}
	int n = Convert::ToInt16(s1);  
	int m = Convert::ToInt16(s2);
	int* a = new int[n]; int* b = new int[m];  int *a1 = new int[n]; //int* c = new int[m + n];
	set <int> X; set <int>  Y; set<int> Z;
	ifstream fileA("fileA.txt"); ifstream fileB("fileB.txt");
	ofstream fileC("fileArB.txt");
	//ifstream fileC1("fileArB.txt");
	for (int i = 0; i < n; i++) {
		fileA >> a[i];
		X.insert(a[i]);
	}
	for (int i = 0; i < m; i++) {
		fileB >> b[i];
		Y.insert(a[i]);
	}
	//set<int>::iterator it1 = Z.begin();
	int k = 0;
	vector<int> v2(n+m);
	fileA.close(); fileB.close();
	vector<int>::iterator it, ls;
	vector<int>::iterator V = v2.begin();
	int U = sizeof(a) / sizeof(b[0]);
	sort(a, a + n); sort(b, b + m);
	ls = set_difference(a, a + n, b, b + m, v2.begin());
	//label10->Text = Convert::ToString(*V);

	if (v2.empty()) { labelArB->Text = "Множество Разности пусто"; }
	else {
		for (it = v2.begin(); it < ls; ++it) {
			a1[k] = *it; k++;
		}
		for (int i = 0; i < k; i++) {
			fileC << a1[i]; fileC << " ";
		}
		fileC.close();
		labelArB->Text = File::ReadAllText(L"fileArB.txt");
	}
	
	/*set_difference(
		X.begin(), X.end(), Y.begin(), Y.end(), inserter(Z, Z.begin())
	);
	if (Z.empty()) { labelArB->Text = "Множество Разности пусто"; }
	else {
		int otl = 0; otl=Z.size();
		label10->Text = Convert::ToString(otl);
		for (int i = 0; i < Z.size(); i++) {
			a1[i] = *it; it++; k++;
		}
	}*/
	
	/*for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i] == b[j]) {
				c[k] = b[j];
				k++;

			}
		}
	}
	k = 0;

	for (int i = 0; i < n; i++) {
		int j1 = 0;
		while (j1 < m && b[j1] != a[i])j1++;
		if (j1 == m) { a1[i] = a[i]; k++; }
	}*/


		//for (int j = 0; j < m ; j++) {
			//if ((a1[j]!=a[k])&&(a1[j]!=a[i])&&(a1[i]!=a[i])&&(a1[j]!=a[i])&&(a[i] != c[j])&&(a1[k]!=a[i])&&(a1[k]!=a[j])&&(a1[k]!=c[i])&&(a1[k]!=c[j])) {
				//a1[k] = a[i];
				//k++;}}
	
	delete[]a; delete[]b;  delete[]a1; //delete[]c;

}
private: System::Void buttonBrA_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox1->Image = System::Drawing::Bitmap::FromFile("set4.png");
	String^ s1 = textBox1->Text;
	String^ s2 = textBox2->Text; setlocale(LC_ALL, "Russian");
	if (s1 == "") {
		MessageBox::Show("Нет данных", "Ошибка");
		return;
	}
	if (s2 == "") {
		MessageBox::Show("Нет данных", "Ошибка");
		return;
	}
	int n = Convert::ToInt16(s1);
	int m = Convert::ToInt16(s2);// int* c = new int[m + n];
	int* a = new int[n]; int* b = new int[m];  int* a1 = new int[m];
	ifstream fileA("fileA.txt"); ifstream fileB("fileB.txt");
	ofstream fileC("fileBrA.txt");
	for (int i = 0; i < n; i++) {
		fileA >> a[i];
	}
	for (int i = 0; i < m; i++) {
		fileB >> b[i];
	}
	int k = 0;
	vector<int> v2(n + m);
	vector<int>::iterator it, ls; vector<int>::iterator V = v2.begin();

	sort(a, a + n); sort(b, b + m);
	ls = set_difference(b, b + m, a, a + n, v2.begin());
	fileA.close(); fileB.close();
	if (v2.empty()) { labelBrA->Text ="Множество Разности пусто"; //MessageBox::Show("отладка");
	}
	else {
		for (it = v2.begin(); it < ls; ++it) {
			a1[k] = *it; k++;
		}
		
		for (int i = 0; i < k; i++) {
			fileC << a1[i]; fileC << " ";
		}
		fileC.close();
		labelBrA->Text = File::ReadAllText(L"fileBrA.txt");
	}
	/*for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i] == b[j]) {
				c[k] = b[j];
				k++;

			}
		}
	}
	k = 0;
	for (int i = 0; i < m; i++) {
		int j1 = 0;
		while (j1 < n && a[j1] != b[i])j1++;
		if (j1 == n) { a1[i] = b[i]; k++; }
	}*/

	delete[]a; delete[]b; delete[]a1; //delete[]c;
}
	   int symmDiff(int arr1[], int arr2[], int n, int m, int a1[])
	   {
		   int k = 0;
		   // Обходить оба массива одновременно.
		   int i = 0, j = 0;
		   while ((i < n) && (j < m))
		   {
			   // Распечатать меньший элемент и переместить
			   // впереди в массиве с меньшим элементом
			   if (arr1[i] < arr2[j])
			   {
				   a1[k] = arr1[i];
				   i++; k++;
			   }
			   else if (arr2[j] < arr1[i])
			   {
				   a1[k] = arr2[j] ;
				   j++; k++;
			   }
			   // Если оба элемента одинаковые, двигаться вперед
			   // в обоих массивах.
			   else
			   {
				   i++;
				   j++;
			   }
		   }
		   return k;
	   }
	private: System::Void buttonAsrB_Click(System::Object^ sender, System::EventArgs^ e) {
		pictureBox1->Image = System::Drawing::Bitmap::FromFile("set5.png");
		String^ s1 = textBox1->Text;
		String^ s2 = textBox2->Text; setlocale(LC_ALL, "Russian");
		if (s1 == "") {
			MessageBox::Show("Нет данных", "Ошибка");
			return;
		}
		if (s2 == "") {
			MessageBox::Show("Нет данных", "Ошибка");
			return;
		}

		int n = Convert::ToInt16(s1);
		int m = Convert::ToInt16(s2);// int* c = new int[m + n];
		int* a = new int[n]; int* b = new int[m];  int* a1 = new int[n + m];
		ifstream fileA("fileA.txt"); ifstream fileB("fileB.txt");
		ofstream fileC("fileAsrB.txt");
		set <int>X; set<int>Y;
		for (int i = 0; i < n; i++) {
			fileA >> a[i];
			X.insert(a[i]);
		}
		for (int i = 0; i < m; i++) {
			fileB >> b[i];
			Y.insert(a[i]);
		}
		fileA.close(); fileB.close();

		int k = 0; 
		int chek = 0; sort(a, a + n); sort(b, b + m);
		//k=symmDiff(a, b, n,m, a1);
		vector<int> v1(n + m); vector <int>v2(n+m);
		vector<int>::iterator it1,it2, ls1,ls2;
		sort(a, a + n); sort(b, b + m);
		ls1 = set_difference(a, a + n, b, b + m, v1.begin());
		ls2 = set_difference(b, b + m, a, a + n, v2.begin());
		 fileA.close(); fileB.close();
		if ((v2.empty())&&(v1.empty())) {
			labelAsrB->Text = "Множества не имеют симметричной разности "; //MessageBox::Show("отладка");
		}
		else {
			for (it1 = v1.begin(); it1 < ls1; ++it1) {
				a1[k] = *it1; k++;
			}
			for (it2 = v2.begin(); it2 < ls2; ++it2) {
				a1[k] = *it2; k++;
			}

			for (int i = 0; i < k; i++) {
				fileC << a1[i]; fileC << " ";
			}
			fileC.close();
			labelAsrB->Text = File::ReadAllText(L"fileAsrB.txt");
		}
		for (int i = 0; i < k; i++) {
			fileC << a1[i]; fileC << " ";
		}
		delete[]a; delete[]b; delete []a1;
//fileC << "  !!  ";
	
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ s1 = textBox1->Text;
	String^ s2 = textBox2->Text; setlocale(LC_ALL, "Russian");
	if (s1 == "") {
		MessageBox::Show("Нет данных", "Ошибка");
		return;
	}
	if (s2 == "") {
		MessageBox::Show("Нет данных", "Ошибка");
		return;
	}

	int n = Convert::ToInt16(s1);
	int m = Convert::ToInt16(s2);// int* c = new int[m + n];
	int* a = new int[n]; int* b = new int[m];  int** a1;  a1 = new  int*[2];
	a1[0] = new int[n];
	a1[1] = new int[m];	
	ifstream fileA("fileA.txt"); ifstream fileB("fileB.txt");

	//set <int>X; set<int>Y;
	for (int i = 0; i < n; i++) {
		fileA >> a[i];
	//	X.insert(a[i]);
	}
	
	for (int i = 0; i < m; i++) {
		fileB >> b[i];
	//	Y.insert(a[i]);
	}

	fileA.close(); fileB.close();
	ofstream axb("AxB.txt");
	axb << "Множество A:" << endl;
	for (int i = 0; i < n; i++) {
		a1[0][i] = a[i];
		axb << a1[0][i]; axb << " ";
	}
	axb << endl;
	axb << "Множество B:";
	axb << endl;
	for (int i = 0; i < m; i++) {
		a1[1][i] = b[i];  axb << b[i];
		axb << " ";
	}
	axb << endl;
	axb << "AxB:";
	axb << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			axb << "<"; axb << a1[0][i]; axb << ","; axb << a1[1][j];	axb << ">";	axb << ",";
		}
		axb << endl;
	}
	
	MessageBox::Show("Все пары были записаны в фаил AxB.txt");
	axb.close();
	Process::Start("notepad.exe","AxB.txt");
	
	delete[]a; delete[]b; delete[]a1;

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	setlocale(LC_ALL, "Russian");
	String^ s1 = textBox1->Text;
	String^ s2 = textBox2->Text; setlocale(LC_ALL, "Russian");
	if (s1 == "") {
		MessageBox::Show("Нет данных", "Ошибка");
		return;
	}
	if (s2 == "") {
		MessageBox::Show("Нет данных", "Ошибка");
		return;
	}

	int n = Convert::ToInt16(s1);
	int m = Convert::ToInt16(s2);// int* c = new int[m + n];
	int* a = new int[n]; int* b = new int[m];  int** a1;  a1 = new  int* [2];
	a1[0] = new int[n];
	a1[1] = new int[m];
	ifstream fileA("fileA.txt"); ifstream fileB("fileB.txt");

	//set <int>X; set<int>Y;
	for (int i = 0; i < n; i++) {
		fileA >> a[i];
	//	X.insert(a[i]);
	}

	for (int i = 0; i < m; i++) {
		fileB >> b[i];
	//	Y.insert(a[i]);
	}
	for (int i = 0; i < n; i++) {
		a1[0][i] = a[i];
	}
	
	for (int i = 0; i < m; i++) {
		a1[1][i] = b[i];
	}
	fileA.close(); fileB.close();
	
	if (listBox1->SelectedIndex == 0) {
		ofstream bin("binAxB.txt");
		ofstream axb("PAxB.txt");


		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				
				if (a1[0][i] < a1[1][j]) {
					axb << "<"; axb << a1[0][i]; axb << ","; axb << a1[1][j];	axb << ">";	axb << ",";
					bin << "1"; bin << " ";
				}
				else {
					bin << "0"; bin << " ";
				}
			}
			bin << endl;
		}
		axb.close(); bin.close();
		Process::Start("notepad.exe", "PAxB.txt");
		Process::Start("notepad.exe", "binAxB.txt");
	}
	if (listBox1->SelectedIndex == 1) {
		ofstream bin("binAxB.txt");
		ofstream axb("PAxB.txt.txt");
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (a1[0][i] == a1[1][j]) {
					axb << "<"; axb << a1[0][i]; axb << ","; axb << a1[1][j];	axb << ">";	axb << ",";
					bin << "1"; bin << " ";
				}
				else {
					bin << "0"; bin << " ";
				}
			}
			bin << endl;

		}
		axb.close(); bin.close();
		Process::Start("notepad.exe", "PAxB.txt");
		Process::Start("notepad.exe", "binAxB.txt");

	}
	if (listBox1->SelectedIndex == 2) {
		ofstream bin("binAxB.txt");
		ofstream axb("PAxB.txt");
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if ((a1[0][i] % a1[1][j])==0) {
					axb << "<"; axb << a1[0][i]; axb << ","; axb << a1[1][j];	axb << ">";	axb << ",";
					bin << "1"; bin << " ";
				}
				else {
					bin << "0"; bin << " ";
				}
			}bin << endl;
		}
		axb.close(); bin.close();
		Process::Start("notepad.exe", "PAxB.txt");
		Process::Start("notepad.exe", "binAxB.txt");
	

	}
	if (listBox1->SelectedIndex == 3) {
		ofstream bin("binAxB.txt");
		ofstream axb("PAxB.txt");
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (((a1[0][i] % 2)==0)&&((a1[1][j] % 2)==0)) {
					axb << "<"; axb << a1[0][i]; axb << ","; axb << a1[1][j];	axb << ">";	axb << ",";
					bin << "1"; bin << " ";
				}
				else {
					bin << "0"; bin << " ";
				}
			}bin << endl;
		}
	
		axb.close(); bin.close();
		Process::Start("notepad.exe", "PAxB.txt");
		Process::Start("notepad.exe", "binAxB.txt");
	}
	if (listBox1->SelectedIndex == 4) {
		ofstream axb("PAxB.txt");
		ofstream bin("binAxB.txt");
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (((a1[0][i] % 2) == 0) || (( a1[1][j] % 2) == 0)) {
					axb << "<"; axb << a1[0][i]; axb << ","; axb << a1[1][j];	axb << ">";	axb << ",";
					bin << "1"; bin << " ";
				}
				else {
					bin << "0"; bin << " ";
				}
			}bin << endl;
		}
		axb.close(); bin.close();
		Process::Start("notepad.exe", "PAxB.txt");
		Process::Start("notepad.exe", "binAxB.txt");

	}
	delete[]a; delete[]b; delete[]a1;
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
