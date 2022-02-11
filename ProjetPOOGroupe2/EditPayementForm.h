#pragma once
#include "ServiceCommande.h"

namespace ProjetPOOGroupe2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de EditPayementForm
	/// </summary>
	public ref class EditPayementForm : public System::Windows::Forms::Form
	{
	public:
		EditPayementForm(float^ f, int^ i)
		{
			this->montantTotal = Convert::ToSingle(f);
			this->idCommande = Convert::ToInt32(i);
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~EditPayementForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;

	private: System::Single^ montantTotal = gcnew System::Single();
	private: System::Int32^ idCommande = gcnew System::Int32();

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(EditPayementForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(15, 29);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(67, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Montant :";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Carte Bancaire", L"Espèce", L"Virement Bancaire",
					L"Chèque"
			});
			this->comboBox1->Location = System::Drawing::Point(181, 29);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(178, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Type :";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(15, 88);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 22);
			this->dateTimePicker1->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 68);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(112, 17);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Date payement :";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(15, 131);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(287, 38);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Sauvegarder";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &EditPayementForm::button1_Click);
			// 
			// EditPayementForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(318, 178);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"EditPayementForm";
			this->Text = L"Payement";
			this->Load += gcnew System::EventHandler(this, &EditPayementForm::EditPayementForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void EditPayementForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->textBox1->Text = this->montantTotal->ToString();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		ServiceCommande^ serviceCommande = gcnew ServiceCommande();
		Payement^ p = gcnew Payement();
		
		serviceCommande->getCommande()->setIdCommande(this->idCommande);
		Date^ date = gcnew Date(this->dateTimePicker1->Value);

		p->setMontant(Convert::ToSingle(this->textBox1->Text->Replace(".", ",")));
		p->setCommande(serviceCommande->getCommande());
		p->setDate(date);
		p->setTypePayement(this->comboBox1->Text);

		serviceCommande->ajouterPayement(p);
		this->Close();
	}
};
}
