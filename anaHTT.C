#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
#include <vector>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include "../interface/Mela.h"
#include "TMath.h"
#include "TLorentzVector.h"
#include "TLorentzRotation.h"
#include "TFile.h"
#include "TTree.h"
#include "TChain.h"
#include "TString.h"
#include "TH1F.h"
#include "TH2F.h"
#include "TH3F.h"


using namespace RooFit;
using namespace std;

void anaHTT()
{

  int erg_tev=13;
  float mPOLE=125.6;
  float wPOLE=4.07e-3;
  TString TREE_NAME = "SelectedTree";

  TVar::VerbosityLevel verbosity = TVar::ERROR;
  Mela mela(erg_tev, mPOLE, verbosity);


  TFile *finput = new TFile("all1234tmpOut2.root");
  TTree *tree = (TTree*) finput->Get("mutau_tree");
  TH1F* nbevt = (TH1F*) finput->Get("nevents");
  float ngen = nbevt->GetBinContent(2);
    float xs=1.0; float weight=1.0; float luminosity=20100.0;
  
TFile* foutput = new TFile("HTT_MELA_test.root", "recreate");
 float ME;
 
 Float_t         m_sv;
   Float_t         pt_sv;
   Float_t         eta_sv;
   Float_t         phi_sv;
   Int_t           njets;
float jmass_1, jpt_1, jeta_1, jphi_1;
float jmass_2, jpt_2, jeta_2, jphi_2;
   Float_t         pt_2;
   Float_t         phi_2;
   Float_t         eta_2;
   Float_t         m_2;
   Float_t         pt_1;
   Float_t         phi_1;
   Float_t         eta_1;
   Float_t         m_1;


   TBranch        *b_njets;   //!
   TBranch        *b_jpt_1;   //!
   TBranch        *b_jeta_1;   //!
   TBranch        *b_jphi_1;   //!
   TBranch        *b_jpt_2;   //!
   TBranch        *b_jeta_2;   //!
   TBranch        *b_jphi_2;   //!
   TBranch        *b_m_sv;   //!
   TBranch        *b_pt_sv;   //!
   TBranch        *b_eta_sv;   //!
   TBranch        *b_phi_sv;   //!
   TBranch        *b_pt_2;   //!
   TBranch        *b_phi_2;   //!
   TBranch        *b_eta_2;   //!
   TBranch        *b_m_2;   //!
   TBranch        *b_pt_1;   //!
   TBranch        *b_phi_1;   //!
   TBranch        *b_eta_1;   //!
   TBranch        *b_m_1;   //!

   tree->SetBranchAddress("njets", &njets, &b_njets);
   tree->SetBranchAddress("jpt_1", &jpt_1, &b_jpt_1);
   tree->SetBranchAddress("jeta_1", &jeta_1, &b_jeta_1);
   tree->SetBranchAddress("jphi_1", &jphi_1, &b_jphi_1);
   tree->SetBranchAddress("jpt_2", &jpt_2, &b_jpt_2);
   tree->SetBranchAddress("jeta_2", &jeta_2, &b_jeta_2);
   tree->SetBranchAddress("jphi_2", &jphi_2, &b_jphi_2);
   tree->SetBranchAddress("m_sv", &m_sv, &b_m_sv);
   tree->SetBranchAddress("pt_sv", &pt_sv, &b_pt_sv);
   tree->SetBranchAddress("eta_sv", &eta_sv, &b_eta_sv);
   tree->SetBranchAddress("phi_sv", &phi_sv, &b_phi_sv);
   tree->SetBranchAddress("pt_1", &pt_1, &b_pt_1);
   tree->SetBranchAddress("phi_1", &phi_1, &b_phi_1);
   tree->SetBranchAddress("eta_1", &eta_1, &b_eta_1);
   tree->SetBranchAddress("m_1", &m_1, &b_m_1);
   tree->SetBranchAddress("pt_2", &pt_2, &b_pt_2);
   tree->SetBranchAddress("phi_2", &phi_2, &b_phi_2);
   tree->SetBranchAddress("eta_2", &eta_2, &b_eta_2);
   tree->SetBranchAddress("m_2", &m_2, &b_m_2);

   
  TTree* newtree = new TTree("TestTree", "");
  newtree->Branch("ME", &ME);


  //  mela.setCandidateDecayMode(TVar::CandidateDecay_ff);
  mela.setCandidateDecayMode(TVar::CandidateDecay_Stable);

 
  Long64_t nentries = tree->GetEntries();
    int recorded=0;

   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
     nb = tree->GetEntry(jentry);   nbytes += nb;
     
     tree->GetEntry(jentry);
     
    if (njets>=2){
      TLorentzVector jet1(0, 0, 1e-3, 1e-3), jet2(0, 0, 1e-3, 1e-3), higgs(0, 0, 0, 0);
      jet1.SetPtEtaPhiM(jpt_1, jeta_1, jphi_1, 0);
      jet2.SetPtEtaPhiM(jpt_2, jeta_2, jphi_2, 0);
      higgs.SetPtEtaPhiM(pt_sv, eta_sv, phi_sv, m_sv);
      TVector3 boostH = higgs.BoostVector();

      SimpleParticleCollection_t associated;
      associated.push_back(SimpleParticle_t(0, jet1));
      associated.push_back(SimpleParticle_t(0, jet2));

      TLorentzVector pDaughters1, pDaughters2;
      //     std::vector<TLorentzVector> daus = mela.calculate4Momentum(m_sv, m1, m2, acos(hs), acos(h1), acos(h2), phi1, phi);
      pDaughters1.SetPtEtaPhiM(pt_1, eta_1, phi_1, m_1);
      pDaughters1.SetPtEtaPhiM(pt_2, eta_2, phi_2, m_2);

      SimpleParticleCollection_t daughters_ZZ;
      daughters_ZZ.push_back(SimpleParticle_t(25, higgs));
      // daughters_ZZ.push_back(SimpleParticle_t(13, pDaughters1));
      // daughters_ZZ.push_back(SimpleParticle_t(15, pDaughters2));
      mela.setInputEvent(&daughters_ZZ, &associated, (SimpleParticleCollection_t*)0, false);

      mela.setProcess(TVar::HSMHiggs, TVar::JHUGen, TVar::JJVBF);
      mela.computeProdP(ME, false);

      newtree->Fill();
      recorded++;
      mela.resetInputEvent();
      // if (Cut(ientry) < 0) continue;
   }
   }
  foutput->WriteTObject(newtree);
  delete newtree;
  foutput->Close();
  finput->Close();
}
