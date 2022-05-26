{ print("\n    Prvocisla do 1000\n\n");

  print("%5i",2);
  pocet=1;
  cislo=3;

  do { prvocislo=true;
       for (delitel=3; delitel*delitel<=cislo && prvocislo; delitel+=2) { if (cislo%delitel==0) prvocislo=false; }
     
       if (prvocislo) { print("%5i",cislo);
                        if (++pocet%10==0) print("\n");
                      }
     } while ((cislo+=2)<1000);

  print("\n\n");
}