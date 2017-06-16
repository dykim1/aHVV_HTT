//read us fsa-trees and fill 1 2 3 d histos.
#define Fill3D_cxx
#include "Fill3D.h"
#include <TH2.h>
#include <TH3.h>
#include <TStyle.h>
#include <TCanvas.h>
using namespace std;

void Fill3D::Loop()
{
  
  TFile* foutput = new TFile("aHVV_nDhists.root", "recreate");
  float binsMjj[5]={300,700,1100,1500,2000};
  float binsHtt[6]={0,95,115,135,155,400};
  float binsD0[6]={0,0.2,0.4,0.6,0.8,1};
  TH1D *h_Mjj=new TH1D("h_Mjj","h_Mjj",4,binsMjj);
  TH1D *h_Htt=new TH1D("h_Htt","h_Htt",4,binsHtt);
  TH1D *h_D0=new TH1D("h_D0","h_D0",5,binsD0);
  TH2D *h_MjjHtt= new TH2D("h_MjjHtt","h_MjjHtt",4,binsMjj,5,binsHtt);
  TH3D *h_MjjHttD0 = new TH3D("h_MjjHttD0", "h_MjjHttD0", 4,binsMjj,5,binsHtt,5,binsD0);


  if (fChain == 0) return;

   Long64_t nentries = fChain->GetEntriesFast();

   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;
      h_Mjj->Fill(mjj);
      h_Htt->Fill(m_sv);
      h_D0->Fill(KD_bsm_mlt);
      h_MjjHtt->Fill(mjj,m_sv);
      h_MjjHttD0->Fill(mjj,m_sv,KD_bsm_mlt);
      
   }
   foutput->Write();
   foutput->Close();
}
