#pragma once
#include "ServiceArticle.h"
#include "Article.h"

namespace ProjetPOOGroupe2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de EditArticleForm
	/// </summary>
	public ref class EditArticleForm : public System::Windows::Forms::Form
	{
	public:
		EditArticleForm(bool^ e)
		{
			this->editMode = e;
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}
		EditArticleForm(bool^ e, Article^ a)
		{
			this->editMode = e;
			this->articleToEdit =  a;
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~EditArticleForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ reference;
	private: System::Windows::Forms::TextBox^ prixVente;
	protected:

	protected:

	private: System::Windows::Forms::TextBox^ stock;
	private: System::Windows::Forms::TextBox^ reapprovisionement;


	private: System::Windows::Forms::TextBox^ prixAchat;

	private: System::Windows::Forms::TextBox^ nom;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ btn_envoyer;
	private: System::Windows::Forms::ComboBox^ comboBox1;

	private: ServiceArticle^ serviceArticle = gcnew ServiceArticle();
	private: DataSet^ dataset = gcnew DataSet();
	private: bool^ editMode;
	private: Article^ articleToEdit;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(EditArticleForm::typeid));
			this->reference = (gcnew System::Windows::Forms::TextBox());
			this->prixVente = (gcnew System::Windows::Forms::TextBox());
			this->stock = (gcnew System::Windows::Forms::TextBox());
			this->reapprovisionement = (gcnew System::Windows::Forms::TextBox());
			this->prixAchat = (gcnew System::Windows::Forms::TextBox());
			this->nom = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->btn_envoyer = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// reference
			// 
			this->reference->Location = System::Drawing::Point(12, 41);
			this->reference->Name = L"reference";
			this->reference->Size = System::Drawing::Size(119, 22);
			this->reference->TabIndex = 0;
			// 
			// prixVente
			// 
			this->prixVente->Location = System::Drawing::Point(12, 206);
			this->prixVente->Name = L"prixVente";
			this->prixVente->Size = System::Drawing::Size(119, 22);
			this->prixVente->TabIndex = 2;
			// 
			// stock
			// 
			this->stock->Location = System::Drawing::Point(206, 41);
			this->stock->Name = L"stock";
			this->stock->Size = System::Drawing::Size(119, 22);
			this->stock->TabIndex = 3;
			// 
			// reapprovisionement
			// 
			this->reapprovisionement->Location = System::Drawing::Point(12, 278);
			this->reapprovisionement->Name = L"reapprovisionement";
			this->reapprovisionement->Size = System::Drawing::Size(119, 22);
			this->reapprovisionement->TabIndex = 4;
			// 
			// prixAchat
			// 
			this->prixAchat->Location = System::Drawing::Point(206, 121);
			this->prixAchat->Name = L"prixAchat";
			this->prixAchat->Size = System::Drawing::Size(119, 22);
			this->prixAchat->TabIndex = 5;
			// 
			// nom
			// 
			this->nom->Location = System::Drawing::Point(12, 121);
			this->nom->Name = L"nom";
			this->nom->Size = System::Drawing::Size(119, 22);
			this->nom->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(34, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 17);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Référence";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 101);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 17);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Nom produit :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(9, 186);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(93, 17);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Prix vente HT";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(203, 21);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(99, 17);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Quantité stock";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(209, 101);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(93, 17);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Prix achat HT";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(9, 258);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(186, 17);
			this->label6->TabIndex = 12;
			this->label6->Text = L"seuil de reapprovisionement";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(203, 186);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(51, 17);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Nature";
			// 
			// btn_envoyer
			// 
			this->btn_envoyer->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_envoyer.Image")));
			this->btn_envoyer->Location = System::Drawing::Point(130, 318);
			this->btn_envoyer->Name = L"btn_envoyer";
			this->btn_envoyer->Size = System::Drawing::Size(73, 67);
			this->btn_envoyer->TabIndex = 15;
			this->btn_envoyer->UseVisualStyleBackColor = true;
			this->btn_envoyer->Click += gcnew System::EventHandler(this, &EditArticleForm::btn_envoyer_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(206, 206);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 16;
			// 
			// EditArticleForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(342, 397);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->btn_envoyer);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->nom);
			this->Controls->Add(this->prixAchat);
			this->Controls->Add(this->reapprovisionement);
			this->Controls->Add(this->stock);
			this->Controls->Add(this->prixVente);
			this->Controls->Add(this->reference);
			this->Name = L"EditArticleForm";
			this->Text = L"Ajout article";
			this->Shown += gcnew System::EventHandler(this, &EditArticleForm::EditArticleForm_Shown);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void EditArticleForm_Shown(System::Object^ sender, System::EventArgs^ e) {
		
		ServiceArticle^ serviceArticle = gcnew ServiceArticle();	

		this->comboBox1->DataSource = serviceArticle->obtenirLesNaturesArticle();;
		this->comboBox1->DisplayMember = "nom";

		if (Convert::ToBoolean(this->editMode) == true) {
			this->reference->Text = articleToEdit->getReference();
			this->stock->Text = articleToEdit->getStock()->ToString();
			this->nom->Text = articleToEdit->getNom()->ToString();
			this->prixAchat->Text = articleToEdit->getPrixAchat()->ToString();
			this->prixVente->Text = articleToEdit->getPrixHt()->ToString();
			this->reapprovisionement->Text = articleToEdit->getSeuil()->ToString();
		}
		
	}

	private: System::Void btn_envoyer_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Convert::ToBoolean(this->editMode) == false) {
			ServiceArticle^ serviceArticle = gcnew ServiceArticle();

			Article^ tempArticle = gcnew Article();
			Nature^ tempNature = gcnew Nature();		

			if(this->comboBox1->SelectedItem != nullptr)
			{
				tempNature->setId(Convert::ToInt32(((DataRowView^)this->comboBox1->SelectedItem)->Row[0]));
			}
			else
			{
				int^ id = serviceArticle->createNature(this->comboBox1->Text);
				tempNature->setId(id);
			}
			
			tempArticle->setReference(this->reference->Text);
			tempArticle->setNom(this->nom->Text);
			tempArticle->setPrixHt(Convert::ToSingle(this->prixVente->Text->Replace(".", ",")));
			tempArticle->setStock(Convert::ToInt32(this->stock->Text));
			tempArticle->setPrixAchat(Convert::ToSingle(this->prixAchat->Text->Replace(".", ",")));
			tempArticle->setSeuil(Convert::ToInt32(this->reapprovisionement->Text));
			tempArticle->setNature(tempNature);

			this->serviceArticle->setArticle(tempArticle);
			this->serviceArticle->ajouterArticle();

		} else {
			this->articleToEdit->setReference(this->reference->Text);
			this->articleToEdit->setStock(Convert::ToInt32(this->stock->Text));
			this->articleToEdit->setNom(this->nom->Text);
			this->articleToEdit->setPrixAchat(Convert::ToSingle(this->prixAchat->Text->Replace(".", ",")));
			this->articleToEdit->setPrixHt(Convert::ToSingle(this->prixVente->Text->Replace(".", ",")));
			this->articleToEdit->setSeuil(Convert::ToInt32(this->reapprovisionement->Text));

			Nature^ nature = gcnew Nature();
			nature->setId(Convert::ToInt32(((DataRowView^)this->comboBox1->SelectedItem)->Row[0]));
			articleToEdit->setNature(nature);

			this->serviceArticle->setArticle(articleToEdit);
			this->serviceArticle->modifierArticle();
		}
		this->Close();
	}
};
}
