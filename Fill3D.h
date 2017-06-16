//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu Jun 15 16:16:48 2017 by ROOT version 6.08/04
// from TTree mutau_tree/mutau_tree
// found on file: treeME_mrgd_VBFHtoTauTau125_cecile_old.root
//////////////////////////////////////////////////////////

#ifndef Fill3D_h
#define Fill3D_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

class Fill3D {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Int_t           run;
   Int_t           lumi;
   Int_t           evt;
   Float_t         genDR_2;
   Float_t         npv;
   Float_t         npu;
   Float_t         amcatNLO_weight;
   Float_t         pt_1;
   Float_t         px_1;
   Float_t         py_1;
   Float_t         pz_1;
   Float_t         phi_1;
   Float_t         eta_1;
   Float_t         m_1;
   Float_t         e_1;
   Float_t         q_1;
   Float_t         mt_1;
   Float_t         iso_1;
   Float_t         iso_1_v2;
   Float_t         id_m_medium_1;
   Float_t         id_m_medium2016_1;
   Float_t         genpX;
   Float_t         genpY;
   Float_t         genpT;
   Float_t         genM;
   Float_t         vispX;
   Float_t         vispY;
   Float_t         matchIsoMu22eta2p1_1;
   Float_t         matchIsoTkMu22eta2p1_1;
   Float_t         matchIsoMu22_1;
   Float_t         matchIsoTkMu22_1;
   Float_t         matchIsoMu24_1;
   Float_t         matchIsoTkMu24_1;
   Float_t         matchIsoMu19Tau20_1;
   Float_t         matchIsoMu21Tau20_1;
   Float_t         filterIsoMu22eta2p1_1;
   Float_t         filterIsoTkMu22eta2p1_1;
   Float_t         filterIsoMu22_1;
   Float_t         filterIsoTkMu22_1;
   Float_t         filterIsoMu24_1;
   Float_t         filterIsoTkMu24_1;
   Float_t         filterIsoMu19Tau20_1;
   Float_t         filterIsoMu21Tau20_1;
   Float_t         passIsoMu22eta2p1;
   Float_t         passIsoTkMu22eta2p1;
   Float_t         passIsoMu22;
   Float_t         passIsoTkMu22;
   Float_t         passIsoMu24;
   Float_t         passIsoTkMu24;
   Float_t         passIsoMu19Tau20;
   Float_t         passIsoMu21Tau20;
   Float_t         matchIsoMu19Tau20_2;
   Float_t         matchIsoMu21Tau20_2;
   Float_t         filterIsoMu19Tau20_2;
   Float_t         filterIsoMu21Tau20_2;
   Float_t         flag_goodVertices;
   Float_t         flag_globalTightHalo2016;
   Float_t         flag_eeBadSc;
   Float_t         flag_badGlobalMuon;
   Float_t         flag_badCloneMuon;
   Float_t         flag_HBHENoiseIso;
   Float_t         flag_HBHENoise;
   Float_t         flag_EcalDeadCellTriggerPrimitive;
   Float_t         flag_BadPFMuon;
   Float_t         flag_BadChargedCandidate;
   Float_t         pt_2;
   Float_t         phi_2;
   Float_t         eta_2;
   Float_t         px_2;
   Float_t         py_2;
   Float_t         pz_2;
   Float_t         m_2;
   Float_t         e_2;
   Float_t         q_2;
   Float_t         mt_2;
   Float_t         iso_2;
   Float_t         l2_decayMode;
   Float_t         againstElectronVLooseMVA6_2;
   Float_t         againstMuonTight3_2;
   Float_t         byVLooseIsolationMVArun2v1DBoldDMwLT_2;
   Float_t         byLooseIsolationMVArun2v1DBoldDMwLT_2;
   Float_t         byMediumIsolationMVArun2v1DBoldDMwLT_2;
   Float_t         byTightIsolationMVArun2v1DBoldDMwLT_2;
   Float_t         byVTightIsolationMVArun2v1DBoldDMwLT_2;
   Float_t         byVVTightIsolationMVArun2v1DBoldDMwLT_2;
   Float_t         byIsolationMVA3oldDMwLTraw_2;
   Float_t         byVLooseIsolationRerunMVArun2v1DBoldDMwLT_2;
   Float_t         byLooseIsolationRerunMVArun2v1DBoldDMwLT_2;
   Float_t         byMediumIsolationRerunMVArun2v1DBoldDMwLT_2;
   Float_t         byTightIsolationRerunMVArun2v1DBoldDMwLT_2;
   Float_t         byVTightIsolationRerunMVArun2v1DBoldDMwLT_2;
   Float_t         byVVTightIsolationRerunMVArun2v1DBoldDMwLT_2;
   Float_t         byIsolationRerunMVA3oldDMwLTraw_2;
   Float_t         numGenJets;
   Float_t         jetPt_2;
   Float_t         pt_top1;
   Float_t         pt_top2;
   Float_t         genweight;
   Float_t         met_JESDown;
   Float_t         met_UESDown;
   Float_t         met_JESUp;
   Float_t         met_UESUp;
   Float_t         metphi_JESDown;
   Float_t         metphi_TESDown;
   Float_t         metphi_UESDown;
   Float_t         metphi_JESUp;
   Float_t         metphi_UESUp;
   Float_t         met;
   Float_t         metSig;
   Float_t         metcov00;
   Float_t         metcov10;
   Float_t         metcov11;
   Float_t         metcov01;
   Float_t         metcov00_v2;
   Float_t         metcov10_v2;
   Float_t         metcov11_v2;
   Float_t         metcov01_v2;
   Float_t         metphi;
   Float_t         met_px;
   Float_t         met_py;
   Float_t         pzetavis;
   Float_t         pzetamiss;
   Float_t         mjj;
   Float_t         mjj_JESUp;
   Float_t         mjj_JESDown;
   Int_t           gen_match_1;
   Int_t           gen_match_2;
   Int_t           njets_JetAbsoluteFlavMapDown;
   Float_t         mjj_JetAbsoluteFlavMapDown;
   Int_t           njets_JetAbsoluteMPFBiasDown;
   Float_t         mjj_JetAbsoluteMPFBiasDown;
   Int_t           njets_JetAbsoluteScaleDown;
   Float_t         mjj_JetAbsoluteScaleDown;
   Int_t           njets_JetAbsoluteStatDown;
   Float_t         mjj_JetAbsoluteStatDown;
   Int_t           njets_JetEnDown;
   Float_t         mjj_JetEnDown;
   Int_t           njets_JetFlavorQCDDown;
   Float_t         mjj_JetFlavorQCDDown;
   Int_t           njets_JetFragmentationDown;
   Float_t         mjj_JetFragmentationDown;
   Int_t           njets_JetPileUpDataMCDown;
   Float_t         mjj_JetPileUpDataMCDown;
   Int_t           njets_JetPileUpPtBBDown;
   Float_t         mjj_JetPileUpPtBBDown;
   Int_t           njets_JetPileUpPtEC1Down;
   Float_t         mjj_JetPileUpPtEC1Down;
   Int_t           njets_JetPileUpPtEC2Down;
   Float_t         mjj_JetPileUpPtEC2Down;
   Int_t           njets_JetPileUpPtHFDown;
   Float_t         mjj_JetPileUpPtHFDown;
   Int_t           njets_JetPileUpPtRefDown;
   Float_t         mjj_JetPileUpPtRefDown;
   Int_t           njets_JetRelativeBalDown;
   Float_t         mjj_JetRelativeBalDown;
   Int_t           njets_JetRelativeFSRDown;
   Float_t         mjj_JetRelativeFSRDown;
   Int_t           njets_JetRelativeJEREC1Down;
   Float_t         mjj_JetRelativeJEREC1Down;
   Int_t           njets_JetRelativeJEREC2Down;
   Float_t         mjj_JetRelativeJEREC2Down;
   Int_t           njets_JetRelativeJERHFDown;
   Float_t         mjj_JetRelativeJERHFDown;
   Int_t           njets_JetRelativePtBBDown;
   Float_t         mjj_JetRelativePtBBDown;
   Int_t           njets_JetRelativePtEC1Down;
   Float_t         mjj_JetRelativePtEC1Down;
   Int_t           njets_JetRelativePtEC2Down;
   Float_t         mjj_JetRelativePtEC2Down;
   Int_t           njets_JetRelativePtHFDown;
   Float_t         mjj_JetRelativePtHFDown;
   Int_t           njets_JetRelativeStatECDown;
   Float_t         mjj_JetRelativeStatECDown;
   Int_t           njets_JetRelativeStatFSRDown;
   Float_t         mjj_JetRelativeStatFSRDown;
   Int_t           njets_JetRelativeStatHFDown;
   Float_t         mjj_JetRelativeStatHFDown;
   Int_t           njets_JetSinglePionECALDown;
   Float_t         mjj_JetSinglePionECALDown;
   Int_t           njets_JetSinglePionHCALDown;
   Float_t         mjj_JetSinglePionHCALDown;
   Int_t           njets_JetTimePtEtaDown;
   Float_t         mjj_JetTimePtEtaDown;
   Int_t           njets_JetAbsoluteFlavMapUp;
   Float_t         mjj_JetAbsoluteFlavMapUp;
   Int_t           njets_JetAbsoluteMPFBiasUp;
   Float_t         mjj_JetAbsoluteMPFBiasUp;
   Int_t           njets_JetAbsoluteScaleUp;
   Float_t         mjj_JetAbsoluteScaleUp;
   Int_t           njets_JetAbsoluteStatUp;
   Float_t         mjj_JetAbsoluteStatUp;
   Int_t           njets_JetEnUp;
   Float_t         mjj_JetEnUp;
   Int_t           njets_JetFlavorQCDUp;
   Float_t         mjj_JetFlavorQCDUp;
   Int_t           njets_JetFragmentationUp;
   Float_t         mjj_JetFragmentationUp;
   Int_t           njets_JetPileUpDataMCUp;
   Float_t         mjj_JetPileUpDataMCUp;
   Int_t           njets_JetPileUpPtBBUp;
   Float_t         mjj_JetPileUpPtBBUp;
   Int_t           njets_JetPileUpPtEC1Up;
   Float_t         mjj_JetPileUpPtEC1Up;
   Int_t           njets_JetPileUpPtEC2Up;
   Float_t         mjj_JetPileUpPtEC2Up;
   Int_t           njets_JetPileUpPtHFUp;
   Float_t         mjj_JetPileUpPtHFUp;
   Int_t           njets_JetPileUpPtRefUp;
   Float_t         mjj_JetPileUpPtRefUp;
   Int_t           njets_JetRelativeBalUp;
   Float_t         mjj_JetRelativeBalUp;
   Int_t           njets_JetRelativeFSRUp;
   Float_t         mjj_JetRelativeFSRUp;
   Int_t           njets_JetRelativeJEREC1Up;
   Float_t         mjj_JetRelativeJEREC1Up;
   Int_t           njets_JetRelativeJEREC2Up;
   Float_t         mjj_JetRelativeJEREC2Up;
   Int_t           njets_JetRelativeJERHFUp;
   Float_t         mjj_JetRelativeJERHFUp;
   Int_t           njets_JetRelativePtBBUp;
   Float_t         mjj_JetRelativePtBBUp;
   Int_t           njets_JetRelativePtEC1Up;
   Float_t         mjj_JetRelativePtEC1Up;
   Int_t           njets_JetRelativePtEC2Up;
   Float_t         mjj_JetRelativePtEC2Up;
   Int_t           njets_JetRelativePtHFUp;
   Float_t         mjj_JetRelativePtHFUp;
   Int_t           njets_JetRelativeStatECUp;
   Float_t         mjj_JetRelativeStatECUp;
   Int_t           njets_JetRelativeStatFSRUp;
   Float_t         mjj_JetRelativeStatFSRUp;
   Int_t           njets_JetRelativeStatHFUp;
   Float_t         mjj_JetRelativeStatHFUp;
   Int_t           njets_JetSinglePionECALUp;
   Float_t         mjj_JetSinglePionECALUp;
   Int_t           njets_JetSinglePionHCALUp;
   Float_t         mjj_JetSinglePionHCALUp;
   Int_t           njets_JetTimePtEtaUp;
   Float_t         mjj_JetTimePtEtaUp;
   Int_t           nbtag;
   Int_t           njets;
   Int_t           njets_JESDown;
   Int_t           njets_JESUp;
   Float_t         jpt_1;
   Float_t         jeta_1;
   Float_t         jphi_1;
   Float_t         jcsv_1;
   Float_t         jpt_2;
   Float_t         jeta_2;
   Float_t         jphi_2;
   Float_t         jcsv_2;
   Float_t         bpt_1;
   Float_t         beta_1;
   Float_t         bphi_1;
   Float_t         bcsv_1;
   Float_t         bflavor_1;
   Float_t         bpt_2;
   Float_t         beta_2;
   Float_t         bphi_2;
   Float_t         bcsv_2;
   Float_t         bflavor_2;
   Float_t         m_sv;
   Float_t         pt_sv;
   Float_t         eta_sv;
   Float_t         phi_sv;
   Float_t         met_sv;
   Float_t         mt_sv;
   Float_t         metcorr_ex;
   Float_t         metcorr_ey;
   Float_t         metcor;
   Float_t         metcorphi;
   Float_t         m_sv_UP;
   Float_t         pt_sv_UP;
   Float_t         eta_sv_UP;
   Float_t         phi_sv_UP;
   Float_t         met_sv_UP;
   Float_t         mt_sv_UP;
   Float_t         m_sv_DOWN;
   Float_t         pt_sv_DOWN;
   Float_t         eta_sv_DOWN;
   Float_t         phi_sv_DOWN;
   Float_t         met_sv_DOWN;
   Float_t         mt_sv_DOWN;
   Float_t         KD_bsm_mlt;
   Float_t         KD_int;

   // List of branches
   TBranch        *b_run;   //!
   TBranch        *b_lumi;   //!
   TBranch        *b_evt;   //!
   TBranch        *b_genDR_2;   //!
   TBranch        *b_npv;   //!
   TBranch        *b_npu;   //!
   TBranch        *b_aMCatNLO_weight;   //!
   TBranch        *b_pt_1;   //!
   TBranch        *b_px_1;   //!
   TBranch        *b_py_1;   //!
   TBranch        *b_pz_1;   //!
   TBranch        *b_phi_1;   //!
   TBranch        *b_eta_1;   //!
   TBranch        *b_m_1;   //!
   TBranch        *b_e_1;   //!
   TBranch        *b_q_1;   //!
   TBranch        *b_mt_1;   //!
   TBranch        *b_iso_1;   //!
   TBranch        *b_iso_1_v2;   //!
   TBranch        *b_id_m_medium_1;   //!
   TBranch        *b_id_m_medium2016_1;   //!
   TBranch        *b_genpX;   //!
   TBranch        *b_genpY;   //!
   TBranch        *b_genpT;   //!
   TBranch        *b_genM;   //!
   TBranch        *b_vispX;   //!
   TBranch        *b_vispY;   //!
   TBranch        *b_matchIsoMu22eta2p1_1;   //!
   TBranch        *b_matchIsoTkMu22eta2p1_1;   //!
   TBranch        *b_matchIsoMu22_1;   //!
   TBranch        *b_matchIsoTkMu22_1;   //!
   TBranch        *b_matchIsoMu24_1;   //!
   TBranch        *b_matchIsoTkMu24_1;   //!
   TBranch        *b_matchIsoMu19Tau20_1;   //!
   TBranch        *b_matchIsoMu21Tau20_1;   //!
   TBranch        *b_filterIsoMu22eta2p1_1;   //!
   TBranch        *b_filterIsoTkMu22eta2p1_1;   //!
   TBranch        *b_filterIsoMu22_1;   //!
   TBranch        *b_filterIsoTkMu22_1;   //!
   TBranch        *b_filterIsoMu24_1;   //!
   TBranch        *b_filterIsoTkMu24_1;   //!
   TBranch        *b_filterIsoMu19Tau20_1;   //!
   TBranch        *b_filterIsoMu21Tau20_1;   //!
   TBranch        *b_passIsoMu22eta2p1;   //!
   TBranch        *b_passIsoTkMu22eta2p1;   //!
   TBranch        *b_passIsoMu22;   //!
   TBranch        *b_passIsoTkMu22;   //!
   TBranch        *b_passIsoMu24;   //!
   TBranch        *b_passIsoTkMu24;   //!
   TBranch        *b_passIsoMu19Tau20;   //!
   TBranch        *b_passIsoMu21Tau20;   //!
   TBranch        *b_matchIsoMu19Tau20_2;   //!
   TBranch        *b_matchIsoMu21Tau20_2;   //!
   TBranch        *b_filterIsoMu19Tau20_2;   //!
   TBranch        *b_filterIsoMu21Tau20_2;   //!
   TBranch        *b_flag_goodVertices;   //!
   TBranch        *b_flag_globalTightHalo2016;   //!
   TBranch        *b_flag_eeBadSc;   //!
   TBranch        *b_flag_badGlobalMuon;   //!
   TBranch        *b_flag_badCloneMuon;   //!
   TBranch        *b_flag_HBHENoiseIso;   //!
   TBranch        *b_flag_HBHENoise;   //!
   TBranch        *b_flag_EcalDeadCellTriggerPrimitive;   //!
   TBranch        *b_flag_BadPFMuon;   //!
   TBranch        *b_flag_BadChargedCandidate;   //!
   TBranch        *b_pt_2;   //!
   TBranch        *b_phi_2;   //!
   TBranch        *b_eta_2;   //!
   TBranch        *b_px_2;   //!
   TBranch        *b_py_2;   //!
   TBranch        *b_pz_2;   //!
   TBranch        *b_m_2;   //!
   TBranch        *b_e_2;   //!
   TBranch        *b_q_2;   //!
   TBranch        *b_mt_2;   //!
   TBranch        *b_iso_2;   //!
   TBranch        *b_l2_decayMode;   //!
   TBranch        *b_againstElectronVLooseMVA6_2;   //!
   TBranch        *b_againstMuonTight3_2;   //!
   TBranch        *b_byVLooseIsolationMVArun2v1DBoldDMwLT_2;   //!
   TBranch        *b_byLooseIsolationMVArun2v1DBoldDMwLT_2;   //!
   TBranch        *b_byMediumIsolationMVArun2v1DBoldDMwLT_2;   //!
   TBranch        *b_byTightIsolationMVArun2v1DBoldDMwLT_2;   //!
   TBranch        *b_byVTightIsolationMVArun2v1DBoldDMwLT_2;   //!
   TBranch        *b_byVVTightIsolationMVArun2v1DBoldDMwLT_2;   //!
   TBranch        *b_byIsolationMVA3oldDMwLTraw_2;   //!
   TBranch        *b_byVLooseIsolationRerunMVArun2v1DBoldDMwLT_2;   //!
   TBranch        *b_byLooseIsolationRerunMVArun2v1DBoldDMwLT_2;   //!
   TBranch        *b_byMediumIsolationRerunMVArun2v1DBoldDMwLT_2;   //!
   TBranch        *b_byTightIsolationRerunMVArun2v1DBoldDMwLT_2;   //!
   TBranch        *b_byVTightIsolationRerunMVArun2v1DBoldDMwLT_2;   //!
   TBranch        *b_byVVTightIsolationRerunMVArun2v1DBoldDMwLT_2;   //!
   TBranch        *b_byIsolationRerunMVA3oldDMwLTraw_2;   //!
   TBranch        *b_numGenJets;   //!
   TBranch        *b_jetPt_2;   //!
   TBranch        *b_pt_top1;   //!
   TBranch        *b_pt_top2;   //!
   TBranch        *b_genweight;   //!
   TBranch        *b_met_JESDown;   //!
   TBranch        *b_met_UESDown;   //!
   TBranch        *b_met_JESUp;   //!
   TBranch        *b_met_UESUp;   //!
   TBranch        *b_metphi_JESDown;   //!
   TBranch        *b_metphi_TESDown;   //!
   TBranch        *b_metphi_UESDown;   //!
   TBranch        *b_metphi_JESUp;   //!
   TBranch        *b_metphi_UESUp;   //!
   TBranch        *b_met;   //!
   TBranch        *b_metSig;   //!
   TBranch        *b_metcov00;   //!
   TBranch        *b_metcov10;   //!
   TBranch        *b_metcov11;   //!
   TBranch        *b_metcov01;   //!
   TBranch        *b_metcov00_v2;   //!
   TBranch        *b_metcov10_v2;   //!
   TBranch        *b_metcov11_v2;   //!
   TBranch        *b_metcov01_v2;   //!
   TBranch        *b_metphi;   //!
   TBranch        *b_met_px;   //!
   TBranch        *b_met_py;   //!
   TBranch        *b_pzetavis;   //!
   TBranch        *b_pzetamiss;   //!
   TBranch        *b_mjj;   //!
   TBranch        *b_mjj_JESUp;   //!
   TBranch        *b_mjj_JESDown;   //!
   TBranch        *b_gen_match_1;   //!
   TBranch        *b_gen_match_2;   //!
   TBranch        *b_njets_JetAbsoluteFlavMapDown;   //!
   TBranch        *b_mjj_JetAbsoluteFlavMapDown;   //!
   TBranch        *b_njets_JetAbsoluteMPFBiasDown;   //!
   TBranch        *b_mjj_JetAbsoluteMPFBiasDown;   //!
   TBranch        *b_njets_JetAbsoluteScaleDown;   //!
   TBranch        *b_mjj_JetAbsoluteScaleDown;   //!
   TBranch        *b_njets_JetAbsoluteStatDown;   //!
   TBranch        *b_mjj_JetAbsoluteStatDown;   //!
   TBranch        *b_njets_JetEnDown;   //!
   TBranch        *b_mjj_JetEnDown;   //!
   TBranch        *b_njets_JetFlavorQCDDown;   //!
   TBranch        *b_mjj_JetFlavorQCDDown;   //!
   TBranch        *b_njets_JetFragmentationDown;   //!
   TBranch        *b_mjj_JetFragmentationDown;   //!
   TBranch        *b_njets_JetPileUpDataMCDown;   //!
   TBranch        *b_mjj_JetPileUpDataMCDown;   //!
   TBranch        *b_njets_JetPileUpPtBBDown;   //!
   TBranch        *b_mjj_JetPileUpPtBBDown;   //!
   TBranch        *b_njets_JetPileUpPtEC1Down;   //!
   TBranch        *b_mjj_JetPileUpPtEC1Down;   //!
   TBranch        *b_njets_JetPileUpPtEC2Down;   //!
   TBranch        *b_mjj_JetPileUpPtEC2Down;   //!
   TBranch        *b_njets_JetPileUpPtHFDown;   //!
   TBranch        *b_mjj_JetPileUpPtHFDown;   //!
   TBranch        *b_njets_JetPileUpPtRefDown;   //!
   TBranch        *b_mjj_JetPileUpPtRefDown;   //!
   TBranch        *b_njets_JetRelativeBalDown;   //!
   TBranch        *b_mjj_JetRelativeBalDown;   //!
   TBranch        *b_njets_JetRelativeFSRDown;   //!
   TBranch        *b_mjj_JetRelativeFSRDown;   //!
   TBranch        *b_njets_JetRelativeJEREC1Down;   //!
   TBranch        *b_mjj_JetRelativeJEREC1Down;   //!
   TBranch        *b_njets_JetRelativeJEREC2Down;   //!
   TBranch        *b_mjj_JetRelativeJEREC2Down;   //!
   TBranch        *b_njets_JetRelativeJERHFDown;   //!
   TBranch        *b_mjj_JetRelativeJERHFDown;   //!
   TBranch        *b_njets_JetRelativePtBBDown;   //!
   TBranch        *b_mjj_JetRelativePtBBDown;   //!
   TBranch        *b_njets_JetRelativePtEC1Down;   //!
   TBranch        *b_mjj_JetRelativePtEC1Down;   //!
   TBranch        *b_njets_JetRelativePtEC2Down;   //!
   TBranch        *b_mjj_JetRelativePtEC2Down;   //!
   TBranch        *b_njets_JetRelativePtHFDown;   //!
   TBranch        *b_mjj_JetRelativePtHFDown;   //!
   TBranch        *b_njets_JetRelativeStatECDown;   //!
   TBranch        *b_mjj_JetRelativeStatECDown;   //!
   TBranch        *b_njets_JetRelativeStatFSRDown;   //!
   TBranch        *b_mjj_JetRelativeStatFSRDown;   //!
   TBranch        *b_njets_JetRelativeStatHFDown;   //!
   TBranch        *b_mjj_JetRelativeStatHFDown;   //!
   TBranch        *b_njets_JetSinglePionECALDown;   //!
   TBranch        *b_mjj_JetSinglePionECALDown;   //!
   TBranch        *b_njets_JetSinglePionHCALDown;   //!
   TBranch        *b_mjj_JetSinglePionHCALDown;   //!
   TBranch        *b_njets_JetTimePtEtaDown;   //!
   TBranch        *b_mjj_JetTimePtEtaDown;   //!
   TBranch        *b_njets_JetAbsoluteFlavMapUp;   //!
   TBranch        *b_mjj_JetAbsoluteFlavMapUp;   //!
   TBranch        *b_njets_JetAbsoluteMPFBiasUp;   //!
   TBranch        *b_mjj_JetAbsoluteMPFBiasUp;   //!
   TBranch        *b_njets_JetAbsoluteScaleUp;   //!
   TBranch        *b_mjj_JetAbsoluteScaleUp;   //!
   TBranch        *b_njets_JetAbsoluteStatUp;   //!
   TBranch        *b_mjj_JetAbsoluteStatUp;   //!
   TBranch        *b_njets_JetEnUp;   //!
   TBranch        *b_mjj_JetEnUp;   //!
   TBranch        *b_njets_JetFlavorQCDUp;   //!
   TBranch        *b_mjj_JetFlavorQCDUp;   //!
   TBranch        *b_njets_JetFragmentationUp;   //!
   TBranch        *b_mjj_JetFragmentationUp;   //!
   TBranch        *b_njets_JetPileUpDataMCUp;   //!
   TBranch        *b_mjj_JetPileUpDataMCUp;   //!
   TBranch        *b_njets_JetPileUpPtBBUp;   //!
   TBranch        *b_mjj_JetPileUpPtBBUp;   //!
   TBranch        *b_njets_JetPileUpPtEC1Up;   //!
   TBranch        *b_mjj_JetPileUpPtEC1Up;   //!
   TBranch        *b_njets_JetPileUpPtEC2Up;   //!
   TBranch        *b_mjj_JetPileUpPtEC2Up;   //!
   TBranch        *b_njets_JetPileUpPtHFUp;   //!
   TBranch        *b_mjj_JetPileUpPtHFUp;   //!
   TBranch        *b_njets_JetPileUpPtRefUp;   //!
   TBranch        *b_mjj_JetPileUpPtRefUp;   //!
   TBranch        *b_njets_JetRelativeBalUp;   //!
   TBranch        *b_mjj_JetRelativeBalUp;   //!
   TBranch        *b_njets_JetRelativeFSRUp;   //!
   TBranch        *b_mjj_JetRelativeFSRUp;   //!
   TBranch        *b_njets_JetRelativeJEREC1Up;   //!
   TBranch        *b_mjj_JetRelativeJEREC1Up;   //!
   TBranch        *b_njets_JetRelativeJEREC2Up;   //!
   TBranch        *b_mjj_JetRelativeJEREC2Up;   //!
   TBranch        *b_njets_JetRelativeJERHFUp;   //!
   TBranch        *b_mjj_JetRelativeJERHFUp;   //!
   TBranch        *b_njets_JetRelativePtBBUp;   //!
   TBranch        *b_mjj_JetRelativePtBBUp;   //!
   TBranch        *b_njets_JetRelativePtEC1Up;   //!
   TBranch        *b_mjj_JetRelativePtEC1Up;   //!
   TBranch        *b_njets_JetRelativePtEC2Up;   //!
   TBranch        *b_mjj_JetRelativePtEC2Up;   //!
   TBranch        *b_njets_JetRelativePtHFUp;   //!
   TBranch        *b_mjj_JetRelativePtHFUp;   //!
   TBranch        *b_njets_JetRelativeStatECUp;   //!
   TBranch        *b_mjj_JetRelativeStatECUp;   //!
   TBranch        *b_njets_JetRelativeStatFSRUp;   //!
   TBranch        *b_mjj_JetRelativeStatFSRUp;   //!
   TBranch        *b_njets_JetRelativeStatHFUp;   //!
   TBranch        *b_mjj_JetRelativeStatHFUp;   //!
   TBranch        *b_njets_JetSinglePionECALUp;   //!
   TBranch        *b_mjj_JetSinglePionECALUp;   //!
   TBranch        *b_njets_JetSinglePionHCALUp;   //!
   TBranch        *b_mjj_JetSinglePionHCALUp;   //!
   TBranch        *b_njets_JetTimePtEtaUp;   //!
   TBranch        *b_mjj_JetTimePtEtaUp;   //!
   TBranch        *b_nbtag;   //!
   TBranch        *b_njets;   //!
   TBranch        *b_njets_JESDown;   //!
   TBranch        *b_njets_JESUp;   //!
   TBranch        *b_jpt_1;   //!
   TBranch        *b_jeta_1;   //!
   TBranch        *b_jphi_1;   //!
   TBranch        *b_jcsv_1;   //!
   TBranch        *b_jpt_2;   //!
   TBranch        *b_jeta_2;   //!
   TBranch        *b_jphi_2;   //!
   TBranch        *b_jcsv_2;   //!
   TBranch        *b_bpt_1;   //!
   TBranch        *b_beta_1;   //!
   TBranch        *b_bphi_1;   //!
   TBranch        *b_bcsv_1;   //!
   TBranch        *b_bflavor_1;   //!
   TBranch        *b_bpt_2;   //!
   TBranch        *b_beta_2;   //!
   TBranch        *b_bphi_2;   //!
   TBranch        *b_bcsv_2;   //!
   TBranch        *b_bflavor_2;   //!
   TBranch        *b_m_sv;   //!
   TBranch        *b_pt_sv;   //!
   TBranch        *b_eta_sv;   //!
   TBranch        *b_phi_sv;   //!
   TBranch        *b_met_sv;   //!
   TBranch        *b_mt_sv;   //!
   TBranch        *b_metcorr_ex;   //!
   TBranch        *b_metcorr_ey;   //!
   TBranch        *b_metcor;   //!
   TBranch        *b_metcorphi;   //!
   TBranch        *b_m_sv_UP;   //!
   TBranch        *b_pt_sv_UP;   //!
   TBranch        *b_eta_sv_UP;   //!
   TBranch        *b_phi_sv_UP;   //!
   TBranch        *b_met_sv_UP;   //!
   TBranch        *b_mt_sv_UP;   //!
   TBranch        *b_m_sv_DOWN;   //!
   TBranch        *b_pt_sv_DOWN;   //!
   TBranch        *b_eta_sv_DOWN;   //!
   TBranch        *b_phi_sv_DOWN;   //!
   TBranch        *b_met_sv_DOWN;   //!
   TBranch        *b_mt_sv_DOWN;   //!
   TBranch        *b_KD_bsm_mlt;   //!
   TBranch        *b_KD_int;   //!

   Fill3D(TTree *tree=0);
   virtual ~Fill3D();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef Fill3D_cxx
Fill3D::Fill3D(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("treeME_mrgd_svFit_June8_VBF0M.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("treeME_mrgd_svFit_June8_VBF0M.root");
      }
      f->GetObject("mutau_tree",tree);

   }
   Init(tree);
}

Fill3D::~Fill3D()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t Fill3D::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t Fill3D::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void Fill3D::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("run", &run, &b_run);
   fChain->SetBranchAddress("lumi", &lumi, &b_lumi);
   fChain->SetBranchAddress("evt", &evt, &b_evt);
   fChain->SetBranchAddress("genDR_2", &genDR_2, &b_genDR_2);
   fChain->SetBranchAddress("npv", &npv, &b_npv);
   fChain->SetBranchAddress("npu", &npu, &b_npu);
   fChain->SetBranchAddress("amcatNLO_weight", &amcatNLO_weight, &b_aMCatNLO_weight);
   fChain->SetBranchAddress("pt_1", &pt_1, &b_pt_1);
   fChain->SetBranchAddress("px_1", &px_1, &b_px_1);
   fChain->SetBranchAddress("py_1", &py_1, &b_py_1);
   fChain->SetBranchAddress("pz_1", &pz_1, &b_pz_1);
   fChain->SetBranchAddress("phi_1", &phi_1, &b_phi_1);
   fChain->SetBranchAddress("eta_1", &eta_1, &b_eta_1);
   fChain->SetBranchAddress("m_1", &m_1, &b_m_1);
   fChain->SetBranchAddress("e_1", &e_1, &b_e_1);
   fChain->SetBranchAddress("q_1", &q_1, &b_q_1);
   fChain->SetBranchAddress("mt_1", &mt_1, &b_mt_1);
   fChain->SetBranchAddress("iso_1", &iso_1, &b_iso_1);
   fChain->SetBranchAddress("iso_1_v2", &iso_1_v2, &b_iso_1_v2);
   fChain->SetBranchAddress("id_m_medium_1", &id_m_medium_1, &b_id_m_medium_1);
   fChain->SetBranchAddress("id_m_medium2016_1", &id_m_medium2016_1, &b_id_m_medium2016_1);
   fChain->SetBranchAddress("genpX", &genpX, &b_genpX);
   fChain->SetBranchAddress("genpY", &genpY, &b_genpY);
   fChain->SetBranchAddress("genpT", &genpT, &b_genpT);
   fChain->SetBranchAddress("genM", &genM, &b_genM);
   fChain->SetBranchAddress("vispX", &vispX, &b_vispX);
   fChain->SetBranchAddress("vispY", &vispY, &b_vispY);
   fChain->SetBranchAddress("matchIsoMu22eta2p1_1", &matchIsoMu22eta2p1_1, &b_matchIsoMu22eta2p1_1);
   fChain->SetBranchAddress("matchIsoTkMu22eta2p1_1", &matchIsoTkMu22eta2p1_1, &b_matchIsoTkMu22eta2p1_1);
   fChain->SetBranchAddress("matchIsoMu22_1", &matchIsoMu22_1, &b_matchIsoMu22_1);
   fChain->SetBranchAddress("matchIsoTkMu22_1", &matchIsoTkMu22_1, &b_matchIsoTkMu22_1);
   fChain->SetBranchAddress("matchIsoMu24_1", &matchIsoMu24_1, &b_matchIsoMu24_1);
   fChain->SetBranchAddress("matchIsoTkMu24_1", &matchIsoTkMu24_1, &b_matchIsoTkMu24_1);
   fChain->SetBranchAddress("matchIsoMu19Tau20_1", &matchIsoMu19Tau20_1, &b_matchIsoMu19Tau20_1);
   fChain->SetBranchAddress("matchIsoMu21Tau20_1", &matchIsoMu21Tau20_1, &b_matchIsoMu21Tau20_1);
   fChain->SetBranchAddress("filterIsoMu22eta2p1_1", &filterIsoMu22eta2p1_1, &b_filterIsoMu22eta2p1_1);
   fChain->SetBranchAddress("filterIsoTkMu22eta2p1_1", &filterIsoTkMu22eta2p1_1, &b_filterIsoTkMu22eta2p1_1);
   fChain->SetBranchAddress("filterIsoMu22_1", &filterIsoMu22_1, &b_filterIsoMu22_1);
   fChain->SetBranchAddress("filterIsoTkMu22_1", &filterIsoTkMu22_1, &b_filterIsoTkMu22_1);
   fChain->SetBranchAddress("filterIsoMu24_1", &filterIsoMu24_1, &b_filterIsoMu24_1);
   fChain->SetBranchAddress("filterIsoTkMu24_1", &filterIsoTkMu24_1, &b_filterIsoTkMu24_1);
   fChain->SetBranchAddress("filterIsoMu19Tau20_1", &filterIsoMu19Tau20_1, &b_filterIsoMu19Tau20_1);
   fChain->SetBranchAddress("filterIsoMu21Tau20_1", &filterIsoMu21Tau20_1, &b_filterIsoMu21Tau20_1);
   fChain->SetBranchAddress("passIsoMu22eta2p1", &passIsoMu22eta2p1, &b_passIsoMu22eta2p1);
   fChain->SetBranchAddress("passIsoTkMu22eta2p1", &passIsoTkMu22eta2p1, &b_passIsoTkMu22eta2p1);
   fChain->SetBranchAddress("passIsoMu22", &passIsoMu22, &b_passIsoMu22);
   fChain->SetBranchAddress("passIsoTkMu22", &passIsoTkMu22, &b_passIsoTkMu22);
   fChain->SetBranchAddress("passIsoMu24", &passIsoMu24, &b_passIsoMu24);
   fChain->SetBranchAddress("passIsoTkMu24", &passIsoTkMu24, &b_passIsoTkMu24);
   fChain->SetBranchAddress("passIsoMu19Tau20", &passIsoMu19Tau20, &b_passIsoMu19Tau20);
   fChain->SetBranchAddress("passIsoMu21Tau20", &passIsoMu21Tau20, &b_passIsoMu21Tau20);
   fChain->SetBranchAddress("matchIsoMu19Tau20_2", &matchIsoMu19Tau20_2, &b_matchIsoMu19Tau20_2);
   fChain->SetBranchAddress("matchIsoMu21Tau20_2", &matchIsoMu21Tau20_2, &b_matchIsoMu21Tau20_2);
   fChain->SetBranchAddress("filterIsoMu19Tau20_2", &filterIsoMu19Tau20_2, &b_filterIsoMu19Tau20_2);
   fChain->SetBranchAddress("filterIsoMu21Tau20_2", &filterIsoMu21Tau20_2, &b_filterIsoMu21Tau20_2);
   fChain->SetBranchAddress("flag_goodVertices", &flag_goodVertices, &b_flag_goodVertices);
   fChain->SetBranchAddress("flag_globalTightHalo2016", &flag_globalTightHalo2016, &b_flag_globalTightHalo2016);
   fChain->SetBranchAddress("flag_eeBadSc", &flag_eeBadSc, &b_flag_eeBadSc);
   fChain->SetBranchAddress("flag_badGlobalMuon", &flag_badGlobalMuon, &b_flag_badGlobalMuon);
   fChain->SetBranchAddress("flag_badCloneMuon", &flag_badCloneMuon, &b_flag_badCloneMuon);
   fChain->SetBranchAddress("flag_HBHENoiseIso", &flag_HBHENoiseIso, &b_flag_HBHENoiseIso);
   fChain->SetBranchAddress("flag_HBHENoise", &flag_HBHENoise, &b_flag_HBHENoise);
   fChain->SetBranchAddress("flag_EcalDeadCellTriggerPrimitive", &flag_EcalDeadCellTriggerPrimitive, &b_flag_EcalDeadCellTriggerPrimitive);
   fChain->SetBranchAddress("flag_BadPFMuon", &flag_BadPFMuon, &b_flag_BadPFMuon);
   fChain->SetBranchAddress("flag_BadChargedCandidate", &flag_BadChargedCandidate, &b_flag_BadChargedCandidate);
   fChain->SetBranchAddress("pt_2", &pt_2, &b_pt_2);
   fChain->SetBranchAddress("phi_2", &phi_2, &b_phi_2);
   fChain->SetBranchAddress("eta_2", &eta_2, &b_eta_2);
   fChain->SetBranchAddress("px_2", &px_2, &b_px_2);
   fChain->SetBranchAddress("py_2", &py_2, &b_py_2);
   fChain->SetBranchAddress("pz_2", &pz_2, &b_pz_2);
   fChain->SetBranchAddress("m_2", &m_2, &b_m_2);
   fChain->SetBranchAddress("e_2", &e_2, &b_e_2);
   fChain->SetBranchAddress("q_2", &q_2, &b_q_2);
   fChain->SetBranchAddress("mt_2", &mt_2, &b_mt_2);
   fChain->SetBranchAddress("iso_2", &iso_2, &b_iso_2);
   fChain->SetBranchAddress("l2_decayMode", &l2_decayMode, &b_l2_decayMode);
   fChain->SetBranchAddress("againstElectronVLooseMVA6_2", &againstElectronVLooseMVA6_2, &b_againstElectronVLooseMVA6_2);
   fChain->SetBranchAddress("againstMuonTight3_2", &againstMuonTight3_2, &b_againstMuonTight3_2);
   fChain->SetBranchAddress("byVLooseIsolationMVArun2v1DBoldDMwLT_2", &byVLooseIsolationMVArun2v1DBoldDMwLT_2, &b_byVLooseIsolationMVArun2v1DBoldDMwLT_2);
   fChain->SetBranchAddress("byLooseIsolationMVArun2v1DBoldDMwLT_2", &byLooseIsolationMVArun2v1DBoldDMwLT_2, &b_byLooseIsolationMVArun2v1DBoldDMwLT_2);
   fChain->SetBranchAddress("byMediumIsolationMVArun2v1DBoldDMwLT_2", &byMediumIsolationMVArun2v1DBoldDMwLT_2, &b_byMediumIsolationMVArun2v1DBoldDMwLT_2);
   fChain->SetBranchAddress("byTightIsolationMVArun2v1DBoldDMwLT_2", &byTightIsolationMVArun2v1DBoldDMwLT_2, &b_byTightIsolationMVArun2v1DBoldDMwLT_2);
   fChain->SetBranchAddress("byVTightIsolationMVArun2v1DBoldDMwLT_2", &byVTightIsolationMVArun2v1DBoldDMwLT_2, &b_byVTightIsolationMVArun2v1DBoldDMwLT_2);
   fChain->SetBranchAddress("byVVTightIsolationMVArun2v1DBoldDMwLT_2", &byVVTightIsolationMVArun2v1DBoldDMwLT_2, &b_byVVTightIsolationMVArun2v1DBoldDMwLT_2);
   fChain->SetBranchAddress("byIsolationMVA3oldDMwLTraw_2", &byIsolationMVA3oldDMwLTraw_2, &b_byIsolationMVA3oldDMwLTraw_2);
   fChain->SetBranchAddress("byVLooseIsolationRerunMVArun2v1DBoldDMwLT_2", &byVLooseIsolationRerunMVArun2v1DBoldDMwLT_2, &b_byVLooseIsolationRerunMVArun2v1DBoldDMwLT_2);
   fChain->SetBranchAddress("byLooseIsolationRerunMVArun2v1DBoldDMwLT_2", &byLooseIsolationRerunMVArun2v1DBoldDMwLT_2, &b_byLooseIsolationRerunMVArun2v1DBoldDMwLT_2);
   fChain->SetBranchAddress("byMediumIsolationRerunMVArun2v1DBoldDMwLT_2", &byMediumIsolationRerunMVArun2v1DBoldDMwLT_2, &b_byMediumIsolationRerunMVArun2v1DBoldDMwLT_2);
   fChain->SetBranchAddress("byTightIsolationRerunMVArun2v1DBoldDMwLT_2", &byTightIsolationRerunMVArun2v1DBoldDMwLT_2, &b_byTightIsolationRerunMVArun2v1DBoldDMwLT_2);
   fChain->SetBranchAddress("byVTightIsolationRerunMVArun2v1DBoldDMwLT_2", &byVTightIsolationRerunMVArun2v1DBoldDMwLT_2, &b_byVTightIsolationRerunMVArun2v1DBoldDMwLT_2);
   fChain->SetBranchAddress("byVVTightIsolationRerunMVArun2v1DBoldDMwLT_2", &byVVTightIsolationRerunMVArun2v1DBoldDMwLT_2, &b_byVVTightIsolationRerunMVArun2v1DBoldDMwLT_2);
   fChain->SetBranchAddress("byIsolationRerunMVA3oldDMwLTraw_2", &byIsolationRerunMVA3oldDMwLTraw_2, &b_byIsolationRerunMVA3oldDMwLTraw_2);
   fChain->SetBranchAddress("numGenJets", &numGenJets, &b_numGenJets);
   fChain->SetBranchAddress("jetPt_2", &jetPt_2, &b_jetPt_2);
   fChain->SetBranchAddress("pt_top1", &pt_top1, &b_pt_top1);
   fChain->SetBranchAddress("pt_top2", &pt_top2, &b_pt_top2);
   fChain->SetBranchAddress("genweight", &genweight, &b_genweight);
   fChain->SetBranchAddress("met_JESDown", &met_JESDown, &b_met_JESDown);
   fChain->SetBranchAddress("met_UESDown", &met_UESDown, &b_met_UESDown);
   fChain->SetBranchAddress("met_JESUp", &met_JESUp, &b_met_JESUp);
   fChain->SetBranchAddress("met_UESUp", &met_UESUp, &b_met_UESUp);
   fChain->SetBranchAddress("metphi_JESDown", &metphi_JESDown, &b_metphi_JESDown);
   fChain->SetBranchAddress("metphi_TESDown", &metphi_TESDown, &b_metphi_TESDown);
   fChain->SetBranchAddress("metphi_UESDown", &metphi_UESDown, &b_metphi_UESDown);
   fChain->SetBranchAddress("metphi_JESUp", &metphi_JESUp, &b_metphi_JESUp);
   fChain->SetBranchAddress("metphi_UESUp", &metphi_UESUp, &b_metphi_UESUp);
   fChain->SetBranchAddress("met", &met, &b_met);
   fChain->SetBranchAddress("metSig", &metSig, &b_metSig);
   fChain->SetBranchAddress("metcov00", &metcov00, &b_metcov00);
   fChain->SetBranchAddress("metcov10", &metcov10, &b_metcov10);
   fChain->SetBranchAddress("metcov11", &metcov11, &b_metcov11);
   fChain->SetBranchAddress("metcov01", &metcov01, &b_metcov01);
   fChain->SetBranchAddress("metcov00_v2", &metcov00_v2, &b_metcov00_v2);
   fChain->SetBranchAddress("metcov10_v2", &metcov10_v2, &b_metcov10_v2);
   fChain->SetBranchAddress("metcov11_v2", &metcov11_v2, &b_metcov11_v2);
   fChain->SetBranchAddress("metcov01_v2", &metcov01_v2, &b_metcov01_v2);
   fChain->SetBranchAddress("metphi", &metphi, &b_metphi);
   fChain->SetBranchAddress("met_px", &met_px, &b_met_px);
   fChain->SetBranchAddress("met_py", &met_py, &b_met_py);
   fChain->SetBranchAddress("pzetavis", &pzetavis, &b_pzetavis);
   fChain->SetBranchAddress("pzetamiss", &pzetamiss, &b_pzetamiss);
   fChain->SetBranchAddress("mjj", &mjj, &b_mjj);
   fChain->SetBranchAddress("mjj_JESUp", &mjj_JESUp, &b_mjj_JESUp);
   fChain->SetBranchAddress("mjj_JESDown", &mjj_JESDown, &b_mjj_JESDown);
   fChain->SetBranchAddress("gen_match_1", &gen_match_1, &b_gen_match_1);
   fChain->SetBranchAddress("gen_match_2", &gen_match_2, &b_gen_match_2);
   fChain->SetBranchAddress("njets_JetAbsoluteFlavMapDown", &njets_JetAbsoluteFlavMapDown, &b_njets_JetAbsoluteFlavMapDown);
   fChain->SetBranchAddress("mjj_JetAbsoluteFlavMapDown", &mjj_JetAbsoluteFlavMapDown, &b_mjj_JetAbsoluteFlavMapDown);
   fChain->SetBranchAddress("njets_JetAbsoluteMPFBiasDown", &njets_JetAbsoluteMPFBiasDown, &b_njets_JetAbsoluteMPFBiasDown);
   fChain->SetBranchAddress("mjj_JetAbsoluteMPFBiasDown", &mjj_JetAbsoluteMPFBiasDown, &b_mjj_JetAbsoluteMPFBiasDown);
   fChain->SetBranchAddress("njets_JetAbsoluteScaleDown", &njets_JetAbsoluteScaleDown, &b_njets_JetAbsoluteScaleDown);
   fChain->SetBranchAddress("mjj_JetAbsoluteScaleDown", &mjj_JetAbsoluteScaleDown, &b_mjj_JetAbsoluteScaleDown);
   fChain->SetBranchAddress("njets_JetAbsoluteStatDown", &njets_JetAbsoluteStatDown, &b_njets_JetAbsoluteStatDown);
   fChain->SetBranchAddress("mjj_JetAbsoluteStatDown", &mjj_JetAbsoluteStatDown, &b_mjj_JetAbsoluteStatDown);
   fChain->SetBranchAddress("njets_JetEnDown", &njets_JetEnDown, &b_njets_JetEnDown);
   fChain->SetBranchAddress("mjj_JetEnDown", &mjj_JetEnDown, &b_mjj_JetEnDown);
   fChain->SetBranchAddress("njets_JetFlavorQCDDown", &njets_JetFlavorQCDDown, &b_njets_JetFlavorQCDDown);
   fChain->SetBranchAddress("mjj_JetFlavorQCDDown", &mjj_JetFlavorQCDDown, &b_mjj_JetFlavorQCDDown);
   fChain->SetBranchAddress("njets_JetFragmentationDown", &njets_JetFragmentationDown, &b_njets_JetFragmentationDown);
   fChain->SetBranchAddress("mjj_JetFragmentationDown", &mjj_JetFragmentationDown, &b_mjj_JetFragmentationDown);
   fChain->SetBranchAddress("njets_JetPileUpDataMCDown", &njets_JetPileUpDataMCDown, &b_njets_JetPileUpDataMCDown);
   fChain->SetBranchAddress("mjj_JetPileUpDataMCDown", &mjj_JetPileUpDataMCDown, &b_mjj_JetPileUpDataMCDown);
   fChain->SetBranchAddress("njets_JetPileUpPtBBDown", &njets_JetPileUpPtBBDown, &b_njets_JetPileUpPtBBDown);
   fChain->SetBranchAddress("mjj_JetPileUpPtBBDown", &mjj_JetPileUpPtBBDown, &b_mjj_JetPileUpPtBBDown);
   fChain->SetBranchAddress("njets_JetPileUpPtEC1Down", &njets_JetPileUpPtEC1Down, &b_njets_JetPileUpPtEC1Down);
   fChain->SetBranchAddress("mjj_JetPileUpPtEC1Down", &mjj_JetPileUpPtEC1Down, &b_mjj_JetPileUpPtEC1Down);
   fChain->SetBranchAddress("njets_JetPileUpPtEC2Down", &njets_JetPileUpPtEC2Down, &b_njets_JetPileUpPtEC2Down);
   fChain->SetBranchAddress("mjj_JetPileUpPtEC2Down", &mjj_JetPileUpPtEC2Down, &b_mjj_JetPileUpPtEC2Down);
   fChain->SetBranchAddress("njets_JetPileUpPtHFDown", &njets_JetPileUpPtHFDown, &b_njets_JetPileUpPtHFDown);
   fChain->SetBranchAddress("mjj_JetPileUpPtHFDown", &mjj_JetPileUpPtHFDown, &b_mjj_JetPileUpPtHFDown);
   fChain->SetBranchAddress("njets_JetPileUpPtRefDown", &njets_JetPileUpPtRefDown, &b_njets_JetPileUpPtRefDown);
   fChain->SetBranchAddress("mjj_JetPileUpPtRefDown", &mjj_JetPileUpPtRefDown, &b_mjj_JetPileUpPtRefDown);
   fChain->SetBranchAddress("njets_JetRelativeBalDown", &njets_JetRelativeBalDown, &b_njets_JetRelativeBalDown);
   fChain->SetBranchAddress("mjj_JetRelativeBalDown", &mjj_JetRelativeBalDown, &b_mjj_JetRelativeBalDown);
   fChain->SetBranchAddress("njets_JetRelativeFSRDown", &njets_JetRelativeFSRDown, &b_njets_JetRelativeFSRDown);
   fChain->SetBranchAddress("mjj_JetRelativeFSRDown", &mjj_JetRelativeFSRDown, &b_mjj_JetRelativeFSRDown);
   fChain->SetBranchAddress("njets_JetRelativeJEREC1Down", &njets_JetRelativeJEREC1Down, &b_njets_JetRelativeJEREC1Down);
   fChain->SetBranchAddress("mjj_JetRelativeJEREC1Down", &mjj_JetRelativeJEREC1Down, &b_mjj_JetRelativeJEREC1Down);
   fChain->SetBranchAddress("njets_JetRelativeJEREC2Down", &njets_JetRelativeJEREC2Down, &b_njets_JetRelativeJEREC2Down);
   fChain->SetBranchAddress("mjj_JetRelativeJEREC2Down", &mjj_JetRelativeJEREC2Down, &b_mjj_JetRelativeJEREC2Down);
   fChain->SetBranchAddress("njets_JetRelativeJERHFDown", &njets_JetRelativeJERHFDown, &b_njets_JetRelativeJERHFDown);
   fChain->SetBranchAddress("mjj_JetRelativeJERHFDown", &mjj_JetRelativeJERHFDown, &b_mjj_JetRelativeJERHFDown);
   fChain->SetBranchAddress("njets_JetRelativePtBBDown", &njets_JetRelativePtBBDown, &b_njets_JetRelativePtBBDown);
   fChain->SetBranchAddress("mjj_JetRelativePtBBDown", &mjj_JetRelativePtBBDown, &b_mjj_JetRelativePtBBDown);
   fChain->SetBranchAddress("njets_JetRelativePtEC1Down", &njets_JetRelativePtEC1Down, &b_njets_JetRelativePtEC1Down);
   fChain->SetBranchAddress("mjj_JetRelativePtEC1Down", &mjj_JetRelativePtEC1Down, &b_mjj_JetRelativePtEC1Down);
   fChain->SetBranchAddress("njets_JetRelativePtEC2Down", &njets_JetRelativePtEC2Down, &b_njets_JetRelativePtEC2Down);
   fChain->SetBranchAddress("mjj_JetRelativePtEC2Down", &mjj_JetRelativePtEC2Down, &b_mjj_JetRelativePtEC2Down);
   fChain->SetBranchAddress("njets_JetRelativePtHFDown", &njets_JetRelativePtHFDown, &b_njets_JetRelativePtHFDown);
   fChain->SetBranchAddress("mjj_JetRelativePtHFDown", &mjj_JetRelativePtHFDown, &b_mjj_JetRelativePtHFDown);
   fChain->SetBranchAddress("njets_JetRelativeStatECDown", &njets_JetRelativeStatECDown, &b_njets_JetRelativeStatECDown);
   fChain->SetBranchAddress("mjj_JetRelativeStatECDown", &mjj_JetRelativeStatECDown, &b_mjj_JetRelativeStatECDown);
   fChain->SetBranchAddress("njets_JetRelativeStatFSRDown", &njets_JetRelativeStatFSRDown, &b_njets_JetRelativeStatFSRDown);
   fChain->SetBranchAddress("mjj_JetRelativeStatFSRDown", &mjj_JetRelativeStatFSRDown, &b_mjj_JetRelativeStatFSRDown);
   fChain->SetBranchAddress("njets_JetRelativeStatHFDown", &njets_JetRelativeStatHFDown, &b_njets_JetRelativeStatHFDown);
   fChain->SetBranchAddress("mjj_JetRelativeStatHFDown", &mjj_JetRelativeStatHFDown, &b_mjj_JetRelativeStatHFDown);
   fChain->SetBranchAddress("njets_JetSinglePionECALDown", &njets_JetSinglePionECALDown, &b_njets_JetSinglePionECALDown);
   fChain->SetBranchAddress("mjj_JetSinglePionECALDown", &mjj_JetSinglePionECALDown, &b_mjj_JetSinglePionECALDown);
   fChain->SetBranchAddress("njets_JetSinglePionHCALDown", &njets_JetSinglePionHCALDown, &b_njets_JetSinglePionHCALDown);
   fChain->SetBranchAddress("mjj_JetSinglePionHCALDown", &mjj_JetSinglePionHCALDown, &b_mjj_JetSinglePionHCALDown);
   fChain->SetBranchAddress("njets_JetTimePtEtaDown", &njets_JetTimePtEtaDown, &b_njets_JetTimePtEtaDown);
   fChain->SetBranchAddress("mjj_JetTimePtEtaDown", &mjj_JetTimePtEtaDown, &b_mjj_JetTimePtEtaDown);
   fChain->SetBranchAddress("njets_JetAbsoluteFlavMapUp", &njets_JetAbsoluteFlavMapUp, &b_njets_JetAbsoluteFlavMapUp);
   fChain->SetBranchAddress("mjj_JetAbsoluteFlavMapUp", &mjj_JetAbsoluteFlavMapUp, &b_mjj_JetAbsoluteFlavMapUp);
   fChain->SetBranchAddress("njets_JetAbsoluteMPFBiasUp", &njets_JetAbsoluteMPFBiasUp, &b_njets_JetAbsoluteMPFBiasUp);
   fChain->SetBranchAddress("mjj_JetAbsoluteMPFBiasUp", &mjj_JetAbsoluteMPFBiasUp, &b_mjj_JetAbsoluteMPFBiasUp);
   fChain->SetBranchAddress("njets_JetAbsoluteScaleUp", &njets_JetAbsoluteScaleUp, &b_njets_JetAbsoluteScaleUp);
   fChain->SetBranchAddress("mjj_JetAbsoluteScaleUp", &mjj_JetAbsoluteScaleUp, &b_mjj_JetAbsoluteScaleUp);
   fChain->SetBranchAddress("njets_JetAbsoluteStatUp", &njets_JetAbsoluteStatUp, &b_njets_JetAbsoluteStatUp);
   fChain->SetBranchAddress("mjj_JetAbsoluteStatUp", &mjj_JetAbsoluteStatUp, &b_mjj_JetAbsoluteStatUp);
   fChain->SetBranchAddress("njets_JetEnUp", &njets_JetEnUp, &b_njets_JetEnUp);
   fChain->SetBranchAddress("mjj_JetEnUp", &mjj_JetEnUp, &b_mjj_JetEnUp);
   fChain->SetBranchAddress("njets_JetFlavorQCDUp", &njets_JetFlavorQCDUp, &b_njets_JetFlavorQCDUp);
   fChain->SetBranchAddress("mjj_JetFlavorQCDUp", &mjj_JetFlavorQCDUp, &b_mjj_JetFlavorQCDUp);
   fChain->SetBranchAddress("njets_JetFragmentationUp", &njets_JetFragmentationUp, &b_njets_JetFragmentationUp);
   fChain->SetBranchAddress("mjj_JetFragmentationUp", &mjj_JetFragmentationUp, &b_mjj_JetFragmentationUp);
   fChain->SetBranchAddress("njets_JetPileUpDataMCUp", &njets_JetPileUpDataMCUp, &b_njets_JetPileUpDataMCUp);
   fChain->SetBranchAddress("mjj_JetPileUpDataMCUp", &mjj_JetPileUpDataMCUp, &b_mjj_JetPileUpDataMCUp);
   fChain->SetBranchAddress("njets_JetPileUpPtBBUp", &njets_JetPileUpPtBBUp, &b_njets_JetPileUpPtBBUp);
   fChain->SetBranchAddress("mjj_JetPileUpPtBBUp", &mjj_JetPileUpPtBBUp, &b_mjj_JetPileUpPtBBUp);
   fChain->SetBranchAddress("njets_JetPileUpPtEC1Up", &njets_JetPileUpPtEC1Up, &b_njets_JetPileUpPtEC1Up);
   fChain->SetBranchAddress("mjj_JetPileUpPtEC1Up", &mjj_JetPileUpPtEC1Up, &b_mjj_JetPileUpPtEC1Up);
   fChain->SetBranchAddress("njets_JetPileUpPtEC2Up", &njets_JetPileUpPtEC2Up, &b_njets_JetPileUpPtEC2Up);
   fChain->SetBranchAddress("mjj_JetPileUpPtEC2Up", &mjj_JetPileUpPtEC2Up, &b_mjj_JetPileUpPtEC2Up);
   fChain->SetBranchAddress("njets_JetPileUpPtHFUp", &njets_JetPileUpPtHFUp, &b_njets_JetPileUpPtHFUp);
   fChain->SetBranchAddress("mjj_JetPileUpPtHFUp", &mjj_JetPileUpPtHFUp, &b_mjj_JetPileUpPtHFUp);
   fChain->SetBranchAddress("njets_JetPileUpPtRefUp", &njets_JetPileUpPtRefUp, &b_njets_JetPileUpPtRefUp);
   fChain->SetBranchAddress("mjj_JetPileUpPtRefUp", &mjj_JetPileUpPtRefUp, &b_mjj_JetPileUpPtRefUp);
   fChain->SetBranchAddress("njets_JetRelativeBalUp", &njets_JetRelativeBalUp, &b_njets_JetRelativeBalUp);
   fChain->SetBranchAddress("mjj_JetRelativeBalUp", &mjj_JetRelativeBalUp, &b_mjj_JetRelativeBalUp);
   fChain->SetBranchAddress("njets_JetRelativeFSRUp", &njets_JetRelativeFSRUp, &b_njets_JetRelativeFSRUp);
   fChain->SetBranchAddress("mjj_JetRelativeFSRUp", &mjj_JetRelativeFSRUp, &b_mjj_JetRelativeFSRUp);
   fChain->SetBranchAddress("njets_JetRelativeJEREC1Up", &njets_JetRelativeJEREC1Up, &b_njets_JetRelativeJEREC1Up);
   fChain->SetBranchAddress("mjj_JetRelativeJEREC1Up", &mjj_JetRelativeJEREC1Up, &b_mjj_JetRelativeJEREC1Up);
   fChain->SetBranchAddress("njets_JetRelativeJEREC2Up", &njets_JetRelativeJEREC2Up, &b_njets_JetRelativeJEREC2Up);
   fChain->SetBranchAddress("mjj_JetRelativeJEREC2Up", &mjj_JetRelativeJEREC2Up, &b_mjj_JetRelativeJEREC2Up);
   fChain->SetBranchAddress("njets_JetRelativeJERHFUp", &njets_JetRelativeJERHFUp, &b_njets_JetRelativeJERHFUp);
   fChain->SetBranchAddress("mjj_JetRelativeJERHFUp", &mjj_JetRelativeJERHFUp, &b_mjj_JetRelativeJERHFUp);
   fChain->SetBranchAddress("njets_JetRelativePtBBUp", &njets_JetRelativePtBBUp, &b_njets_JetRelativePtBBUp);
   fChain->SetBranchAddress("mjj_JetRelativePtBBUp", &mjj_JetRelativePtBBUp, &b_mjj_JetRelativePtBBUp);
   fChain->SetBranchAddress("njets_JetRelativePtEC1Up", &njets_JetRelativePtEC1Up, &b_njets_JetRelativePtEC1Up);
   fChain->SetBranchAddress("mjj_JetRelativePtEC1Up", &mjj_JetRelativePtEC1Up, &b_mjj_JetRelativePtEC1Up);
   fChain->SetBranchAddress("njets_JetRelativePtEC2Up", &njets_JetRelativePtEC2Up, &b_njets_JetRelativePtEC2Up);
   fChain->SetBranchAddress("mjj_JetRelativePtEC2Up", &mjj_JetRelativePtEC2Up, &b_mjj_JetRelativePtEC2Up);
   fChain->SetBranchAddress("njets_JetRelativePtHFUp", &njets_JetRelativePtHFUp, &b_njets_JetRelativePtHFUp);
   fChain->SetBranchAddress("mjj_JetRelativePtHFUp", &mjj_JetRelativePtHFUp, &b_mjj_JetRelativePtHFUp);
   fChain->SetBranchAddress("njets_JetRelativeStatECUp", &njets_JetRelativeStatECUp, &b_njets_JetRelativeStatECUp);
   fChain->SetBranchAddress("mjj_JetRelativeStatECUp", &mjj_JetRelativeStatECUp, &b_mjj_JetRelativeStatECUp);
   fChain->SetBranchAddress("njets_JetRelativeStatFSRUp", &njets_JetRelativeStatFSRUp, &b_njets_JetRelativeStatFSRUp);
   fChain->SetBranchAddress("mjj_JetRelativeStatFSRUp", &mjj_JetRelativeStatFSRUp, &b_mjj_JetRelativeStatFSRUp);
   fChain->SetBranchAddress("njets_JetRelativeStatHFUp", &njets_JetRelativeStatHFUp, &b_njets_JetRelativeStatHFUp);
   fChain->SetBranchAddress("mjj_JetRelativeStatHFUp", &mjj_JetRelativeStatHFUp, &b_mjj_JetRelativeStatHFUp);
   fChain->SetBranchAddress("njets_JetSinglePionECALUp", &njets_JetSinglePionECALUp, &b_njets_JetSinglePionECALUp);
   fChain->SetBranchAddress("mjj_JetSinglePionECALUp", &mjj_JetSinglePionECALUp, &b_mjj_JetSinglePionECALUp);
   fChain->SetBranchAddress("njets_JetSinglePionHCALUp", &njets_JetSinglePionHCALUp, &b_njets_JetSinglePionHCALUp);
   fChain->SetBranchAddress("mjj_JetSinglePionHCALUp", &mjj_JetSinglePionHCALUp, &b_mjj_JetSinglePionHCALUp);
   fChain->SetBranchAddress("njets_JetTimePtEtaUp", &njets_JetTimePtEtaUp, &b_njets_JetTimePtEtaUp);
   fChain->SetBranchAddress("mjj_JetTimePtEtaUp", &mjj_JetTimePtEtaUp, &b_mjj_JetTimePtEtaUp);
   fChain->SetBranchAddress("nbtag", &nbtag, &b_nbtag);
   fChain->SetBranchAddress("njets", &njets, &b_njets);
   fChain->SetBranchAddress("njets_JESDown", &njets_JESDown, &b_njets_JESDown);
   fChain->SetBranchAddress("njets_JESUp", &njets_JESUp, &b_njets_JESUp);
   fChain->SetBranchAddress("jpt_1", &jpt_1, &b_jpt_1);
   fChain->SetBranchAddress("jeta_1", &jeta_1, &b_jeta_1);
   fChain->SetBranchAddress("jphi_1", &jphi_1, &b_jphi_1);
   fChain->SetBranchAddress("jcsv_1", &jcsv_1, &b_jcsv_1);
   fChain->SetBranchAddress("jpt_2", &jpt_2, &b_jpt_2);
   fChain->SetBranchAddress("jeta_2", &jeta_2, &b_jeta_2);
   fChain->SetBranchAddress("jphi_2", &jphi_2, &b_jphi_2);
   fChain->SetBranchAddress("jcsv_2", &jcsv_2, &b_jcsv_2);
   fChain->SetBranchAddress("bpt_1", &bpt_1, &b_bpt_1);
   fChain->SetBranchAddress("beta_1", &beta_1, &b_beta_1);
   fChain->SetBranchAddress("bphi_1", &bphi_1, &b_bphi_1);
   fChain->SetBranchAddress("bcsv_1", &bcsv_1, &b_bcsv_1);
   fChain->SetBranchAddress("bflavor_1", &bflavor_1, &b_bflavor_1);
   fChain->SetBranchAddress("bpt_2", &bpt_2, &b_bpt_2);
   fChain->SetBranchAddress("beta_2", &beta_2, &b_beta_2);
   fChain->SetBranchAddress("bphi_2", &bphi_2, &b_bphi_2);
   fChain->SetBranchAddress("bcsv_2", &bcsv_2, &b_bcsv_2);
   fChain->SetBranchAddress("bflavor_2", &bflavor_2, &b_bflavor_2);
   fChain->SetBranchAddress("m_sv", &m_sv, &b_m_sv);
   fChain->SetBranchAddress("pt_sv", &pt_sv, &b_pt_sv);
   fChain->SetBranchAddress("eta_sv", &eta_sv, &b_eta_sv);
   fChain->SetBranchAddress("phi_sv", &phi_sv, &b_phi_sv);
   fChain->SetBranchAddress("met_sv", &met_sv, &b_met_sv);
   fChain->SetBranchAddress("mt_sv", &mt_sv, &b_mt_sv);
   fChain->SetBranchAddress("metcorr_ex", &metcorr_ex, &b_metcorr_ex);
   fChain->SetBranchAddress("metcorr_ey", &metcorr_ey, &b_metcorr_ey);
   fChain->SetBranchAddress("metcor", &metcor, &b_metcor);
   fChain->SetBranchAddress("metcorphi", &metcorphi, &b_metcorphi);
   fChain->SetBranchAddress("m_sv_UP", &m_sv_UP, &b_m_sv_UP);
   fChain->SetBranchAddress("pt_sv_UP", &pt_sv_UP, &b_pt_sv_UP);
   fChain->SetBranchAddress("eta_sv_UP", &eta_sv_UP, &b_eta_sv_UP);
   fChain->SetBranchAddress("phi_sv_UP", &phi_sv_UP, &b_phi_sv_UP);
   fChain->SetBranchAddress("met_sv_UP", &met_sv_UP, &b_met_sv_UP);
   fChain->SetBranchAddress("mt_sv_UP", &mt_sv_UP, &b_mt_sv_UP);
   fChain->SetBranchAddress("m_sv_DOWN", &m_sv_DOWN, &b_m_sv_DOWN);
   fChain->SetBranchAddress("pt_sv_DOWN", &pt_sv_DOWN, &b_pt_sv_DOWN);
   fChain->SetBranchAddress("eta_sv_DOWN", &eta_sv_DOWN, &b_eta_sv_DOWN);
   fChain->SetBranchAddress("phi_sv_DOWN", &phi_sv_DOWN, &b_phi_sv_DOWN);
   fChain->SetBranchAddress("met_sv_DOWN", &met_sv_DOWN, &b_met_sv_DOWN);
   fChain->SetBranchAddress("mt_sv_DOWN", &mt_sv_DOWN, &b_mt_sv_DOWN);
   fChain->SetBranchAddress("KD_bsm_mlt", &KD_bsm_mlt, &b_KD_bsm_mlt);
   fChain->SetBranchAddress("KD_int", &KD_int, &b_KD_int);
   Notify();
}

Bool_t Fill3D::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void Fill3D::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t Fill3D::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef Fill3D_cxx
