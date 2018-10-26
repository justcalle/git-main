#include <TF1.h>
#include <TH1.h>
#include <iostream>
#include <cmath>

using namespace std;

void hist_gen_mod(Int_t nRan, Double_t sig)
{
  TH1D* hist = new TH1D("hist", "Histogram", 40, -3, 3);
  
  TF1* fGaus = new TF1("fGaus", "gaus", -3, 3);
  fGaus->SetParameters(1, 0, sig); // amplitude, mean, sigma

  for(Int_t i = 0; i < nRan; i++) {

    hist->Fill(fGaus->GetRandom());
  }
  
  //for(Int_t i = 0; i < nRan; i++) {
	  //hist->GetBinError(i);
  //}
  
  hist->Fit("pol2", "Q");
  // Question 13: I would say that the fit starts to get noticeably
  // bad below nRan < 2000
  hist->Draw();
}
