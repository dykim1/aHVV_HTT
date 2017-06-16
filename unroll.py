#!/usr/bin/env python
import ROOT
import re
from array import array

islog=1

c=ROOT.TCanvas("canvas","",0,0,1800,600)
c.cd()

#read the file that has 2d or 3dhistos
file=ROOT.TFile("aHVV_nDhists.root","r")

#to save unrolled histos
file1D=ROOT.TFile("final_mutau_1D.root","recreate")

#read histos
Data2D=file.Get("h_MjjHtt")
Data3D=file.Get("h_MjjHttD0")

nx=Data3D.GetXaxis().GetNbins()
ny=Data3D.GetYaxis().GetNbins()
nz=Data3D.GetZaxis().GetNbins()

#define 1d histos to save unrolled info
f2d1d=ROOT.TH1F("f2d1d","f2d1d",nx*ny,0,nx*ny)
f3d1d=ROOT.TH1F("f3d1d","f3d1d",nx*ny*nz,0,nx*ny*nz)

#if mjj vs htt
l =0
for j in range(1,nx+1):
    for k in range(1,ny+1):
	l=l+1
        n = Data2D.GetBin(j,k);
	f2d1d.SetBinContent(l,Data2D.GetBinContent(n))


#if mjj vs htt vs mela discr.        
m =0
for j in range(1,nx+1):
    for k in range(1,ny+1):
        for l in range(1,nz+1):
	    m=m+1
            n = Data3D.GetBin(j,k,l);
	    f3d1d.SetBinContent(m,Data3D.GetBinContent(n))



#save
f2d1d.Write()
f3d1d.Write()
