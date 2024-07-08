#include <iostream> 
using namespace std; 

class MasukUniversitas { 
private: 
    int uangPendaftaran; 
     void setUangPendaftaran() { 
        uangPendaftaran;
    }
    int getUangPendaftaran() { 
        return uangPendaftaran;
    }

    int uangSemesterPertama; 
     void setSemesterPertama() { 
        uangSemesterPertama;
    }
    int getuangSemesterPertama() { 
        return uangSemesterPertama;
    }

    int uangBangunan; 
     void setBangunan() { 
        uangBangunan;
    }
    int getuangBangunan() { 
        return uangBangunan;
    }

    int totalbiaya; 
     void settotalbiaya() { 
        totalbiaya;
    }
    int gettotalbiaya() { 
        return totalbiaya;
    }

 
public: 
    MasukUniversitas() {  
        uangPendaftaran = 0;
        uangSemesterPertama = 0;
        uangBangunan = 0;
        totalbiaya = 0;
    } 
 
    virtual void namaJalurMasuk() { return; }

    void settUangPendaftaran(int nilai) { 
        this->uangPendaftaran = nilai; 
    } 
 
    float gettUangPendaftaran() { 
        return uangPendaftaran; 
    } 
    
    virtual void namaJalurMasuk() { return; } 
 
    void setthitungtotalbiaya(int nilai) { 
        this->hitungtotalbiaya= nilai; 
    } 
 
    float getthitungtotalbiaya() { 
        return hitungtotalbiaya; 
    } 
    
    virtual void namaJalurMasuk() { return; } 
 
    void settampilkantotalbiaya(int nilai) { 
        this->tampilkantotalbiaya= nilai; 
    } 
 
    float gettampilkantotalbiaya() { 
        return tampilkantotalbiaya; 
    } 

    virtual void namaJalurMasuk() { return; } 
    
    void settinput(int nilai) { 
        this->totalbiaya= nilai; 
    } 
 
    float gettinput() { 
        return totalbiaya; 
    } 
}; 
 
class SNBT : public MasukUniversitas { 
 // isi disini untuk melengkapi class SNBT 
}; 
 
class SNBP : public MasukUniversitas { 
    
    // isi disini untuk melengkapi class SNBP 
}; 
 
int main() { 

} 