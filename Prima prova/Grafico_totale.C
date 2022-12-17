#include <cmath> 
#include <iostream> 

#include "TCanvas.h" 
#include "TF1.h" 
#include "TFile.h" 
#include "TFitResult.h" 
#include "TH1F.h" 
#include "TLegend.h" 
#include "TMath.h" 
#include "TMatrixD.h" 
#include "TROOT.h" 
#include "TRandom.h" 
#include "TStyle.h" 
#include "TGraphErrors.h"

void SetStyle(){
  gROOT->SetStyle("Plain");
  gStyle->SetPalette(57);
  gStyle->SetOptTitle(0);
}

TGraphErrors* graph;
TCanvas* c1;

void fit(){
    graph = new TGraphErrors("tutti.txt", "%lg %lg %lg %lg");
    graph->SetTitle("Diodi a confronto");
    c1 = new TCanvas("c1");
    
    graph->SetMarkerStyle(4);
    graph->Draw("AP");

    c1->SetGrid();
    graph->GetXaxis()->SetTitle("Tensione (mV)");
    graph->GetYaxis()->SetTitle("Corrente (mA)");
}