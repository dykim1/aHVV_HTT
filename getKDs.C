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
  TVar::VerbosityLevel verbosity = TVar::ERROR;
  Mela mela(13, 125.6, verbosity);
  
  TFile *finput_0m = new TFile("TauTau_13_SKMD-skmd_mrgd_VBFHIGGS0M.root");//
  TFile *finput_0pm = new TFile("all1234tmpOut2.root");
  TTree *tree_0m = (TTree*) finput_0m->Get("mutau_tree");
  TTree *tree_0pm = (TTree*) finput_0pm->Get("mutau_tree");
  
  TFile* foutput = new TFile("HTT_MELA_test.root", "recreate");
  float ME_0m, ME_0pm,KD_0pm,KD_0m;
 
  Float_t         m_sv_0pm, pt_sv_0pm, eta_sv_0pm, phi_sv_0pm;
  Float_t         m_sv_0m, pt_sv_0m, eta_sv_0m, phi_sv_0m;
  Int_t           njets_0m, njets_0pm;
  float jmass_1_0pm, jpt_1_0pm, jeta_1_0pm, jphi_1_0pm, jmass_2_0pm, jpt_2_0pm, jeta_2_0pm, jphi_2_0pm;
  float jmass_1_0m, jpt_1_0m, jeta_1_0m, jphi_1_0m, jmass_2_0m, jpt_2_0m, jeta_2_0m, jphi_2_0m;
  
  TBranch        *b_njets_0pm;   //!
  TBranch        *b_jpt_1_0pm;   //!
  TBranch        *b_jeta_1_0pm;   //!
  TBranch        *b_jphi_1_0pm;   //!
  TBranch        *b_jpt_2_0pm;   //!
  TBranch        *b_jeta_2_0pm;   //!
  TBranch        *b_jphi_2_0pm;   //!
  TBranch        *b_m_sv_0pm;   //!
  TBranch        *b_pt_sv_0pm;   //!
  TBranch        *b_eta_sv_0pm;   //!
  TBranch        *b_phi_sv_0pm;   //!
  
  
  tree_0pm->SetBranchAddress("njets", &njets_0pm, &b_njets_0pm);
  tree_0pm->SetBranchAddress("jpt_1", &jpt_1_0pm, &b_jpt_1_0pm);
  tree_0pm->SetBranchAddress("jeta_1", &jeta_1_0pm, &b_jeta_1_0pm);
  tree_0pm->SetBranchAddress("jphi_1", &jphi_1_0pm, &b_jphi_1_0pm);
  tree_0pm->SetBranchAddress("jpt_2", &jpt_2_0pm, &b_jpt_2_0pm);
  tree_0pm->SetBranchAddress("jeta_2", &jeta_2_0pm, &b_jeta_2_0pm);
  tree_0pm->SetBranchAddress("jphi_2", &jphi_2_0pm, &b_jphi_2_0pm);
  tree_0pm->SetBranchAddress("m_sv", &m_sv_0pm, &b_m_sv_0pm);
  tree_0pm->SetBranchAddress("pt_sv", &pt_sv_0pm, &b_pt_sv_0pm);
  tree_0pm->SetBranchAddress("eta_sv", &eta_sv_0pm, &b_eta_sv_0pm);
  tree_0pm->SetBranchAddress("phi_sv", &phi_sv_0pm, &b_phi_sv_0pm);
  
  TBranch        *b_njets_0m;   //!                                                                                                                                                      
  TBranch        *b_jpt_1_0m;   //!                                                                                                                                                      
  TBranch        *b_jeta_1_0m;   //!                                                                                                                                                     
  TBranch        *b_jphi_1_0m;   //!                                                                                                                                                     
  TBranch        *b_jpt_2_0m;   //!                                                                                                                                                      
  TBranch        *b_jeta_2_0m;   //!                                                                                                                                                     
  TBranch        *b_jphi_2_0m;   //!                                                                                                                                                     
  TBranch        *b_m_sv_0m;   //!                                                                                                                                                       
  TBranch        *b_pt_sv_0m;   //!                                                                                                                                                      
  TBranch        *b_eta_sv_0m;   //!                                                                                                                                                     
  TBranch        *b_phi_sv_0m;   //!                                                                                                                                                     
  
  
  tree_0m->SetBranchAddress("njets", &njets_0m, &b_njets_0m);
  tree_0m->SetBranchAddress("jpt_1", &jpt_1_0m, &b_jpt_1_0m);
  tree_0m->SetBranchAddress("jeta_1", &jeta_1_0m, &b_jeta_1_0m);
  tree_0m->SetBranchAddress("jphi_1", &jphi_1_0m, &b_jphi_1_0m);
  tree_0m->SetBranchAddress("jpt_2", &jpt_2_0m, &b_jpt_2_0m);
  tree_0m->SetBranchAddress("jeta_2", &jeta_2_0m, &b_jeta_2_0m);
  tree_0m->SetBranchAddress("jphi_2", &jphi_2_0m, &b_jphi_2_0m);
  tree_0m->SetBranchAddress("m_sv", &m_sv_0m, &b_m_sv_0m);
  tree_0m->SetBranchAddress("pt_sv", &pt_sv_0m, &b_pt_sv_0m);
  tree_0m->SetBranchAddress("eta_sv", &eta_sv_0m, &b_eta_sv_0m);
  tree_0m->SetBranchAddress("phi_sv", &phi_sv_0m, &b_phi_sv_0m);
  
  
  TTree* newtree = new TTree("TestTree", "");
  newtree->Branch("ME_0pm", &ME_0pm);
  newtree->Branch("ME_0m", &ME_0m);
  newtree->Branch("KD_0pm", &KD_0pm);
  newtree->Branch("KD_0m", &KD_0m);
  
  
  //  mela.setCandidateDecayMode(TVar::CandidateDecay_ff);
  mela.setCandidateDecayMode(TVar::CandidateDecay_Stable);
  
  
  Long64_t nentries = tree_0pm->GetEntries();
  int recorded=0;
  
  for (Long64_t jentry=0; jentry<nentries;jentry++) {
    
    tree_0pm->GetEntry(jentry);
    tree_0m->GetEntry(jentry);
    mela.setProcess(TVar::HSMHiggs, TVar::JHUGen, TVar::JJVBF);
    
    if (njets_0pm>=2){
      TLorentzVector jet1_0pm(0, 0, 1e-3, 1e-3), jet2_0pm(0, 0, 1e-3, 1e-3), higgs_0pm(0, 0, 0, 0);
      jet1_0pm.SetPtEtaPhiM(jpt_1_0pm, jeta_1_0pm, jphi_1_0pm, 0);
      jet2_0pm.SetPtEtaPhiM(jpt_2_0pm, jeta_2_0pm, jphi_2_0pm, 0);
      higgs_0pm.SetPtEtaPhiM(pt_sv_0pm, eta_sv_0pm, phi_sv_0pm, m_sv_0pm);
      
      SimpleParticleCollection_t associated_0pm;
      associated_0pm.push_back(SimpleParticle_t(0, jet1_0pm));
      associated_0pm.push_back(SimpleParticle_t(0, jet2_0pm));
      
      SimpleParticleCollection_t daughters_ZZ_0pm;
      daughters_ZZ_0pm.push_back(SimpleParticle_t(25, higgs_0pm));
      
      mela.setInputEvent(&daughters_ZZ_0pm, &associated_0pm, (SimpleParticleCollection_t*)0, false);
      mela.computeProdP(ME_0pm, false);
    }
    
    if (njets_0m>=2){
      TLorentzVector jet1_0m(0, 0, 1e-3, 1e-3), jet2_0m(0, 0, 1e-3, 1e-3), higgs_0m(0, 0, 0, 0);
      jet1_0m.SetPtEtaPhiM(jpt_1_0m, jeta_1_0m, jphi_1_0m, 0);
      jet2_0m.SetPtEtaPhiM(jpt_2_0m, jeta_2_0m, jphi_2_0m, 0);
      higgs_0m.SetPtEtaPhiM(pt_sv_0m, eta_sv_0m, phi_sv_0m, m_sv_0m);
      
      SimpleParticleCollection_t associated_0m;
      associated_0m.push_back(SimpleParticle_t(0, jet1_0m));
      associated_0m.push_back(SimpleParticle_t(0, jet2_0m));
      
      SimpleParticleCollection_t daughters_ZZ_0m;
      daughters_ZZ_0m.push_back(SimpleParticle_t(25, higgs_0m));
      
      mela.setInputEvent(&daughters_ZZ_0m, &associated_0m, (SimpleParticleCollection_t*)0, false);
      mela.computeProdP(ME_0m, false);
    }
    
    KD_0pm = ME_0pm / (ME_0pm+ME_0m);
    KD_0m = ME_0m / (ME_0pm+ME_0m);
    
    cout << "ME_0pm: "<<ME_0pm <<", ME_0m: "<<ME_0m << ", KD=" << KD_0pm << endl;
    
    newtree->Fill();
    recorded++;
    mela.resetInputEvent();
    // if (Cut(ientry) < 0) continue;
  }
  
  foutput->WriteTObject(newtree);
  delete newtree;
  foutput->Close();
  finput_0pm->Close();
  finput_0m->Close();
}
