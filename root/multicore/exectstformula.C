void exectstformula(){

   TThread::Initialize();

   vector<const char*> formulae {"1./(1.+(4.61587e+06*(((1./(0.5*TMath::Max(1.e-6,x+1.)))-1.)/1.16042e+07)))",
                                 "1./(1.+(3.41484e+06*(((1./(0.5*TMath::Max(1.e-6,x+1.)))-1.)/1.2025e+07)))",
                                 "1./(1.+(3.58903e+06*(((1./(0.5*TMath::Max(1.e-6,x+1.)))-1.)/2.35101e+07)))"};
   atomic<bool> fire(false);

   auto f = [&] (int i){
     auto name = TString::Format("f%i",i);
     while (!fire.load());
     new TFormula(name,formulae[i%3]); // <-- we do not care about the leak: we increase contention @ construction time
   };

   vector<thread> threads;
   for (int i=0;i<6;i++){
      threads.emplace_back(f,i);
   }

   fire = true;

   for (auto&& t:threads) t.join();

}
