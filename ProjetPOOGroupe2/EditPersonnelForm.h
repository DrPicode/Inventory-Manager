#pragma once
#include "ServicePersonnel.h"

namespace ProjetPOOGroupe2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class EditPersonnelForm : public System::Windows::Forms::Form
	{
	public:
		EditPersonnelForm(bool^ e)
		{
			this->editMode = e;
			this->servicePersonnel = gcnew ServicePersonnel();
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}
		EditPersonnelForm(bool^ e, Personnel^ p)
		{
			this->editMode = e;
			this->personnelToEdit = p;
			this->servicePersonnel = gcnew ServicePersonnel();
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~EditPersonnelForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ nameLbl;
	protected:
	private: System::Windows::Forms::TextBox^ nameTxtBox;
	private: System::Windows::Forms::TextBox^ prenomTxtBox;

	private: System::Windows::Forms::Label^ prenomLbl;
	private: System::Windows::Forms::DateTimePicker^ birthdate;
	private: System::Windows::Forms::Label^ birthdateLbl;
	private: System::Windows::Forms::GroupBox^ adresseBox;
	private: System::Windows::Forms::TextBox^ numTxtBox;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ clientBox;
	private: System::Windows::Forms::ComboBox^ cityComboBox;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ cpTxtBox;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ streetTxtBox;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ saveButton;
	private: System::Windows::Forms::DateTimePicker^ dateEmbauche;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::RadioButton^ buttonFemme;

	private: System::Windows::Forms::RadioButton^ buttonHomme;

	private: System::Windows::Forms::Label^ label5;

	private: ServicePersonnel^ servicePersonnel;
	private: bool^ editMode;
	private: Personnel^ personnelToEdit;

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(EditPersonnelForm::typeid));
			this->nameLbl = (gcnew System::Windows::Forms::Label());
			this->nameTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->prenomTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->prenomLbl = (gcnew System::Windows::Forms::Label());
			this->birthdate = (gcnew System::Windows::Forms::DateTimePicker());
			this->birthdateLbl = (gcnew System::Windows::Forms::Label());
			this->adresseBox = (gcnew System::Windows::Forms::GroupBox());
			this->cityComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->cpTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->streetTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->numTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->clientBox = (gcnew System::Windows::Forms::GroupBox());
			this->dateEmbauche = (gcnew System::Windows::Forms::DateTimePicker());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->buttonFemme = (gcnew System::Windows::Forms::RadioButton());
			this->buttonHomme = (gcnew System::Windows::Forms::RadioButton());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->saveButton = (gcnew System::Windows::Forms::Button());
			this->adresseBox->SuspendLayout();
			this->clientBox->SuspendLayout();
			this->SuspendLayout();
			// 
			// nameLbl
			// 
			this->nameLbl->AutoSize = true;
			this->nameLbl->Location = System::Drawing::Point(15, 82);
			this->nameLbl->Name = L"nameLbl";
			this->nameLbl->Size = System::Drawing::Size(45, 17);
			this->nameLbl->TabIndex = 0;
			this->nameLbl->Text = L"Nom :";
			// 
			// nameTxtBox
			// 
			this->nameTxtBox->Location = System::Drawing::Point(18, 102);
			this->nameTxtBox->Name = L"nameTxtBox";
			this->nameTxtBox->Size = System::Drawing::Size(200, 22);
			this->nameTxtBox->TabIndex = 1;
			// 
			// prenomTxtBox
			// 
			this->prenomTxtBox->Location = System::Drawing::Point(18, 157);
			this->prenomTxtBox->Name = L"prenomTxtBox";
			this->prenomTxtBox->Size = System::Drawing::Size(200, 22);
			this->prenomTxtBox->TabIndex = 3;
			// 
			// prenomLbl
			// 
			this->prenomLbl->AutoSize = true;
			this->prenomLbl->Location = System::Drawing::Point(15, 137);
			this->prenomLbl->Name = L"prenomLbl";
			this->prenomLbl->Size = System::Drawing::Size(65, 17);
			this->prenomLbl->TabIndex = 2;
			this->prenomLbl->Text = L"Prénom :";
			// 
			// birthdate
			// 
			this->birthdate->Location = System::Drawing::Point(18, 215);
			this->birthdate->Name = L"birthdate";
			this->birthdate->Size = System::Drawing::Size(200, 22);
			this->birthdate->TabIndex = 4;
			// 
			// birthdateLbl
			// 
			this->birthdateLbl->AutoSize = true;
			this->birthdateLbl->Location = System::Drawing::Point(15, 195);
			this->birthdateLbl->Name = L"birthdateLbl";
			this->birthdateLbl->Size = System::Drawing::Size(134, 17);
			this->birthdateLbl->TabIndex = 5;
			this->birthdateLbl->Text = L"Date de naissance :";
			// 
			// adresseBox
			// 
			this->adresseBox->Controls->Add(this->cityComboBox);
			this->adresseBox->Controls->Add(this->label4);
			this->adresseBox->Controls->Add(this->cpTxtBox);
			this->adresseBox->Controls->Add(this->label3);
			this->adresseBox->Controls->Add(this->streetTxtBox);
			this->adresseBox->Controls->Add(this->numTxtBox);
			this->adresseBox->Controls->Add(this->label2);
			this->adresseBox->Controls->Add(this->label1);
			this->adresseBox->Location = System::Drawing::Point(281, 19);
			this->adresseBox->Name = L"adresseBox";
			this->adresseBox->Size = System::Drawing::Size(266, 217);
			this->adresseBox->TabIndex = 6;
			this->adresseBox->TabStop = false;
			this->adresseBox->Text = L"Adresse :";
			// 
			// cityComboBox
			// 
			this->cityComboBox->FormattingEnabled = true;
			this->cityComboBox->Location = System::Drawing::Point(114, 160);
			this->cityComboBox->Name = L"cityComboBox";
			this->cityComboBox->Size = System::Drawing::Size(133, 24);
			this->cityComboBox->TabIndex = 13;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(111, 140);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(42, 17);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Ville :";
			// 
			// cpTxtBox
			// 
			this->cpTxtBox->Location = System::Drawing::Point(16, 160);
			this->cpTxtBox->Name = L"cpTxtBox";
			this->cpTxtBox->Size = System::Drawing::Size(89, 22);
			this->cpTxtBox->TabIndex = 11;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 140);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(92, 17);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Code Postal :";
			// 
			// streetTxtBox
			// 
			this->streetTxtBox->Location = System::Drawing::Point(16, 102);
			this->streetTxtBox->Name = L"streetTxtBox";
			this->streetTxtBox->Size = System::Drawing::Size(231, 22);
			this->streetTxtBox->TabIndex = 9;
			// 
			// numTxtBox
			// 
			this->numTxtBox->Location = System::Drawing::Point(16, 47);
			this->numTxtBox->Name = L"numTxtBox";
			this->numTxtBox->Size = System::Drawing::Size(63, 22);
			this->numTxtBox->TabIndex = 9;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 82);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(42, 17);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Rue :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 17);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Numéro :";
			// 
			// clientBox
			// 
			this->clientBox->Controls->Add(this->dateEmbauche);
			this->clientBox->Controls->Add(this->label6);
			this->clientBox->Controls->Add(this->buttonFemme);
			this->clientBox->Controls->Add(this->buttonHomme);
			this->clientBox->Controls->Add(this->label5);
			this->clientBox->Controls->Add(this->birthdate);
			this->clientBox->Controls->Add(this->prenomTxtBox);
			this->clientBox->Controls->Add(this->birthdateLbl);
			this->clientBox->Controls->Add(this->prenomLbl);
			this->clientBox->Controls->Add(this->nameLbl);
			this->clientBox->Controls->Add(this->nameTxtBox);
			this->clientBox->Location = System::Drawing::Point(12, 19);
			this->clientBox->Name = L"clientBox";
			this->clientBox->Size = System::Drawing::Size(263, 292);
			this->clientBox->TabIndex = 7;
			this->clientBox->TabStop = false;
			this->clientBox->Text = L"Informations Salarié :";
			// 
			// dateEmbauche
			// 
			this->dateEmbauche->Location = System::Drawing::Point(18, 264);
			this->dateEmbauche->Name = L"dateEmbauche";
			this->dateEmbauche->Size = System::Drawing::Size(200, 22);
			this->dateEmbauche->TabIndex = 9;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(15, 244);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(127, 17);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Date d\'embauche :";
			// 
			// buttonFemme
			// 
			this->buttonFemme->AutoSize = true;
			this->buttonFemme->Location = System::Drawing::Point(101, 47);
			this->buttonFemme->Name = L"buttonFemme";
			this->buttonFemme->Size = System::Drawing::Size(75, 21);
			this->buttonFemme->TabIndex = 8;
			this->buttonFemme->TabStop = true;
			this->buttonFemme->Text = L"Femme";
			this->buttonFemme->UseVisualStyleBackColor = true;
			// 
			// buttonHomme
			// 
			this->buttonHomme->AutoSize = true;
			this->buttonHomme->Location = System::Drawing::Point(18, 47);
			this->buttonHomme->Name = L"buttonHomme";
			this->buttonHomme->Size = System::Drawing::Size(77, 21);
			this->buttonHomme->TabIndex = 7;
			this->buttonHomme->TabStop = true;
			this->buttonHomme->Text = L"Homme";
			this->buttonHomme->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(15, 27);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(56, 17);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Genre :";
			// 
			// saveButton
			// 
			this->saveButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"saveButton.Image")));
			this->saveButton->Location = System::Drawing::Point(384, 242);
			this->saveButton->Name = L"saveButton";
			this->saveButton->Size = System::Drawing::Size(69, 69);
			this->saveButton->TabIndex = 8;
			this->saveButton->UseVisualStyleBackColor = true;
			this->saveButton->Click += gcnew System::EventHandler(this, &EditPersonnelForm::saveButton_Click);
			// 
			// EditPersonnelForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(562, 323);
			this->Controls->Add(this->saveButton);
			this->Controls->Add(this->clientBox);
			this->Controls->Add(this->adresseBox);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"EditPersonnelForm";
			this->Text = L"Ajouter un personnel";
			this->Shown += gcnew System::EventHandler(this, &EditPersonnelForm::EditPersonnelForm_Shown);
			this->adresseBox->ResumeLayout(false);
			this->adresseBox->PerformLayout();
			this->clientBox->ResumeLayout(false);
			this->clientBox->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void saveButton_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ sex;

		if (this->buttonFemme->Checked) {
			sex = "F";
		}
		else if (this->buttonHomme->Checked) {
			sex = "H";
		}

		if (Convert::ToBoolean(this->editMode) == false) {
			this->servicePersonnel->addPersonnel(this->birthdate->Value, this->dateEmbauche->Value, this->cpTxtBox->Text, this->cityComboBox->Text, this->numTxtBox->Text, this->streetTxtBox->Text, this->nameTxtBox->Text, this->prenomTxtBox->Text, sex);
		}
		else {
			this->personnelToEdit->setNom(this->nameTxtBox->Text);
			this->personnelToEdit->setPrenom(this->prenomTxtBox->Text);
			this->personnelToEdit->setSex(sex);
			this->personnelToEdit->setDateEmbauche(gcnew Date(this->dateEmbauche->Value));
			this->personnelToEdit->setDateNaissance(gcnew Date(this->birthdate->Value));

			this->servicePersonnel->db->actionRows("UPDATE Personnel SET nom='" + this->personnelToEdit->getNom() +"', prenom='" + this->personnelToEdit->getPrenom() + "', sex='" + this->personnelToEdit->getSex() + "' WHERE id_personnel=" + this->personnelToEdit->getId());
		}
		this->Close();
	}
	private: System::Void EditPersonnelForm_Shown(System::Object^ sender, System::EventArgs^ e) {
		if (Convert::ToBoolean(this->editMode) == true) {
			if (this->personnelToEdit->getSex() == "H") {
				this->buttonHomme->Checked = true;
			}
			else {
				this->buttonFemme->Checked = true;
			}
			this->prenomTxtBox->Text = this->personnelToEdit->getPrenom();
			this->nameTxtBox->Text = this->personnelToEdit->getNom();
			this->numTxtBox->Text = this->personnelToEdit->getAdresse()->getNumeroRue()->ToString();
			this->streetTxtBox->Text = this->personnelToEdit->getAdresse()->getRue();
		}
	}
};
}
