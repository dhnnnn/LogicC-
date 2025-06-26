float a, b, c, d, e, f, g; 
	cout << " MENU APLIKASI " << endl;
    cout << " 1. Menghitung Luas Segitiga" << endl;
    cout << " 2. Menghitung Volume Tabung" << endl;
    cout << " 3. Menghitung Usia" << endl;
    cout << "  " << endl;
    cout << " Masukan Menu = ";
    cin >> a;
    if (a==1) {
    	cout << " Menghitung Luas Segitiga "<< endl;
        cout << " Masukan  alas = ";
        	cin >> b;
        cout << " Masukan  Tinggi = ";
        	cin >> c;
        d = 0.5*b*c;
        cout << " Luas Segitiga "<<d; }  
    else if (a==2) {
    	cout << " Menghitung Volume Tabung "<< endl;
        cout << " Masukan  jari-jari = ";
        	cin >> d;
        cout << " Masukan  Tinggi = ";
        	cin >> c;
        e = 3.14*(d*d)*c;
        cout << " Volume Tabung = "<<e; }
    else if (a==3) {
    	cout << " Menghitung Usia "<< endl;
    	cout << " Masukan Tahun lahir ="; 
        	cin >> f;
        g = 2023 - f;
        cout << " Usa anda = "<<g; }
